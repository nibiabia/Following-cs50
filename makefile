# 定义编译器。CS50 默认常用 clang，你也可以改成 gcc
CC = gcc

# 定义编译参数：-Wall 显示所有警告，-g 生成调试信息方便 debug
CFLAGS = -Wall -g

# 默认目标：当你在终端输入 make 时，会默认执行这个目标，编译这俩程序
all: addresses 

# 编译 addresses 的规则
addresses: addresses.c
	$(CC) $(CFLAGS) addresses.c -o addresses


# 清理指令：输入 make clean 删除生成的程序文件
clean:
	rm -f addresses algorithm-2