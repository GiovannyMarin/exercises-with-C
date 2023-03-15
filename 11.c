#include <stdio.h>
int main(void){

float cp, larg, area;

printf("Digite comprimento da sala: \n");
scanf("%f", &cp);

printf("Digite largura da sala: \n");
scanf("%f", &larg);

area = cp * larg;

printf("A area da sala e %f", area);

}
