#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>
int main() {
	int ch = 0;
	while ((ch = getchar()) != EOF) {
		putchar(ch);
		//����EOF������ʹ����������

	}


	int ch = 0;
	int ret = 0;
	char password[20] = { 0 };
	printf("����������\n");
	scanf("%s", password);
	//��������ʣ��һ��\n
	//��ȡһ��\n���ټ�һ��getchar
	//getchar();//������һ���������洢��,һ��ֻ�ܶ�ȡһ���ַ������������123456 ADDQ������һ��getcharҲ������
	while ((ch = getchar()) != '\n') {
		;     //��һ��ѭ������ͣ��ȡ���ո����ַ���ֱ��ȡ���س�
	}
	printf("��ȷ������\n");
	ret = getchar();//ret����һ��10������������������µĻس�
	if (ret == 'Y') {//�����������֪ʶ
		printf("ȷ�ϳɹ�\n");
	}
	else {
		printf("ȷ��ʧ��\n");
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

����n�Ľ׳�
1 * 2 * 3 * **   n  �Ȳ���1��n������(��i��������forѭ�����Լ�����nֵ)�����������γ˵�һ��������һ���������أ���ֵӦΪ1����
int main() {
	int i = 1, n;
	double  sum = 1;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		sum *= i;
	}printf("%.0f\n", sum);
	return 0;
}

����1�Ľ׳˼�2�Ľ׳˼ӼӼӵ�n�Ľ׳�
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

��һ�����������в���ĳһ������n
int main() {
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 11;
	дһ�����룬��arr�������ҵ�7
		int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);//�ȼ���������Ԫ�صĸ���  ��������Ĵ�С/������ÿ��Ԫ�صĴ�С��ȡһ�������ɣ�
	for (i = 0; i < sz; i++) {
		if (k == arr[i]) {//���k�������е�һ��Ԫ��
			printf("�ҵ���\n");
			break;
		}
	}
	if (i == sz) {
		printf("�Ҳ���\n");
	}
	return 0;
}
������д����Ч��̫���ˣ������ȡ���߼еķ�ʽ���۰� / ���ֲ����㷨�� ���Ӷȣ�log�Զ�Ϊ�׵�n