#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <Windows.h>

//文件操作

//文件的随机读写

//fseek 根据文件指针的位置和偏移量来定位文件指针
//int main()
//{
//	//打开文件
//	FILE* pf = fopen("data.txt","r");
//	if (pf == NULL)
//	{
//		perror("fopen->pf");
//		return 1;
//	}
//	
//	//读文件
//	//定位文件指针到f
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
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

////ftell 告诉当前位置相对于起始位置的偏移量
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
//	//定位文件指针到f
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
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


////rewind 让文件指针回到起始位置
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
//	//定位文件指针到f
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
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//文本文件和二进制文件
//文本文件：能读懂的文件 以ASCII字符的形式存储的文件
//二进制文件：数据在内存中以二进制的形式存储，不加转换的输出到外存
 
////文件读取结束的判定
////feof 当文件读取结束时 ，判断读取结束的原因是否是：遇到文件末位结束
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
//	//定位文件指针到f
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
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

////拷贝文件
////拷贝data1.txt文件，产生一个新的文件data2.txt
//int main()
//{
//	//打开文件
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
//	//读写文件
//	int ch = 0;
//	while ((ch = fgetc(pfRead)) != EOF)
//	{
//		fputc(ch, pfWrite);
//	}
//
//	//关闭文件
//	fclose(pfRead);
//	pfRead == NULL;
//	fclose(pfWrite);
//	pfWrite = NULL;
//	
//	return 0;
//}

//fflush 刷新缓存区

int main()
{
	FILE* pf = fopen("test.txt", "w");
	if (pf == NULL)
	{
		perror("fopen->pf");
		return 0;
	}
	fputs("abcdf", pf);//先将代码放在输出缓冲区
	printf("睡眠10秒-已经写数据了，打开test.txt文件，发现文件没有内容\n");
	Sleep(10000);
	printf("刷新缓冲区\n");
	fflush(pf);//刷新缓冲区是，才能输出缓冲区的数据写到文件(磁盘)
	//注：fflush 在高版本的vs上不能在使用
	printf("在睡眠10秒-此时，再次打开test.txt文件，文件有内容了\n");
	Sleep(10000);
	fclose(pf);
	pf = NULL;

	return 0;
}