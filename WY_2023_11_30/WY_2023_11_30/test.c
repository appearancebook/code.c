#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////#和##
////把参数插入到字符串中
//
//
////#
//#define PRINT(n,format) printf("the value of "#n" is "format"\n", n)
//
//
//int main()
//{
//	int a = 10;
//	printf("the value of a is %d\n", a);
//	PRINT(a,"%d");
//	int b = 9;
//	PRINT(b,"%d");
//	float f = 3.14f;
//	PRINT(f,"%f");
//	return 0;
//}


////##的作用
//
//#define CAT(x,y) x##y
//
//int main()
//{
//	int class37 = 2017;
//	printf("%d\n", CAT(class, 37));
//	printf("%d\n", class37);
//	return 0;
//}

////副作用
//int main()
//{
//	int a = 9;//b==10, a==9无副作用
//	int b = a + 1;//b==10,  a=10有副作用
//}

////带有副作用的宏参数
//
//#define MAX(x,y) ((x)>(y)?(x):(y))
//
//int main()
//{
//	int a = 5;
//	int b = 6;
//	//int c = MAX(a++, b++);
//	int c = ((a++) > (b++) ? (a++) : (b++));
////            5       6               7
//	//c=7
//	//b=8
//	//a=6
//	printf("%d\n", a);
//	printf("%d\n", b);
//	printf("%d\n", c);
//
//	return 0;
//}

//宏和函数的对比
//宏一般用于执行简单小型的运行
//宏不方便调试
//宏不够严谨

//#define MAX(x,y) ((x)>(y)?(x):(y))
//
//int Max(int a, int b)
//{
//	return (a > b ? a : b);
//}
//
//int main()
//{
//
//	return 0;
//}

////宏有些能力函数绝对没有
//
//#define MALLOC(num,type) (type*)malloc(num*sizeof(type))
//
//int main()
//{
//	int* p = (int*)malloc(126 * sizeof(int));
//	int* p = MALLOC(126, int);
//}

////宏和函数的对比
////offsetof 宏
//
//#define MAX(x,y) ((x)>(y)?(x):(y))
//
//int Max(int a, int b)
//{
//	return (a > b ? a : b);
//}
//
//
//int main()
//{
//	int c = MAX(2 + 3, 6);
//	c = Max(2 + 3, 6);
//	return 0;
//}
//
////inline--内联
////内联函数



////#undef  取消宏定义
//
//#define MAX(x,y) ((x)>(y)?(x):(y))
//
//int main()
//{
//	int c = MAX(3, 5);
//#undef MAX
//	int b = MAX(4, 5);//到这里MAX未定义了
//	return 0;
//}



//命令行定义   VS 中无法演示
//gcc test.c -D SZ=100 -0 test


////条件编译  可以嵌套使用
////一般用于不同编译器下编译的代码不同
//#define M 1
//int main()
//{
//#if M<3 //#if后的表达是为0，则在预处理完后直接删掉两者之间的代码
//	printf("yzs\n");//只有一个#endif的情况
//	printf("yzs\n");//如果 #if 和 #elif 都满足条件 只保留前者内容的代码
//	printf("yzs\n");
//#endif
//#if M==2
//	printf("ys\n");
//	printf("\n");
//	printf("ys\n");
//	printf("ys\n");
//
//#else
//	printf("\n");
//	printf("\n");
//	printf("yj\n");
//
//#endif
//	return 0;
//
//}


////判断是否被定义
////#if defined(symbol)
////#ifdef sybol       //
////#if !defined(symbol)
////#ifndef sybol
//
//
//#define WIN 1
//
//
//int main()
//{
////#if defined(WIN)
////#if !defined(WIN)
//#ifdef WIN
////#ifndef WIN
//	printf("windows");
//#endif
//	return 0;
//}


////嵌套使用 可以看头文件里面的条件编译指令
//int main()
//{
//	;
//	return 0;
//}


//文件包含

//本地文件
//#include "xxx.h"
//先在xxx.c文件的当前文件目录下找xxx.h，找不到再去库目录里面找，
//在找不到就报错
//#include <xxx.h>
//直接去不标准库目录去找
//找不到就报错

//防止头文件重复多次包含(引用)
//1.
//#if __xxx_h__
//#define __xxx_h__
//int Add(int x, int y)
//
//#endif 
//
//2.
//#pragma once
//int Add(int x, int y)



//嵌套文件包含 