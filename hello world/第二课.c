//常量
//字面常量    const修饰的常变量     #define定义的标识符常量     枚举常量

#include <stdio.h>
#define abc 10//#define定义的标识符常量

int main()
{
	int  num = 3;
	3;//字面常量 
	const int num = 4;//const锁定num变量为常变量，后续无法再次赋值
	int arr[10] = { 0 };//创建数组，名称为arr，包含10个数
	return 0;
}