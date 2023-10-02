#include <elf.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>

void _elf(unsigned char *elf_ptr);
void _magic(unsigned char *elf_ptr);
void _class(unsigned char *elf_ptr);
void _data(unsigned char *elf_ptr);
void _version(unsigned char *elf_ptr);
void _abi(unsigned char *elf_ptr);
void _osabi(unsigned char *elf_ptr);
void _type(unsigned int elf_type, unsigned char *elf_ptr);
void _entry(unsigned long int elf_entry, unsigned char *elf_ptr);
void close_elf(int elf);

/**
 * _elf - ...
 * @elf_ptr: ...
 */

void _elf(unsigned char *elf_ptr)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (elf_ptr[i] != 127 &&
		    elf_ptr[i] != 'E' &&
		    elf_ptr[i] != 'L' &&
		    elf_ptr[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * _magic - ...
 * @elf_ptr: ...
 */

void _magic(unsigned char *elf_ptr)
{
	int index;

	printf(" Magic: ");

	for (index = 0; index < EI_NIDENT; index++)
	{
		printf("%02x", elf_ptr[index]);

		if (index == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * _class - ...
 * @elf_ptr: ...
 */

void _class(unsigned char *elf_ptr)
{
	printf(" Class: ");

	switch (elf_ptr[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", elf_ptr[EI_CLASS]);
	}
}

/**
 * _data - ...
 * @elf_ptr: ...
 */

void _data(unsigned char *elf_ptr)
{
	printf(" Data: ");

	switch (elf_ptr[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", elf_ptr[EI_CLASS]);
	}
}

/**
 * _version - ...
 * @elf_ptr: ...
 */

void _version(unsigned char *elf_ptr)
{
	 printf(" Version: %d",
			  elf_ptr[EI_VERSION]);

	switch (elf_ptr[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
 * _osabi - ...
 * @elf_ptr: ...
 */

void _osabi(unsigned char *elf_ptr)
{
	printf(" OS/ABI: ");

	switch (elf_ptr[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", elf_ptr[EI_OSABI]);
	}
}

/**
 * _abi - ...
 * @elf_ptr: ...
 */

void _abi(unsigned char *elf_ptr)
{
	printf(" ABI Version: %d\n",
		elf_ptr[EI_ABIVERSION]);
}

/**
 * _type - ...
 * @elf_type: ...
 * @elf_ptr: ...
 */

void _type(unsigned int elf_type, unsigned char *elf_ptr)
{
	if (elf_ptr[EI_DATA] == ELFDATA2MSB)
		elf_type >>= 8;

	printf(" Type: ");

	switch (elf_type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", elf_type);
	}
}

/**
 * _entry - ...
 * @elf_entry: ...
 * @elf_ptr: ...
 */

void _entry(unsigned long int elf_entry, unsigned char *elf_ptr)
{
	printf(" Entry point address: ");

	if (elf_ptr[EI_DATA] == ELFDATA2MSB)
	{
		elf_entry = ((elf_entry << 8) & 0xFF00FF00) |
			  ((elf_entry >> 8) & 0xFF00FF);
		elf_entry = (elf_entry << 16) | (elf_entry >> 16);
	}

	if (elf_ptr[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)elf_entry);

	else
		printf("%#lx\n", elf_entry);
}

/**
 * close_elf - ...
 * @elf: ...
 */

void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - ...
 * @argc: ...
 * @argv: ...
 * Return: ...
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int o, r;

	o = open(argv[1], O_RDONLY);
	if (o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_elf(o);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	r = read(o, header, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		free(header);
		close_elf(o);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	_elf(header->elf_ptr);
	printf("ELF Header:\n");
	_magic(header->elf_ptr);
	_class(header->elf_ptr);
	_data(header->elf_ptr);
	_version(header->elf_ptr);
	_osabi(header->elf_ptr);
	_abi(header->elf_ptr);
	_type(header->elf_type, header->elf_ptr);
	_entry(header->elf_entry, header->elf_ptr);

	free(header);
	close_elf(o);
	return (0);
}
