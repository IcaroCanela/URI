//Salário
#include<stdio.h>

int main(){
	int num_fincionario, horas;
	float valor_hora, salario;
	scanf("%d %d %f", &num_fincionario, &horas, &valor_hora);
	printf("NUMBER = %d\n", num_fincionario);
	printf("SALARY = U$ %.2f\n", salario = horas * valor_hora);
	
	return 0;
}
