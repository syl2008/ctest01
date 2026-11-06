#include <stdio.h>
int main(){
    int i = 0,j = 0;
    for (;i < 5;){
        j += 2;
        printf("i的值是%d,j的值是%d\n",i,j);
        i++,j++;
        //i++,j++也可以放for后面的括号内在i <= 5后
    }
}