#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <Windows.h>

//�ļ�����

//�ļ��������д

//fseek �����ļ�ָ���λ�ú�ƫ��������λ�ļ�ָ��
//int main()
//{
//	//���ļ�
//	FILE* pf = fopen("data.txt","r");
//	if (pf == NULL)
//	{
//		perror("fopen->pf");
//		return 1;
//	}
//	
//	//���ļ�
//	//��λ�ļ�ָ�뵽f
//	char ch = fgetc(pf);
//	printf("%c", ch);
//
//	ch = fgetc(pf);
//	printf("%c", ch);
//
//	ch = fgetc(pf);
//	printf("%c", ch);
//
//
//	fseek(pf, 2, SEEK_CUR);
//
//	ch = fgetc(pf);
//	printf("%c", ch);
//
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

////ftell ���ߵ�ǰλ���������ʼλ�õ�ƫ����
//int main()
//{
//	//���ļ�
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen->pf");
//		return 1;
//	}
//
//	//���ļ�
//	//��λ�ļ�ָ�뵽f
//	char ch = fgetc(pf);
//	printf("%c", ch);
//
//	ch = fgetc(pf);
//	printf("%c", ch);
//
//	ch = fgetc(pf);
//	printf("%c", ch);
//
//	int pos = ftell(pf);
//	printf("%d", pos);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


////rewind ���ļ�ָ��ص���ʼλ��
//int main()
//{
//	//���ļ�
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen->pf");
//		return 1;
//	}
//
//	//���ļ�
//	//��λ�ļ�ָ�뵽f
//	char ch = fgetc(pf);
//	printf("%c", ch);
//
//	ch = fgetc(pf);
//	printf("%c", ch);
//
//	ch = fgetc(pf);
//	printf("%c", ch);
//
//	rewind(pf);
//	int pos = ftell(pf);
//	printf("%d", pos);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//�ı��ļ��Ͷ������ļ�
//�ı��ļ����ܶ������ļ� ��ASCII�ַ�����ʽ�洢���ļ�
//�������ļ����������ڴ����Զ����Ƶ���ʽ�洢������ת������������
 
////�ļ���ȡ�������ж�
////feof ���ļ���ȡ����ʱ ���ж϶�ȡ������ԭ���Ƿ��ǣ������ļ�ĩλ����
//int main()
//{
//	//���ļ�
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen->pf");
//		return 1;
//	}
//
//	//���ļ�
//	//��λ�ļ�ָ�뵽f
//	char ch = fgetc(pf);
//	printf("%c", ch);
//
//	ch = fgetc(pf);
//	printf("%c", ch);
//
//	ch = fgetc(pf);
//	printf("%c", ch);
//
//	int pos = ftell(pf);
//	printf("%d", pos);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

////�����ļ�
////����data1.txt�ļ�������һ���µ��ļ�data2.txt
//int main()
//{
//	//���ļ�
//	FILE* pfRead = fopen("data1.txt", "r");
//	if (pfRead == NULL)
//	{
//		perror("open file for read fopen->pfRead");
//		return 1;
//	}
//	FILE* pfWrite = fopen("data2.txt", "w");
//	if (pfWrite == NULL)
//	{
//		perror("open file for write fopen->pfWrite");
//		fclose(pfRead);
//		pfRead == NULL;
//		return 1;
//	}
//
//
//	//��д�ļ�
//	int ch = 0;
//	while ((ch = fgetc(pfRead)) != EOF)
//	{
//		fputc(ch, pfWrite);
//	}
//
//	//�ر��ļ�
//	fclose(pfRead);
//	pfRead == NULL;
//	fclose(pfWrite);
//	pfWrite = NULL;
//	
//	return 0;
//}

//fflush ˢ�»�����

int main()
{
	FILE* pf = fopen("test.txt", "w");
	if (pf == NULL)
	{
		perror("fopen->pf");
		return 0;
	}
	fputs("abcdf", pf);//�Ƚ�����������������
	printf("˯��10��-�Ѿ�д�����ˣ���test.txt�ļ��������ļ�û������\n");
	Sleep(10000);
	printf("ˢ�»�����\n");
	fflush(pf);//ˢ�»������ǣ��������������������д���ļ�(����)
	//ע��fflush �ڸ߰汾��vs�ϲ�����ʹ��
	printf("��˯��10��-��ʱ���ٴδ�test.txt�ļ����ļ���������\n");
	Sleep(10000);
	fclose(pf);
	pf = NULL;

	return 0;
}