#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//��̬�ڴ����
//��̬�ڴ������
//malloc
//free

//calloc
//realloc


////malloc   ��������void �����ʼ��
//int main()
//{
//	int arr[10];
//	int* p = (int*)malloc(40);
//	if(p==NULL)
//	{ 
//		perror("malloc");
//		return 1;
//	}
//	//���ٳɹ�
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//  free(p);
//	return 0;
//}

////calloc
////���ʼ��
//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	if(p==NULL)
//	{ 
//		perror("malloc");
//		return 1;
//	}
//	//���ٳɹ�
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
//	//��ʼ��Ϊ1��10
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		p[i] = i + 1;
//	}
//	//����һ�¿ռ�
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
//	//��ӡ����
//	for (i = 0; i < 20; i++)
//	{
//		printf("%d\n", p[i]);
//	}
//	//�ͷ�
//	free(p);
//	p = NULL;
//	return 0;
//}


////3.�����Ķ�̬�ڴ�������
////3.1 ��NULLָ��Ľ����ò���
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
////3.2 �Զ�̬�ڴ濪�ٿռ��Խ�����
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


////3.3 �ԷǶ�̬�����ڴ�ʹ��free�ͷ�
// 
//int main()
//{
//	int a = 0;
//	int* p = &a;
//	free(p);
//	p = NULL;
//	return 0;
//}

////3.4ʹ��free�ͷ�һ�鶯̬�ڴ��һ����
//
//int main()
//{
//	int* p = (int*)malloc(40);
//	//int* ptr = p; ����
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
//	//p = ptr;����
//	//�ͷ�
//	free(p);
//	p = NULL;
//	return 0;
//}

////3.5 ��ͬһ��ռ�Ķ���ͷ�
//
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	//ʹ��
//
//	//�ͷ�
//	free(p);
//	//p = NULL;����
//	//����ͷ�
//	free(p);
//	return 0;
//}

//3.6 ��̬�ڴ濪�������ͷ�(�ڴ�й©)

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
//	//free(p);����
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
////1.�����NULL�����˽����ò������������
////2.û���ͷſռ䣬�ڴ�й¶

//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	//str���Ұָ���� �Ƿ�������
//	//���ڣ�����ջ�ռ��ַ������
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
////����ջ�ռ��ַ����
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

//5.C/C++������ڴ濪��

//6.��������

//struct S
//{
//	int a;
//	int arr[];//��������  
//};
//
//int main()
//{
//	//printf("%d", sizeof(struct S));//�鿴������������Ľṹ�����͵Ĵ�С
//	struct S* str = (struct S*)malloc(sizeof(struct S)+40);
//	if (str == NULL)
//	{
//		perror("malloc->str");
//		return 1;
//	}
//	str->a = 9;
//	int i = 0;
//
//	//���������鸳ֵ
//	for (i = 0; i < 10; i++)
//	{
//		str->arr[i] = i + 1;
//	}
//
//	//�ռ䲻������������������
//	struct S* px = realloc(str, sizeof(struct S) + 60);
//	if (px == NULL)
//	{
//		perror("realloc-px");
//		return 1;
//	}
//	//�������鸳ֵ
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
//	//�ͷ�
//	free(str);
//	str = NULL;
//	
//
//	return 0;
//}

////����ʵ�� ��ʹ����������
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
//	//����ռ�
//	p->pa= (int*)malloc(40);
//	
//	if (p->pa == NULL)
//	{
//		perror("malloc->p->pa");
//		return 1;
//	}
//	
//	//��ֵ
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		p->pa[i] = i + 1;
//	}
//
//	//�ռ䲻��������
//	int* pb = (int*)realloc(p->pa, 80);
//	if (pb == NULL)
//	{
//		perror("realloc->pb");
//		return 1;
//	}
//	p->pa = pb;
//
//	//��ӡ
//	printf("%d\n", p->a);
//	for (i = 0; i < 18; i++)
//	{
//		printf("%d\n", *(p->pa + i));
//	}
//	
//	//�ͷ�
//	free(p->pa);
//	p->pa = NULL;
//	free(p);
//	p = NULL;
//
//
//	return 0;
//}
