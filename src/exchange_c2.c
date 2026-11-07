#include <stdio.h>
int main(){
    int i = 6;
    float f = 3.152648f;//小数默认是double类型,d转f是高转低，最后最好标明f
    //sizeof()是一个运算符，返回的是变量或数据类型的字节数
    printf("f的size是:%zu\n",sizeof(f));//%zu是输出size_t类型的格式化符号
    double d = i + f;//int类型的w会被提升为float类型再进行运算,且因为为低转高，所以不用标明d，会自动转为double类型
    printf("d的size是:%zu\n",sizeof(d));
    i = (int)d;//double类型的d会被降低为int类型再赋值给i,所以需要标明d转i
    printf("i的size是:%zu\n值是:%d\n",sizeof(i), i);
    float f2 = 3.152648f;
    printf("f2的值是：转换后%d,不转%f", (int)f2, f2);//f2转为int类型后小数部分会被舍弃

    return 0;
}