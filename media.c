#include <stdio.h>
#include <stdlib.h>

int main(){
  
  int n1, n2, n3, media;
  
  printf("Digite o numero: ");
  scanf("%d', &n1);
  printf("Digite o numero: ");
  scanf("%d', &n2);
  printf("Digite o numero: ");
  scanf("%d', &n3);
  media = (n1 + n2 + n3) / 3;
        
  printf("Sua media e: %d", media);
        
  if(media <= 5){
    printf("O aluno esta reprovado!")
  } else if(media > 5 && media <= 7){
    printf("O aluno está de recuperacao.");
  } else{
    printf("O aluno passou!");
  }
  printf("\n");
  return 0;
  }
