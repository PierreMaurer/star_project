/*
** EPITECH PROJECT, 2021
** star
** File description:
** display a star based on given size
*/

void star_top(int size);

void bot_star(int size);

void mid_star(int size);

void star_one(void);

void star (unsigned int size)
{
    if (size == 1) {
        star_one();
        return;
    } else if (size <= 0 || size > 2147483647) {
        return;
    }
    star_top(size);
    line_star(size);
    mid_star(size);
    line_star(size);
    bot_star(size);
}
