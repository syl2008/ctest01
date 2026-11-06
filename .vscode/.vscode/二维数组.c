#include <stdio.h>
int main(){
    //初始化二维数组
    int arr1[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};//完全赋值
    int arr2[2][2] = {1,2,3,4};//完全赋值+自动分组
    int arr3[3][4] = {{1},{2},{3}};//部分赋值
    int arr4[3][4] = {0};//初为0
    int arr5[][4] = {1,2,3,4,5,6,7,8,9,10,11,12};//根据内容自动分配
    //注意：列数不能自动分配，必须指定列数，否则编译报错
    //访问元素
    printf("%d\n",arr1[1][1]);//输出6
    printf("%d\n",arr3[2][0]);//输出3
    printf("%d\n",arr5[2][3]);//输出12

    int length = sizeof(arr5)/sizeof(arr5[0]);//计算二维数组的行数，sizeof(arr5)是指48字节，sizeof(arr5[0])是指第一行总共占16字节，48/16=3行
    printf("行数: %d\n", length);
    //遍历二维数组
    for(int i = 0; i < length; i++){
        for(int j = 0; j < 4; j++){
            printf("%d ", arr5[i][j]);
        }
        printf("\n");
    }
    //进阶写法
    int cols = sizeof(arr5[0])/sizeof(arr5[0][0]);//计算二维数组的列数，sizeof(arr5[0])是指第一行总共占16字节，sizeof(arr5[0][0])是指第一行第一个元素占4字节，16/4=4列
    printf("列数: %d\n", cols);
    for (int i = 0; i < length; i++){
        for (int j = 0; j < cols; j++){
            printf("%d ", arr5[i][j]);
        }
        printf("\n");
    }
}
