#include <stdio.h>
int main(void){

//temp celsius
//temp f
//f = (0 °C × 9/5) + 32

float c, f;

printf("Ex6 - Digite a temperatura \n");
scanf("%f", &c);

f = (c * 9/5) + 32;

printf("A temperatura em f %f", f);


}
