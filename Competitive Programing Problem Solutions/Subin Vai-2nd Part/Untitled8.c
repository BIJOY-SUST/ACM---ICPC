#include<stdio.h>
int main(){
    int x=100;
    int *p = NULL;
    printf("Value of x: %d\n",x);
    p=&x;
    printf("Value of *p:%p %d\n",p,*p);

}
