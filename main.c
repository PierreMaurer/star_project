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
    int a = 0;
    int star_size = size*3;
    int space = 1;
    printf("%i \n", star_size);
    for (a; a < size; a++) {
        for (int b = 0; b < star_size; b++) {
            my_putchar(' ');
        }

        my_putchar('*');
        
        if (a > 0) {
            for (int c = 0; c < space; c++) {
                my_putchar(' ');
            }
            my_putchar('*');
            space += 2;
        }
        my_putchar('\n');
        star_size--;
    }
}

void main (unsigned int size)
{
    star_top(4);
}
