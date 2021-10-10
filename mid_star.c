/*
** EPITECH PROJECT, 2021
** star
** File description:
** display a star
*/

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
    return;
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
    return;
}
