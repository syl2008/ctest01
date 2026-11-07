#include <stdio.h>
int main(){
    //求1~100的和
    int i = 1,sum = 0;
    do {
    sum += i;
    i++;
    }
    while(i <= 100);
    printf("和是%d\n",sum);
}