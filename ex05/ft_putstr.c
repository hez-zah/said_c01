#include <stdio.h>
#include <unistd.h>

void ft_putstr(char *str)
{
    while (*str)
    {
        write(1, str, 1);
        str++;
    }
}

// int main()
// {
//     char *s = "hamza";
//     ft_putstr(s);
// }