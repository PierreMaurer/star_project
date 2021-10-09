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


void line_star(int size) {
    int star_size = size*3;
    int line_width = (size*2)+1;
    int space_width = ((size*6)-1) - line_width*2;
    int count = 0;

    for(count = count; count <= line_width; count++) {
        my_putchar('*');
    }
    for (count = 0; count <= space_width-1; count ++) {
        my_putchar(' ');
    }
    for(count = 0; count <= line_width; count++) {
        my_putchar('*');
    }
    my_putchar('\n');

}
void main (unsigned int size)
{
    star_top(3);
    line_star(3);
}
