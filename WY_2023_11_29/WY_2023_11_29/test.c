#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
////����Ļ�����Ԥ����
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

//Ԥ����   gcc test.c -E -o  test.i
//ע�͵�ɾ��
//#include ͷ�ļ��İ���
//#define ���ŵ��滻

//���Ե�Ԥ����ָ�����Ԥ����׶ν��д���

//�ļ�����




//����     gcc -S test.i -->test.s
//         gcc -S test.c -->test.s
//��c���Դ��뷭����˻��ָ��
//�﷨����
//�ʷ�����
//�������
//���Ż���




//���    gcc -c test.s -->test.o
//xxx.o--Linux�����µ�Ŀ���ļ�
//Ŀ���ļ��зŵĶ��Ƕ����Ƶ�ָ��

//�ѻ����뷭��ɶ����Ƶ�ָ��

//�γɷ��ű�



//����     gcc test.o -o test
//1.�ϲ��α�
//2.���ű�ĺϲ����ض�λ

//linux ��gcc���������Ŀ���ļ� test.o ��ִ�г��� test
//���ǰ��� ELF �����ļ��ĸ�ʽ�������
//readeif �����ܹ�ʶ��ELF���ָ�ʽ���ļ�


//���л���

//Ԥ�������
//__FILE_    //���б�����ļ�
//__LINE__   //�ļ���ǰ���к�
//__DATE__   //�ļ������������
//__TIME__   //�ļ��������ʱ��
//__STDC__   //�����������ѭANSI C. ��ֵΪ1������δ����


//int main()
//{
//	//����Ԥ����׶δ����Ԥ�������
//	printf("%s\n", __FILE__);
//	printf("%d\n", __LINE__);
//	printf("%s\n", __DATE__);
//	printf("%s\n", __TIME__);
//	//printf("%s\n", __STDC__);//VS��֧��ANSIC
//
//
//
//	return 0;
//}

//#define
//�﷨ #define name ����
//�ַ������������ݲ��ܱ�����

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
//����������������������������date:%s\ttime:%s\n" ,\
//__FILE__,__LINE__ ,       \
//__DATE__,__TIME__ )   
//
//int main()
//{
//	DEBUG_PRINT;
//	return 0;
//}

//#define �����  ���ܵݹ�
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
////#define  SQUARE(X) ((X)*(X)) ����д������   
//
//int main()
//{
//	int a = 3;
//	int r = SQUARE(a);
//	int r = SQUARE(a+2);
//	printf("r=%d\n", r);
//	return 0;
//}