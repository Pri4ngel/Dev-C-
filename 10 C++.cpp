#include <stdio.h>

int main(){
	float km_h;
	printf("Digite a velocidade em km/h:");
	scanf("%f", &km_h);
	float m_s = km_h/3.6;
	printf("Velocidade em m/s: %f", m_s);
	
	return 0;
	
}
