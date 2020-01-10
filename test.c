#include <stdio.h>
#include <Windows.h>

int main(){
	char* p = "abcdef";
	printf("%d\n", sizeof(p));// 4
	printf("%d\n", sizeof(p - 1));// 4
	printf("%d\n", sizeof(*p));// 1
	printf("%d\n", sizeof(p[0]));// 1
	printf("%d\n", sizeof(&p));// 4
	printf("%d\n", sizeof(&p + 1));// 4
	printf("%d\n", sizeof(&p[0] + 1));// 4

	printf("%d\n", strlen(p)); // 6
	printf("%d\n", strlen(p + 1));// 5=>b
	printf("%d\n", strlen(*p));// error ���Ͳ�ƥ��
	printf("%d\n", strlen(p[0]));//error 
	printf("%d\n", strlen(&p));// warning ���ֵ
	printf("%d\n", strlen(&p + 1));// warning ���ֵ
	printf("%d\n", strlen(&p[0] + 1));// 5

	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a));// 48 3*4*4
	printf("%d\n", sizeof(a[0][0]));// 4
	printf("%d\n", sizeof(a[0]));// 16 ��һ��Ԫ�صĴ�С
	printf("%d\n", sizeof(a[0] + 1));// 4 ��һ��Ԫ�����һ�����εĴ�С
	printf("%d\n", sizeof(*(a[0] + 1)));// 4 ����
	printf("%d\n", sizeof(a + 1));// 4
	printf("%d\n", sizeof(*(a + 1)));// 16
	printf("%d\n", sizeof(&a[0] + 1));// 4 �ڶ�����Ԫ��&a[1]
	printf("%d\n", sizeof(*(&a[0] + 1)));// 16 �ڶ���Ԫ��
	printf("%d\n", sizeof(*a));//��һ��Ԫ�� 16
	printf("%d\n", sizeof(a[3]));// Խ�� 16

	system("pause");
	return 0;
}