#include <stdio.h>
int main(void){

//mes retorna dias

int mes;

printf("Ex4 - Insira um mês do ano (1 - 12) \n");

scanf("%i", &mes);

switch(mes){

    case 1: case 3: case 5: case 7: case 9: case 11: printf("31 dias \n");
        break;
    case 4: case 6: case 8: case 10: case 12: printf("30 dias \n");
        break;
    case 2: printf("28 dias \n");
        break;
    default: printf("Mês inexistente \n");


}


}

