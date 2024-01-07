#include <stdio.h>
#include <unistd.h>

void ft_putstr(char *str) {
    while (*str) {
        write(1, str++, 1);
    }
}

int main() {
    char *s;
    s = "hi!";
    ft_putstr(s);
    return 0;
}
