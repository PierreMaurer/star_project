/*
** EPITECH PROJECT, 2021
** star
** File description:
** display a star
*/

void line_star(int size)
{
    int star_size = size*3;
    int line_width = (size*2)+1;
    int space_width = ((size*6)-1) - line_width*2;
    int count = 0;

    for (count = count; count < line_width; count++) {
        my_putchar('*');
    }
    for (count = 0; count <= space_width-1; count ++) {
        my_putchar(' ');
    }
    for (count = 0; count < line_width; count++) {
        my_putchar('*');
    }
    my_putchar('\n');
}
