#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main (void){
	int num1 = 10;
	int num2 = 20;
	if (num1 > num2) {
		printf("较大值是%d", num1);

	}
	else
		printf("较大值是%d", num2);

	return 0;
}

自定义函数求两个数的最大值
int MAX(int x, int y)
{
	int max;
	if (x > y)   max = x;
	else  max = y;
	return max;
}
int main(void) {
	int b, a，max1;
	scanf("%d%d", &a, &b);
	max1=MAX(a, b);
	printf("%d", max1);
	return 0;

}


int main(void) {
	int arr[] = { 0,1,2,3,4,5,6,7,9,8, };//值为40
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(arr) / sizeof(arr[0]));//计算数组中元素的个数
    return 0;


int main(void) {
	int a = 0;
	int b = ~a;//~为按位取反的操作符
	printf("%d\n", b);//b=-1
	return 0;//原码，补码与反码的知识




