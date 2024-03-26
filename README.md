# C programming Printf function implementation

## Resources
* [Secrets of print](https://www.academia.edu/10297206/Secrets_of_printf_)
* man or help: `printf (3)`

## Compilation
```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
```
## Environment
* Language: C
* OS: Ubuntu
* Compiler: gcc
* Style guidelines: [Betty style](https://github.com/alx-tools/Betty/wiki)
  
### Requirements
* All files will compiled using gcc, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
* All files end with a new line
* Code for custom printf uses the `Betty` style. Checked using [betty-style.pl](https://github.com/alx-tools/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/alx-tools/Betty/blob/master/betty-doc.pll)
* No global variables used
* No more than 5 functions per file
* The prototypes of all your functions are included in header file called [main.h](./main.h)
* All header files are include guarded

## More Info
### Global functions and macros used
* `write` (man 2 write)
* `malloc` (man 3 malloc)
* `free` (man 3 free)
* `va_start` (man 3 va_start)
* `va_end` (man 3 va_end)
* `va_copy` (man 3 va_copy)
* `va_arg` (man 3 va_arg)
