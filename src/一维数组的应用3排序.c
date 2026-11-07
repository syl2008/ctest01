#include <stdio.h>
//一维数组应用：获取长度
int main(){
  //初始化数据
  int arr[] = {1,2,3,4,5,6,7,8,9,10};
  //通过sizeof函数计算数组的长度
  int length = sizeof(arr)/sizeof(arr[0]);//sizeof对应的是占位符是%zu，zu表示无符号整数类型，zd是有符号。
  printf("数组的长度是：%d\n", length);
  printf("原数组数据为：");
  //输出数组数据
  for(int i = 0; i < length; i++){
    printf("%d", arr[i]);
  }
  printf("\n");
  //冒泡排序
  for(int i = 0;i < length-1; i++){//外层循环控制比较的轮数，length-1是因为最后一个元素不需要再比较
    for(int j = 0;j < length-1-i; j++)//内层循环控制每轮比较的次数，length-1-i是因为每轮比较后，最后一个元素已经是最大值，不需要再比较
    {
      if(arr[j] > arr[j+1])//如果前一个元素大于后一个元素，则交换位置
      {
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;

      }
    }
    printf("排序后的数组为：");
    for (int i = 0; i < length;i++){
      printf("%d",arr[i]);
    }
    printf("\n");
  }
}  