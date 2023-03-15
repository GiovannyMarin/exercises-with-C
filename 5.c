#include <stdio.h>
int main(void){

//km
//litros
//consumo medio
// km/l

float km;
float l;
float conM;

printf("Ex5 - Digite a quantidade de km percorridos \n");
scanf("%f", &km);

printf("Digite a quantidade de litros gastos \n");
scanf("%f", &l);

conM = km / l;

printf("O consumo medio foi de %f", conM);

}
