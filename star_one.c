/*
** EPITECH PROJECT, 2021
** star
** File description:
** display a square
*/

void top(void)
{
    for (int i = 0; i < 3; i++) {
        my_putchar(' ');
    }
    my_putchar('*');
    my_putchar('\n');
}

void line(void)
{
    for (int i = 0; i < 3; i++) {
        my_putchar('*');
    }
    my_putchar(' ');
    for (int j = 0; j < 3; j++) {
        my_putchar('*');
    }
    my_putchar('\n');
}

void mid(void)
{
    my_putchar(' ');
    my_putchar('*');
    for (int i = 0; i < 3; i++) {
        my_putchar(' ');
    }
    my_putchar('*');
    my_putchar('\n');
}

void star_one(void)
{
    top();
    line();
    mid();
    line();
    top();
}
