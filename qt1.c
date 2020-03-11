#include <stdio.h>

int main() {
  int vet[5],cont,i,pos;

  for(i=0;i<5;i++){
    printf("Insira um valor no vetor: ");
    scanf("%d",&vet[i]);

    if(cont<vet[i]){
      pos=i;
      cont=vet[i];
    }
  } 

  printf("%d e %d",cont,pos);

  return 0;
}
