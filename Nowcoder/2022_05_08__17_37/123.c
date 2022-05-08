/*
* 描述:
* 会说整数之后，牛牛开始尝试浮点数（小数）
* 输入一个浮点数，输出这个浮点数。
* 输入描述：
* 输入一个浮点数
* 输出描述：
* 输出一个浮点数，保留三位小数
* 示例1
* 输入：
* 1.359578
* 输出：
* 1.360
*/
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	float i;

	scanf("%f", &i);

	printf("%.3f", i);

	return 0;
}
