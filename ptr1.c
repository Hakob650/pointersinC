#include <stdio.h>
int main(){
   int a=25;
   int* ptr=&a;
   printf("%p\n",&a);
   printf("%p\n",ptr);
   return 0;
}
