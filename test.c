1.求二进制1的个数 ? (共写了四个函数)
#include<stdio.h>
#include<stdlib.h>
int NumberOf1(unsigned int n){
	int count=0;
	while (n != 0){
		if (n % 2 == 1){
			count++;
		}
		n = n / 2;
	}
	return count;
}
int NumberOf2(unsigned int n){
	int i = 0;
	int count = 0;
	for (i = 0; i < 31; ++i){
		if ((n & 1) != 0){
			count++;
		}
		n = n>>1;
	}
	return count;
}
int NumberOf3(unsigned int n){
	int count = 0;
	while (n != 0){
		if ((n & 1) != 0){
			count++;
		}
		n = n >> 1;
	}
	return count;
}
int NumberOf4(unsigned int n){
	int count = 0;
	while (n!=0){
		count++;
		n = n&(n - 1);
	}
	return count;
}
int main(){
	printf("%d\n", NumberOf1(10));
	printf("%d\n", NumberOf2(10));
	printf("%d\n", NumberOf3(10));
	printf("%d\n", NumberOf4(10));
	system("pause");
	return 0;
}
2.比较两个数的大小,不能使用for,if,>,<.
int Func(int a, int b){
	return (a - b) >> 31 ? -1 : (a - b ? 1 : 0);   //利用二进制右移进行真假判断  
}                                                  //正 返回1; 负 返回-1; 相等 返回0
int main(){
	printf("%d\n", Func(5, 8));
	system("pause");
	return 0;
}
3.5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果
A选手说：B第二，我第三；
B选手说：我第二，E第四；
C选手说：我第一，D第二；
D选手说：C最后，我第三；
E选手说：我第四，A第一；
比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。
  编码:  0   1
   A    b2   a3
   B    b2   e4
   C    c1   d2
   D    c5   d3
   E    e4   a1
#include<stdio.h>
int main(){
	int i=0;
	for (i = 0; i < 32; ++i){
		int a = 1;
		int b = 1;
		int c = 1;
		int d = 1;
		int e = 1;
		if (((i >> 0) & 1) == 1)
			a = 1;
		if (((i >> 0) & 1) == 0)
			e = 4;
		if (((i >> 1) & 1) == 1)
			d = 3;
		if (((i >> 1) & 1) == 0)
			c= 5;
		if (((i >> 2) & 1) == 1)
			d = 2;
		if (((i >> 2) & 1) == 0)
			c = 1;
		if (((i >> 3) & 1) == 1)
			e = 4;
		if (((i >> 3) & 1) == 0)
			b = 2;
		if (((i >> 4) & 1) == 1)
			a = 3;
		if (((i >> 4) & 1) == 0)
			b = 2;
		if (a != b&&a != c&&a != d&&a != e&&b != c&&b != d&&b != e&&c != d&&c != e&&d != e){
			printf("a=%d,b=%d,c=%d,d=%d,e=%d\n", a, b, c, d,e);
			break;
		}
	}
	system("pause");
	return 0;
}
4.日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个
嫌疑犯的一个。以下为4个嫌疑犯的供词。
A说：不是我。
B说：是C。
C说：是D。
D说：C在胡说
已知3个人说了真话，1个人说的是假话。
现在请根据这些信息，写一个程序来确定到底谁是凶手。
int main(){
	int A = 0, B = 0, C = 0, D = 0;
	int FD;//因为c和d的供词刚好对立 表示对立的
	int i;
	for (i = 1; i <= 4; i++){
		if (i == 1){                       //A说的假
			A = 1; C = 1; FD = 1; D = 0;
		}
		if (i == 2){                         //B说的假
			A = 0; C = 0; FD = 1; D = 0;
		}
		if (i == 3){                     //C说的假
			A = 0; C = 1; FD = 0; D = 0;
		}
		if (i == 4){                    //D的说的假
			A = 0; C = 1; FD = 1; D = 0;
		}
		if (A + B + C + D + FD == 1 && FD == D)//只有一个人是凶手 当和为1时一个凶手出现  因为CD供词推出的都是D是不是 与上FD==D是为了排除D是D不是的情况 
			printf("A=%d B=%d C=%d D=%d\n", A, B, C, D);
	}
	system("pause");
	return 0;
}
5.在屏幕上打印杨辉三角。
1
1 1
1 2 1
1 3 3 1
int main(){
	int i, j, a[11][11];                             /*定义i，j，a[11][11]为基本整型*/
	for (i = 1; i < 11; i++){                     /*for循环i的范围从1到10*/
		a[i][i] = 1;                             /*对角线元素全为1*/
		a[i][1] = 1;                             /*每行第一列元素全为1*/
	}
	for (i = 3; i < 11; i++)                     /*for循环范围从第3行开始到第10行*/
	for (j = 2; j <= i - 1; j++)                 /*for循环范围从第2列开始到该行行数减一列为止*/
		a[i][j] = a[i - 1][j - 1] + a[i - 1][j];  /*第i行j列等于第i-1行j-1列的值加上第i-1行j列的值*/
	for (i = 1; i < 11; i++){
		for (j = 1; j <= i; j++)
			printf("%4d", a[i][j]);              /*通过上面两次for循环将二维数组a中元素输出*/
		printf("\n");                            /*每输出完一行进行一次换行*/
	}
	system("pause");
	return 0;
}
