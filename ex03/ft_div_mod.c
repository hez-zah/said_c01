#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
    if (b)
    {
        *div = a / b;
        *mod = a % b;
    }
}

// int main()
// {
//     int h;
//     int g;
//     int *dv = &h;
//     int *md = &g;
//     ft_div_mod(8, 2, dv, md);
//     printf("%d | %d\n", h, g);
// }