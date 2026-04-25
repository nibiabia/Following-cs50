//变量存储在内存中的哪个位置
#include<stdio.h>

int main(){

    int n = 50;
    int *p = &n;
    printf("%p\n",p);
//printf("%p",&n);
    

    char *s = "HI!";
    printf("%p\n",s);
    printf("%p\n",&s[0]);
    printf("%p\n",&s[1]);
    printf("%p\n",&s[2]);
    printf("%p\n",&s[3]);



    printf("%s\n",s);

    printf("%c\n",s[0]);//[]语法糖，底层是指针运算
    printf("%c\n",s[1]);
    printf("%c\n",s[2]);
    printf("%c\n",*(s + 1));

    printf("%s\n",s + 1);
    return 0;
}
