#include <stdio.h>
int main(void){

int time;

printf("Menu \n");
printf("1 - Palmeiras \n");
printf("2 - Corintias \n");
printf("3 - Santos \n");
printf("4 - Agua Santa \n");

scanf("%i", &time);

switch(time){

case 1:
    printf("Palmeirense \n");
        break;
case 2:
    printf("Corinthiano \n");
        break;
case 3:
    printf("Santista \n");
        break;
case 4:
    printf("Holy Watersense \n");
        break;
default:
    printf("Escolha dentre um dos times \n");
        break;
}



}
