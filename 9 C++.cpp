#include <stdio.h>

int main(){
	float celsius;
	printf("Digite a temperatura em celsius: ");
	scanf("%f", &celsius);
	float kelvin = celsius + 273.15;
	printf("temperatura em kelvin %f", kelvin);
	
	return 0;
}
