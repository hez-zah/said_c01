#include <stdio.h>

void ft_swap(int *a, int *b)
{
    int swp;

    swp = *a;
    *a = *b;
    *b = swp;
}

// int main()
// {
//     int a = 0;
//     int b = 1;
//     ft_swap(&a, &b);
//     printf("a = %d | b = %d", a, b);
// }