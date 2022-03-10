#include <stdio.h>

int main(void) {

  int num;
  
printf("Digite o número correspondente a operação que deseja realizar:\n");
  printf("(1)SOMA\n");
   printf("(2)SUBTRAÇÃO\n");
   printf("(3)MULTIPLICAÇÃO\n");
   printf("(4)DIVISÃO\n");

scanf("%d", &num);

if (num==1){
  printf("Escolha um número:\n");
  float s1;
  scanf("%f" , &s1);
  printf("Escolha outro número:\n");
  float s2;
  scanf("%f" , &s2);
  float soma= s1 + s2;
  printf("O valor da soma é: " "%.2f\n" , soma);
}
  else if(num==2){
    printf("Escolha um número:\n");
  float s1;
  scanf("%f" , &s1);
  printf("Escolha outro número:\n");
  float s2;
  scanf("%f" , &s2);
  float sub= s1 - s2;
  printf("O valor da subtração é: " "%.2f\n" , sub);
}
   else if(num==3){
    printf("Escolha um número:\n");
  float s1;
  scanf("%f" , &s1);
  printf("Escolha outro número:\n");
  float s2;
  scanf("%f" , &s2);
  float m= s1 * s2;
  printf("O valor da multiplicação é: " "%.2f\n" , m);
}
   else if(num==4){
    printf("Escolha um número:\n");
  float s1;
  scanf("%f" , &s1);
  printf("Escolha outro número:\n");
  float s2;
  scanf("%f" , &s2);
  float div= s1 / s2;
  printf("O valor da divisão é: " "%.2f\n" , div);
}
  else{
    printf("Comando Inválido!!!");
  }
  




  
  return 0;
}