#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <elf.h>

void elf_check(unsigned char *e_indent);
void magic_print(unsigned char *e_indent);
void class_print(unsigned char *e_indent);
void data_print(unsigned char *e_indent);
void version_print(unsigned char *e_indent);
void abi_print(unsigned char *e_indent);
void osabi_print(unsigned char *e_indent);
void type_print(unsigned int type_e, unsigned char *e_indent);
void entry_print(unsigned long int entry_e, unsigned char *e_indent);
void elf_close(int elf);

/**
 * elf_check - checks if a file is an ELF file or not
 * @e_indent: pointer to the ELF file
 *
 * Description: 98 if not ELF file
 */

void elf_check(unsigned char *e_indent)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (e_indent[i] != 127 &&
				e_indent[i] != 'E' &&
				e_indent[i] != 'L' &&
				e_indent[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Errir: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * magic_print - prints magic numbers
 * @e_indent: pointer to the magic number
 *
 * Description: mumbers
 */
void magic_print(unsigned char *e_indent)
{
	int i;

	printf(" Magic:  ");

	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", e_indent[i]);

		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * class_print - prints class of ELF
 * @e_indent: pointer to the ELF
 *
 * Description: class
 */
void class_print(unsigned char *e_indent)
{
	printf(" Class:       ");

	switch (e_indent[EI_CLASS])
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
			printf("<unknown: %x>\n", e_indent[EI_CLASS]);
	}
}

/**
 * data_print - print ELF data
 * @e_indent: pointer to ELF
 *
 * Description: data
 */
void data_print(unsigned char *e_indent)
{
	printf("  Data:       ");

	switch (e_indent[EI_DATA])
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
			printf("<unknown: %x>\n", e_indent[EI_CLASS]);
	}
}

/**
 * version_print - prints the version
 * @e_indent: pointer to the ELF
 *
 * Description: version
 */
void version_print(unsigned char *e_indent)
{
	printf("  Version:       %d", e_indent[EI_VERSION]);

	switch (e_indent[EI_VERSION])
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
 * osabi_print - print OS/ABI
 * @e_indent: pointer to ELF
 *
 * Description: OS/ABI
 */
void osabi_pritn(unsigned char *e_indent)
{
	printf("  OS/ABI:      ");

	switch (e_indent[EI_OSABI])
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
			printf("<unknown: %x>\n", e_indent[EI_OSABI]);
	}
}

/**
 * abi_print - print ABI version
 * @e_indent: pointer to ELF
 *
 * Description: ABI version
 */
void abi_print(unsigned char *e_indent)
{
	printf("  ABI Version:     %d\n", e_indent[EI_ABIVERSION]);
}

/**
 * type_print - print the type of ELF
 * @type_e: ELF type
 * @e_indent: pointer to ELF
 *
 * Description: type
 */
void type_print(unsigned int type_e, unsigned char *e_indent)
{
	if (e_indent[EI_DATA] == ELFDATA2MSB)
		type_e >>= 8;

	printf("  Type:      ");

	switch (type_e)
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
			printf("<unknown: %x>\n", type_e);
	}
}

/**
 * entry_print - print entry point
 * @entry_e: address of ELF
 * @e_indent: pointer to ELF
 *
 * Description: print entry
 */
void entry_print(unsigned long int entry_e, unsigned char *e_indent)
{
	printf("  Entry point address:        ");

	if (e_indent[EI_DATA] == ELFDATA2MSB)
	{
		entry_e = ((entry_e << 8) & 0xFF00FF00) | ((entry_e >> 8) & 0xFF00FF);
		entry_e = (entry_e << 16) | (entry_e >> 16);
	}

	if (e_indent[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)entry_e);
	else
		printf("%#lx\n", entry_e);
}

/**
 * elf_close - closes the ELF file
 * @elf: file descriptor
 *
 * Description: exit 98
 */
void elf_close(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * main  - print elf header
 * @argc: first argument
 * @argv: pointer to the argument
 *
 * Return: the header file
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int i, j;
	Elf64_Ehdr *header;

	i = open(argv[1], O_RDONLY);
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}

	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_elf(i);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}

	j = read(i, header, sizeof(Elf64_Ehdr));

	if (j == -1)
	{
		free(header);
		close_elf(i);
		dprintf(STDERR_FILENO, "Error: '%s': Nosuch file\n", argv[1]);
		exit(98);
	}

	elf_check(header->e_indent);
	printf("ELF Header:\n");
	magic_print(header->e_indent);
	class_print(header->e_indent);
	data_print(header->e_indent);
	version_print(header->e_indent);
	asabi_print(header->e_indent);
	abi_print(header->e_indent);
	type_print(header->type_e, header->e_indent);
	entry_print(header->entry_e, header->e_indent);

	free(header);
	elf_close(i);

	return (0);
}
