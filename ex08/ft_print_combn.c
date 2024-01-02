#include <unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}

void print_combination(char *v, int n) {
    int i = 0;
    while (i < n) {
        ft_putchar(v[i]);
        ++i;
    }
    if (v[0] < ('9' - n + 1)) {
        ft_putchar(',');
        ft_putchar(' ');
    }

}

void ft_print_combn_recursive(char *v, int n, int index) {
    if (index == n) {
        print_combination(v, n);
        return;
    }

    for (char digit = v[index - 1] + 1; digit <= '9'; ++digit) {
        v[index] = digit;
        ft_print_combn_recursive(v, n, index + 1);
    }
}

void ft_print_combn(int n) {
    char v[10];

    if (n <= 0 || n > 10) {
        write(1, "Insert an 0 < n < 10\n", 21);
        return;
    }

    for (int i = 0; i < n; ++i) {
        v[i] = i + '0';
    }

    ft_print_combn_recursive(v, n, 1);
    ft_putchar('\n');
}

int main(void) {
    ft_print_combn(4);
    return 0;
}
