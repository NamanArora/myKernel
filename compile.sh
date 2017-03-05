#!/bin/sh

rm -rf kernel

nasm -f elf32 kernel.asm -o kasm.o
gcc -m32 -c main.c -o kc.o

ld -m elf_i386 -T link.ld -o kernel kasm.o kc.o

rm -rf kasm.o
rm -rf kc.o
echo 'kernel is ready!\n'
qemu-system-i386 -kernel kernel

