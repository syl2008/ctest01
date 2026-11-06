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
  //逆序
  for(int i = 0;i < length/2; i++){//循环次数为数组长度的一半，所以length/2
    int temp = arr[i];//定义一个临时变量temp，存储当前元素的值(此处括号内的i是当前元素的索引值)
    arr[i] = arr[length-1-i];//对应转化的后一个元素为长度减去当前前一个元素的索引值再减一
    arr[length-1-i] = temp;
  }
  printf("逆转后的数组数据为：");
  //输出逆序后的数组数据
  for(int i = 0; i < length; i++){
    printf("%d", arr[i]);
  }
  printf("\n");
}  