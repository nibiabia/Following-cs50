#include<stdio.h>
#include<cs50.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>

int main(){

    char *s = get_string("s: ");//输入hi!
    char *t = s;

    t[0] = toupper(t[0]);

    printf("s: %s\n",s);//输出Hi!
    printf("t: %s\n",t);//输出Hi!

    return 0;
}



int main(){

    char *s = get_string("s: ");//输入hi!
    char *t = malloc(strlen(s) + 1);//此时里面都还是垃圾值
    for(int i = 0, n = strlen(s);i <= n;i++){
        t[i] = s[i];
    }
    t[0] = toupper(t[0]);
    printf("s: %s\n",s);//输出hi!
    printf("t: %s\n",t);//输出Hi!

    return 0;

}


//防御性编程：添加上错误检查
int main(){

    char *s = get_string("s: ");
    char *t = malloc(strlen(s) + 1);
    if(t == NULL){
        return -1;
    }
    strcpy(t, s);//直接调用strcpy()函数复制
    if(strlen(t) > 0){//用户有可能输入空字符串，长度为0，大写不了
        t[0] = toupper(t[0]);
    }
    printf("s: %s\n", s);//输出hi!
    printf("t: %s\n", t);//输出Hi!


}