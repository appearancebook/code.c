#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
////程序的环境和预处理
//
//extern int add(int x, int y);
//
//int main()
//{
//	int a = 213;
//	int b = 72;
//	int c = add(a, b);
//	printf("%d\n", c);
//	return 0;
//}

//预编译   gcc test.c -E -o  test.i
//注释的删除
//#include 头文件的包含
//#define 符号的替换

//所以的预处理指令都是在预处理阶段进行处理

//文件操作




//编译     gcc -S test.i -->test.s
//         gcc -S test.c -->test.s
//把c语言代码翻译成了汇编指令
//语法分析
//词法分析
//语义分析
//符号汇总




//汇编    gcc -c test.s -->test.o
//xxx.o--Linux环境下的目标文件
//目标文件中放的都是二进制的指令

//把汇编代码翻译成二进制的指令

//形成符号表



//链接     gcc test.o -o test
//1.合并段表
//2.符号表的合并和重定位

//linux 下gcc编译产生的目标文件 test.o 可执行程序 test
//都是按照 ELF 这种文件的格式来储存的
//readeif 工具能够识别ELF这种格式的文件


//运行环境

//预编译详解
//__FILE_    //进行编译的文件
//__LINE__   //文件当前的行号
//__DATE__   //文件被编译的日期
//__TIME__   //文件被编译的时间
//__STDC__   //如果编译器遵循ANSI C. 其值为1，否则未定义


//int main()
//{
//	//都是预编译阶段处理的预定义符号
//	printf("%s\n", __FILE__);
//	printf("%d\n", __LINE__);
//	printf("%s\n", __DATE__);
//	printf("%s\n", __TIME__);
//	//printf("%s\n", __STDC__);//VS不支持ANSIC
//
//
//
//	return 0;
//}

//#define
//语法 #define name 内容
//字符串常量的内容不能被搜索

//#define W 7
//#define Y "ABC"
//#define Z for(;;)
//
//int main()
//{
//	printf("%d\n", W);
//	printf("%d\n", Y);
//	//Z
//	//{
//	//	printf("hehe\n");
//	//}
//	return 0;
//}

//#define DEBUG_PRINT printf("file:%s\tline:%d\t \
//　　　　　　　　　　　　　　date:%s\ttime:%s\n" ,\
//__FILE__,__LINE__ ,       \
//__DATE__,__TIME__ )   
//
//int main()
//{
//	DEBUG_PRINT;
//	return 0;
//}

//#define 定义宏  不能递归
//#define MAX(x,y)  ((x)>(y)?(x):(y))
//
//int main()
//{
//	int a = 2;
//	int b = -1;
//	int c = MAX(a, b);
//	printf("%d\n", c);
//	return 0;
//}
//#define  SQUARE(X) X*X
////#define  SQUARE(X) ((X)*(X)) 尽量写成这样   
//
//int main()
//{
//	int a = 3;
//	int r = SQUARE(a);
//	int r = SQUARE(a+2);
//	printf("r=%d\n", r);
//	return 0;
//}