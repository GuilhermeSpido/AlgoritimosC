#include<stdio.h>

void main()
{
         int i,n,cont,acho,p;
                  
         printf("Digite um valor:\n");
         scanf("%d",&n);
         acho=0;
         p=n+1;
         while(acho==0){
                  cont=0;
                  for(i=1;i<=p;i++){
                           if(p%i==0){
                                    cont++;
                           }
                  }
                  if(cont==2){
                           printf("Primo:%d",p);
                           acho=1;
                  }
                  p++;
         }
        

}