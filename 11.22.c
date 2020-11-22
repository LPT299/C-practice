#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define max 10//define定义的标识符常量
int num1 = 20;//全局变量

枚举关键字 enum
enum sex {
	male,
	female,
	secret,
	枚举常量不可更改，但是sex的值是可以改变的 
};//male female secret 为枚举常量   这个代码要写在主函数之前
int main (void) {
	/*printf("Hello World\n");//printf 打印函数
	char ch = 'A';
	printf("%c\n", ch);//打印字符数据类型
	int age = 20;
	printf("%d\n", age);
	long num = 100;
	printf("%d\n", num);//长整形
	double f = 5.0;
	printf("%f\n", f);*/
	打印出每种数据类型的大小
	printf("%d\n", sizeof(int));
	printf("%c\n", sizeof(char));
	printf("%f\n", sizeof(double));
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(short));

	//short age = 20;//向内存申请了2个字节比特位，用来存放20
	//float weight = 95.6f;//明确指定95.6是float类型。
	//int num2 = 30;//局部变量

	计算两个数的和
	int m;
	int n;
	scanf("%d %d", &m, &n);
	printf("%d\n", m + n);
	const int num = 8;//const修饰的常变量
	//num = 4;//num已不可修改
	printf("%d\n", num);
	printf("%d\n", max);

	printf("%d\n", male);//male 对应的值为0
	printf("%d\n", female);//对应的值为1
	printf("%d\n", secret);//对应的值为2

	char arr1[] = "abc";//数组
	//abc--'a' 'b''c' '\0' --  \0是字符串的结束标志  '\0'的值是0
	char arr2[] = { 'a','b','c',0};//加上一个0之后，二者结果相同(也相当于放了一个\0)
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	//a的值是97

	char arr1[] = "abc";
	char arr2[] = { 'a','b','c' };
	printf("%d\n", strlen(arr1));//string + length 统计字符串的长度
	printf("%d\n", strlen(arr2));//如果能在arr2里再放一个'\0',统计出来的值是3

	printf("%s\n","\"");//在屏幕上只显示一个"的操作，把外围的两个“”理解为字符串
	printf("%s\n", '\"');//效果同上

	printf("%d\n", strlen("c:\test\32\test.c")); 答案是13。键盘上所有能敲出的数字都是字符
	\32  --32是两个8进制数字
	32作为8进制所代表的那个十进制数字，作为ASCII码值，对应的字符
	32-->10进制的26-->作为ASCII码值，代表->（一个向右的箭头）
	printf("%c\n", '\x61');//61是16进制数字，具体操作同上8进制数字，其实他代表的是a
	return 0;
}
