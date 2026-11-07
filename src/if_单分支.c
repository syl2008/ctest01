#include <stdio.h>
int main(){
    //用户输入一个数字，判断是否在1-100之间
    int csh;
    printf("请输入一个数字：");
    scanf("%d",&csh);
    //判断
    if (csh >= 1 && csh <= 100){

        printf("Right\n");//printf前的缩进在c语言中有无都行
    }
    printf("程序结束\n");
    return 0; 
    
}