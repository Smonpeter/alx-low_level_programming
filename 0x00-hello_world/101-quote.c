#include <stdio.h>
#include <unistd.h>

int main(void)
{
    /* The line below writes the specified string to the standard output */
    write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
    return (1); /* Return statement should not have parentheses */
}

