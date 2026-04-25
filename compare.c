#include<stdio.h>
#include<cs50.h>

int main(){

    char *s;
    char *t;
    s = get_string("s: ");
    t = get_string("t: ");
    if(s == t){
        printf("Same\n");
    }else{
        printf("Different\n");
    }
    return 0;
//即使s和t都为"HI!"，输出还是Different，因为比较的是两个地址
//若要比较两个字符串是否相等，应该用strcmp(s, t) #include<string.h>
}
