/*
** EPITECH PROJECT, 2021
** star
** File description:
** display a star based on given size
*/
#include <stdio.h>

void my_putchar(c)
{
    write(1, &c, 1);
}

void star_top(int size)
{
    int star_size = size*3;
    int space = 0;
    printf("%i \n", star_size);
    for (int a = 0; a < size; a++) {
        for (int b = 0; b < star_size; b++) {
            my_putchar(' ');
        }
        printf("*");
        printf("\n");
        star_size--;
    }
}

void main (unsigned int size)
{
    star_top(4);
}
