#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define max 10//define����ı�ʶ������
int num1 = 20;//ȫ�ֱ���

ö�ٹؼ��� enum
enum sex {
	male,
	female,
	secret,
	ö�ٳ������ɸ��ģ�����sex��ֵ�ǿ��Ըı�� 
};//male female secret Ϊö�ٳ���   �������Ҫд��������֮ǰ
int main (void) {
	/*printf("Hello World\n");//printf ��ӡ����
	char ch = 'A';
	printf("%c\n", ch);//��ӡ�ַ���������
	int age = 20;
	printf("%d\n", age);
	long num = 100;
	printf("%d\n", num);//������
	double f = 5.0;
	printf("%f\n", f);*/
	��ӡ��ÿ���������͵Ĵ�С
	printf("%d\n", sizeof(int));
	printf("%c\n", sizeof(char));
	printf("%f\n", sizeof(double));
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(short));

	//short age = 20;//���ڴ�������2���ֽڱ���λ���������20
	//float weight = 95.6f;//��ȷָ��95.6��float���͡�
	//int num2 = 30;//�ֲ�����

	�����������ĺ�
	int m;
	int n;
	scanf("%d %d", &m, &n);
	printf("%d\n", m + n);
	const int num = 8;//const���εĳ�����
	//num = 4;//num�Ѳ����޸�
	printf("%d\n", num);
	printf("%d\n", max);

	printf("%d\n", male);//male ��Ӧ��ֵΪ0
	printf("%d\n", female);//��Ӧ��ֵΪ1
	printf("%d\n", secret);//��Ӧ��ֵΪ2

	char arr1[] = "abc";//����
	//abc--'a' 'b''c' '\0' --  \0���ַ����Ľ�����־  '\0'��ֵ��0
	char arr2[] = { 'a','b','c',0};//����һ��0֮�󣬶��߽����ͬ(Ҳ�൱�ڷ���һ��\0)
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	//a��ֵ��97

	char arr1[] = "abc";
	char arr2[] = { 'a','b','c' };
	printf("%d\n", strlen(arr1));//string + length ͳ���ַ����ĳ���
	printf("%d\n", strlen(arr2));//�������arr2���ٷ�һ��'\0',ͳ�Ƴ�����ֵ��3

	printf("%s\n","\"");//����Ļ��ֻ��ʾһ��"�Ĳ���������Χ�������������Ϊ�ַ���
	printf("%s\n", '\"');//Ч��ͬ��

	printf("%d\n", strlen("c:\test\32\test.c")); ����13���������������ó������ֶ����ַ�
	\32  --32������8��������
	32��Ϊ8������������Ǹ�ʮ�������֣���ΪASCII��ֵ����Ӧ���ַ�
	32-->10���Ƶ�26-->��ΪASCII��ֵ������->��һ�����ҵļ�ͷ��
	printf("%c\n", '\x61');//61��16�������֣��������ͬ��8�������֣���ʵ���������a
	return 0;
}
