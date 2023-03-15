#include <stdio.h>
int main(void){

    float num;

    printf("Ex1 - Digite um numero para testar \n");
    scanf("%f", &num);
    //espere um numero queberado E coloque na variavel num

    if(num > 0){
        printf("maior que zero \n");
    }else{
        printf("menor que zero \n");
    }

}
