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
	//strcpy---string+copy--�ַ�������
	char  arr1[] = "bit";
	char arr2[20] = "**********";
	strcpy(arr2, arr1);
	printf("%s", arr2);
	return 0;
}

//memset--memory�ڴ�+set����
int main() {
	char arr[] = "hello world";
	//ϣ����helloȫ�����ó�*
	memset(arr, '*', 5);//��arra��ǰ����ַ����*
	printf("%s", arr);
	return 0;
}


//дһ�������������ҳ��������������ֵ
 int getmax(int x, int y) {
	if (x > y) {
		return x;  //����ֵ����x
	}
	else
		return y;  //����ֵ����y
}
int main() {
	int a = 10;
	int b = 20;
	//������ʹ�ó���
	int z = getmax(a,b);
	printf("max = %d\n", z);
	getmax(100, 300);//��100��300�����ֵ
	return 0;
}

//дһ�������������������α���������
��ʵ�δ����βε�ʱ���βο��Կ�����ʵ�ε���ʱ���������βε��޸��ǲ���ı�ʵ�ε�
//void samp1(int x, int y) {  //�������û�з���ֵ
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
	//a = b;     //�����������������
	//b = tmp;
	//samp1(a, b);
	samp2 (&a, &b);
	printf("a=%d b=%d", a, b);
	return 0;
}//������д���������û��ʵ�ֽ���
//int main() {
//	int a = 10;
//	int* pa = &a;  //paΪָ����� int*
//	*pa = 20;//�����ò���
//	printf("%d\n", a);//���a=20
//	return 0;
//}

//��д�������ж�����
//������������1
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
	//��ӡ100-200֮�������
	int i;
	for (i = 100; i <= 200; i++) {
		//�ж��ǲ�������
		if (is_prime(i) == 1)//���i������������������ķ���ֵΪ1����֮��Ϊ0
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
		//�ж��Ƿ�Ϊ����
		if (is_leap(year) == 1)
			printf("%d ", year);
	}
	return 0;
}