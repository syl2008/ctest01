#include <stdio.h>
int main() {
  //初始化，一维数组方式
  //方式一：指定空间大小，并全部赋值
  int arr1[10] = {1, 2, 3, 4, 5,6, 7, 8, 9, 10};
  //方式二：指定空间大小，部分赋值，未赋值的元素默认初始化为0
  int arr2[10] = {1, 2, 3}; 
  //方式三：指定空间大小，不赋值，所有元素默认初始化为0
  int arr3[10];
  //方式四：不指定空间大小，编译器根据初始化元素个数自动计算空间大小
  int arr4[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  
  //输出数组
  printf("arr1的值: ");
  for (int i = 0; i < 10; i++) {
    printf("%d ", arr1[i]);
  }
  printf("\n");
  
  printf("arr2的值: ");
  for (int i = 0; i < 10; i++) {
    printf("%d ", arr2[i]);
  }
  printf("\n");

  printf("arr3的值: ");
  for (int i = 0; i < 10; i++) {
    printf("%d ", arr3[i]);
  }
  printf("\n");

  printf("arr4的值: ");
  for (int i = 0; i < 6; i++) {
    printf("%d ", arr4[i]);
  }
  printf("\n");
  return 0;
}