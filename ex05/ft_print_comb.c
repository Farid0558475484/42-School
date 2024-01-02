#include <stdio.h>

void ft_print_comb() {

    int i = 0;

    while (i <= 7) {
        int j = i+1;
        while (j <= 8) {
            int k = j+1;
            while (k <= 9) {

                printf("%d%d%d, ", i, j, k);

                if(i == 7 && j == 8 && k == 9)
                    printf("%d%d%d.", i, j, k);
                k++;
            }
            j++;
        }
        i++;
    }
    printf("\n");
}

int main() {
    ft_print_comb();
    return 0;
}