#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int hundreds = n / 100;
    int tens = (n / 10) % 10;
    int ones = n % 10;

    int reverse = ones * 100 + tens * 10 + hundreds;
    printf("%d\n", reverse);
    return 0;
}//该代码实现了一个三位数的反转功能。用户输入一个三位数，程序将其拆分为百位、十位和个位，然后重新组合成一个新的数字，最后输出这个反转后的数字。例如，如果用户输入123，程序将输出321。