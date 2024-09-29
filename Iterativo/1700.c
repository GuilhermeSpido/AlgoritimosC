#include<stdio.h>

void main()
{
         int i,n,j,cont;
         n=2;
         j=1;
         while(j<=50){
                  cont=0;
                  for(i=1;i<=n;i++){
                           if(n%i==0){
                                    cont++;
                           }
                  }
                  if(cont==2){
                           printf("Primos:%d\n",n);
                           j++;
                  }
                  n++;
         }

}