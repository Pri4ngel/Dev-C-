#include <stdio.h>

int main(){
	float valor = 3.14159;
	float total = 780000.00;
	float primeiro = total * 0.46;
	float segundo = total * 0.32;
	float terceiro = total - (primeiro + segundo);
	
	printf("O primeiro ganhador: R$ %2.f\n", primeiro);
	printf("O segundo ganhador: R$ %2.f\n", segundo);
	printf("O terceiro ganhador: R$ %2.f\n", terceiro);
	
	return 0;
}
