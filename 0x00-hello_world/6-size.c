#!/bin/bash
echo -e '#include <stdio.h>\nint main() { printf("Size of char: %zu bytes\\nSize of short: %zu bytes\\nSize of int: %zu bytes\\nSize of long: %zu bytes\\nSize of long long: %zu bytes\\nSize of float: %zu bytes\\nSize of double: %zu bytes\\nSize of long double: %zu bytes\\n", sizeof(char), sizeof(short), sizeof(int), sizeof(long), sizeof(long long), sizeof(float), sizeof(double), sizeof(long double)); return 0; }' | gcc -x c -o size_printer - && ./size_printer

