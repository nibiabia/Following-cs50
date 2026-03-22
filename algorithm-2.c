打印马里奥金字塔
//Iteration 迭代 
#include<cs50.h>
#include<stdio.h>

void draw(int n);

int main(){

    int height = get_int("Height :");
    draw(height);
    return 0;

}

void draw(int n){

    for(int i = 0;i < n;i++){
        for(int j = 0;j < i + 1;j++){
            printf("#");
        }
        printf("\n");
    }
    

}

//recursion 递归
void draw(int n){

    if(n <= 0){
        return;//基础情况 base cases
    }
    draw(n-1);//如果我们想画一个高度为n的金字塔，可以先画一个高度为n-1的金字塔
    for(int i = 0;i < n;i++){
        printf("#");
    }
    printf("\n");
//通过这种有点绕的方式，不是直接回答问题，而是把任务往后推说：不行，你先去把这个做了。
//只要你每次把问题缩小一点，减小一层，使用相同的算法，最终从逻辑上就能自动解决了
}