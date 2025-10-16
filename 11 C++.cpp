#include <stdio.h>

int main(){
	float m_s;
	printf ("Digite a velocidade em m/s: ");
	scanf("%f", &m_s);
	float km_h = m_s* 3.6;
	printf("Velocidade em km/h: %f", km_h);
	
	return 0;
}
