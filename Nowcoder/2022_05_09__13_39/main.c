/*
* 描述
* 牛牛尝试用键盘读入一个字符，然后在屏幕上显示用这个字符组成的 3*3 的矩形。
* 输入描述：
* 一行读入一个 char 类型的字符。
* 输出描述：
* 输出这个字符组成的 3*3 矩形。
* 示例1
* 输入：
* #
* 输出：
* ###
* ###
* ###
*/
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	char ch = 0;
	int i = 0, j = 0;

	ch = getchar();	/*输入单个字符*/

	for (i = 0; i <= 2; i++)	/*控制输出的行数*/
	{
		for (j = 0; j <= 2; j++)	/*控制一行输出字符的个数*/
		{
			putchar(ch);	/*输出单个字符*/
		}
		putchar('\n');	/*输出换行符*/
	}

	return 0;
}