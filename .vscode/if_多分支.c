#include <stdio.h>
int main(){
    char ch;
    printf("请输入一个字符");
    ch = getchar();
    //判断
    if (ch <= 31 || ch == 127){
        printf("控制字符\n");
    }else if(ch >= '0' && ch <= '9'){
        printf("数字字符\n");
    }else if(ch >= 'a' && ch <= 'z'){
        printf("小写字符");
    }else if(ch >= 'A' && ch <= 'Z'){
        printf("大写字符");
    }else {
        printf("其他字符");
    }   
}//也可以用单分支