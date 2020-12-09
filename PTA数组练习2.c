#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
给定M行N列的整数矩阵A，如果A的非边界元素A[i][j]大于相邻的上下左右4个元素，那么就称元素A[i][j]是矩阵的局部极大值。
本题要求给定矩阵的全部局部极大值及其所在的位置。
输入格式：
输入在第一行中给出矩阵A的行数M和列数N（3≤M, N≤20）；最后M行，每行给出A在该行的N个元素的值。数字间以空格分隔。
输出格式：
每行按照“元素值 行号 列号”的格式输出一 个局部极大值，其中行、列编号从1开始。要求按照行号递增输出；若同行有超过1个局部极大值，则该行按列号递增输出。若没有局部极大值，则输出“None 总行数 总列数”。
输入样例1：
4 5
1 1 1 1 1
1 3 9 3 1
1 5 3 5 1
1 1 1 1 1
输出样例1：
9 2 3
5 3 2
5 3 4
int main (){
	int m, n,i,j;
	int flag = 0;
	scanf("%d%d", &m, &n);
	int a[100][100];
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	for (i = 1; i < m - 1; i++) {
		for (j = 1; j < n - 1; j++) {
			if ((a[i][j] > a[i][j + 1]) && (a[i][j] > a[i][j - 1]) && (a[i][j] > a[i - 1][j]) && a[i][j] > a[i + 1][j]) {
				flag = 1;
				printf("%d %d %d\n", a[i][j], i+1, j+1);
			}
		}
	}
	if (flag == 0) {
		printf("None %d %d", m, n);
	}
	return 0;
}

本题要求编写程序，求一个给定的m×n矩阵各行元素之和。
输入格式：
输入第一行给出两个正整数m和n（1≤m, n≤6）。随后m行，每行给出n个整数，其间以空格分隔。
输出格式：
每行输出对应矩阵行元素之和。
输入样例：
3 2
6 3
1 - 8
3 12
输出样例：
9
- 7
15
int main() {
	int m, n, i, j;
	int sum = 0;
	int a[100][100];
	scanf("%d %d", &m, &n);
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	for (i = 0; i < m; i++) {
		sum = 0;
		for (j = 0; j < n; j++) {
			sum += a[i][j];
		}
		printf("%d\n", sum);
	}
	return 0;
}

本题要求编写程序计算某年某月某日是该年中的第几天。
输入格式 :
输入在一行中按照格式“yyyy / mm / dd”（即“年 / 月 / 日”）给出日期。注意：闰年的判别条件是该年年份能被4整除但不能被100整除、或者能被400整除。闰年的2月有29天。
输出格式 :
在一行输出日期是该年中的第几天。
输入样例1 :
2009 / 03 / 02
输出样例1 :
61
输入样例2 :
2000 / 03 / 02
输出样例2 :
62
int main() {
	int a[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int year, month, day,i;
	int sum = 0;
	scanf("%d / %d / %d", &year, &month, &day);
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
		a[1] = 29;
	}
	for (i = 0; i < month - 1; i++) {
		sum += a[i];
	}
	sum += day;
	printf("%d", sum);
	return 0;
}

上三角矩阵指主对角线以下的元素都为0的矩阵；主对角线为从矩阵的左上角至右下角的连线。
本题要求编写程序，判断一个给定的方阵是否上三角矩阵。
输入格式：
输入第一行给出一个正整数T，为待测矩阵的个数。接下来给出T个矩阵的信息：
每个矩阵信息的第一行给出一个不超过10的正整数n。随后n行，每行给出n个整数，其间以空格分隔。
输出格式：
每个矩阵的判断结果占一行。如果输入的矩阵是上三角矩阵，输出“YES”，否则输出“NO”。
输入样例：
2
3
1 2 3
0 4 5
0 0 6
2
1 0
- 8 2
输出样例：
YES
NO
int main() {
	int a,n,i,j,b;
	int flag[100];
	 int count = 0;
	scanf("%d", &a);
	for (b = 1; b <= a; b++) {
		int arr[100][100];
		count++;
		scanf("%d", &n);
		for (i = 0; i < n; i++) {
			for (j = 0; j < n; j++) {
				scanf("%d", &arr[i][j]);
			}
		}
		for (i = 1; i < n-1; i++) {
			for (j = 0; j < i; j++) {
				if (arr[i][j] == 0) {
					flag[count] = 1;
				}
			}
		}
		
	}
	for (i = 1; i < count + 1; i++) {
		if (flag[i] == 1)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}

本题要求按照规定格式打印前N行杨辉三角。
输入格式：

输入在一行中给出N（1≤N≤10）。
输出格式：
以正三角形的格式输出前N行杨辉三角。每个数字占固定4位。
输入样例：
6
输出样例：
1
1   1
1   2   1
1   3   3   1
1   4   6   4   1
1   5  10  10   5   1

本题要求编写程序，将给定n×n方阵中的每个元素循环向右移m个位置，
即将第0、1、⋯、n−1列变换为第n−m、n−m + 1、⋯、n−1、0、1、⋯、n−m−1列。
输入格式：
输入第一行给出两个正整数m和n（1≤n≤6）。接下来一共n行，每行n个整数，表示一个n阶的方阵。
输出格式：
按照输入格式输出移动后的方阵：即输出n行，每行n个整数，每个整数后输出一个空格。
输入样例：
2 3
1 2 3
4 5 6
7 8 9
输出样例：
2 3 1
5 6 4
8 9 7
int main() {
	int n, i, j,m;
	int arr[7][7];
	int temp;
	scanf("%d%d", &m,&n);
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	m = m%n;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			printf("%d ", arr[i][(j+n-m) % n]);//j+n-m不好想
		}
		printf("\n");
	}
	return 0;
}

一个矩阵元素的“鞍点”是指该位置上的元素值在该行上最大、在该列上最小。
本题要求编写程序，求一个给定的n阶方阵的鞍点。
输入格式：
输入第一行给出一个正整数n（1≤n≤6）。随后n行，每行给出n个整数，其间以空格分隔。
输出格式：
输出在一行中按照“行下标 列下标”（下标从0开始）的格式输出鞍点的位置。如果鞍点不存在，则输出“NONE”。
题目保证给出的矩阵至多存在一个鞍点。
输入样例1：
4
1 7 4 1
4 8 3 6
1 6 1 2
0 7 8 9
输出样例1：
2 1
输入样例2：
2
1 7
4 1
输出样例2：
NONE
int main() {
	int n, i, j;
	int arr[7][7];
	int max,min;
	int judge = 1;
	int index, l;
	int k = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	max = arr[0][0];
	min = arr[0][0];
	if (n == 1) {
		printf("0 0\n");
	}
	for (i = 0; i < n; i++) {
		index = i;
		for (l = 0; l < n; l++) {
			if (arr[i][k] <= arr[i][l]) {
				k = l;
			}
		}
		for (j = 0; j < n; j++) {
			if (arr[index][k] > arr[j][k]) {
				index = j;
				break;
			}
		}
		if (i == index) {
			judge = 0;
			break;
		}
	}
	if (judge == 0) {
		printf("%d %d", i, k);
	}
	else
		printf("NONE");
	return 0;
}

7 - 12 方阵转置(15分)
本题要求编写程序，将一个给定的 n×n 方阵转置（行列互换）后输出。
输入格式 :
输入第一行给出一个正整数n（1≤n≤6）。随后n行，每行给出n个整数，其间以空格分隔。
输出格式 :
输出转置后的n行n列矩阵，每个数占4位。
输入样例 :
3
1 2 3
4 5 6
7 8 9
输出样例 :
1   4   7
2   5   8
3   6   9
int main() {
	int n, i, j;
	int arr[7][7];
	int temp;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j <= i; j++) {
			temp = arr[i][j];
			arr[i][j] = arr[j][i];
			arr[j][i] = temp;
		}
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			printf("%4d", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

已知给定整数序列(允许是负数，但至少有一个非负整数)：A1, A2, ..., Ai, ..., Aj, ..., An。
设sij = Ai + ... + Aj(1 <= i <= j <= n)称子序列和
接下来，对于所有的 i和j（1 <= i <= j <= n），求子序列和值sij中的最大的连续子序列和值（设为MaxSum）。 
输入一个正整数n(n <= 80)，再输入n个整数，求最大连续子序列和MaxSum并打印输出。
输入格式 
在一行中输入一个正整数n，以及n个整数（以一个空格相隔）。
输出格式 :
在一行输出一个最大和值的整数（前后没有空格）。
输入样例 :
8 2 - 3 5 - 2 - 1 2 6 - 2
输出样例 :
	10
int main() {
	int n, i,j,sum=0;
	int arr[80];
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < n; i++) {
		sum = arr[i];
		for (j = i + 1; j < n; j++) {
			sum += arr[j];

		}
	}
	return 0;
}

本题要求编写程序，先对一个m×n的二维数组赋值，数组元素的值为其行下标和列下标之和，再按照矩阵的形式输出该二维数组。
输入格式 :
输入在一行内给出两个正整数m和n（1≤m, n≤6），其间以空格分隔。
输出格式 :
按照矩阵的形式输出该二维数组，每个数占4位。
输入样例 :
3 4
输出样例 :

	0   1   2   3
	1   2   3   4
	2   3   4   5
int main() {
	int m, n, i, j;
	int arr[100][7];
	scanf("%d%d", &m, &n);
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			arr[i][j] = i + j;
		}
	}
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			printf("%4d", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

本题要求编写程序，求一个给定的m×n矩阵的最大值以及位置。题目保证最大值惟一。
输入格式 :
输入第一行给出两个正整数m和n（1≤m, n≤6）。随后m行，每行给出n个整数，其间以空格分隔。
输出格式 :
输出在第一行中输出最大值，在第二行中按照“行下标 列下标”（下标从0开始）的格式输出最大值的位置。
输入样例 :
3 2
6 3
23 - 9
6 - 1
输出样例 :
	23
	1 0
int main() {
	int m, n, i, j;
	int index, indexx;
	int max = 0;
	int arr[100][7];
	scanf("%d%d", &m, &n);
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	max = arr[0][0];
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			if (arr[i][j] >= max) {
				index = i;
				indexx = j;
			}
		}
	}
	printf("%d\n", arr[index][indexx]);
	printf("%d %d", index, indexx);
	return 0;
}

给定一个n×n的方阵，本题要求计算该矩阵除副对角线、最后一列和最后一行以外的所有元素之和。
副对角线为从矩阵的右上角至左下角的连线。
输入格式 :
输入第一行给出正整数n（1<n≤10）；随后n行，每行给出n个整数，其间以空格分隔。
输出格式 :
在一行中给出该矩阵除副对角线、最后一列和最后一行以外的所有元素之和。
输入样例 :
4
2 3 4 1
5 6 1 1
7 1 8 1
1 1 1 1
输出样例:
35
int main() {
	int n, i, j;
	int arr[11][11];
	int sum = 0 ,sum1 = 0, sum2 = 0,sum3=0;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			scanf("%d", &arr[i][j]);
			sum += arr[i][j];
		}
	}
	for (i = 0; i < n; i++) {
		sum1 += arr[i][n - 1];
	}
	for (j = 0; j < n; j++) {
		sum2 += arr[n - 1][j];
	}
	for (i = 0; i < n; i++) {
		sum3 += arr[i][n-1-i];
	}
	printf("%d", sum - sum1 - sum2 - sum3 + arr[n - 1][0] + arr[0][n - 1]+arr[n-1][n-1]);
	return 0;
}