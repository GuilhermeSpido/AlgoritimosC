#include<stdio.h>
void main()
{
         int v[20],i,j,k[20],cont;

         for(i=0;i<20;i++)
         {
                  printf("Digite o valor:\n");
                  scanf("%d",&v[i]);
         }

         for(i=0;i<20;i++)
         {
                  cont=0;
                  for(j=0;j<20;j++)
                  {
                           if(v[i]>v[j]){
                                    cont++;
                           }
                  }
                  k[cont]=v[i];
                  
         }
         for(i=0;i<20;i++)
         {
                  printf("Vetor:%d\n",k[i]);
         }

}