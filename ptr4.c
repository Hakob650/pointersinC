#include <stdio.h>
int main(){
     int a=40,b=67;
     printf("before swap: %d %d\n",a,b);
     int* ptr;
     int t=a;
     ptr=&t;
     a=b;
     b=*ptr;
     printf("after swap: %d %d\n",a,b);
     return 0;
}
     
