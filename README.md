# libft

This project is part of the 42 curriculum.

The goal is to recreate a set of standard C library functions from scratch and build a reusable static library.

---

## What it is

libft is a custom C library that implements common libc functions and utility helpers.

It helps understand:
- memory management
- string manipulation
- low-level C behavior
- clean reusable code design

---

## What it contains

### Standard libc functions
Reimplementations of functions like:
- memset, bzero, memcpy, memmove
- strlen, strlcpy, strlcat
- isalpha, isdigit, isalnum, isascii, isprint
- toupper, tolower
- strchr, strrchr, strncmp
- atoi, calloc, strdup

### Additional utilities
- substr, strjoin, strtrim
- split, itoa
- strmapi, striteri
- putchar_fd, putstr_fd, putendl_fd, putnbr_fd

---

## Build

```bash
make        # compile library
make clean  # remove object files
make fclean # remove everything
make re     # rebuild
