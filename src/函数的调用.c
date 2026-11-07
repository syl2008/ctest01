#include <stdio.h>
  int max(int a,int b){
    return a > b ? a : b;
  }
  int sum(int a,int b){
    return a+b;
  }
  int get_num(int a,int b,int c){
    return sum(max(a,b),max(b,c));
  }
void main(){
    int a = 4, b = 5,c = 6;
    int csh1 = max(a,b);
    printf("%d\n",csh1);//普通调用

    int csh2 = max(a,b) + max(b,c);
    printf("%d\n",csh2);//函数嵌套调用

    int csh3 = get_num(a,b,c);
    printf("%d\n",csh3);//函数嵌套调用
}