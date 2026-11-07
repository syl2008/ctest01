#include <stdio.h>
int max(int a,int b){
    return a>b?a:b;
}
void add(int *a){
    *a = *a + 1;//*是取值符，表示取a指针所指向的值
}
void add2(int *a,int len){
    /*int len = sizeof(a)/sizeof(a[0]);
    printf("数组长度: %d\n",len);
    a接受的是数组首元素的地址，所以sizeof(a)是4，sizeof(a[0])是4，len=1
    这里的len是错误的，因为传递的是数组首元素的地址。
    正确做法：在 main 里用 sizeof(a)/sizeof(a[0]) 算好长度，作为参数 len 传进来。*/
    
    for(int i = 0;i < len;i++){
        a[i] = a[i] + 1;//or (a[i] += 1;)
    }
}
int main(){
    int a[5];
    printf("请输入5个整数:\n");
    for(int i = 0;i < 5;i++){
        scanf("%d",&a[i]);//依次对数组的每个元素进行赋值
    }
    //输出接收的5个整数
    printf("您输入的5个整数是:\n");
    for(int i = 0;i < sizeof(a)/sizeof(a[0]);i++){
        printf("%d ",a[i]);//依次输出数组的每个元素
    }
    printf("\n");
    //将数组中的每一个元素传递到函数中
    int maxValue = 0;
    for(int i = 0;i < sizeof(a)/sizeof(a[0]);i++){
        maxValue = max(maxValue,a[i]);
    }
    printf("\n数组中的最大值是: %d\n", maxValue);



    //将数组中的每一个元素传递到函数中进行加1操作
    for(int i = 0;i < sizeof(a)/sizeof(a[0]);i++){
        add(&a[i]);//传递数组元素的地址。（&是取地址符（附加知识点））
    }
    //输出加1后的数组元素
    printf("传递数组元素加1后是:\n");
    for(int i = 0;i < sizeof(a)/sizeof(a[0]);i++){
        printf("%d ",a[i]);
    }
    printf("\n");



    //将整个数组传递到函数中进行加1操作(数组名就是数组首元素的地址)
    add2(a,sizeof(a)/sizeof(a[0]));
    //输出加1后的数组元素
    printf("传递数组元素加1后是:\n");
    for(int i = 0;i < sizeof(a)/sizeof(a[0]);i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}