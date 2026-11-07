#include <stdio.h>
#include <string.h>
int main(){
    //创建字符数组
    char a1[5] = {'h', 'e', 'l', 'l', 'o'};
    /*字符数组后面没有加\0，
    且空间不够(\0也占一个),
    系统不能自动加\0,所以是乱码*/
    char a2[6] = {'h', 'e', 'l', 'l', 'o', '\0'};
    char a3[6] = {'h', 'e', 'l', 'l', 'o'};
    /*如果没有\0，系统不会自动加\0，
    (前提是空间足够)*/
    char a4[10] = {'h', 'e', 'l', 'l', 'o'};
    char a5[] = {'h', 'e', 'l', 'l', 'o'};
    /*不指定数组长度，系统会自动计算长度，
    (不加\0的情况下)，但还是会乱码*/
    char a6[] = {'h', 'e', 'l', 'l', 'o', '\0'};
    char a7[] = "hello";//开发者常用的方式，系统会自动加\0
    //输出a1到a7的内容
    printf("a1的值: %s\n", a1);
    printf("a2的值: %s\n", a2);
    printf("a3的值: %s\n", a3);
    printf("a4的值: %s\n", a4);
    printf("a5的值: %s\n", a5);
    printf("a6的值: %s\n", a6);
    printf("a7: %s\n", a7);
    //输出a1到a7的长度
    printf("a1的长度: %zd\n", sizeof(a1));
    printf("a2的长度: %zd\n", sizeof(a2));
    printf("a3的长度: %zd\n", sizeof(a3));
    printf("a4的长度: %zd\n", sizeof(a4));
    printf("a5的长度: %zd\n", sizeof(a5));
    printf("a6的长度: %zd\n", sizeof(a6));
    printf("a7的长度: %zd\n", sizeof(a7));
    //测试字符长度的函数strlen()
    int len7 = strlen(a7);
    printf("a7的字符长度: %d\n", len7);
    //该函数strlen()是计算字符串的长度，遇到\0就结束计算
}    