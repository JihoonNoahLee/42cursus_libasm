# libasm

`libasm` is a small collection of Stndard C Library functions implemented with 64-bit
Intel-syntax assembly with NASM.

Just for fun.

## Requirements

- macOS on x86_64, or an environment capable of producing x86_64 Mach-O objects
- NASM
- A C compiler such as Clang
- `make`

## Build

Build the static library:

```sh
make
```

This creates `libasm.a` and object files under `obj/`.

## Test

Build the test executable with:

```sh
make test
```

Run it with:

```sh
./test.out
```

The test compares `ft_strlen` with the system `strlen` using empty strings,
single-character strings, spaces, and a longer string.

## Cleanup

```sh
make clean   # Remove object files
make fclean  # Remove object files and libasm.a
make tclean  # Remove test objects and test.out
make re      # Rebuild the library from scratch
```

## Project Structure

```text
.
├── Makefile
├── main.c
├── src/
│   ├── ft_strlen.s
│   ├── ft_strcpy.s
│   └── ft_strcmp.s
└── test/
	├── test.h
	└── test_strlen.c
```

## API

```c
size_t ft_strlen(const char *s);
```

The assembly entry point is exported as `_ft_strlen` for the macOS Mach-O
format and is called from C as `ft_strlen`.
