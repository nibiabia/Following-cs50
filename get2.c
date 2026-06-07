
#include<stdio.h>

int main(void){

    char *s;
    printf("s: ");
    scanf("%s", s);
    printf("s: %s\n", s);

}//它不知道有多少内存空间给这个字符串用，未初始化s，没有malloc分配空间
//用户输入的内容会被放到一个随机的内存位置（这是个垃圾值）