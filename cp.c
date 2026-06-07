#include<stdio.h>
#include<stdint.h>

typedef uint8_t BYTE;//定义一个字节BYTE：无符号8位整数

int main(int argc, char *argv[]){
    
    FILE *src = fopen(argv[1], "rb");//读取二进制文件
    FILE *dst = fopen(argv[2], "wb");//写入二进制文件
    BYTE b;//创建临时变量b
    while(fread(&b, sizeof(b), 1, src) != 0){//从源文件中逐个字节读取存储到b

        fwrite(&b, sizeof(b), 1, dst);//通过临时变量b 逐个字节地写入目标文件

    }//即使没有加一操作，也没有显式的for循环
    // ，这些文件读取函数有点像youtube或nexflix视频的播放方式
    //一旦开始读取数据，就像看视频一样，读取位置会自动从左向右推进，
    //所以每读取一个字节，文件就会记录当前的读取位置
    
    fclose(dst);
    fclose(src);

}