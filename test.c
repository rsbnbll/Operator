//1.����Ļ���������ͼ����
//*                      1
//***                    3
//*****                  5
//*******                7
//*********              9
//***********            11
//*************          13
//***********
//*********
//*******
//*****
//***
//*
//2.���0��999֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ����λ�������λ���ֵ�������ȷ�õ��ڸ��������磻153��1��5��3 ? ����153��һ����ˮ�ɻ�������
///*
//�������У�ˮ�ɻ�����Narcissistic number��Ҳ��Ϊ������������������ķ˹׳����ķ˹��������Armstrong number������ָһNλ�����������֮N�η��͵��ڸ�����
//����153��370��371��407������λ����ˮ�ɻ������������֮�����͵��ڸ�����
//153 = 1^3 + 5^3 + 3^3��
//370 = 3^3 + 7^3 + 0^3��
//371 = 3^3 + 7^3 + 1^3��
//407 = 4^3 + 0^3 + 7^3��
//*/
//3.��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//���磺2 + 22 + 222 + 2222 + 22222



//�������1�ĸ��� ? (��д���ĸ�����)
#include<stdio.h>
#include<stdlib.h>
//int NumberOf1(unsigned int n){
//	int count=0;
//	while (n != 0){
//		if (n % 2 == 1){
//			count++;
//		}
//		n = n / 2;
//	}
//	return count;
//}
//int NumberOf2(unsigned int n){
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 31; ++i){
//		if ((n & 1) != 0){
//			count++;
//		}
//		n = n>>1;
//	}
//	return count;
//}
//int NumberOf3(unsigned int n){
//	int count = 0;
//	while (n != 0){
//		if ((n & 1) != 0){
//			count++;
//		}
//		n = n >> 1;
//	}
//	return count;
//}
//int NumberOf4(unsigned int n){
//	int count = 0;
//	while (n!=0){
//		count++;
//		n = n&(n - 1);
//	}
//	return count;
//}
//int main(){
//	printf("%d\n", NumberOf1(10));
//	printf("%d\n", NumberOf2(10));
//	printf("%d\n", NumberOf3(10));
//	printf("%d\n", NumberOf4(10));
//	system("pause");
//	return 0;
//}
//�Ƚ��������Ĵ�С,����ʹ��for,if,>,<.
//int Func(int a, int b){
//	return (a - b) >> 31 ? -1 : (a - b ? 1 : 0);   //���ö��������ƽ�������ж�  
//}                                                  //�� ����1; �� ����-1; ��� ����0
//int main(){
//	printf("%d\n", Func(5, 8));
//	system("pause");
//	return 0;
//}
//����һ������,�������ﵥһ�����ִ�ӡ����.����arr[]={2,3,4,5,4,3,2},��ӡ���е�5.
int main(){
	int i = 0;
	int arr[] = { 2, 3, 4, 5, 4, 3, 2 };
	for (i = 0; i < 7; ++i){
		if ((arr[i] ^ arr[i + 1]) == 0){
			printf("%d ", i);
		}
	}
	system("pause");
	return 0;
}
