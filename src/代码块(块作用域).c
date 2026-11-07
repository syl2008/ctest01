#include <stdio.h>
int main(void){
    //块作用域————代码块作用域，用{}括起来的区域就是一个代码块，代码块中定义的变量只能在该代码块中使用，出了该代码块就不能使用了。
    //在{}内创建的变量，只能在{}内使用，出了{}就不能使用了。
    int num1 = 10;
    printf("num1 = %d\n", num1);
    {
        int num2 = 20;
        printf("num2 = %d\n", num2);
        printf("num1 = %d\n", num1);//仍在代码块中，所以可以使用num1
    }
    /*这里打印printf("num2 = %d\n", num2); //这里会报错，
    因为num2的作用域只在上面的代码块中，出了代码块就不能使用了。*/
    
    if (1){
        int num3 = 30;
        printf("num3 = %d\n", num3);
        printf("num1 = %d\n", num1);//仍在代码块中，所以可以使用num1
    }
    //这里打印printf("num3 = %d\n", num3); //这里会报错，
    //因为num3的作用域只在上面的代码块中，出了代码块就不能使用了。

    for(int i = 0; i < 5; i++){
        int num4 = 40;
        printf("num4 = %d\n", num4);
        printf("num1 = %d\n", num1);//仍在代码块中，所以可以使用num1
    }
}
