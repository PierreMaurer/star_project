/*
** EPITECH PROJECT, 2021
** star
** File description:
** display a star
*/

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
    int a = 0;
    int space = (size*2)-3;
    int star_size = (size*2);
    
    for ( int line = 0; line < size; line++) {
        for(a = 0; a < star_size+1; a++) {
            my_putchar(' ');
        }
        my_putchar('*');

        if (line <= (size*1)-2) {
            for( int j = 0; j < space; j++) {
                my_putchar(' ');
            }
            my_putchar('*');
            if (line >= size-2) {
                space --;
            } else
            space -= 2;
        }
        my_putchar('\n');
        star_size++;
    }
}
