#include<stdio.h>
void main()
{
         int i,j,soma,n;
         j=1;
         
         while(j<=10){
                  printf("Digite o valor:\n");
                  scanf("%d",&n);
                  soma=0;
                  for(i=1;i<n;i++){
                           if(n%i==0){
                                    soma+=i;
                           }
                  }
                  if(soma==n){
                           printf("%d NUMERO PERFEITO\n",n);
                  }
                  j++;
         }

}