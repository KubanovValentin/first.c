#include <stdio.h>
#include "cs50.h"

int main(void) {
 // string answer = get_string("Как тебя зовут? ");
 //  printf("Привет, %s\n",answer);
{
  int x=get_int("x: ");
  int y=get_int("y: ");

  printf("%i\n",x+y);
  
}

{
  int x=2;
  int y=3;
  printf("%i\n",x+y);
}
  {
    int x=get_int("x: ");
    int y=get_int("y: ");

    if(x<y){
      printf(" x ");
    }
    float z=(float)x/(float)y;
    printf("%f\n",z);
  }
  {
    for(int i=0;i<3;i++){
      printf("myau");
    }
  }
}

