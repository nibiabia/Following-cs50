#include<stdio.h>
#include<string.h>

int main(){

    char name[50];
    char number[100];
    FILE *file = fopen("phonebook.csv", "a");
    if(file == NULL){//错误检查，因为可能会遇到文件打不开 或者拼写错误等问题

       return -1;

    }
    printf("name: ");
    scanf("%49s", name);
    printf("number: ");
    scanf("%99s", number);
    fprintf(file, "%s,%s\n", name, number);
    fclose(file);
    return 0;


}