#include <stdio.h>

void    ft_ft(int   *nbr)
{
    *nbr = 42;
}

int main()
{
    int i = 5;

    ft_ft(&i);
    printf("%d", i);
}