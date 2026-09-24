#include <stdio.h>
int main(){
    /*
       1 1 1 1 1
       2 2 2 2 2
       3 3 3 3 3    
       4 4 4 4 4
       5 5 5 5 5
    */
    //想要输出以上内容
    //可以用
    /*
    for(int i = 1;i <= 5;i++){
      printf("%d %d %d %d %d\n",i,i,i,i,i);
    }
    */
    //但嵌套更好，需重复两次以上，考虑嵌套
    for(int i = 1;i <= 5;i++){//控制行的内容
        for(int j = 1; j <= 5; j++){//控制列的内容
            printf("%d",i);
        }
        printf("\n");
    }          
    //输出乘法表
    for(int i = 1;i<=9;i++) {
        for(int j = 1;j <= i;j++) {
            printf("%d*%d=%d",j,i,i*j);
        }
        printf("\n");
    }

    return 0;
}
