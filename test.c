1.�������1�ĸ��� ? (��д���ĸ�����)
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
2.�Ƚ��������Ĵ�С,����ʹ��for,if,>,<.
int Func(int a, int b){
	return (a - b) >> 31 ? -1 : (a - b ? 1 : 0);   //���ö��������ƽ�������ж�  
}                                                  //�� ����1; �� ����-1; ��� ����0
int main(){
	printf("%d\n", Func(5, 8));
	system("pause");
	return 0;
}
3.5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ��������
Aѡ��˵��B�ڶ����ҵ�����
Bѡ��˵���ҵڶ���E���ģ�
Cѡ��˵���ҵ�һ��D�ڶ���
Dѡ��˵��C����ҵ�����
Eѡ��˵���ҵ��ģ�A��һ��
����������ÿλѡ�ֶ�˵����һ�룬����ȷ�����������Ρ�
  ����:  0   1
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
4.�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4��
���ɷ���һ��������Ϊ4�����ɷ��Ĺ��ʡ�
A˵�������ҡ�
B˵����C��
C˵����D��
D˵��C�ں�˵
��֪3����˵���滰��1����˵���Ǽٻ���
�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�
int main(){
	int A = 0, B = 0, C = 0, D = 0;
	int FD;//��Ϊc��d�Ĺ��ʸպö��� ��ʾ������
	int i;
	for (i = 1; i <= 4; i++){
		if (i == 1){                       //A˵�ļ�
			A = 1; C = 1; FD = 1; D = 0;
		}
		if (i == 2){                         //B˵�ļ�
			A = 0; C = 0; FD = 1; D = 0;
		}
		if (i == 3){                     //C˵�ļ�
			A = 0; C = 1; FD = 0; D = 0;
		}
		if (i == 4){                    //D��˵�ļ�
			A = 0; C = 1; FD = 1; D = 0;
		}
		if (A + B + C + D + FD == 1 && FD == D)//ֻ��һ���������� ����Ϊ1ʱһ�����ֳ���  ��ΪCD�����Ƴ��Ķ���D�ǲ��� ����FD==D��Ϊ���ų�D��D���ǵ���� 
			printf("A=%d B=%d C=%d D=%d\n", A, B, C, D);
	}
	system("pause");
	return 0;
}
5.����Ļ�ϴ�ӡ������ǡ�
1
1 1
1 2 1
1 3 3 1
int main(){
	int i, j, a[11][11];                             /*����i��j��a[11][11]Ϊ��������*/
	for (i = 1; i < 11; i++){                     /*forѭ��i�ķ�Χ��1��10*/
		a[i][i] = 1;                             /*�Խ���Ԫ��ȫΪ1*/
		a[i][1] = 1;                             /*ÿ�е�һ��Ԫ��ȫΪ1*/
	}
	for (i = 3; i < 11; i++)                     /*forѭ����Χ�ӵ�3�п�ʼ����10��*/
	for (j = 2; j <= i - 1; j++)                 /*forѭ����Χ�ӵ�2�п�ʼ������������һ��Ϊֹ*/
		a[i][j] = a[i - 1][j - 1] + a[i - 1][j];  /*��i��j�е��ڵ�i-1��j-1�е�ֵ���ϵ�i-1��j�е�ֵ*/
	for (i = 1; i < 11; i++){
		for (j = 1; j <= i; j++)
			printf("%4d", a[i][j]);              /*ͨ����������forѭ������ά����a��Ԫ�����*/
		printf("\n");                            /*ÿ�����һ�н���һ�λ���*/
	}
	system("pause");
	return 0;
}
