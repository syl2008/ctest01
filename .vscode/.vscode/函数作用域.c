#include <stdio.h>

void myFunction() {
    int x = 100; // x 仅在 myFunction 内部有效
    printf("函数内部: %d\n", x);
    //此处无法调用main函数中的变量，因为main函数中的变量在myFunction中不可见
}

int main() {
    myFunction();
    myFunction(); // 调用 myFunction，打印 x 的值是可以的
    // 但是printf("%d", x); // 错误！main函数看不见 myFunction 里的 x
    
    return 0;
}