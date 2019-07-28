#include <stdio.h>
int main(void)
{
  for (int i = 5; i>0; i--) {
    for (int k = 0; k < i-1; k++) {
      printf(" ");
    }
    for (int j = 5; j>= i; j--) {

      printf("* ");
    }
    printf("\n");
  }
}
