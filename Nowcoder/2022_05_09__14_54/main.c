/*
* 描述
* 输入3科成绩，然后把三科成绩输出，成绩为整数形式。
* 数据范围:0≤n≤100 
* 输入描述：
* 一行，3科成绩，用空格分隔，范围（0~100）。
* 输出描述：
* 一行，把3科成绩显示出来，输出格式详见输出样例。
* 示例1
* 输入：
* 60 80 90
* 输出：
* score1=60,score2=80,score3=90
*/
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int num1 = 0, num2 = 0, num3 = 0;

	scanf("%d %d %d", &num1, &num2, &num3);

	printf("score1=%d,score2=%d,score3=%d\n", num1, num2, num3);

	return 0;
}