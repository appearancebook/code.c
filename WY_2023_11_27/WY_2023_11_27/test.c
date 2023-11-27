#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//语言文件操作
//文件名
//文件路径+文件主干名+文件后缀

//文件的打开和关闭

//int main()
//{
//	//打开文件
//	
//	//相对路径
//	//FILE* pf = fopen("..\\x64\\data.txt", "w");
//	
//	
//	//绝对路径C:\Users\sss\Desktop\data.txt
//	//FILE* pf = fopen("C:\\Users\\sss\\Desktop\\data.txt","w");
//	
//	//当前路径
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
//	//读文件
//	int ch = fgetc(stdin);
//	printf("%c", ch);
//	//顺序读写
//	//int i = 0;
//	//for (i = 0; i < 26; i++)
//	//{
//	//	fputc('a' + i, pf);//标准输入流stdin
//	//	                   //标准输出流stdout
//	//	                   //标准错误流stderr
//	//}                                           
//	
//	//随机读写
//	 
//	
//	//关闭文件
//	fclose(pf);
//	pf == NULL;
//
//	return 0;
//}

////写一行fputs()
//int main()
//{
//	//打开文件
//	FILE* pf = fopen("data.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen->pf");
//		return 1;
//	}
//
//	//写文件
//	fputs("hello appearancebook\n", stderr);
//	fputs("hello appearancebook\n", stdout);
//	fputs("hello appearancebook\n", stdout);
//	fputs("hello appearancebook\n", stdout);
// 
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


////读一行fgets();
//int main()
//{
//	//打开文件
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen->pf");
//		return 1;
//	}
//
//	//读文件
//	char arr[27] = {0};
//	fgets(arr, 27, pf);
//	printf("%s\n", arr);
//	fgets(arr, 27, pf);
//	printf("%s", arr);
//
//
//	//关闭文件
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
//	//打开文件
//	FILE* pf = fopen("data.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen->pf");
//		return 1;
//	}
//
//	//写文件
//	struct S s = { 100,3.14f };
//	fprintf(pf, "%d %f", s.i, s.f);
//	//关闭文件
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
//	//打开文件
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen->pf");
//		return 1;
//	}
//
//	//读文件
//	struct S s = {0};
//	fscanf(pf, "%d %f", &(s.i), &(s.f));
//
//	printf("%d %f", s.i, s.f);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


////sprintf  将格式化的数据，转换成字符串
////sscanf   从字符串中读取格式化的数据
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

//二进制输入 fread
//二进制输出 fwrite

struct S
{
	int i;
	float f;
	char str[10];
};


//int main()
//{
//	struct S s = { 9,0.27f,"book" };
//	//打开文件
//	FILE* pf = fopen("data.txt", "wb");
//	if (pf == NULL)
//	{
//		perror("fopen->pf");
//		return 1;
//	}
//
//	//写文件
//	fwrite(&s, sizeof(struct S), 1, pf);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

int main()
{
	struct S s = { 0 };
	
	//打开文件
	FILE* pf = fopen("data.txt", "rb");
	if (pf == NULL)
	{
		perror("fopen->pf");
		return 1;
	}

	//读文件
	fread(&s, sizeof(struct S), 1, pf);
	printf("%d %f　%s", s.i, s.f, s.str);

		//关闭文件
	fclose(pf);
	pf = NULL;

	return 0;

}

//文件的随机读写