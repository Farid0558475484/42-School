#include <stdio.h>
#include <unistd.h>
	
void ft_putnbr(int nb){

	long   nbl;
	char   c[10];
	short  i;

	nbl = nb;
	i = 0;
	
	if(nb == 0){
				
	write(1, "0", 1);
	return;	
	}

	if(nb < 0){
	nb *= -1 ;
	write(1, "-", 1);
	}

	while(nb > 0){
	c[i] = nb % 10 + 48;
	nb /= 10;
	i++;
	}

	while(i > 0){
	i--;
	write(1, &c[i], 1);
	}
	
}

int main(void){

	ft_putnbr(0);
	return 0;
}
