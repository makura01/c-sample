#include <stdio.h>
#include <string.h>

char first[100];
char last[100];
char full[200];

int main() {
  printf("Enter First Name: ");
  fgets(first, sizeof(first), stdin);
  first[strlen(first) - 1] = '\0';

  printf("Enter last  Name: ");
  fgets(last, sizeof(last), stdin);
  last[strlen(last) - 1] = '\0';
  
  strcpy(full, first);
  strcat(full, " ");
  strcat(full, last);
  printf("The name is %s\n", full);
  return (0);

}
