//辅助轮版本
#include<stdio.h>
#include<cs50.h>

int main(void){

    int n = get_int("n: ");
    printf("n: %i\n", n);

}

//去掉辅助轮版本
#include<stdio.h>

int main(void){

    printf("n: ");
    scanf("%d", &n);
    printf("n: %d\n", n);

}


#include<stdio.h>

int main(void){

    char *s;
    printf("s: ");
    scanf("%s", s);
    printf("s: %s\n", s);

}//它不知道有多少内存空间给这个字符串用，未初始化s，没有malloc分配空间
//用户输入的内容会被放到一个随机的内存位置（这是个垃圾值）