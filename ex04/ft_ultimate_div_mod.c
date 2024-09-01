#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
    int div;
    int mod;

    div = *a;
    mod = *b;
    if (mod)
    {
        *a = div / mod;
        *b = div % mod;
    }
}

// int main()
// {
//     int h = 8;
//     int g = 3;
//     int *a = &h;
//     int *b = &g;
//     ft_ultimate_div_mod(a,b);
//     printf("%d|%d\n", h,g);
// }