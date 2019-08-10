//1.在屏幕上输出以下图案：
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
//2.求出0～999之间的所有“水仙花数”并输出。
//“水仙花数”是指一个三位数，其各位数字的立方和确好等于该数本身，如；153＝1＋5＋3 ? ，则153是一个“水仙花数”。
///*
//在数论中，水仙花数（Narcissistic number）也称为自恋数、自幂数、阿姆斯壮数或阿姆斯特朗数（Armstrong number），是指一N位数，其各个数之N次方和等于该数。
//例如153、370、371及407就是三位数的水仙花数，其各个数之立方和等于该数：
//153 = 1^3 + 5^3 + 3^3。
//370 = 3^3 + 7^3 + 0^3。
//371 = 3^3 + 7^3 + 1^3。
//407 = 4^3 + 0^3 + 7^3。
//*/
//3.求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222



//求二进制1的个数 ? (共写了四个函数)
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
//比较两个数的大小,不能使用for,if,>,<.
//int Func(int a, int b){
//	return (a - b) >> 31 ? -1 : (a - b ? 1 : 0);   //利用二进制右移进行真假判断  
//}                                                  //正 返回1; 负 返回-1; 相等 返回0
//int main(){
//	printf("%d\n", Func(5, 8));
//	system("pause");
//	return 0;
//}
//给你一个数组,把数组里单一的数字打印出来.例如arr[]={2,3,4,5,4,3,2},打印其中的5.
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
