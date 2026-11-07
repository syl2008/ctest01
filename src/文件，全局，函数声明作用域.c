#include <stdio.h>
//文件作用域
static int x = 10; // x 在整个文件中有效，但在其他文件中不可见
void myFunction() {
    printf("函数内部: %d\n", x); // 可以访问文件作用域的变量 x
}
void main(){
    myFunction(); // 调用 myFunction，打印 x 的值是可以的
    printf("函数外部: %d\n", x); // 可以访问文件作用域的变量 x 
}
//全局作用域相似
/*函数声明较为简单(以前写过相关的代码)，
函数声明可以放在文件的任何位置，函数定义也可以放在文件的任何位置，
只要在调用函数之前有函数声明即可*/
