#include <stdio.h>
#include "header\tennisti.h"


int main(){

  int a = 5;
  int b = 3;
  int c = 8; 

  printf("%d\n",sizeof(a));
  printf("%d\n",sum(a,b));

  if(maggioreDeiTre(a,b,c)==a){
    printf("il maggiore dei tre -> a = %d",a);
  }else if(maggioreDeiTre(a,b,c)==b){
    printf("il maggiore dei tre -> b = %d",b);
  }else{
    printf("il maggiore dei tre -> c = %d",c);
  }


  return 0;
}