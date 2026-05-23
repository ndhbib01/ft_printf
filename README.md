# ft_printf

## Description

The purpose of this project is to recreate the standard C `printf` function as a custom function named `ft_printf`.

This project introduces variadic functions in C using:
- `va_list`
- `va_start`
- `va_arg`
- `va_end`

The implementation supports the mandatory conversions:
- `%c`
- `%s`
- `%p`
- `%d`
- `%i`
- `%u`
- `%x`
- `%X`
- `%%`

We compile into a static library by using the command 'make' named:

```bash
libftprintf.a
```

---

# Instructions

## Compilation

Compile the project using:

```bash
make
```

## Clean object files

```bash
make clean
```

## Full clean

```bash
make fclean
```

## Rebuild everything

```bash
make re
```

---

# Project Structure

```txt
ft_printf.c
ft_handle_specifier.c
print_char.c
print_string.c
print_num.c
print_unsigned.c
print_lowerhex.c
print_higherhex.c
print_pointer.c
print_percent.c
ft_putnbr_hex.c
ft_utoa.c
ft_printf.h
Makefile
```

---

# Implementation Details

## Variadic Arguments

`ft_printf` uses variadic functions to handle an unknown number of arguments.

The function:
- initializes the argument list using `va_start`
- retrieves arguments using `va_arg`
- properly closes the list using `va_end`

---

## Specifier Handling

Specifier management is separated into:

```c
ft_handle_specifier()
```

This improves:
- readability
- modularity
- maintainability
- Norm compliance

---

## Hexadecimal Conversion

Hexadecimal conversion is implemented recursively using:
- division by 16
- modulo 16

The helper function:

```c
ft_putnbr_hex()
```

is reused for both:
- lowercase hexadecimal (`%x`)
- uppercase hexadecimal (`%X`)

through different base strings.

---

## Unsigned Integer Conversion

Unsigned integers are converted into strings using:

```c
ft_utoa()
```

Digits are filled from right to left because `% 10` extracts the least significant digit first.

---

## Pointer Handling

Pointers are printed:
- with the `0x` prefix
- in hexadecimal format

NULL pointers display:

```txt
(nil)
```

to replicate standard `printf` behavior.

---

# Allowed Functions

The project only uses allowed functions:
- `malloc`
- `free`
- `write`
- `va_start`
- `va_arg`
- `va_copy`
- `va_end`

---

# Resources

## Documentation
- `man 3 printf`
- `man stdarg`
- GNU C Library `printf` documentation

## AI Usage

AI was used as a learning and debugging assistant to:
- review edge cases
- better understand variadic functions
- understand recursion and hexadecimal conversion
- simulate peer-evaluation questions
- improve understanding of memory allocation and formatting behavior

All code was written, tested, and understood manually.
