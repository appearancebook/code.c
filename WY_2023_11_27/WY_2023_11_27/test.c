#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//�����ļ�����
//�ļ���
//�ļ�·��+�ļ�������+�ļ���׺

//�ļ��Ĵ򿪺͹ر�

//int main()
//{
//	//���ļ�
//	
//	//���·��
//	//FILE* pf = fopen("..\\x64\\data.txt", "w");
//	
//	
//	//����·��C:\Users\sss\Desktop\data.txt
//	//FILE* pf = fopen("C:\\Users\\sss\\Desktop\\data.txt","w");
//	
//	//��ǰ·��
//	FILE* pf = fopen("data.txt", "r");
//
//
//
//
//	if (pf == NULL)
//	{
//		perror("fopen->pf");
//		return 1;
//	}
//
//	//���ļ�
//	int ch = fgetc(stdin);
//	printf("%c", ch);
//	//˳���д
//	//int i = 0;
//	//for (i = 0; i < 26; i++)
//	//{
//	//	fputc('a' + i, pf);//��׼������stdin
//	//	                   //��׼�����stdout
//	//	                   //��׼������stderr
//	//}                                           
//	
//	//�����д
//	 
//	
//	//�ر��ļ�
//	fclose(pf);
//	pf == NULL;
//
//	return 0;
//}

////дһ��fputs()
//int main()
//{
//	//���ļ�
//	FILE* pf = fopen("data.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen->pf");
//		return 1;
//	}
//
//	//д�ļ�
//	fputs("hello appearancebook\n", stderr);
//	fputs("hello appearancebook\n", stdout);
//	fputs("hello appearancebook\n", stdout);
//	fputs("hello appearancebook\n", stdout);
// 
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


////��һ��fgets();
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
//	char arr[27] = {0};
//	fgets(arr, 27, pf);
//	printf("%s\n", arr);
//	fgets(arr, 27, pf);
//	printf("%s", arr);
//
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//struct S
//{
//	int i;
//	float f;
//};
//
//int main()
//{
//	//���ļ�
//	FILE* pf = fopen("data.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen->pf");
//		return 1;
//	}
//
//	//д�ļ�
//	struct S s = { 100,3.14f };
//	fprintf(pf, "%d %f", s.i, s.f);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//struct S
//{
//	int i;
//	float f;
//};
//
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
//	struct S s = {0};
//	fscanf(pf, "%d %f", &(s.i), &(s.f));
//
//	printf("%d %f", s.i, s.f);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


////sprintf  ����ʽ�������ݣ�ת�����ַ���
////sscanf   ���ַ����ж�ȡ��ʽ��������
//struct S
//{
//	int i;
//	float f;
//	char str[10];
//};
//
//
//int main()
//{
//	char arr[30] = { 0 };
//	struct S s = { 100,3.14f,"hehe" };
//	struct S tmp = { 0 };
//	sprintf(arr,"%d %f %s", s.i, s.f, s.str);
//	//printf("%s", arr);
//	sscanf(arr, "%d %f %s", &tmp.i, &tmp.f, tmp.str);
//	printf("%d %f %s", tmp.i, tmp.f, tmp.str);
//	return 0;
//}

//���������� fread
//��������� fwrite

struct S
{
	int i;
	float f;
	char str[10];
};


//int main()
//{
//	struct S s = { 9,0.27f,"book" };
//	//���ļ�
//	FILE* pf = fopen("data.txt", "wb");
//	if (pf == NULL)
//	{
//		perror("fopen->pf");
//		return 1;
//	}
//
//	//д�ļ�
//	fwrite(&s, sizeof(struct S), 1, pf);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

int main()
{
	struct S s = { 0 };
	
	//���ļ�
	FILE* pf = fopen("data.txt", "rb");
	if (pf == NULL)
	{
		perror("fopen->pf");
		return 1;
	}

	//���ļ�
	fread(&s, sizeof(struct S), 1, pf);
	printf("%d %f��%s", s.i, s.f, s.str);

		//�ر��ļ�
	fclose(pf);
	pf = NULL;

	return 0;

}

//�ļ��������д