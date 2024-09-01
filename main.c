#include <stdio.h>
#include <string.h>
#include "conversions.h"

void runConverter(int system, char input[100]) {

  while (1) {

    printf("Menu: \n");
    printf("1. Binary\n"); 
    printf("2. Octal\n"); 
    printf("3. Hexadecimal\n"); 
    printf("4. Exit\n\n> ");
    scanf("%d", &system);
    while (getchar() != '\n');

    if (system != 1 && system != 2 && system != 3 && system != 4) {
      printf("\n  Invalid input.\n\n");
      continue;
    } else if (system == 4) {
      break;
    } else {

      switch (system) {

        case 1:
          printf("Binary Conversion: Type a number or 'exit' to quit.\n\n> ");
          while (1) {
            fgets(input, sizeof(&input), stdin);
            input[strcspn(input, "\n")] = '\0';

            if (strcmp(input, "exit") == 0) {
              break;
            }
            
            int number;
            if (sscanf(input, "%d", &number) == 1) {
              binaryConv(&number);
            } else {
              printf("\n  Invalid input.\n\n> ");
            }
          }
          break;
        case 2:
          printf("Octal Conversion: Type a number or 'exit' to quit.\n\n> ");
          while (1) {
            fgets(input, sizeof(&input), stdin);
            input[strcspn(input, "\n")] = '\0';

            if (strcmp(input, "exit") == 0) {
              break;
            }
            
            int number;
            if (sscanf(input, "%d", &number) == 1) {
              octalConv(&number);
            } else {
              printf("\n  Invalid input.\n\n> ");
            }
          }
          break;
        case 3:
          printf("Hexadecimal Conversion, Type a number or 'exit' to quit.\n\n> ");
          while (1) {
            fgets(input, sizeof(&input), stdin);
            input[strcspn(input, "\n")] = '\0';

            if (strcmp(input, "exit") == 0) {
              break;
            }
            
            int number;
            if (sscanf(input, "%d", &number) == 1) {
              hexadecimalConv(&number);
            } else {
              printf("\n  Invalid input.\n\n> ");
            }
          }

          break;
      }
    }
  }
}

int main() {
  
  int sys = 0;
  char in[100];

  runConverter(sys, in);

  return 0;
}
