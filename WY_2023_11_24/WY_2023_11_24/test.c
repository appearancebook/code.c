#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <ctype.h>
//字符函数和字符串函数 


//strlen   字符串长度函数
//返回值时无符号的
//int main()
//{
//	//如果返回值为有符号数，则打印"小于等于"
//	//否则为无符号数
//	// 可将返回值强制转换 ----  (int)strlen
//	//         3       -         6   ==     -3
//	if (strlen("abc") - strlen("abcde") > 0)
//	{
//		printf("大于\n");
//	}
//	else
//	{
//		printf("小于等于\n");
//	}
//	//打印结果为"大于"，strlen返回值为无符号数
//	return 0;
//}
//
////模拟strlen
////1.计数器
//size_t my_strlen1(const char* str)
//{
//	assert(str != NULL);
//	size_t count = 0;
//
//	while (*str++)
//
//		count++;
//
//	return count;
//}
////2.指针-指针
//size_t my_strlen2(const char* str)
//{
//	assert(str != NULL);
//	char* p = str;
//
//	while (*str)
//	{
//		str++;
//	}
//
//	return (size_t)(str - p);
//}
////3.递归的方法
//size_t my_strlen3(const char* str)
//{
//	assert(str != NULL);
//	if (!*str)
//		return 0;
//	else
//		return 1 + my_strlen3(++str);
//}
//int main()
//{
//	size_t sz = my_strlen3("abc");
//	printf("%d\n", sz);
//	return 0;
//}

////strcpy(目，源) 拷贝函数
////会将源字符串的'\0'拷贝到目标字符串
////目标空间必须足够大，以确保能存放源字符串 
////目标空间必须可变
//
////模拟实现strcpy(目，源)
//char* my_strcyp(char* dest, const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	int ret = src;
//
//	while (*dest++ = *src++)
//	{
//		;
//	}
//
//	return ret;
//}
//
//
//int main()
//{
//	char arr1[30] = "xxxxxxxxxxxxxxx";
//	char* arr2 = "hello appearancebook";
//	my_strcyp(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

////strcat(目,源)  追加函数
////目标字符串和源字符串中都必须有'\0'
////目标空间必须足够大，至少能容下源字符串的内容
////目标空间必须可以改变
////最好不要自己给自己追加
// 
////模拟strcat(目,源)
//char* my_strcat(char* dest, const char* scr)
//{
//	assert(dest && scr);
//  char* ret = dest;
//	while (*dest)
//	{
//		dest++;
//	}
//	while (*dest++ = *scr++)
//	{
//		;
//	}
//  return ret;
//}
//int main()
//{
//	char arr1[30] = "hello ";
//	char arr2[] = "appearancebook";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

////strcmp(arr1, arr2) 字符串比较函数
////模拟strcmp(arr1, arr2)
////大于返回正数  等于返回0 小于返回负数
//
//int my_strcmp(const char* dest, const char* scr)
//{
//	assert(dest && scr);
//
//	while (*dest == *scr)
//	{
//		if (!*dest)
//			return 0;
//		dest++;
//		scr++;
//	}
//	return (*dest - *scr);
//}
//
//int main()
//{
//	printf("%d\n", my_strcmp("abcd", "cbcd"));
//	return 0;
// }
//


////strncpy(arr1,arr2,n) 拷贝完后不加\0 拷贝数大于源字符串补"\0"
//int main()
//{
//	char arr1[30] = "abcdefyyyyyyyyy";
//	char arr2[5] = "xxxx";
//	strncpy(arr1, arr2,7);//测试值2,7
//	return 0;
//}



////模拟strncpy
//char* my_strncpy(char* dest, const char* src, int sz)
//{
//	assert(dest && src);
//	char* ret = dest;
//
//
//	while (*dest++ = *src++)  //当*src为'\0 '时跳出循环
//		if (!--sz)            //当sz==0是跳出循环   
//			return ret;
//
//
//	                          //拷贝完后不加\0 拷贝数大于源字符串补'\0 '
//	return ret;
//}
//
//
//int main()
//{
//	char arr1[30] = "abcdefyyyyyyyyy";
//	char arr3[30] = "abcdefyyyyyyyyy";
//	char* arr2 = "xxxx";
//	strncpy(arr1, arr2, 7);
//	my_strncpy(arr3, arr2, 7);
//	printf("%s\n", arr1);
//	printf("%s\n", arr3);
//
//
//	return 0;
//}



////strncat(arr1,arr2,n) 追加完后直接追加'\0' 最多追加一个完整的源字符串
//int main()
//{
//	char arr1[20] = "abcdef\0yyyyyyyyy";
//	char arr2[] = "xxxx";
//	strncat(arr1, arr2,7);测试值2，7
//	return 0;
//}

//模拟strcat

//char* my_strncat(char* dest, const char* src, int sz)
//{
//	assert(dest && src);
//	int i = 1;
//	char* ret = dest;
//
//	//找到目标字符串的'\0'
//	while (*dest++)
//		;
//
//	//由于找到之后有++了一次，所以退回'\0'的位置
//	dest--;
//
//	while (*dest++ = *src++)   //当*src为'\0 '时跳出循环
//		if (!--sz)             //当sz=0时跳出循环   
//			break;
//
//
//	*dest = '\0';	           //追加完后直接追加'\0' 最多追加一个完整的源字符串
//	return ret;
//}
//
//int main()
//{
//	char arr1[30] = "abcdef\0yyyyyyyy";
//	char arr3[30] = "abcdef\0yyyyyyyyy";
//	char* arr2 = "xxxx";
//	strncat(arr1, arr2, 7);
//	my_strncat(arr3, arr2, 7);
//	printf("%s\n", arr1);
//	printf("%s\n", arr3);
//
//	return 0;
//}


////strncmp(arr1,arr2,n) 只比较前n个字符
//int main()
//{
//	char arr1[] = "abcqefyuiop";
//	char arr2[] = "abcdef";
//	int ret = strncmp(arr1, arr2, 6);
//	printf("%d\n", ret);
//
//	return 0;
//}

////strstr - 字符串中找子字符串
//
////模拟strstr
//char* my_strstr(const char* dest, const char* scr)
//{
//	assert(dest && scr);
//	char* cp = dest;
//	char* s1 = cp;
//	char* s2 = scr;
//	if (s2 == '\0')
//		return s1;
//	while (*cp)
//	{
//		s1 = cp;
//		s2 = scr;
//		while (*s1 && *s2 && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//			return cp;
//		cp++;
//	}
//	return NULL;
//}
//int main()
//{
//	char arr1[] = "abcdefabcdef";
//	char arr2[] = "def";//def deq
////	char* ret = strstr(arr1, arr2);
//	char* ret = my_strstr(arr1, arr2);
//	if (ret != NULL) 
//		printf("%s\n", ret);
//	else
//		printf("找不到\n");
//	return 0;
//}

////strtok 通过分隔符分离
//int main()
//{
//	char arr[] = "1144320763@qq@.com";
//	char sep[] = "@.";
//	char* ret = NULL;
//	for (ret = strtok(arr, sep); ret != NULL; ret = strtok(NULL, sep))
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

////strerror 错误信息 程序运行时的错误
//int main() //库函数的错误码会存到全局变量errno中 
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//		printf("%d： %s\n", i, strerror(i));
//	return 0;
//}

//int main()
//{
////	C语言中可以操作文件
////	1.操作文件的步骤
////	2.读/写
////	3.关闭文件
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		printf("fopen: %s\n", strerror(errno));
//		perror("fopen");
//		
//			return 1;
//	}
////	读文件
//	
//
//
////	关闭文件
//	fclose(pf);
//
//		return 0;
//}

////字符分类函数
//int main()
//{
//	printf("%d\n", isupper('a')); //大小字符
//	printf("%d\n", isdigit('2')); //数字字符
//	printf("%c\n", tolower('A')); //大写转小写
//	printf("%c\n", toupper('s')); //小写转大写
//	char arr[20] = { 0 };
////	gets(arr);//遇到空格继续
//	pringtf("%s\n",arr);
//	char* p = arr;
//	while (*p)
//	{
//		if (isupper(*p))
//		{
//			*p = tolower(*p);
//		}
//		p++;
//	}
//   printf("%s\n", arr);
//	return 0;
//}

