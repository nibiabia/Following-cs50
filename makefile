# 编译器设置，CS50 通常推荐使用 clang，你也可以换成 gcc
CC = clang

# 编译选项：开启常见警告
CFLAGS = -Wall -Wextra -Werror -std=c11

# 如果你需要使用 cs50 的库 (比如 get_string)，请取消下面这行的注释
# LDLIBS = -lcs50

# 自动获取当前目录下所有的 .c 文件
SRCS = algorithm-2.c addresses.c compare.c copy.c garbage.c

# 将 .c 后缀替换为空，生成目标可执行文件列表
TARGETS = $(SRCS:.c=)

# 默认目标：输入 make 时执行，编译所有文件
all: $(TARGETS)

# 模式规则：教 make 如何通过 .c 文件生成对应的无后缀可执行文件
%: %.c
	$(CC) $(CFLAGS) $< -o $@ $(LDLIBS)

# 清理规则：输入 make clean 时执行，删除所有编译出的可执行文件
clean:
	rm -f $(TARGETS)