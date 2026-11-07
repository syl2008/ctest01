#include <stdio.h>
int main(){
  //需求：输出100~150中的所有的不能被3整除的数，且每五个一行
  int count = 0; //定义计数器
  for (int i = 100; i <= 150; i++)  //循环指定范围
  {
    if(i % 3 == 0){
        continue;  //如果是三的倍数，跳过本次循环，继续下一次循环
    }
    printf("%d ",i);
    count++;
    if (count % 5 == 0)  //每五个数字换一行
    {
        printf("\n");
    }
    
  } //此方法不唯一........
  

}