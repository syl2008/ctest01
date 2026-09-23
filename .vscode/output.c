#include <stdio.h>

int main() {
    //使用putchar函数输出字符
    char a = 'A';
    char h = 'h';
    char i = 'i';

    putchar('h');putchar('a');putchar('i');
    //使用printf函数输出字符
    printf("printf的功能");
    printf("\n");
    int a2 = 65;
    printf("%d\n",a2);
    printf("a2的十进制是:%d\n",a2);
    //以下是格式化的功能
    printf("a2的八进制是:%o\n",a2);
    printf("a2的十六进制是:%x\n",a2);
    printf("a2的无符号十进制是:%u\n",a2);
    printf("a2的字符表示是:%c\n",a2);
    printf("a2的浮点表示是:%f\n",a2);
    //显示形式
    printf("显示占用的空间：%zu\n", sizeof("测试字符串"));
    //浮点数
    double d = 648.0;
    printf("浮点类型输出:%f\n", d);
    printf("浮点类型，指定两位小数输出：%.2f\n", d);
    printf("浮点类型，科学计数法输出：%e\n", d);
    //显示正负号
    int a3 = 123456;
    printf("a3的十进制是:%+d\n", a3);
    printf("a3的十进制是:%-d\n", a3);
    //左对齐
    printf("a3的左对齐输出:%-d\n", a3);
    //设置显示宽度
    printf("a3的宽度输出:%10d\n", a3);
}