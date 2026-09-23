#include <stdio.h>
int main(){
    int a = 10;
    int b = 0;
    int c = 5;
    int max = a > b ? a : b;
    printf("max = %d\n",max);
    int max1 = a > b ? a > c ? a : c : b > c ? b : c;//写时可加括号标注区分
    printf("max1 = %d\n",max1);



    return 0;
}