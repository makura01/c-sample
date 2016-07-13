#include <stdio.h>

char line[100];  // input line
int seven_count; // 7 in a list
int data[5];     // data lits including 3, 7
int three_count; // 3 in a list
int index1;        // list index1

int main() {

  seven_count = 0;
  three_count = 0;
  printf("Enter 5 numbers\n");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d %d %d %d %d", &data[0],&data[1],&data[2],&data[3],&data[4]);
  
  for (index1 = 0; index1 <= 4; ++index1) {
    if (data[index1]==3)
      ++three_count;
    if (data[index1] == 7)
      ++seven_count;
  }
  printf("Three %d Sevens %d\n", three_count , seven_count);
  return (0);
}

