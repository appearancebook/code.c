#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////#��##
////�Ѳ������뵽�ַ�����
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


////##������
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

////������
//int main()
//{
//	int a = 9;//b==10, a==9�޸�����
//	int b = a + 1;//b==10,  a=10�и�����
//}

////���и����õĺ����
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

//��ͺ����ĶԱ�
//��һ������ִ�м�С�͵�����
//�겻�������
//�겻���Ͻ�

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

////����Щ������������û��
//
//#define MALLOC(num,type) (type*)malloc(num*sizeof(type))
//
//int main()
//{
//	int* p = (int*)malloc(126 * sizeof(int));
//	int* p = MALLOC(126, int);
//}

////��ͺ����ĶԱ�
////offsetof ��
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
////inline--����
////��������



////#undef  ȡ���궨��
//
//#define MAX(x,y) ((x)>(y)?(x):(y))
//
//int main()
//{
//	int c = MAX(3, 5);
//#undef MAX
//	int b = MAX(4, 5);//������MAXδ������
//	return 0;
//}



//�����ж���   VS ���޷���ʾ
//gcc test.c -D SZ=100 -0 test


////��������  ����Ƕ��ʹ��
////һ�����ڲ�ͬ�������±���Ĵ��벻ͬ
//#define M 1
//int main()
//{
//#if M<3 //#if��ı����Ϊ0������Ԥ�������ֱ��ɾ������֮��Ĵ���
//	printf("yzs\n");//ֻ��һ��#endif�����
//	printf("yzs\n");//��� #if �� #elif ���������� ֻ����ǰ�����ݵĴ���
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


////�ж��Ƿ񱻶���
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


////Ƕ��ʹ�� ���Կ�ͷ�ļ��������������ָ��
//int main()
//{
//	;
//	return 0;
//}


//�ļ�����

//�����ļ�
//#include "xxx.h"
//����xxx.c�ļ��ĵ�ǰ�ļ�Ŀ¼����xxx.h���Ҳ�����ȥ��Ŀ¼�����ң�
//���Ҳ����ͱ���
//#include <xxx.h>
//ֱ��ȥ����׼��Ŀ¼ȥ��
//�Ҳ����ͱ���

//��ֹͷ�ļ��ظ���ΰ���(����)
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



//Ƕ���ļ����� 