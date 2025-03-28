#include <stdio.h>
int main(){
   char a=14;
   char* ptr=&a;
   printf("%p\n",ptr);
   ptr++;
   printf("%p\n",ptr);
   return 0;
}
