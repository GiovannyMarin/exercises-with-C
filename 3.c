#include <stdio.h>
int main(void){

//ano de nascimento
//ano atual
//idade

int anoN;
int anoA;
int idade;
anoA = 2023;

printf("Ex3 - Digite o ano de nascimento \n");
scanf("%i", &anoN);

idade = anoA - anoN;

if(idade >=18){

printf("Maior de idade\n");

}else{

printf("Menor de idade\n");

}




}
