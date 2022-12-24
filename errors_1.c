#include "monty.h"

int usage_error(void);
int malloc_error(void);
int f_open_error(char *filename);
int unknown_op_error(char *opcode, unsigned int line_number);
int no_int_error(unsigned int line_number);

/**
 * usage_error - prints usage error messages
 * Return: (EXIT_FAILURE) always
 */
int usage_error(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	return (EXIT_FAILURE);
}

/**
 * malloc_error - Prints malloc error messages
 * Return: (EXIT_FAILURE) always
 */
int malloc_error(void)
{
	fprintf(stderr, "ERROR: malloc failed\n");
	return (EXIT_FAILURE);
}

/**
 * f_open_error - prints the file opening error messages
 * @filename: name of file failed to open
 * Return: (EXIT_FAILURE) always
 */
int f_open_error(char *filename)
{
	fprintf(stderr, "ERROR: can't open file %s\n", filename);
	return (EXIT_FAILURE);
}

/**
 * no_int_error - prints invalid monty_push argument error message
 * @line_number: line number in monty bytecodes file where error
 * Return: (EXIT_FAILURE) always
 */
int no_int_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: usage: push integer\n", line_number);
	return (EXIT_FAILURE);
}
