#include <string.h>
#include <stdio.h>

char first[100]; //last name
char last[100]; //first name
char full_name[200];
int main() {
  strcpy(first, "Steve");
  strcpy(last, "Oualine");
  strcpy(full_name, "Steve");

  strcat(full_name, " ");
  strcat(full_name, last);

  printf("The full name is %s\n", full_name);
  return (0);
}

