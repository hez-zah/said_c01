#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)//123
{
    int i;
    int stock;

    i = 0;
    while (i < (size / 2))
    {
        stock = tab[i];
        tab[i] = tab[(size - 1) - i];
        tab[(size - 1) - i] = stock;
        i++;
    }
}

// int main()
// {
//     int tab[5] = {1,2,3,4,5};
//     ft_rev_int_tab(tab, 5);
//     int i = 0;
//     while (i < 5)
//     {
//         printf("%d", tab[i]);
//         i++;
//     }
// }