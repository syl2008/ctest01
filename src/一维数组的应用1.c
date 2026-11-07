#include <stdio.h>
//一维数组应用：获取长度
int main(){
  //初始化数据
  int arr[] = {1,2,3,4,5,6,7,8,9,10};
  //通过sizeof函数计算数组的长度
  int length = sizeof(arr)/sizeof(arr[0]);//sizeof对应的是占位符是%zu，zu表示无符号整数类型，zd是有符号。
  printf("数组的长度是：%zu\n", length);
  //输出数组数据
  for(int i = 0; i < length; i++){
    printf("arr[]=%d\n", arr[i]);
  }
  printf("\n");
  //最大值
  int max = arr[0];
  for(int i = 1; i < length; i++){
    if(arr[i] > max){
      max = arr[i];
    }
  }
  printf("数组中的最大值是：%d\n", max);
  //最小值
  int min = arr[0];
  for(int i = 1; i < length; i++){
    if(arr[i] < min){
      min = arr[i];
    }
  }
  printf("数组中的最小值是：%d\n", min);
  return 0;
}