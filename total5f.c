#include <stdio.h>

int total;
int current; //user specified
int counter; //counter of while sequence

char line[80];

int main(){
  total = 0;

  counter = 0;
  for (counter = 0; counter < 5; ++counter) {
    printf("Number? ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &current);
    total += current;
  }
  printf("The grand total is %d\n", total);
  return (0);
}

