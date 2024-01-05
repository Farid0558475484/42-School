#include <stdio.h>


void ft_swap(int *a, int *b){
	
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
	printf("a = %d\nb = %d\n", *a, *b);

}


int main(void){

	int x = 10;
	int y = 20;
	printf("a = %d\nb = %d\n",x ,y);
	ft_swap(&x, &y);

return 0;
}
