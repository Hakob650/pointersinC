#include <stdio.h>
int main(){
      int a=25,b=56;
      int* ptr=&a;
      printf("%d\n",*ptr);
      *ptr=75;
      printf("%d\n",*ptr);
      return 0;
}
