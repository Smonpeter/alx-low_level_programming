#ifndef MAIN_H
#define MAIN_H

/* Convert a binary string to an unsigned integer */
unsigned int binary_to_uint(const char *b);

/* Print the binary representation of a long integer */
void print_binary(unsigned long int n);

/* Get the value of a specific bit at a given index */
int get_bit(unsigned long int n, unsigned int index);

/* Set a specific bit at a given index to 1 */
int set_bit(unsigned long int *n, unsigned int index);

/* Clear a specific bit at a given index (set it to 0) */
int clear_bit(unsigned long int *n, unsigned int index);

/* Calculate the number of bits that need to be flipped to transform n into m */
unsigned int flip_bits(unsigned long int n, unsigned long int m);

/* Convert a string to an integer */
int _atoi(const char *s);

/* Custom function to print a single character */
int _putchar(char c);

/* Get the endianness of the system (big-endian or little-endian) */
int get_endianness(void);

#endif

