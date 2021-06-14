//Cálculo Simples

#include<stdio.h>

int main(){
	int codigo1, num1, codigo2, num2;
	float valor_uni1, valor_uni2, pagar;
	
	scanf(" %d %d %f", &codigo1, &num1, &valor_uni1);
	scanf(" %d %d %f", &codigo2, &num2, &valor_uni2);
	
	printf("VALOR A PAGAR: R$ %.2f\n", pagar = num1 * valor_uni1 + num2 * valor_uni2);
	return 0;
}
