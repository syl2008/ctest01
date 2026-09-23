#include <stdio.h>
int main(){
    int num1,num2;
    printf("请输入两个整数：");
    scanf("%d %d",&num1,&num2);

    
    if (num1 > num2){
        printf("max = %d\n",num1);
    }else {
        printf("max = %d\n",num2);
    }
    //也可以用条件运算符————三目运算符如：int max = num1 > num2 ? num1 : num2;再输出
    return 0;
}