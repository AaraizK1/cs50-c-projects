#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int owe;
    int total = 0;
    int q = 25;
    int d = 10;
    int n = 5;
    int p = 1;

    do
    {
        owe = get_int("Change owed: ");
    }
    while (owe <= 0);

    while (owe >= q) // keeps subtracting from total with 25 until it cant
    {
        owe -= q;
        total++;
    }
    while (owe >= d)
    {
        owe -= d;
        total++;
    }
    while (owe >= n)
    {
        owe -= n;
        total++;
    }
    while (owe >= p)
    {
        owe -= p;
        total++;
    }
    printf("%i\n", total);
}
