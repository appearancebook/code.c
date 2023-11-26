#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//动态内存管理
//动态内存管理函数
//malloc
//free

//calloc
//realloc


////malloc   返回类型void 不会初始化
//int main()
//{
//	int arr[10];
//	int* p = (int*)malloc(40);
//	if(p==NULL)
//	{ 
//		perror("malloc");
//		return 1;
//	}
//	//开辟成功
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//  free(p);
//	return 0;
//}

////calloc
////会初始化
//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	if(p==NULL)
//	{ 
//		perror("malloc");
//		return 1;
//	}
//	//开辟成功
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//	free(p);
//  p = NULL;
//	return 0;
//
//}

//realloc
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	//初始化为1～10
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		p[i] = i + 1;
//	}
//	//增加一下空间
//	int* ptr = (int*)realloc(p, 80);
//	if (ptr != NULL)
//	{
//		p = ptr;
//		ptr = NULL;
//	}
//	else
//	{
//		perror("realloc");
//		return 1;
//	}
//	//打印数据
//	for (i = 0; i < 20; i++)
//	{
//		printf("%d\n", p[i]);
//	}
//	//释放
//	free(p);
//	p = NULL;
//	return 0;
//}


////3.常见的动态内存管理错误
////3.1 对NULL指针的解引用操作
// 
//void test()
//{
//	int* p = (int*)malloc(INT_MAX / 4);
//	*p = 20;
//}
//int main()
//{
//	test();
//	return 0;
//}
// 
// 
////3.2 对动态内存开辟空间的越界访问
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 20; i++)
//	{
//		printf("%d\n", p[i]);
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}


////3.3 对非动态开辟内存使用free释放
// 
//int main()
//{
//	int a = 0;
//	int* p = &a;
//	free(p);
//	p = NULL;
//	return 0;
//}

////3.4使用free释放一块动态内存的一部分
//
//int main()
//{
//	int* p = (int*)malloc(40);
//	//int* ptr = p; 修正
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*p = i;
//		p++;
//	}
//	//p = ptr;修正
//	//释放
//	free(p);
//	p = NULL;
//	return 0;
//}

////3.5 对同一块空间的多次释放
//
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	//使用
//
//	//释放
//	free(p);
//	//p = NULL;修正
//	//多次释放
//	free(p);
//	return 0;
//}

//3.6 动态内存开辟忘记释放(内存泄漏)

//void test()
//{
//	int* p = (int*)malloc(100);
//	if (p == NULL)
//	{
//		perror("malloc");
//	}
//	else
//	{
//		*p = 20;
//	}
//	//free(p);修正
//	//p = NULL;
//}
//
//int main()
//{
//	test();
//
//	while (1);
//
//	return 0;
//
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>

//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}
////1.问题对NULL进行了借引用操作，程序崩溃
////2.没有释放空间，内存泄露

//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	//str变成野指针了 非法访问了
//	//属于：返回栈空间地址的问题
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//#include <stdio.h>
//
////返回栈空间地址问题
//int* test()
//{
//	int a = 9;
//	return &a;
//}
//
//int main()
//{
//	int* p = test();
//	printf("ys\n");
//	printf("%d\n", *p);
//	return 0;
//}

//5.C/C++程序的内存开辟

//6.柔性数组

//struct S
//{
//	int a;
//	int arr[];//柔性数组  
//};
//
//int main()
//{
//	//printf("%d", sizeof(struct S));//查看含有柔性数组的结构体类型的大小
//	struct S* str = (struct S*)malloc(sizeof(struct S)+40);
//	if (str == NULL)
//	{
//		perror("malloc->str");
//		return 1;
//	}
//	str->a = 9;
//	int i = 0;
//
//	//给柔性数组赋值
//	for (i = 0; i < 10; i++)
//	{
//		str->arr[i] = i + 1;
//	}
//
//	//空间不够给，柔性数组扩容
//	struct S* px = realloc(str, sizeof(struct S) + 60);
//	if (px == NULL)
//	{
//		perror("realloc-px");
//		return 1;
//	}
//	//柔性数组赋值
//	str = px;
//	str->a = 72;
//	for (i = 0; i < 15; i++)
//	{
//		str->arr[i] = i + 1;
//	}
//	printf("%d\n", str->a);
//	for (i = 0; i < 15; i++)
//	{
//		printf("%d\n", *(str->arr+i));
//	}
//	
//	//释放
//	free(str);
//	str = NULL;
//	
//
//	return 0;
//}

////类似实践 不使用柔性数组
//
//struct S
//{
//	int a;
//	int* pa;
//};
//
//int main()
//{
//	struct S* p = (struct S*)malloc(sizeof(struct S));
//	if (p == NULL)
//	{
//		perror("malloc->p");
//		return 1;
//	}
//	p->a = 9;
//
//	//申请空间
//	p->pa= (int*)malloc(40);
//	
//	if (p->pa == NULL)
//	{
//		perror("malloc->p->pa");
//		return 1;
//	}
//	
//	//赋值
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		p->pa[i] = i + 1;
//	}
//
//	//空间不够，扩容
//	int* pb = (int*)realloc(p->pa, 80);
//	if (pb == NULL)
//	{
//		perror("realloc->pb");
//		return 1;
//	}
//	p->pa = pb;
//
//	//打印
//	printf("%d\n", p->a);
//	for (i = 0; i < 18; i++)
//	{
//		printf("%d\n", *(p->pa + i));
//	}
//	
//	//释放
//	free(p->pa);
//	p->pa = NULL;
//	free(p);
//	p = NULL;
//
//
//	return 0;
//}
