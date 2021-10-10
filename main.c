/*
** EPITECH PROJECT, 2021
** star
** File description:
** display a star based on given size
*/
#include <stdio.h>
#include <unistd.h>

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

void bot_star(int size)
{
    /* TODO: Finish bot_star */
    int a = 0;
    int space = size;
    int star_size = (size*2)+1;
    
    for ( int line = 0; line < size; line++) {
        for(a = a; a < star_size; a++) {
            my_putchar(' ');
        }
        my_putchar('*');

        if (line < size-1) {
            for (int c = 0; c <= space; c++) {
                my_putchar(' ');
            }
            my_putchar('*');
            if (line <= 1) {
                space-= 2;
            } else {
                space --;
            }
        }
        my_putchar('\n');
        star_size++;
        a = 0;
    }
        
}
void mid_star(int size)
{
    int count = 0;
    int space = 1;
    int star_size = (size*6)-4;
    for (count = count; count < size; count++) {
        for (int i = 0; i < space; i++) {
            my_putchar(' ');
        }
        my_putchar('*');
        space++;

        for (int j = 0; j <= star_size; j++) {
            my_putchar(' ');
        }
        star_size -= 2;
        my_putchar('*');
        my_putchar('\n');
    }
    mid_second_part(size);
}

void mid_second_part(int size) {
    int count = 0;
    int space = size-1;
    int star_size = (size*6)-size;
    
    for (count = count; count < size-1; count++) {
        for (int i = 0; i < space; i++) {
            my_putchar(' ');
        }
        my_putchar('*');

        for(int j = 0; j <= star_size-size; j++){
            my_putchar(' ');
        }
        star_size +=2;
        my_putchar('*');
        my_putchar('\n');
        space--;
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

void star (unsigned int size)
{
    star_top(size);
    line_star(size);
    mid_star(size);
    line_star(size);
    bot_star(size);
}

int main(void)
{
    star(5);
}
