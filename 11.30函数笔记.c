#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
int Add(int x, int y) {
	int z = 0;
	z = x + y;
	return z;
}
int main() {
	int a = 10, b = 20;
	int sum =Add(a, b);
	printf("%d\n", sum);
	return 0;

}

int main() {
	//strlen---string+length
	//strcpy---string+copy--字符串拷贝
	char  arr1[] = "bit";
	char arr2[20] = "**********";
	strcpy(arr2, arr1);
	printf("%s", arr2);
	return 0;
}

//memset--memory内存+set设置
int main() {
	char arr[] = "hello world";
	//希望把hello全部设置成*
	memset(arr, '*', 5);//把arra的前五个字符变成*
	printf("%s", arr);
	return 0;
}


//写一个函数，可以找出两个整数的最大值
 int getmax(int x, int y) {
	if (x > y) {
		return x;  //函数值返回x
	}
	else
		return y;  //函数值返回y
}
int main() {
	int a = 10;
	int b = 20;
	//函数的使用场景
	int z = getmax(a,b);
	printf("max = %d\n", z);
	getmax(100, 300);//求100和300的最大值
	return 0;
}

//写一个函数，交换两个整形变量的内容
当实参传给形参的时候，形参可以看作是实参的临时拷贝，对形参的修改是不会改变实参的
//void samp1(int x, int y) {  //这个函数没有返回值
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
void samp2(int*pa , int* pb) {
	int tmp = 0;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}
int main() {
	int a = 10;
	int b = 20;
	//int tmp = 0;
	//tmp = a;
	//a = b;     //这是在主函数里完成
	//b = tmp;
	//samp1(a, b);
	samp2 (&a, &b);
	printf("a=%d b=%d", a, b);
	return 0;
}//但这样写，这个程序并没有实现交换
//int main() {
//	int a = 10;
//	int* pa = &a;  //pa为指针变量 int*
//	*pa = 20;//解引用操作
//	printf("%d\n", a);//输出a=20
//	return 0;
//}

//编写函数来判断素数
//是素数，返回1
 int is_prime(int n) {
	int a;
	for (a = 2; a <= sqrt(n); a++) {
		if (n%a == 0)
			break;
	}if (a >= sqrt(n))
		return 1;
	else
		return 0;
}
int main() {
	//打印100-200之间的素数
	int i;
	for (i = 100; i <= 200; i++) {
		//判断是不是素数
		if (is_prime(i) == 1)//如果i是素数，则这个函数的返回值为1，反之则为0
			printf("%d ", i);
	}
	return 0;
}

int is_leap(int n) {
	if ((n % 4) == 0 && (n % 100 != 0) || (n % 400 == 0))
		return 1;
	else
		return 0;
}
int main() {
	int year;
	for (year = 1000; year <= 2000; year++) {
		//判断是否为闰年
		if (is_leap(year) == 1)
			printf("%d ", year);
	}
	return 0;
}