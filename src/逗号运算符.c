#include <stdio.h>
int main(){
    int a = 1;
    int b = 2;
    int c;
    c = a * 2,b * 3;//逗号的运算优先级低于“=”这个赋值运算符
    //所以看作c = (a * 2),b * 3
    printf("%d\n",c);
    //逗号运算符其一用法
    int x,y,z;
    x = 1,y = 2,z = 3;//比一行行赋值快
    printf("%d %d %d\n",x,y,z);
    int i = 10;
    int n = (i++,i++,i++,i++);//括号提升优先级，什么++是先算后加
    //所以是10，11，12，13  所以退一位是12
    printf("%d\n",n);


    return 0;
}