#include<stdio.h>
#include<stdlib.h>
#include"HH_constants.h"

int main(void){
  printf("constants of membrane capacitance: %f\n",ci);
  printf("constants of gA1: %f\n ",gA1);

  for (int i=0;i<3;i++) printf("IA_in[%d]: %f ",i,IA_in[i]);
  printf("\n");
  return EXIT_SUCCESS;
}
