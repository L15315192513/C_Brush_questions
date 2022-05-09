/*
* 描述
* 将浮点数转换为整数类型，要求四舍五入。
* 输入描述：
* 随机输入的浮点数
* 输出描述：
* 四舍五入之后的整数
* 示例1
* 输入：
* 14.99
* 输出：
* 15
*/
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	float num = 0;

	scanf("%f", &num);	/*输入一个浮点数*/

	printf("%.0f\n", num);	/*输出此数，小数点后的数据不输出*/

	return 0;
}