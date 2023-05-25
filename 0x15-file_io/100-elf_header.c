#include "main.h"

/**
 * main - starting point of the program
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Description: displays information in the header of an ELF file
 * Return: 0 on success.
 */

int main(int argc, char **argv)
{
	Elf64_Ehdr *elf;
	ssize_t	 fd_read, read_count;

	if (argc != 2)
	print_error(0, argv[0]);

	fd_read = open(argv[1], O_RDONLY);
	if (fd_read == -1)
		print_error(1, argv[1]);
	elf = malloc(sizeof(Elf64_Ehdr));
	if (elf == NULL)
	{
		if (close(fd_read) == -1)
			print_error(2, argv[1]);
		print_error(3, argv[1]);
	}
	read_count = read(fd_read, elf, sizeof(Elf64_Ehdr));
	if (read_count == -1)
	{
		free(elf);
		if (close(fd_read) == -1)
			print_error(2, argv[1]);
		print_error(3, argv[1]);
	}

	check_elf(elf->e_ident);
	printf("ELF Header:\n");
	print_magic(elf->e_ident);
	print_class(elf->e_ident);
	print_data(elf->e_ident);
	print_version(elf->e_ident);
	print_osabi(elf->e_ident);
	print_abi(elf->e_ident);
	print_type(elf->e_type, elf->e_ident);
	print_entry(elf->e_entry, elf->e_ident);

	free(elf);
	if (close(fd_read) == -1)
	print_error(2, argv[1]);
	return (0);
}

/**
 * check_elf - Checks if a file is an ELF file.
 * @e_ident: A pointer to an array containing the ELF magic numbers.
 * Return: nothing
 */
void check_elf(unsigned char *e_ident)
{
	if (e_ident[0] != 127 || e_ident[1] != 'E' || e_ident[2] != 'L' ||
		e_ident[3] != 'F')
	{
		dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
		exit(98);
	}
}

/**
 * print_magic - Prints the magic numbers of an ELF header.
 * @e_ident: A pointer to an array containing the ELF magic numbers.
 * Return: nothing
 */
void print_magic(unsigned char *e_ident)
{
	int i;

	printf("  Magic:   ");

	for (i = 0; i < EI_NIDENT; i++)
	{
		if (i == 0)
			printf("%02x", e_ident[i]);
		else
			printf(" %02x", e_ident[i]);

	}
	printf("\n");
}

/**
 * print_class - Prints the class of an ELF header.
 * @e_ident: A pointer to an array containing the ELF class.
 * Return: nothing
 */
void print_class(unsigned char *e_ident)
{
	printf("  Class:                             ");

	switch (e_ident[EI_CLASS])
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
			printf("<unknown:\n");
	}
}

/**
 * print_data - Prints the data of an ELF header.
 * @e_ident: A pointer to an array containing the ELF class.
 * Return: nothing
 */
void print_data(unsigned char *e_ident)
{
	printf("  Data:                              ");

	switch (e_ident[EI_DATA])
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
			printf("<unknown:");
	}
}

/**
 * print_version - Prints the version of an ELF header.
 * @e_ident: A pointer to an array containing the ELF version.
 * Return: nothing
 */
void print_version(unsigned char *e_ident)
{
	printf("  Version:                           %d", e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
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
 * print_osabi - Prints the OS/ABI of an ELF header.
 * @e_ident: A pointer to an array containing the ELF version.
 * Return: nothing
 */
void print_osabi(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");

	switch (e_ident[EI_OSABI])
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
			printf("\n");
	}
}

/**
 * print_abi - Prints the ABI version of an ELF header.
 * @e_ident: A pointer to an array containing the ELF ABI version.
 * Return: nothing
 */
void print_abi(unsigned char *e_ident)
{
	printf("  ABI Version:                       %d\n", e_ident[EI_ABIVERSION]);
}

/**
 * print_type - Prints the type of an ELF header.
 * @e_type: The ELF type.
 * @e_ident: A pointer to an array containing the ELF class.
 * Return: nothing
 */
void print_type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf("  Type:                              ");

	switch (e_type)
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
			printf("\n");
	}
}

/**
 * print_entry - Prints the entry point of an ELF header.
 * @e_entry: The address of the ELF entry point.
 * @e_ident: A pointer to an array containing the ELF class.
 * Return: nothing
 */
void print_entry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf("  Entry point address:               ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
					((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);
	else
		printf("%#lx\n", e_entry);
}

/**
 * print_error - prints an error and exits the program
 * @error: error code
 * @s: file name
 * Return: nothing
 */
void print_error(int error, char *s)
{
	switch (error)
	{
		case 0:
			dprintf(STDERR_FILENO, "Usage: %s filename\n", s);
			exit(98);
			break;
		case 1:
			dprintf(STDERR_FILENO, "Error: Can't open %s file\n", s);
			exit(98);
			break;
		case 2:
			dprintf(STDERR_FILENO, "Error: Can't close file %s open descriptor\n", s);
			exit(98);
			break;
		case 3:
			dprintf(STDERR_FILENO, "Error: Can't allocate memory to read %s\n", s);
			exit(98);
			break;
	}
}
