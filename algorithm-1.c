//创建一个电话簿程序，查找某个人的电话号码
#include<cs50.h>
#include<stido.h>
#include<string.h>

typedef struct{

    string name;
    string number;

} person;

int main(void){
    person people[3];

    people[0].name = "李婷";
    people[0].number = "(+86) 125-4845-6811";

    people[1].name = "李c婷";
    people[1].number = "(+86) 183-2507-6124";

    people[2].name = "李t婷";
    people[2].number = "(+86) 456-789-0000";

    string name = get_string("Nmae: ");
    for(int i = 0; i < 3; i++){
        if(strcmp(name,people[i].name) == 0){
            printf("Found: %s\n",people[i].number);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}//我们现在实现的更接近电话簿的功能，虽然实现的是线性搜索，而不是二分查找