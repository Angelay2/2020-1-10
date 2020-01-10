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
	printf("%d\n", strlen(*p));// error 类型不匹配
	printf("%d\n", strlen(p[0]));//error 
	printf("%d\n", strlen(&p));// warning 随机值
	printf("%d\n", strlen(&p + 1));// warning 随机值
	printf("%d\n", strlen(&p[0] + 1));// 5

	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a));// 48 3*4*4
	printf("%d\n", sizeof(a[0][0]));// 4
	printf("%d\n", sizeof(a[0]));// 16 第一个元素的大小
	printf("%d\n", sizeof(a[0] + 1));// 4 第一个元素里第一个整形的大小
	printf("%d\n", sizeof(*(a[0] + 1)));// 4 整形
	printf("%d\n", sizeof(a + 1));// 4
	printf("%d\n", sizeof(*(a + 1)));// 16
	printf("%d\n", sizeof(&a[0] + 1));// 4 第二个人元素&a[1]
	printf("%d\n", sizeof(*(&a[0] + 1)));// 16 第二个元素
	printf("%d\n", sizeof(*a));//第一个元素 16
	printf("%d\n", sizeof(a[3]));// 越界 16

	system("pause");
	return 0;
}