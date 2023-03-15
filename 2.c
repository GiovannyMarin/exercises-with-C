#include <stdio.h>
int main(void){

    float num;

    printf("Ex2 - Digite um numero para testar \n");
    scanf("%f", &num);
    //espere um numero queberado E coloque na variavel num

    if(num < 0){
        printf("menor que zero /n");
    }else if(num > 0){
        printf("maior que zero /n");
    }else if(num == 0){
        printf("igual a zero /n");

    }

}
