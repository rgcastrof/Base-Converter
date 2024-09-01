#include "conversions.h"
#include <stdio.h>

void binaryConv(int *a) {

  if (*a == 0) {
    printf("0");
  }

  int cont = 0, res = 0;
  int result[32];

  while (*a > 0) {
    res = *a % 2;
    *a = *a / 2;
    result[cont] = res;
    
    cont++;
  }

  printf("\n  ");
  for (int i = cont - 1; i >= 0; i--) {
    printf("%d", result[i]);
  }
  printf("\n\n> ");
}

void octalConv(int *a) {

  if (*a == 0) {
    printf("0");
  }

  int cont = 0, res = 0;
  int result[32];

  while (*a > 0) {
    res = *a % 8;
    *a = *a / 8;
    result[cont] = res;
    
    cont++;
  }

  printf("\n  ");
  for (int i = cont - 1; i >= 0; i--) {
    printf("%d", result[i]);
  }
  printf("\n\n> ");
}

void hexadecimalConv(int *a) {

  if (*a == 0) {
    printf("0");
  }

  int cont = 0;
  char hexDigits[] = "0123456789ABCDEF";
  char result[32];

  while (*a > 0) {
    result[cont++] = hexDigits[*a % 16];
    *a = *a / 16;
  }

  printf("\n  ");
  for (int i = cont - 1; i >= 0; i--) {
    printf("%c", result[i]);
  }
  printf("\n\n> ");
}
