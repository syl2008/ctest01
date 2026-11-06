#include <stdio.h>
int main(){
  int num = 1234;
  int thousands = num / 1000;
  int hundreds = (num / 100) % 10;
  int tens = (num / 10) % 10;
  int ones = num % 10;
  int sum = thousands + hundreds + tens + ones;
  printf("%d\n",sum);
  return 0;
}
//该代码实现了一个四位数的各位数字求和功能。程序将一个四位数拆分为千位、百位、十位和个位，然后将这些数字相加，最后输出它们的和。例如，如果输入的数字是1234，程序将输出10（1 + 2 + 3 + 4 = 10）。