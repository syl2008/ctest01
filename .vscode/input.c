#include <stdio.h>
int main(){
    //输入功能
    //getchar方法：接收键盘一个字符
    char ch;
    printf("请输入一个字符：");
    ch = getchar();
    printf("ch = %c\n",ch);
    //scanf方法：接收键盘输入的数据
    int a;
    printf("请输入一个整数：");//此行需额外输出，不可与scanf这行合并
    scanf("%d",&a);
    printf("a = %d\n",a);
    //输入多个值
    int x,y;
    printf("请输入一个整数：");
    scanf("%d,%d",&x,&y);
    printf("x = %d,y = %d,x + y = %d",x,y);
    //没想好
    double w;
    printf("请输入一个小数：");
    scanf("%lf",&w);
    printf("w = %.4f\n",w);

    float j;
    printf("请输入一个小数：");
    scanf("%f",&j);
    printf("j = %.2f\n",j);
}