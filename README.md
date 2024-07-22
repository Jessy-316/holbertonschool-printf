/* Custom `printf` Implementation */

Welcome to the Custom 'printf' Implementation project! This project is a
custom-built version of the printf function in C. The goal is to understand
and replicate the behavior of the standard 'printf' function by implementing our
own version from scratch.

/* Overview */

This project aims to create a custom implementation of the printf function,
which can handle various format specifiers and output formatting options.
The custom implementation is designed to mimic the behavior of the standard
printf function while providing flexibility for extension and customization.

/* Features */

The custom printf implementation supports the following features:

Format Specifiers:

'%c' - Character.
'%s' - String (with special handling foe empty and NULL strings).
'%%%' - Percent sign.
'%d' - Decimal integer.
'%i' - Integer.

/* Handling */

NULL strings don't print anything.
Empty strings don't print anything.
Custom formatting options can be added in the future.

/* Usage */

To use the custom printf function, include the header file main.h and call
_printf as you would with the standard printf function.

/* Projectt Structure */

The project is organized into the following files:

'main.c': Contains the main function for testing the custom printf implementation.
'get_op_format.c': Connects format specifiers to their respective print functions.
'_printf.c': Implements the core functionality of the custom printf function.
'main.h': Header file containing function prototypes and the op_t structure.
'_putchar.c': Implements the _putchar function to write one character to standard output.
'op_functions.c': Defines functions for printing characters, strings, and integers.
'man_3_printf': Manual page created for this custom printf implementation.
'README.md': Documentation for the project.

/* Testing */

To test the custom printf implementation,
compile and run the provided test program (main.c):

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c

/* Contributing */
Contributions are welcome!

If you'd like to contribute to this project, please follow these steps:

Clone the repository.
Create a new branch (git checkout 'new branch name').
Make your changes and commit them (git commit -m 'Made some chnages').
Push to the branch (git push origin HEAD).
Create a pull request with a description of your changes.
