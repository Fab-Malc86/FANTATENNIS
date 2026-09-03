#include <stdio.h>




int sum (int x, int y){

  return x + y;

}


int maggioreDeiTre(int x, int y, int z){
  
  int maggiore;

  if(x>y){
    maggiore=x;
  }else{
    maggiore=y;
  }

  if(maggiore<z){
    maggiore=z;
  }

  return maggiore;


}

