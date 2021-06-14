//Consumo
#include<stdio.h>

int main (){
	int X;
	float Y, consumo;
	
	scanf("%d %f", &X, &Y);
	
	printf("%.3f km/l\n", X/Y);
	return 0;
}
