#include <cs50.h>
#include <stdio.h>

void print_row(int bricks, int spaces);

int main(void)
{
    int height;
    do
    {
        height = get_int("height: ");
    }

    while (height <= 0);

    for (int i = 0; i < height; i++)
    {
        int bricks = i + 1;
        int spaces = height - (i + 1);
        print_row(bricks, spaces);
    }

}
void print_row(int bricks, int spaces)
{
    for (int i = 0; i < spaces; i++)
    {
        printf(" ");
    }

    for (int i = 0; i < bricks; i++)
    {
        printf("#");
    }
    printf("\n");
}

