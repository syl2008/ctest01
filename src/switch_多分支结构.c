#include <stdio.h>
int main(){
    int week_days;
    printf("请输入一个整数1~5:");
    scanf("%d",&week_days);
    switch(week_days){
        case 1:
          printf("Monday\n");
          break;
        case 2:
          printf("Tuseday\n");
          break;
        case 3:
          printf("Wednesday\n");
          break;
        case 4:
          printf("Thursday\n");
          break;
        case 5:
          printf("Friday\n");
          break;
        default:
          printf("输出错误");
          break; //default不在最后时效果一样，因为程序是看全部的       

    }


}