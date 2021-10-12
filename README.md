# Write your own custom printf?
```_printf``` is a custom implementation of the C programming function ```printf```. This project is an application of the C programming knowledge that ALX software engineering program cohort four students have learned since starting the program on August 2, 2021.

## General Requirements

   * Allowed editors: vi, vim, emacs
   * All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
   * All your files should end with a new line
   * A README.md file, at the root of the folder of the project is mandatory
   * Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
   * You are not allowed to use global variables
   * No more than 5 functions per file
   * In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
   * The prototypes of all your functions should be included in your header file called main.h
   * Don’t forget to push your header file
   * All your header files should be include guarded
   * Note that we will not provide the _putchar function for this project

## Authorized functions and macros

   * ```write``` (man 2 write)
   * ```malloc``` (man 3 malloc)
   * ```free``` (man 3 free)
   * ```va_start``` (man 3 va_start)
   * ```va_end``` (man 3 va_end)
   * ```va_copy``` (man 3 va_copy)
   * ```va_arg``` (man 3 va_arg)


##  Compilation

   * Your code will be compiled this way:
      - $ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c 
   * As a consequence, be careful not to push any c file containing a main function in the root directory of your project (you could have a test folder containing all your tests files including main functions)
   * Our main files will include your main header file (main.h): #include main.h
   * You might want to look at the gcc flag -Wno-format when testing with your _printf and the standard printf. Example of test file that you could use:
```
#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    return (0);
}
```
   * We strongly encourage you to work all together on a set of tests
   * If the task does not specify what to do with an edge case, do the same as printf

## Mandatory Tasks
- [x] [Write function that produces output with conversion specifiers ```c```, ```s```, and ```%```](./_printf.c).
- [x] [Handle conversion specifiers ```d```, ```i```](./printnum.c).
- [x] [Create a man page for your function](./man_3_printf).
## Advanced Tasks
- [x] [Handle conversion specifier ```b```](./print_bases.c).
- [x] [Handle conversion specifiers ```u```, ```o```, ```x```, ```X```](./print_bases.c).
- [x] [Use a local buffer of 1024 chars in order to call write as little as possible](./write_funcs.c).
- [x] [Handle conversion specifier ```S```](./print_custom.c).
- [x] [Handle conversion specifier ```p```](./print_address.c).
- [x] [Handle flag characters ```+```, space, and ```#``` for non-custom conversion specifiers](./get_flag.c).
- [ ] Handle length modifiers ```l``` and ```h``` for non-custom conversion specifiers.
- [ ] Handle the field width for non-custom conversion specifiers.
- [ ] Handle the precision for non-custom conversion specifiers.
- [ ] Handle the ```0``` flag character for non-custom conversion specifiers.
- [x] [Handle the custom conversion specifier ```r``` that prints the reversed string](./print_custom.c).
- [x] [Handle the custom conversion specifier ```R``` that prints the rot13'ed string](./print_custom.c).
- [ ] All above options should work well together.

## Examples

* ```_printf("Hello, World\n")``` *prints "Hello, World", followed by a new line*
* ```_printf("Hello, %s", "World")``` *prints "Hello, World"*
* ```_printf("This is a number: %d", 98)``` *prints "This is a number: 98"*


# Authors
* **Derbew Felasman**
   - *Github:* [Derbew Felasman](https://github.com/der-bew)
   - *Email:* derbew12@gmail.com
   - *Linkedin:* [Derbew Felasman](https://www.linkedin.com/in/derbew-felasman-34558951/)
* **Melat Samuel**
   - *Github:* [Melat Samuel](https://github.com/melatsam)
   - *Email:* melatsam555@gmail.com