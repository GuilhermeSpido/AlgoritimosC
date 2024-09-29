#include<stdio.h>

void main()
{
         int i,j,aux,X[10];

         for(i=0;i<10;i++)
         {
                  printf("Digite o valor:\n");
         }

         for(i=0;i<9;i++){
                  
         
         for(j=0;j<9;j++)
         {
                  if(X[j] > X[j+1])
                  {
                           aux=X[j];
                           X[j]=X[j+1];
                           X[j+1]=aux;
                  }
         }
         }
         for(i=0;i<9;i++)
         {
                  printf("%d\n",X[i]);
         }
         
}