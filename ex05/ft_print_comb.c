#include <stdio.h>

void ft_print_comb() {
    for (int i = 0; i <= 7; ++i) {
        for (int j = i+1; j <= 8; ++j) {
            for (int k = j+1; k <= 9; ++k) {
                printf("%d%d%d, ", i, j, k);
            }
        }
    }
    printf("\n");
}

int main() {
    ft_print_comb();
    return 0;
}