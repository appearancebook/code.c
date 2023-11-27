#define _CRT_SECURE_NO_WARNINGS 1

#include <string.h>
#include <stdio.h>
#include <assert.h>
#include <stddef.h>

//内存函数

////memcpy   内存拷贝 适用于各种数据类型
////函数拷贝结束后，返回目标空间的起始地址
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9 };
//	int arr2[18] = { 0 };
//	memcpy(arr2, arr1, 36);
//	return 0;
//}

////模拟实现memcpy(1,2,3)
//
//void my_memcpy(void* dest, void* src, size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9 };
//	int arr2[18] = { 0 };
//	my_memcpy(arr2, arr1, 8);
//	return 0;
//}

////模拟memmove

//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//	if (dest > src)
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src  = (char*)src + 1;
//		}
//	}
//	else 
//	{
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//			
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9 };
// 	int arr2[18] = { 0 };
//	my_memmove(arr2, arr1, 20);
//	return 0;
//}

////memcmp 内存比较
//int main()
//{
//	int arr1[] = { 1,2,3,1,3,45 };
//	int arr2[] = { 1,2,3,257 };
//	printf("%d", memcmp(arr1, arr2, 13));
//	return 0;
//}

////memset 
//int main()
//{
//	char arr[] = "hello appearancebook";
//	memset(arr, 'x', 4);
//	printf("%s", arr);
//
//	return 0;
//}

////结构体 --不同类型变量的集合  数组 --相同变量的集合
//
////结构体的声明
//struct tag
//{
//	char a[20];
//	//成员列表
//};//变量列表；
//
////特殊声明
//struct
//{
//	int a;
//	char b;
//	float c;
//}x;
//
//struct
//{
//	int a;
//	char b;
//	float c;
//}* p;
//
//
//int main()
//{
//	//p = &x;err
//	return 0;
//}

////结构自引用
//
//typedef struct Node
//{
//	int code;
//	struct Node* next;
//}Node;
//
//int main()
//{
//	Node n = { 0 };
//	return 0;
//}

////结构体变量的定义和初始化
//
//struct YS
//{
//	char c;
//	int i;
//
//}ys1 = { 'y',100 }, ys2 = {.i=200,.c='s'};//全局变量
//
//struct S
//{
//	double d;
//	struct YS ys;
//	int arr[10];
//};
//
//int main()
//{
//	//struct YS ys3, ys4;//局部变量
//	//printf("%c %d", ys2.c, ys2.i);
//	struct S s = { 3.14,{'a',9},{1,2,3} };
//	printf("%f %c %d\n", s.d, s.ys.c, s.ys.i);
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d",s.arr[i]);
//	}
//	return 0;
//}

//结构体内存对齐
//默认对齐数设置   -- #pragma pack()
//
//struct s1
//{
//	char c1;//1
//	int i;//4
//	char c2;//1
//};
//struct s2
//{
//	int i;//4
//	char c1;//1
//	int c2;//1
//};
//
//int main()
//{
//	//printf("%d", sizeof(struct s1));//??//12
//	//printf("%d", sizeof(struct s2));//??//8
//	printf("%d\n", offsetof(struct s2, i));//可以计算结构体成员相较于结构体起始位置的偏移量
//	printf("%d\n", offsetof(struct s2, c1));
//	printf("%d\n", offsetof(struct s2, c2));
//	printf("%d\n", sizeof(struct s2));
//	return 0;
//}

////结构体传参
//
//struct S
//{
//	int data[100];
//	int num;
//};
//void prinf1(const struct S* p)
//{
//	printf("%d\0", p->num);
//}
//int main()
//{
//	struct S s = { {1,2,3},100 };
//	prinf1(&s);
//	printf("%d\0", sizeof(struct S));
//}

////位段
//
//struct A
//{
//	int _a : 2;
//	int _b : 5;
//	int _c : 10;
//	int _d : 30;
//};
//
//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 6;
//};
//
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//	printf("%d\n", sizeof(struct A));
//	printf("%d\n", sizeof(s));
//	return 0;
//}

////枚举
////枚举的定义 使用
//enum color
//{
//	red=7,
//	green,
//	blue,
//	//可能取值
//};
//int main()
//{
//	enum  color c = green;
//	printf("%d\n", red);
//	printf("%d\n", c);
//	printf("%d\n", blue);
//	
//	return 0;
//}

//联合
//联合类型的定义
//联合体--共有体
//union Un
//{
//	char c;
//	int i;
//};
//int main()
//{
//	printf("%d\n", sizeof(union Un));
//	union Un un = { 0 };
//	printf("%d\n", &un);
//	printf("%d\n", &(un.i));
//	printf("%d\n", &(un.c));
//	return 0;
//}

////判断编辑器的大小端存储模式
//union Un
//{
//	int i;
//	char c;
//};
//
////函数实现
//int check_sys()
//{ 
//	union
//	{
//		int i;
//		char c;
//	}u = { .i = 1 };
//	return u.c;
// }
//
//int main()
//{
//	//union Un u = { 0 };
//	//u.i = 1;
//	//if (u.c == 1)
//	//	printf("小端\n");
//	//else
//	//	printf("大端\n");
//	int ret = check_sys();
//		if (ret = 1)
//			printf("小端\n");
//		else
//			printf("大端\n");
//	return 0;
//}

////联合大小的计算
//union Un1
//{
//	char c[5];
//	int i;
//};
//
//union Un2
//{
//	short c[7];
//	int i;
//};
//
//
//int main()
//{
//	printf("%d\n", sizeof(union Un1));
//	printf("%d\n", sizeof(union Un2));
//	return 0;
//}
//