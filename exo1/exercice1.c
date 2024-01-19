#include <stdio.h>

const int SIZE = 100;

int pascal(int i,int j){
  if (j == 0 || j==i) {
    return 1;
  }
  return pascal(i-1,j)+pascal(i-1,j-1); 
}



int main(int argc, char *argv[])
{

  printf("1\n");
  for (int c = 1; c <= SIZE; c++) {
    for (int j = 0; j <= c; j++) {
      printf("%d ",pascal(c, j)) ;
    }
    printf("\n");
  }
  return 0;
}
