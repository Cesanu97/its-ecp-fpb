#include <stdio.h>
#include  "define.h"
#include <stdbool.h>

int main() {
  int numbers[SIZE];
    int sumPo=0;
    int sumNe=0;
    int min = 0;
    int max = 0;
    int contatoreP = 0;
    int contatoreN = 0;
    int multi5 =  true;
  
  for (int i = 0; i < SIZE; i++) {
    printf("Numero %d: ", i + 1);
    scanf("%d", &numbers[i]);
  }

  for (int i = 0; i < SIZE; i++) {
    if (numbers[i] > 0) {
      sumPo += numbers[i];
    }else{
      sumNe += numbers[i];
    }
    if (max < numbers[i]) {
      max = numbers[i];
    } else if (min > numbers[i]) {
      min = numbers[i];
    } if ((numbers[i] % 2) == 0) {
      contatoreP++;
    } else {
      contatoreN++;
    } if ((n % 5    ) == 0) {
      multi5 = true;
    }
    
  }

    printf("Numero %d: ", numbers[i]);
    
    
    printf("\n");
    
    
    
    return 0;
}