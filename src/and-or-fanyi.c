#include <stdio.h>
int main(){
    int x = 1;
    int y = 0;
    printf("x&&x为%d\n",x&&y);
    printf("x||y为%d\n",x||y);
    printf("!x为%d\n",!x);
    //短路运算
    int a = 5;
    int b = 0;
    printf("a = %d,b = %d\n",a,b);
    printf("a < b&&a < ++b %d\n",a < b&&a < ++b);
    printf("a = %d,b = %d\n",a,b);
    printf("a > b||a < ++b %d\n",a > b||a < ++b);
    printf("a = %d,b = %d\n",a,b);
    printf("a < b||a > ++b %d\n",a < b||a > ++b);
    




    return 0;    
}