/*
* 描述
* 依次输入一个学生的学号，以及3科（C语言，数学，英语）成绩，
* 在屏幕上输出该学生的学号，3科成绩（注：输出成绩时需进行四舍五入且保留2位小数）。
* 数据范围：学号满足 1≤n≤20000000，各科成绩使用百分制，且不可能出现负数
* 输入描述：
* 学号以及3科成绩，学号和成绩之间用英文分号隔开，成绩之间用英文逗号隔开。
* 输出描述：
* 学号，3科成绩，输出格式详见输出样例。
* 示例1
* 输入：17140216;80.845,90.55,100.00
* 输出：The each subject score of No. 17140216 is 80.85, 90.55, 100.00.
* 示例2
* 输入：123456;93.33,99.99,81.20
* 输出：The each subject score of No. 123456 is 93.33, 99.99, 81.20.
*/
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	long student_ID = 0;	/*定义一个长整型的变量，取值范围为-2147483648~2147483647*/
	float score1 = 0, score2 = 0, score3 = 0;	/*定义三个单精度浮点型变量*/

	scanf("%d;%f,%f,%f", &student_ID,&score1,&score2,&score3);	/*输入学生学号和三科的成绩*/
	
/*
	printf("The each subject score of No. %d is %.2f, %.2f, %.2f.\n", student_ID, score1,score2, score3);
	该语句可以正确输出，但由于该条语句太长，不利于观看，所以我们将学生学号和成绩分开输出
	代码如下：
*/
	printf("The each subject score of No. %d ", student_ID);	/*输出学号*/
	printf("is %.2f, %.2f, %.2f.\n", score1, score2, score3);	/*输出3科成绩*/

	return 0;
}
