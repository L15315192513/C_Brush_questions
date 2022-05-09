/*
* 描述:
* 牛牛从键盘上输入三个整数，并尝试在屏幕上显示第二个整数。
* 输入描述：
* 一行输入 3 个整数，用空格隔开。
* 输出描述：
* 请输出第二个整数的值。
* 示例1
* 输入：
* 1 2 3
* 输出：
* 2
*/
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int num1 = 0, num2 = 0, num3 = 0;

	scanf("%d %d %d", &num1, &num2, &num3);

	printf("%d\n", num2);

	return 0;
}