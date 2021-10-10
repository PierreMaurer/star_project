/*
** EPITECH PROJECT, 2021
** star
** File description:
** display a star
*/

void display_space(int space)
{
    for (int c = 0; c < space; c++) {
        my_putchar(' ');
    }
}

void star_top(int size)
{
    int star_size = size*3;
    int space = 1;
    
    for (int a = 0; a < size; a++) {
        for (int b = 0; b < star_size; b++) {
            my_putchar(' ');
        }
        my_putchar('*');       
        if (a > 0) {
            display_space(space);
            my_putchar('*');
            space += 2;
        }
        my_putchar('\n');
        star_size--;
    }
}

void bot_star(int size)
{
    int space = (size*2)-3;
    int star_size = (size*2);
    
    for (int line = 0; line < size; line++) {
        for (int a = 0; a < star_size+1; a++) {
            my_putchar(' ');
        }
        my_putchar('*');
        if (line <= (size*1)-2) {
            display_space(space);
            my_putchar('*');
            if (line >= size-2) {
                space --;
            } else {
                space -= 2;
            }
        }
        my_putchar('\n');
        star_size++;
    }
}
