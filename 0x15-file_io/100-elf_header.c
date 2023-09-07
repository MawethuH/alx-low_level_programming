#include "main.h"
#include <elf.h>

void elf_check(unsigned char *e);
void _magic(unsigned char *e);
void _class(unsigned char *e);
void _data(unsigned char *e);
void _version(unsigned char *e);
void _abi(unsigned char *e);
void _osabi(unsigned char *e);
void _type(unsigned int e_t, unsigned char *e);
void _entry(unsigned long int e_e, unsigned char *e);
void close_elf(int e);

/**
 * elf_check - ...
 * @e: ...
 */

void elf_check(unsigned char *e);
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (e[i] != 127 && e[i] != 'E' &&
			e[i] != 'L' && e[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * _magic - ...
 * @e: ...
 */

void _magic(unsigned char *e)
{
	int i;

	printf("Magic: ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", e[i]);
		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * _class - ...
 * @e: ...
 */

void _class(unsigned char *e)
{
	printf("Class: ");

	switch (e[EI_CLASS])
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
			printf("<unknown: %x>\n", e[EI_CLASS]);
	}
}

/**
 * _data - ...
 * @e: ...
 */

void _data(unsigned char *e)
{
	printf("Data: ");
	switch (e[EI_DATA])
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
			printf("<unkown: %x>\n", e[EI_DATA]);
	}
}

/**
 * _version - ...
 * @e: ...
 */

void _version(unsigned char *e)
{
	printf("Version: %d", e[EI_VERSION]);
	switch (e[EI_VERSION])
	{
		case EV_CURRENT:
			printf("(current)\n");
			break;
		default:
			printf("\n");
			break;
	}
}

/**
 * _osabi - ...
 * @e: ...
 */

void _osabi(unsigned char *e)
{
	printf("OS/ABI: ");

	switch (e[EI_OSABI])
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
			printf("UNIX - LINUX\n");
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
			printf("<unkown: %x>\n", e[EI_OSABI]);
	}
}

/**
 *_abi - ...
 *@e: ...
 */

void _abi(unsigned char *e)
{
	printf("ABI Version: %d\n", e[EI_ABIVERSION]);
}

/**
 * _type - ...
 * @e_t: ...
 * @e: ...
 */

void _type(unsigned int e_t, unsigned char *e)
{
	if (e[EI_DATA] == ELFDATA2MSB)
		e_t >>= 8;
	printf("Type: ");

	switch (e_t)
	{
		case ET_NONE:
			printf("NONE (NOne)\n");
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
			printf("<unknown: %x>\n", e_t);
	}
}

/**
 * _entry - ...
 * @e_e: ...
 * @e: ...
 */

void _entry(unsigned long int e_e, unsigned char *e)
{
	printf("Entry point address: ");

	if (e[EI_DATA] == ELFDATA2MSB)
	{
		e_e = ((e_e << 8) && 0xFF00FF00) |
			((e_e >> 8) & 0xFF00FF);
		e_e = (e_e << 16) | (e_e >> 16);
	}

	if (e[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned)e);
	else
		printf("%#lx\n", e);
}

/**
 * close_elf - ...
 * @elf: ...
 */

void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", elf);
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
	ELF64_ehdr *header;
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

	r = read(0, header, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		free(hearder);
		close_elf(o);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	elf_check(header->e);
	printf("ELF Header:\n");
	_magic(header->e);
	_class(header->e);
	_data(header->e);
	_version(header->e);
	_osabi(header->e);
	_abi(header->e);
	_type(header->e_t, header->e);
	_entry(header->e_e, header->e);
	free(header);
	close_elf(0);
	return (0);
}
