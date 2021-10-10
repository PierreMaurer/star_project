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

void star_top(int size);

void bot_star(int size);

void mid_star(int size);
            
void mid_second_part(int size);

void line_star(int size);

void star (unsigned int size)
{
    if(size == 0) {
        return;
    }
    star_top(size);
    line_star(size);
    mid_star(size);
    line_star(size);
    bot_star(size);
}

int main(void)
{
    for(int i = 2; i <= 5; i++) {
        star(i);
    }
}
