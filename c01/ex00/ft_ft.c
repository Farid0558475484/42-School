#include <stdio.h>

void ft_ft(int *nbr) {
    if (nbr != NULL) {
        *nbr = 42;
    }
}

int main() {
    int myNumber = 0;
    printf("Before ft_ft: %d\n", myNumber);
    ft_ft(&myNumber);
    printf("After ft_ft: %d\n", myNumber);

    return 0;
}
