/*
* 描述
* BoBo教KiKi字符常量或字符变量表示的字符在内存中以ASCII码形式存储。BoBo出了一个问题给KiKi，输入一个字符，输出该字符相应的ASCII码。
* 输入描述：
* 一行，一个字符。
* 输出描述：
* 一行，输出输入字符对应的ASCII码。
* 示例1
* 输入：
* c
* 输出：
* 99
*/
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	char ch;

	ch = getchar();	/*输入单个字符*/

	printf("%d\n", ch);	/*输出该字符对应的ASCII码*/

	return 0;
}