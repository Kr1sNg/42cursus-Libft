# libft
![image](https://github.com/user-attachments/assets/656f8688-702a-485f-869b-18ece121b11c)



<p align="center">
	<img alt="GitHub code size in bytes" src="https://img.shields.io/github/languages/code-size/Kr1sNg/42cursus-Libft?color=lightblue" />
	<img alt="Code language count" src="https://img.shields.io/github/languages/count/Kr1sNg/42cursus-Libft?color=yellow" />
	<img alt="GitHub top language" src="https://img.shields.io/github/languages/top/Kr1sNg/42cursus-Libft?color=blue" />
	<img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/Kr1sNg/42cursus-Libft?color=green" />
</p>


## :sparkles: What is Libft?

Libft is an individual project at 42 that requires us to re-create some standard C library functions including some additional ones that can be used later to build a library of useful functions for the rest of the program.

At 42 we're not allowed to use some standard libraries on our projects, so we have to keep growing this library with our own functions as we go farther in the program.

---

## :bookmark_tabs: List of Fucntions

### Functions from `<ctype.h>`

- [x] [`ft_isalpha`](libft/ft_isalpha.c)	- checks for an alphabetic character.
- [x] [`ft_isdigit`](libft/ft_isdigit.c)	- check for a digit (0 through 9).
- [x] [`ft_isalnum`](libft/ft_isalnum.c)	- checks for an alphanumeric character.
- [x] [`ft_isascii`](libft/ft_isascii.c)	- checks whether c fits into the ASCII character set.
- [x] [`ft_isprint`](libft/ft_isprint.c)	- checks for any printable character.
- [x] [`ft_toupper`](libft/ft_toupper.c)	- convert char to uppercase.
- [x] [`ft_tolower`](libft/ft_tolower.c)	- convert char to lowercase.

### Functions from `<string.h>`

- [x] [`ft_strlen`](libft/ft_strlen.c)	- calculate the length of a string.
- [x] [`ft_memset`](libft/ft_memset.c)	- fill memory with a constant byte.
- [x] [`ft_bzero`](libft/ft_bzero.c)	- zero a byte string.
- [x] [`ft_memcpy`](libft/ft_memcpy.c)	- copy memory area.
- [x] [`ft_memmove`](libft/ft_memmove.c)	- copy memory area.
- [x] [`ft_strlcpy`](libft/ft_strlcpy.c)	- copy string to a specific size.
- [x] [`ft_strlcat`](libft/ft_strlcat.c)	- concatenate a string to a specific size.
- [x] [`ft_strchr`](libft/ft_strchr.c)	- locate character in a string.
- [x] [`ft_strrchr`](libft/ft_strrchr.c)	- locate character in a string.
- [x] [`ft_strncmp`](libft/ft_strncmp.c)	- compare two strings.
- [x] [`ft_memchr`](libft/ft_memchr.c)	- scan memory for a character.
- [x] [`ft_memcmp`](libft/ft_memcmp.c)	- compare memory areas.
- [x] [`ft_strnstr`](libft/ft_strnstr.c)	- locate a substring in a string.
- [x] [`ft_strdup`](libft/ft_strdup.c)	- creates a duplicate for the string passed as a parameter.

### Functions from `<stdlib.h>`
- [x] [`ft_atoi`](libft/ft_atoi.c)	- convert a string to an integer.
- [x] [`ft_calloc`](libft/ft_calloc.c)	- allocates memory and sets its bytes' values to 0.

### Non-standard functions
- [x] [`ft_substr`](libft/ft_substr.c)	- returns a substring from a string.
- [x] [`ft_strjoin`](libft/ft_strjoin.c)	- concatenates two strings.
- [x] [`ft_strtrim`](libft/ft_strtrim.c)	- trims the beginning and end of a string with a specific set of chars.
- [x] [`ft_split`](libft/ft_split.c)	- splits a string using a char as parameter.
- [x] [`ft_itoa`](libft/ft_itoa.c)	- converts a number into a string.
- [x] [`ft_strmapi`](libft/ft_strmapi.c)	- applies a function to each character of a string.
- [x] [`ft_striteri`](libft/ft_striteri.c)	- applies a function to each character of a string.
- [x] [`ft_putchar_fd`](libft/ft_putchar_fd.c)	- output a char to a file descriptor.
- [x] [`ft_putstr_fd`](libft/ft_putstr_fd.c)	- output a string to a file descriptor.
- [x] [`ft_putendl_fd`](libft/ft_putendl_fd.c)	- output a string to a file descriptor, followed by a new line.
- [x] [`ft_putnbr_fd`](libft/ft_putnbr_fd.c)	- output a number to a file descriptor.

### Linked list functions

- [x] [`ft_lstnew`](libft/ft_lstnew.c)	- creates a new list element.
- [x] [`ft_lstadd_front`](libft/ft_lstadd_front.c)	- adds an element at the beginning of a list.
- [x] [`ft_lstsize`](libft/ft_lstsize.c)	- counts the number of elements in a list.
- [x] [`ft_lstlast`](libft/ft_lstlast.c)	- returns the last element of the list.
- [x] [`ft_lstadd_back`](libft/ft_lstadd_back.c)	- adds an element at the end of a list.
- [x] [`ft_lstclear`](libft/ft_lstclear.c)	- deletes and free list.
- [x] [`ft_lstiter`](libft/ft_lstiter.c)	- applies a function to each element of a list.
- [x] [`ft_lstmap`](libft/ft_lstmap.c)	- applies a function to each element of a list.

---


## :construction_worker: How to Run

### Requirements

The library is written in C language and thus needs the **`cc` compiler** and some standard **C libraries** to run.

### Instructions

**1. Compiling the library**

To compile the library, run:

```shell
$ cd path/to/libft && make
```

**2. Using it in your code**

To use the library functions in your code, include its header:

```C
#include "path/to/libft.h"
```

and, when compiling your code, add library `libft.a` or add the required flags:

```shell
 -L . -lft
```
---

## :bug: Issues

Please feel free **to create a new issue** with its title and description on the issues page of the [Libft](https://github.com/Kr1sNg/42cursus-Libft/issues) Repository. If you have already found the solution to the problem, **I would love to review your pull request**!

---

### :microscope: Third-party testers
* [Francinette](https://github.com/xicodomingues/francinette)
* [libftTester](https://github.com/Tripouille/libftTester)
