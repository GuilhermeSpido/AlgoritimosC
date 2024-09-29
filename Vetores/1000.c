#include <stdio.h>
#define N 10
void main()
{
  int i;
  float vet[N],m,s;
  
  for(i=0;i<N;i++){
      printf("Digite o valor:\n");
      scanf("%f",&vet[i]);
      
    }
  s=0;
  for(i=0;i<N;i++){
           s+=vet[i];
  }
  m=s/N ;

  for(i=0;i<N;i++){
           if(vet[i]>m){
                    printf("%.2f\n",vet[i]);
           }
  }
}