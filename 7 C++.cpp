#include <stdio.h>

int main(){
	float fahrenheit;
	printf("Digite temperatura em fahrenheit:");
	scanf("%f", &fahrenheit);
	float celsius = (5.0/9.0)*(fahrenheit - 32.0);
	printf("Temperatura em celsius: %f", celsius);
		
	return 0;
}
