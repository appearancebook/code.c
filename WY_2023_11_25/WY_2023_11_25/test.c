#define _CRT_SECURE_NO_WARNINGS 1

#include <string.h>
#include <stdio.h>
#include <assert.h>
#include <stddef.h>

//�ڴ溯��

////memcpy   �ڴ濽�� �����ڸ�����������
////�������������󣬷���Ŀ��ռ����ʼ��ַ
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9 };
//	int arr2[18] = { 0 };
//	memcpy(arr2, arr1, 36);
//	return 0;
//}

////ģ��ʵ��memcpy(1,2,3)
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

////ģ��memmove

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

////memcmp �ڴ�Ƚ�
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

////�ṹ�� --��ͬ���ͱ����ļ���  ���� --��ͬ�����ļ���
//
////�ṹ�������
//struct tag
//{
//	char a[20];
//	//��Ա�б�
//};//�����б�
//
////��������
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

////�ṹ������
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

////�ṹ������Ķ���ͳ�ʼ��
//
//struct YS
//{
//	char c;
//	int i;
//
//}ys1 = { 'y',100 }, ys2 = {.i=200,.c='s'};//ȫ�ֱ���
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
//	//struct YS ys3, ys4;//�ֲ�����
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

//�ṹ���ڴ����
//Ĭ�϶���������   -- #pragma pack()
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
//	printf("%d\n", offsetof(struct s2, i));//���Լ���ṹ���Ա����ڽṹ����ʼλ�õ�ƫ����
//	printf("%d\n", offsetof(struct s2, c1));
//	printf("%d\n", offsetof(struct s2, c2));
//	printf("%d\n", sizeof(struct s2));
//	return 0;
//}

////�ṹ�崫��
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

////λ��
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

////ö��
////ö�ٵĶ��� ʹ��
//enum color
//{
//	red=7,
//	green,
//	blue,
//	//����ȡֵ
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

//����
//�������͵Ķ���
//������--������
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

////�жϱ༭���Ĵ�С�˴洢ģʽ
//union Un
//{
//	int i;
//	char c;
//};
//
////����ʵ��
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
//	//	printf("С��\n");
//	//else
//	//	printf("���\n");
//	int ret = check_sys();
//		if (ret = 1)
//			printf("С��\n");
//		else
//			printf("���\n");
//	return 0;
//}

////���ϴ�С�ļ���
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