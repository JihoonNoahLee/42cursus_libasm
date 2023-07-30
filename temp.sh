nasm -f elf64 srcs/ft_strlen.s -o ft_strlen.o
nasm -f elf64 srcs/ft_strcmp.s -o ft_strcmp.o
gcc -c main.c -o main.o
gcc ft_strlen.o ft_strcmp.o main.o -o program
./program
