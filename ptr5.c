#include <stdio.h>
int main(){
   int* ptr=NULL;
   if(ptr==NULL){
     printf("ptr is null\n");
   } int x=45;
     ptr=&x;
     printf("%d\n",*ptr);
     return 0;
}

