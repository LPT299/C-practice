#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
//本题要求将输入的任意3个整数从小到大输出
int main() {
	int a, b, c,t;
	int max;
	scanf("%d%d%d", &a,&b,&c);
	max = a;
	if (b > a) {
		t = a;
		a = b;
		b = t;
	}
	else if (c > a) {
		t = a;
		a = c;
		c = t;
	}
	else if (c > b) {
		t = b;
		b = c;
		c = t;
	}printf("%d->%d->%d", a, b, c);
	return 0;
}

//本题要求编写程序，输入10个字符，统计其中英文字母、空格或回车、数字字符和其他字符的个数。
//letter = 英文字母个数, blank = 空格或回车个数, digit = 数字字符个数, other = 其他字符个数
int main() {
	int i = 1, letter, blank, digit, other;
	letter = blank = digit = other = 0;
	char ch;
	for (i = 1; i <= 10; i++) {
		scanf("%c", &ch);
		if ((ch >= 'a'&&ch <= 'z') || (ch >= 'A'&&ch <= 'Z'))
			letter++;
		 else if (ch >= '0'&&ch <= '9')
			digit++;
		else if (ch == ' '||ch=='\n')
			blank++;
		else
			other++;
	}printf("%d  %d  %d  %d", letter, digit, blank, other);
	return 0;
}

//本题要求编写程序，根据输入的三角形的三条边a、b、c，计算并输出面积和周长
//在一个三角形中， 任意两边之和大于第三边。三角形面积计算公式
//area=√​s(s−a)(s−b)(s−c)​​​，其中s=(a+b+c)/2。
int main() {
	double  a, b, c, p;
	double area = 0, zhouchang = 0;
	double area1 = 0;
	scanf("%lf%lf%lf", &a,& b, &c);
	p = (a + b + c) / 2.0;
	if ((a + b > c) && (b + c > a) && (a + c > b)) {
		area = sqrt(p*(p - a)*(p - b)*(p - c));
		zhouchang = a + b + c;
		printf("%.2f;%.2f\n", area, zhouchang);
	}
	else {
		printf("无法构成一个三角形\n");
	}
	return 0;
}

//输出21世纪中截止某个年份以来的所有闰年年份。注意：闰年的判别条件是该年年份能被4整除但不能被100整除、或者能被400整除。
int main() {
	int year;
	for (year = 2000; year <= 2999; year++) {
		if (year % 4 == 0 && year % 100 != 0) {
			printf("%d ", year);
		}if (year % 400 == 0) {
			printf("%d ", year);
		}
	}
	return 0;
}

现在90号汽油6.95元 / 升、93号汽油7.44元 / 升、97号汽油7.93元 / 升。
为吸引顾客，某自动加油站推出了“自助服务”和“协助服务”两个服务等级，分别可得到a*5%和3%的折扣。

本题要求编写程序，根据输入顾客的加油量a，汽油品种b（90、93或97）和服务类型c（m - 自助，e - 协助），计算并输出应付款。
输入格式：
输入在一行中给出两个整数和一个字符，分别表示顾客的加油量a，汽油品种b（90、93或97）和服务类型c（m - 自助，e - 协助）。
输出格式：
在一行中输出应付款额，保留小数点后2位。
int main() {
	double a, b, e;
	double d=0,cost=1000;
	char c;
	scanf("%lf %lf %c", &a, &b, &c);
	if (b == 90)
		d = 6.95;
	 else if (b == 93)
		d =7.44;
	 else if (b == 95)
		d = 7.93;
	switch (c) {
	case 'm':
		cost = a*d*0.97;
		break;
	case 'e':
		cost=a*d*0.95;
		break;
	}printf("%.2f", cost);
	return 0;
}

//3 个整数 A、B 和 C，请判断 A+B 是否大于 C。假定输入的三个整数在机器能表示的整型范围内。
int main() {
	//记得把加法变为减法，可以避免数据溢出
	return 0;
}


2019年个税新版规定：应纳税所得额为税前工资扣除五险一金，五险一金按工资22%比例计算。 个税起征点为5000元；
//不超过3000元部分应缴税额的税率为3%；
//超3000元到12000元以内部分应缴税额的税率为10%；
//超12000元到25000元以内部分应缴税额的税率为20%；
//超25000元到35000元以内部分应缴税额的税率为25%；
//超35000元到55000元以内部分应缴税额的税率为30%；
//超55000元到80000元以内部分应缴税额的税率为35%；
//超80000元部分应缴税额的税率为45%。
//请根据你的月工资计算其应缴税额。
//输入格式:
//在一行中输入工资。
//输出格式 :
//在一行中输出应缴税额，保留2位小数，前后均没有空格。
int main() {
	double a, cost = 0,c;
	scanf("%lf", &a);
	c = a*0.78 - 5000;
	if (c <= 3000 && c >= 0) {
		printf("%.2f", c*0.03);
	}
	else if (c > 3000 && c <= 12000) {
		printf("%.2f", 3000 * 0.03 + (c - 3000)*0.1);
	}
	else if (c > 12000 && c <= 25000) {
		printf("%.2f",)
	}
	return 0;
}

//本题要求编写程序读入N个学生的百分制成绩，统计五分制成绩的分布。百分制成绩到五分制成绩的转换规则：
//大于等于90分为A；
//小于90且大于等于80为B；
//小于80且大于等于70为C；
//小于70且大于等于60为D；
//小于60为E。
//输入格式 :
//输入在第一行中给出一个正整数N（≤1000），即学生人数；第二行中给出N个学生的百分制成绩，其间以空格分隔。
//输出格式 :
//在一行中输出A、B、C、D、E对应的五分制成绩的人数分布，数字间以空格分隔，行末不得有多余空格。
int main() {
	int N,i=1;
	int A = 0, B = 0, C = 0, D = 0, E = 0;
	double grade;
	scanf("%d", &N);
	for (i = 1; i <= N; i++) {
		scanf("%lf", &grade);
		if (grade >= 90) {
			A++;
		}
		else if (grade < 90 && grade >= 80)
			B++;
		else if (grade < 80 && grade >= 70)
			C++;
		else if (grade < 70 && grade >= 60)
			D++;
		else if (grade < 60 && grade >= 0)
			E++;
	}printf("%d %d %d %d %d\n", A, B, C, D, E);
	return 0;
}

//本题要求编写一个简单计算器程序，可根据输入的运算符，对2个整数进行加、减、乘、除或求余运算。题目保证输入和输出均不超过整型范围。
输入格式：
输入在一行中依次输入操作数1、运算符、操作数2，其间以1个空格分隔。操作数的数据类型为整型，且保证除法和求余的分母非零。
输出格式：
当运算符为 + 、 - 、*、 / 、%时，在一行输出相应的运算结果。若输入是非法符号（即除了加、减、乘、除和求余五种运算符以外的其他符号）则输出ERROR。*/
int main() {
	int a, b;
	char ch;
	scanf("%d %c %d", &a, &ch, &b);
	switch (ch) {
	case '+':
		printf("%d\n", a + b);
		break;
	case '-':
		printf("%d\n", a - b);
		break;
	case '*':
		printf("%d\n", a*b);
		break;
	case '/':
		printf("%d\n", a / b);
		break;
	default:
		printf("ERROR\n");
		break;
	}
	return 0;
}

/*给定四种水果，分别是苹果（apple）、梨（pear）、桔子（orange）、葡萄（grape）
单价分别对应为3.00元 / 公斤、2.50元 / 公斤、4.10元 / 公斤、10.20元 / 公斤。
首先在屏幕上显示以下菜单：
[1] apple
[2] pear
[3] orange
[4] grape
[0] exit
用户可以输入编号1~4查询对应水果的单价。当连续查询次数超过5次时，程序应自动退出查询；不到5次而用户输入0即退出；输入其他编号，显示价格为0。
输入格式 :
输入在一行中给出用户连续输入的若干个编号。
输出格式 :
首先在屏幕上显示菜单。然后对应用户的每个输入，在一行中按格式“price = 价格”输出查询结果，其中价格保留两位小数。当用户连续查询次数超过5次、或主动输入0时程序结束。*/
int main() {
	int i,b;
	double a = 3, p = 2.5, o = 4.1, g = 10.2;
	printf("[1] apple\n[2] pear\n[3] orange\n[4] grape\n[0] exit\n");
	for (i = 1; i <= 5; i++) {
		scanf("%d", &b);
		if (b == 0) {
			break;              //用户输入0之后，要结束的不是switch,而是for循环
		}
		switch (b) {
		case 1:
			printf("price = %.2f\n", a);
			break;
		case 2:
			printf("price = %.2f\n", p);
			break;
		case 3:
			printf("price = %.2f\n", o);
			break;
		case 4:
			printf("price = %.2f\n", g);
			break;
		default:
			printf("price = 0.00");
			break;
		}
	}
		return 0;
	}


#include<stdio.h>
int main(void)
{
	printf("[1] apple\n[2] pear\n[3] orange\n[4] grape\n[0] exit\n");
	int a, k;
	for (a = 0; a <= 4; a++) {
		scanf("%d", &k);
		if (k == 0) {
			break;
		}
		switch (k) {
		case 1:printf("price = 3.00\n");
			break;
		case 2:printf("price = 2.50\n");
			break;
		case 3:printf("price = 4.10\n");
			break;
		case 4:printf("price = 10.20\n");
			break;
		default:printf("price = 0.00\n");
			break;
		}
	}
	return 0;
}

////微博上有个自称“大笨钟V”的家伙，每天敲钟催促码农们爱惜身体早点睡觉。不过由于笨钟自己作息也不是很规律，所以敲钟并不定时。
//一般敲钟的点数是根据敲钟时间而定的，如果正好在某个整点敲，那么“当”数就等于那个整点数；如果过了整点，就敲下一个整点数。
//另外，虽然一天有24小时，钟却是只在后半天敲1~12下。例如在23:00敲钟，就是“当当当当当当当当当当当”，而到了23:01就会是“当当当当当当当当当当当当”。
//在午夜00:00到中午12:00期间（端点时间包括在内），笨钟是不敲的。
//下面就请你写个程序，根据当前时间替大笨钟敲钟。
//输入格式：
//输入第一行按照hh : mm的格式给出当前时间。其中hh是小时，在00到23之间；mm是分钟，在00到59之间。
//	输出格式：
//	根据当前时间替大笨钟敲钟，即在一行中输出相应数量个Dang。如果不是敲钟期，则输出：
//	Only hh : mm.Too early to Dang.
//	其中hh : mm是输入的时间。
int main() {
	//这个题目主要是对于输出的数据格式有格外地要求，比如07，必须要有0；所以一定要进行分类
	char ch;
	int h1, m1, i, s;
	scanf("%d%c%d", &h1, &ch, &m1);
	if (h1 < 12) {
		if (h1 < 10) {
			if (m1 < 10) {
				printf("Only 0%d : 0%d.Too early to Dang.", h1, m1);
			}
			else {
				printf("Only 0%d : %d.Too early to Dang.", h1, m1);
			}
		}
		else {//h1>10
			if (m1 < 10)
				printf("Only %d : 0%d.Too early to Dang.", h1, m1);
			else
				printf("Only %d : %d.Too early to Dang.", h1, m1);
		}
	}
	else {
		if (m1 == 0)
			for (i = 1; i <= h1 - 12; i++) {
				printf("Dang");
			}
		else
			for (i = 1; i <= h1 - 11; i++)
				printf("Dang");
	}
	return 0;
}


//给定N个正整数，请统计奇数和偶数各有多少个？
//输入格式：
//输入第一行给出一个正整N（≤1000）；第2行给出N个非负整数，以空格分隔。
//输出格式：
//在一行中先后输出奇数的个数、偶数的个数。中间以1个空格分隔。
//输入样例：
//9
//88 74 101 26 15 0 34 22 77
//输出样例：
//3 6
int main() {
	int N, i,n;
	int a = 0, b = 0;
	scanf("%d", &N);
	for (i = 1; i <= N; i++) {
		scanf("%d", &n);
		if (n % 2 == 0) {
			a++;
		}
		else {
			b++;
		}

	}printf("%d %d\n", a, b);
	return 0;
}


//本题要求根据某城市普通出租车收费标准编写程序进行车费计算。具体标准如下：
//起步里程为3公里，起步费10元；
//超起步里程后10公里内，每公里2元；
//超过10公里以上的部分加收50%的回空补贴费，即每公里3元；
//营运过程中，因路阻及乘客要求临时停车的，按每5分钟2元计收（不足5分钟则不收费）。
//输入格式 :
//输入在一行中给出输入行驶里程（单位为公里，精确到小数点后1位）与等待时间（整数，单位为分钟），其间以空格分隔。
//输出格式 :
//在一行中输出乘客应支付的车费（单位为元），结果四舍五入，保留到元。
int main() {
	double km = 0, cost = 0,cost1=0,cost2=0;
	int time = 0;
	scanf("%lf %d", &km, &time);
	if (km <= 3) {
		cost = 10;
	}
	else if (km > 3 && km <= 13) {   //注意理清数学关系
		cost = 10 + 2 * (km - 3);
	}
	else if (km > 13) {
		cost = 30 + 3 * (km - 13);
	}
	if (time <= 5) {
		cost1 = 0;
	}
	else {
		cost1 = 5 * (time / 5);
	}
	cost2 = (int)(cost + cost1 + 0.5);   //记住四舍五入的处理方式
	printf("%.0f", cost2);
	return 0;
}

/*给定平面上任意三个点的坐标(x​1​​, y​1​​)、(x​2​​, y​2​​)、(x​3​​, y​3​​)，检验它们能否构成三角形。
输入格式 :
输入在一行中顺序给出六个[−100, 100]范围内的数字，即三个点的坐标x​1​​、y​1​​、x​2​​、y​2​​、x​3​​、y​3​​。
输出格式 :
若这3个点不能构成三角形，则在一行中输出“Impossible”；若可以，则在一行中输出该三角形的周长和面积，格式为“L = 周长, A = 面积”，输出到小数点后2位。*/
int main() {
	double x1, x2, x3, y1, y2, y3;   //注意，这里变量的定义顺序要与题目中的一致
	double L = 0, A = 0;
	double p = 0;
	scanf("%lf %lf %lf %lf %lf %lf", &x1, &x2, &x3, &y1, &y2, &y3);
	double n1 = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));   //注意，这里是两点间的坐标公式，不是点到原点的距离
	double n2 = sqrt((x1 - x3)*(x1 - x3) + (y1 - y3)*(y1 - y3));
	double n3 = sqrt((x3 - x2)*(x3 - x2) + (y3 - y2)*(y3 - y2));
	if ((n1 + n2 > n3) && (n1 + n3 > n2) && (n2 + n3 > n1)) {
		L = n1 + n2 + n3;
		p = (n1 + n2 + n3) / 2.0;
		A = sqrt(p*(p - n1)*(p - n2)*(p - n3));
		printf("L = %.2f,A = %.2f", L, A);
	}
	else {
		printf("Impossible");
	}
	return 0;
}
int main()
{
	float x1, y1, x2, y2, x3, y3;
	scanf("%f%f%f%f%f%f", &x1, &y1, &x2, &y2, &x3, &y3);
	float a, b, c, A, L;
	a = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
	b = sqrt((x1 - x3)*(x1 - x3) + (y1 - y3)*(y1 - y3));
	c = sqrt((x3 - x2)*(x3 - x2) + (y3 - y2)*(y3 - y2));
	if (a + b>c&&a + c>b&&b + c>a)
	{
		L = a + b + c;
		float p = L / 2.0;
		A = sqrt(p*(p - a)*(p - b)*(p - c));
		printf("L = %.2f, A = %.2f\n", L, A);
	}
	else
		printf("Impossible");
	return 0;
}

//本题要求编写程序计算某年某月某日是该年中的第几天。
//输入格式 :
//输入在一行中按照格式“yyyy / mm / dd”（即“年 / 月 / 日”）给出日期。注意：闰年的判别条件是该年年份能被4整除但不能被100整除、或者能被400整除。闰年的2月有29天。
//输出格式 :
//在一行输出日期是该年中的第几天。
int main() {
	int year, month, day;
	int n = 0;
	scanf("%d/%d/%d", &year, &month, &day);
	switch (month) {
	case 1:
		n = 0;
		break;
	case 2:
		n = 31;
		break;
	case 3:
		n = 31 + 28;
		break;
	case 4:
		n = 31 + 28 + 31;
		break;
	case 5:
		n = 90 + 30;
		break;
	case 6:
		n = 120 + 31;
		break;
	case 7:
		n = 151 + 30;
		break;
	case 8:
		n = 181 + 31;
		break;
	case 9:
		n = 212 + 31;
		break;
	case 10:
		n = 243 + 30;
		break;
	case 11:
		n = 273 + 31;
		break;
	case 12:
		n = 304 + 31;
		break;
	}
	n += day;
	if ((year % 4 == 0) && (year % 100 != 0) || year % 400 == 0) {
		n += 1;
	}
	printf("%d\n", n);
	return 0;
}

//中国有句俗语叫“三天打鱼两天晒网”。假设某人从某天起，开始“三天打鱼两天晒网”，问这个人在以后的第N天中是“打鱼”还是“晒网”？
//输入格式：
//输入在一行中给出一个不超过1000的正整数N。
//输出格式：
//在一行中输出此人在第N天中是“Fishing”（即“打鱼”）还是“Drying”（即“晒网”），并且输出“in day N”。
int main() {
	int N;
	scanf("%d", &N);
	int n = N % 5;
	switch (n) {
	case 1:
	case 2:
	case 3:
		printf("Fishing in day %d\n", N);
		break;
	case 4:
	case 0:
		printf("Drying in day %d\n ", N);
		break;
	}
	return 0;
}

//对方不想和你说话，并向你扔了一串数…… 而你必须从这一串数字中找到“250”这个高大上的感人数字。
//输入格式：
//输入在一行中给出不知道多少个绝对值不超过1000的整数，其中保证至少存在一个“250”。
//输出格式：
//在一行中输出第一次出现的“250”是对方扔过来的第几个数字（计数从1开始）。题目保证输出的数字在整型范围内。
int main() {
	int i,n,count=0;
	for (i = 1;; i++) {
		scanf("%d", &n);
		count++;
		if (n == 250) {
			break;
		}
	}printf("%d\n", count);
	return 0;
}//不要把简单的问题想的太复杂，注意本题中for循环没有判断语句的用法

//据说一个人的标准体重应该是其身高（单位：厘米）减去100、再乘以0.9所得到的公斤数。
//真实体重与标准体重误差在10%以内都是完美身材（即 | 真实体重 − 标准体重 | < 标准体重×10%）。
//	已知市斤是公斤的两倍。现给定一群人的身高和实际体重，请你告诉他们是否太胖或太瘦了。
//	输入格式：
//	输入第一行给出一个正整数N（≤ 20）。随后N行，每行给出两个整数，分别是一个人的身高H（120 < H < 200；单位：厘米）和真实体重W（50 < W ≤ 300；单位：市斤），其间以空格分隔。
//	输出格式：
//	为每个人输出一行结论：如果是完美身材，输出You are wan mei!；如果太胖了，输出You are tai pang le!；否则输出You are tai shou le!。
int main() {
	int N,i;
	int H, W;
	double n;
	scanf("%d", &N);
	for (i = 1; i <= N; i ++) {
		scanf("%d %d", &H, &W);
		n = (H - 100)*0.9 * 2;
		if (labs(W - n) < n*0.1) {
			printf("You are wan mei!\n");
		}
		else if ((n - W) >= n*0.1) {
			printf("You are tai shou le!\n");
		}
		else if ((W - n) >= n*0.1) {
			printf("You are tai pang le!\n");
		}
	}
	return 0;
}//不知道哪里有什么小问题

//输入一个整数，输出每个数字对应的拼音。当整数为负数时，先输出fu字。十个数字对应的拼音如下：
//0: ling
//1 : yi
//2 : er
//3 : san
//4 : si
//5 : wu
//6 : liu
//7 : qi
//8 : ba
//9 : jiu
int main() {
	char num[32];
	int i;
	scanf("%s", num);
	for (i = 0; i <= sizeof(num) / sizeof(num[0]); i++) {   //注意i要从0开始，数组的下标从0到n-1
		switch (num[i]) {
		case '-':printf("fu"); break;
		case '0':printf("ling"); break;
		case '1':printf("yi"); break;
		case '2':printf("er"); break;
		case '3':printf("san"); break;
		case '4':printf("si"); break;
		case '5':printf("wu"); break;
		case '6':printf("liu"); break;
		case '7':printf("qi"); break;
		case '8':printf("ba"); break;
		case '9':printf("jiu"); break;
		default:break;
		}//每一个数字出来后都要到这里来进行if判断
		if (i < strlen(num) - 1)//这样既避免了最后一个字符后有空格，也使每一个从switch跳出的语句后打印一个空格
			printf(" ");
	}
	return 0;
}

//本题要求计算给定的一系列正整数中奇数的和。
//输入格式 :
//输入在一行中给出一系列正整数，其间以空格分隔。当读到零或负整数时，表示输入结束，该数字不要处理。
//输出格式 :
//在一行中输出正整数序列中奇数的和。
int main() {
	int i, sum = 0, n;
	for (i = 1;; i++) {
		scanf("%d", &n);
		if (n <= 0) {
			break;
		}
		else if (n > 0) {
			if (n % 2 != 0)
				sum += n;
		}
	}printf("%d\n", sum);
	return 0;
}

//本题要求编写程序，计算序列部分和 1 - 1 / 4 + 1 / 7 - 1 / 10 + ... 直到最后一项的绝对值不大于给定精度eps。
//输入格式 :
//输入在一行中给出一个正实数eps。
//输出格式 :
//在一行中按照“sum = S”的格式输出部分和的值S，精确到小数点后六位。题目保证计算结果不超过双精度范围
int main() {
	double eps,item=1,sum=0;
	int fenmu=1, flag = 1;
	scanf("%lf", &eps);
	if (item <= eps) {
		sum = 1;
	}
	else {
		while (fabs(item) > eps) {
			item = flag*1.0 / fenmu;
			sum = sum + item;
			flag = -flag;
			fenmu = fenmu + 3;
		}
	}
	printf("%.6f", sum);
	return 0;
}//如果，精度直接大于首项，那么此时可以进行单独讨论。如果精度小于首项，按照上面的过程进行操作

//对于给定的正整数N，求它的位数及其各位数字之和。
//输入格式：
//输入在一行中给出一个不超过10​9​​的正整数N。
//输出格式：
//在一行中输出N的位数及其各位数字之和，中间用一个空格隔开。
int main (){
	int n, sum = 0,c,b=0;
	scanf("%d", &n);
	if (n == 0) {
		printf("1 0");
	}
	while (n != 0) {
		c = n % 10;
		sum += c;
		n /= 10;
		b++;  //记住这个固定的套路，如何输出一个数的每位数字
	}
	printf("%d %d", b, sum);
	return 0;
	}

//本题要求两个给定正整数的最大公约数和最小公倍数。
//输入格式 :
//输入在一行中给出两个正整数M和N（≤1000）。
//输出格式 :
//在一行中顺序输出M和N的最大公约数和最小公倍数，两数字间以1空格分隔。
int main() {
	int a, b;
	int yushu;
	int d = 0,t,s;
	scanf("%d %d", &a, &b);
	yushu = a%b;
	t = a;
	s = b;
	while (yushu != 0) {
		a = b;           //余数不为零时，把小数换到大数的位置，把余数换到小数的位置，再次进行除法操作
		b = yushu;
		yushu = a%b;
	}
	d = t*s / b;
	printf("%d %d", b,d);
	return 0;
}//最大公约数——辗转相除法
//最小公倍数——两数之乘积除以最大公约数

#include <stdio.h>  
#include <math.h>

int main() {
	int m, n;
	scanf("%d %d", &m, &n);
	int yushu;
	yushu = m%n;
	int  x;
	x = m*n;

	if (yushu == 0) {
		printf("%d %d", n, x / n);
	}
	else {

		while (yushu != 0) {
			m = n;
			n = yushu;
			yushu = m%n;
		}
		printf("%d %d", n, x / n);
	}
	return 0;
}

//本题要求统计给定整数M和N区间内素数的个数并对它们求和。
//输入格式 :
//输入在一行中给出两个正整数M和N（1≤M≤N≤500）。
//输出格式 :
//在一行中顺序输出M和N区间内素数的个数以及它们的和，数字间以空格分隔。
int main() {
	int m, n,i,j;
	int count=0, sum = 0;
	scanf("%d %d", &m, &n);
	for (i = m; i <= n; i++) {
		for (j = 2; j <= i-1; j++) {//这里j的初值一定要是2，不能为1，不然会死的很惨
			if (i%j == 0)//可以整除，直接跳出这个循环就行了
				break;
		}if (j == i ) {
			sum += i;
			count++;
		}
	}
	printf("%d %d", count, sum);
	return 0;
}

//打印100-200的素数
int main() {
	int i,j;
	for (i = 100; i <= 200; i++) {
		//判断i是否为素数
		//素数判断的规则：
//1.试除法
		//2-i-1之间有没有数可以整除i
		//产生2--i-1的数字
		int j = 0;
		for (j = 2; j < i; j++) {
			if (i%j == 0) {
				break;
			}
		}
		//有两种情况，i会来到这里。
		//1.不是素数，从break 来到这里
		//2.是素数，循环结束，自然而然的来到这里
		//两种方式的区别是j的大小，j==i时，为第二种情况。
		if (j == i) {
			printf("%d\n", i);
		}
	}
	return 0;
}//不够优化,还可以先排除偶数。

//给定两个均不超过9的正整数a和n，要求编写程序求a + aa + aaa++⋯ + aa⋯a（n个a）之和。
//输入格式：
//输入在一行中给出不超过9的正整数a和n。
//输出格式：
//在一行中按照“s = 对应的和”的格式输出。
int main() {
	int a, n,i,sum=0;
	int item = 0;
	scanf("%d %d", &a, &n);
	item = a;
	for (i = 1; i <= n; i++) {
		sum += item;
		item = item * 10 + a;
	}printf("s = %d\n", sum);
	return 0;
}