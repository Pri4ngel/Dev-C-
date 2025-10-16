#include <stdio.h>

int main(){
	float celsius;
	printf ("Didite a temperatura em ceulsius: ");
	scanf("%f", &celsius);
	float fahrenheit = celsius*(9.0/5.0) + 32.0;
	printf ("Tempreratura em Fahrenheit: %f", fahrenheit);
	
	return 0;
}
