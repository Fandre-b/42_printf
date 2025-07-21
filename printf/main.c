#include <stdio.h>
#include "ft_printf.h"

int main() {
    // Basic string
    ft_printf("Hello, World!\n");

    // Empty string
    ft_printf("");

    // Null string pointer
    ft_printf("%s\n", (char *)NULL);

    // Character printing
    ft_printf("Char: %c\n", 'A');

    // Percent sign
    ft_printf("Percent: %%\n");

    // Integer printing
    ft_printf("Int: %d\n", 42);
    ft_printf("Negative: %d\n", -42);

    // Unsigned integer
    ft_printf("Unsigned: %u\n", 4294967295u);

    // Hexadecimal (lower and upper)
    ft_printf("Hex lower: %x\n", 255);
    ft_printf("Hex upper: %X\n", 255);

    // Pointer
    int x = 123;
    ft_printf("Pointer: %p\n", &x);

    // Multiple arguments
    ft_printf("Mix: %d %s %c %x\n", 10, "test", 'Z', 48879);

    // Edge: No format specifiers
    ft_printf("Just a string with no formats\n");

    // Edge: Only percent
    ft_printf("%%\n");

    // Edge: Unknown specifier
    ft_printf("Unknown: %q\n");

    return 0;
}