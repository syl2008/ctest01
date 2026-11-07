#include <stdio.h>
int main(){
  int sum = 0;
  //break与for的结合
  for(int i = 0;i <= 100;i++){
    sum += i;
    //希望累加和超过2000时，退出循环
    if(sum > 2000){
      printf("当sum超过2000时i=\n",i);
      break;
    }
  }
  printf("sum的值是%d\n",sum);
  //与while结合使用
  int i2 = 0;
  int sum2 = 0;
  while (i2 <= 100)
  {
    sum2 += i2;
    if (sum2 >= 2000)
    {
      printf("当i2 = %d 时sum2 >= 2000\n",i2);
      break;
    }
    i2++;
  }
  printf("sum2的是：%d\n",sum2);
  //与do_while结合
  int i3 = 0;
  int sum3 = 0;
  do
  {
    sum3 += i2;
    if(sum3 >= 2000){
      printf("当i3 = %d 时sum2 >= 2000\n",i3);
      break;
    }
    i3++;
  }while (i3 <= 100);
  printf("sum3的是：%d\n",sum3);
  //死循环搭配break
  int num = 100;
  while (1)
  {
    if (num > 200)
    {
      break;
    }
    num += 10;
  }
  //如果知道使用次数，可以使用退出循环，如果不知道次数，可以使用死循环，但要搭配break使用。

}
