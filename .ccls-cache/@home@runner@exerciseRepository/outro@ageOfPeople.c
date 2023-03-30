#include <stdio.h>
/*
Faça um programa que receba a idade de 15 pessoas e que calcule e mostre:
a) A quantidade de pessoas em cada faixa etária;
b) A percentagem de pessoas na primeira e na última faixa etária, com relação ao total de pessoas: 

Até 15 anos = A
De 16 a 45 anos = B
De 46 a 60 anos = C
Acima de 61 anos = D
*/

int main(void){

  int idade = 0;
  int a,b,c,d = 0;

  for(int i = 0; i < 15; i ++){
    printf("Digite sua idade: ");
    scanf("%d ", &idade);

    if(idade >= 0 || idade <= 15){
        a ++;
    }
    else if(idade >= 16 || idade <= 45){
      b++;
    }else if (idade >= 46 || idade <= 60){
      c++;
    }else{
      d++;
    }
  }
  
  return 0;
}