/****************************************************************************
*
*文件名  : BC1
*内容描述: 牛牛从键盘读入一个字符，一个整数，一个单精度浮点数，
*		  按顺序输出它们，并用空格分隔，浮点数保留 6 位小数。
*输入描述：读入一个字符，一个整数，一个单精度浮点数用换行符隔开，
*输出描述：按顺序输出字符、整数、单精度浮点数，用空格分隔，浮点数保留 6 位小数
*示例1   :输入：
*			   a
*			   1
*			   1.23
*		  输出：
*				a 1 1.230000
*
*作者    : 梁国庆
*日期	 : 2022/05/12
*
****************************************************************************/
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

/****************************************************************************
* 函数名: void main(void)
* 功 能 : 主函数
* 输 入 : 无
* 输 出 : 无
****************************************************************************/
int main(void)
{
	char ch = 0;	/*定义三种不同的数据类型变量，并赋初值*/
	int i = 0;
	float f = 0;

	scanf("%c\n%d\n%f", &ch, &i, &f);	/*格式化输入*/

	printf("%c %d %f\n", ch, i, f);		/*格式化输出*/

	return 0;
}
