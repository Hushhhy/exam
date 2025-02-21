#include <unistd.h>

int    check(char *s, int n, char c)
{
    int i = 0;
    while (i < n)
    {
        if (s[i] == c)
            return (0);
        i++;
    }
    return (1);
}

void    ft_union(char *s1, char *s2)
{
    int i = 0;
    while (s1[i])
    {
        if (check(s1, i, s1[i]))
            write(1, &s1[i], 1);
        i++;
    }
    int j = 0;
    while (s2[j])
    {
        if (check(s1, i, s2[j]) & check(s2, j, s2[j]))
            write(1, &s2[j], 1);
        j++;
    }
}

int main(int ac, char **av)
{
    if (ac == 3)
        ft_union(av[1], av[2]);
    write(1, "\n", 1);
}