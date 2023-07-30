nasm -f elf64 srcs/ft_strlen.s -o ft_strlen.o
gcc -c main.c -o main.o
gcc ft_strlen.o main.o -o program
./program
