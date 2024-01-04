#include <stdio.h>

void ft_ultimate_ft(int *********nbr) {
        *********nbr = 42;
}

 int main() {
    int a = 100;
	int *ptr1, **ptr2, ***ptr3, ****ptr4, *****ptr5, ******ptr6, *******ptr7, ********ptr8, *********ptr9;

	ptr1 = &a;
	ptr2 = &ptr1;
	ptr3 = &ptr2;
	ptr4 = &ptr3;
	ptr5 = &ptr4;
	ptr6 = &ptr5;
	ptr7 = &ptr6;
	ptr8 = &ptr7;
	ptr9 = &ptr8;

    printf("%d\n", a);
	ft_ultimate_ft(ptr9);
	printf("%d\n", a);
	return (0);
}
