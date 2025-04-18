# Libft

![42 Badge](https://img.shields.io/badge/42-libft-00babc)
![C Badge](https://img.shields.io/badge/Language-C-blue)

## 📚 Overview

Libft is the first project in the 42 School curriculum. It involves creating a personal C library with a set of standard C functions as well as additional utility functions. This project helps to understand how functions work in C, how to use them, and ultimately how to create your own library.

## 🛠️ Implementation

This library contains recoded versions of several standard C library functions, as well as additional utility functions that will be useful throughout the 42 curriculum.

### Part 1: Libc functions

These functions have the same prototypes and behaviors as the originals from the libc:

| Function      | Description                                                  |
|---------------|--------------------------------------------------------------|
| ft_isalpha    | Check if a character is alphabetic                          |
| ft_isdigit    | Check if a character is a digit                             |
| ft_isalnum    | Check if a character is alphanumeric                        |
| ft_isascii    | Check if a character is ASCII                               |
| ft_isprint    | Check if a character is printable                           |
| ft_strlen     | Calculate length of a string                                |
| ft_memset     | Fill memory with a constant byte                            |
| ft_bzero      | Zero a byte string                                          |
| ft_memcpy     | Copy memory area                                            |
| ft_memmove    | Copy memory area, handling overlapping memory               |
| ft_strlcpy    | Size-bounded string copying                                 |
| ft_strlcat    | Size-bounded string concatenation                           |
| ft_toupper    | Convert character to uppercase                              |
| ft_tolower    | Convert character to lowercase                              |
| ft_strchr     | Locate character in string                                  |
| ft_strrchr    | Locate character in string from the end                     |
| ft_strncmp    | Compare two strings                                         |
| ft_memchr     | Scan memory for a character                                 |
| ft_memcmp     | Compare memory areas                                         |
| ft_strnstr    | Locate a substring in a string                              |
| ft_atoi       | Convert a string to an integer                              |
| ft_calloc     | Allocate and zero-initialize memory                         |
| ft_strdup     | Duplicate a string                                          |

### Part 2: Additional functions

These functions are not in the libc, or they are in a different form:

| Function      | Description                                                  |
|---------------|--------------------------------------------------------------|
| ft_substr     | Return a substring from a string                            |
| ft_strjoin    | Concatenate two strings                                     |
| ft_strtrim    | Trim specified characters from beginning and end of string  |
| ft_split      | Split a string using a delimiter character                  |
| ft_itoa       | Convert integer to string                                   |
| ft_strmapi    | Apply a function to each character of a string              |
| ft_striteri   | Apply a function to each character of a string with index   |
| ft_putchar_fd | Output a character to a file descriptor                     |
| ft_putstr_fd  | Output a string to a file descriptor                        |
| ft_putendl_fd | Output a string followed by a newline to a file descriptor  |
| ft_putnbr_fd  | Output an integer to a file descriptor                      |

### Bonus Part (Optional)

The bonus part contains functions for linked list manipulation:

| Function       | Description                                       |
|----------------|---------------------------------------------------|
| ft_lstnew      | Create a new list element                         |
| ft_lstadd_front| Add an element at the beginning of the list       |
| ft_lstsize     | Count the number of elements in a list            |
| ft_lstlast     | Return the last element of the list               |
| ft_lstadd_back | Add an element at the end of the list             |
| ft_lstdelone   | Delete an element from the list                   |
| ft_lstclear    | Delete a sequence of elements from the list       |
| ft_lstiter     | Apply a function to each element in the list      |

## 📋 Requirements

- GCC compiler
- Make

## 🚀 How to Use

### Compilation

To compile the library, run:

```bash
make
```

This will generate the `libft.a` static library.

To include the bonus functions:

```bash
make bonus
```

To clean the object files:

```bash
make clean
```

To clean everything (object files and library):

```bash
make fclean
```

To recompile everything:

```bash
make re
```

### Linking with your projects

To use the library in your projects, include the header file and link with the library:

```c
#include "libft.h"
```

When compiling your program:

```bash
gcc your_program.c -L. -lft
```

## 📝 Testing

This repository does not include tests. You can use external testing frameworks like:
- [libft-unit-test](https://github.com/alelievr/libft-unit-test)
- [libft-war-machine](https://github.com/ska42/libft-war-machine)
- [libftTester](https://github.com/Tripouille/libftTester)

## 🧩 Project Structure

```
.
├── Makefile
├── includes/
│   └── libft.h
├── srcs/
│   ├── ft_*.c (libc functions)
│   ├── ft_*.c (additional functions)
│   └── ft_*.c (bonus functions)
└── README.md
```

## 📜 License

This project is part of the 42 School curriculum. Feel free to use this code as reference, but please attempt to solve the problems yourself first.

## 👤 Author

- Oussama Zahdi (@oussamazahdi)

## 💬 Acknowledgements

- 42 School for providing this challenging project
- All fellow students who provided feedback and testing
