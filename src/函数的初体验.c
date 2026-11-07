#include <stdio.h>

void showdate();//函数的声明，如果函数的定义在调用它的函数(main)之后，则必须先声明它
int my_max(int a,int b);//函数的声明

//主函数
int main(){
   showdate();//调用函数
   int csh = my_max(4, 2);//调用函数
   printf("%d\n",csh); 
}
//定义一个没有返回值的函数
void showdate(){
    printf("这个是数据的信息\n");
    printf("输出结束\n");
}
//定义一个有返回值的函数
int my_max(int a,int b){
    return a > b ? a : b;
}