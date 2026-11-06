#include <stdio.h>
//值传递
void swap(int x,int y){
    int temp = x;
    x = y;
    y = temp;
}
//地址传递
void swap1(int *x,int *y){//
    int temp = *x;
    *x = *y;
    *y = temp;
}
void main(){
    int a = 4,b = 2;
    swap(a,b);
    printf("a=%d,b=%d\n",a,b);
    swap1(&a,&b);//通过加&符号传递地址
    printf("a=%d,b=%d\n",a,b);
}