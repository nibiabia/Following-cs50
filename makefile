# 编译器设置，CS50 通常推荐使用 clang，如果在本地 Windows 你也可以换成 gcc
CC = clang

# 编译选项：开启常见警告并使用 C11 标准
CFLAGS = -Wall -Wextra -Werror -std=c11

# 链接库：如果你使用了 CS50 的特殊函数 (如 get_string)，请务必取消下面这行的注释！
# LDLIBS = -lcs50

# 【优化点1】自动匹配：获取当前目录下所有的 .c 文件，不用再手动一个个写了
SRCS = $(wildcard *.c)

# 将 .c 后缀替换为空，生成目标可执行文件列表
TARGETS = $(SRCS:.c=)

# 默认目标：输入 make 时执行，编译所有文件
all: $(TARGETS)

# 模式规则：教 make 如何通过 .c 文件生成对应的可执行文件
%: %.c
# 【极其重要】下面这一行开头必须是一个 Tab 键（制表符），绝对不能是几个空格！
	$(CC) $(CFLAGS) $< -o $@ $(LDLIBS)

# 清理规则：输入 make clean 时执行，删除所有编译出的可执行文件
clean:
# 【极其重要】下面这一行开头同样必须是一个 Tab 键！
	rm -f $(TARGETS)