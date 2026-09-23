#include <stdio.h>
int main(){   
  //需求，求1~100以内的和
  int n_num = 0;
  int n_value = 1;
  while (n_value <= 100){
    n_num = n_value + n_num;
    n_value++;
  }
  printf("1~100的和为:%d\n",n_num);
  //while 后的括号里的表达式即循环条件不能为常量，这个值一定可以变成假


}