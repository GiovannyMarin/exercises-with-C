#include <stdio.h>
int main(void){

 //num1
 //num2
 //soma
 //sub
 //div

 float num1,num2,soma,sub,div;

 printf("Digite um número \n");
 scanf("%f", &num1);

 printf("Digite outro número \n");
 scanf("%f", &num2);

 soma = num1+num2;
 sub = num1-num2;
 div = num1/num2;

 printf("a soma dos numeros: %f", soma);
 printf("a subtracao dos numeros: %f", sub);
 printf("a divisao dos numeros: %f", div);
}
