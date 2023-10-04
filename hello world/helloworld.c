#include <stdio.h>

int main()
{
	int num1 = 0;//声明变量需要在代码块开始处
	int num2 = 0;
	int sum = 0;
	printf("hello world\n");//%d 整形 %c 字符 %f 小数 %p 以地址的形式打印 %x 16进制数字
	printf("long = %d\n", sizeof(long));
	printf("short = %d\n", sizeof(short));
	printf("输入数字并按下enter来做加法\n");
	scanf_s("%d%d", &num1, &num2);//scanf_s不具有跨平台性   scanf通用，不安全   在第一行使用  #define _CRT_SECURE_NO_WARNINGS 1  来解决
	sum = num1 + num2;
	printf("和 = %d\n", sum);
	return sum;
}