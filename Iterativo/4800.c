#include<stdio.h>
void main(){
         int n,i,n1,ret=1;
         printf("Digite um valor:");
         scanf("%d",&n);
         for(i=0;i<9;i++){
                  
                  printf("Digite um valor:");
                  scanf("%d",&n1);
                  if(n1<n){
                           ret=0;
                  }
                  n=n1;
                  
         }
         printf("Retorno:%d",ret);
         

}