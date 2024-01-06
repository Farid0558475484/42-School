#include <stdio.h>

void t_ultimate_div_mod(int *a, int *b){

	if(b){
	int tmp;
	tmp = *a;
	*a = *a / *b;
	*b = tmp % *b;	
	}

}

int main(){
	int a = 10;
	int b = 3;
	
	printf("a = %d\nb = %d\n", a, b);
	t_ultimate_div_mod(&a, &b);
	printf("a = %d\nb = %d\n", a, b);
	return 0;	
}
