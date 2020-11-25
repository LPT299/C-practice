#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>
int main() {
	int ch = 0;
	while ((ch = getchar()) != EOF) {
		putchar(ch);
		//输入EOF并不会使这个程序结束

	}


	int ch = 0;
	int ret = 0;
	char password[20] = { 0 };
	printf("请输入密码\n");
	scanf("%s", password);
	//缓冲区还剩余一个\n
	//读取一下\n，再加一个getchar
	//getchar();//不必用一个变量来存储它,一次只能读取一个字符，如果密码是123456 ADDQ，这样一个getchar也不够了
	while ((ch = getchar()) != '\n') {
		;     //用一个循环来不停的取出空格后的字符，直到取出回车
	}
	printf("请确认密码\n");
	ret = getchar();//ret里是一个10，来自输入密码后敲下的回车
	if (ret == 'Y') {//缓冲区的相关知识
		printf("确认成功\n");
	}
	else {
		printf("确认失败\n");
	}
	return 0;
}


int main() {
	int ch = 0;
	while ((ch = getchar()) != EOF) {
		if (ch <= '0' || ch >= '9')
			continue;
		printf("%c\n", ch);
	}
	return 0;
}

int main() {
	int i = 1;
	do {
		printf("%d ", i);
		i++;
	} while (i <= 10);
	return 0;
}

计算n的阶乘
1 * 2 * 3 * **   n  先产生1到n的数字(用i产生，用for循环，自己输入n值)，把他们依次乘到一个数（用一个变量承载，初值应为1）上
int main() {
	int i = 1, n;
	double  sum = 1;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		sum *= i;
	}printf("%.0f\n", sum);
	return 0;
}

计算1的阶乘加2的阶乘加加加到n的阶乘
int main() {
	int n, i = 1;
	double sum = 0, jie = 1;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		jie *= i;
		sum += jie;
	}
	printf("%.0f", sum);
	return 0;
}

在一个有序数组中查找某一个数字n
int main() {
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 11;
	写一个代码，在arr数组中找到7
		int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);//先计算数组中元素的个数  整个数组的大小/数组中每个元素的大小（取一个代表即可）
	for (i = 0; i < sz; i++) {
		if (k == arr[i]) {//如果k等于其中的一个元素
			printf("找到了\n");
			break;
		}
	}
	if (i == sz) {
		printf("找不到\n");
	}
	return 0;
}
但这样写代码效率太低了，不如采取两边夹的方式（折半 / 二分查找算法） 复杂度：log以二为底的n