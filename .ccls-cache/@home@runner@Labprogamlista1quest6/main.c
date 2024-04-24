#include <stdio.h>

int main(void) {
  float altura;
  float mult;
  char sexo;

  printf("Digite seu sexo (H ou M) ");
  scanf("%c",&sexo);

  if(sexo == 'H'){
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    mult=(72.7*altura)-58;
    printf("Seu peso ideal é: %f",mult);
  }else if(sexo == 'M'){
    printf("Digite sua altura: ");
    scanf("%f",&altura);
    mult=(62.1*altura)-44.7;
    printf("Seu peso ideal é: %f",mult);
  }else{
    printf("Sexo Inválido");
  }
}