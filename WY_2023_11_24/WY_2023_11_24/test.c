#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <ctype.h>
//�ַ��������ַ������� 


//strlen   �ַ������Ⱥ���
//����ֵʱ�޷��ŵ�
//int main()
//{
//	//�������ֵΪ�з����������ӡ"С�ڵ���"
//	//����Ϊ�޷�����
//	// �ɽ�����ֵǿ��ת�� ----  (int)strlen
//	//         3       -         6   ==     -3
//	if (strlen("abc") - strlen("abcde") > 0)
//	{
//		printf("����\n");
//	}
//	else
//	{
//		printf("С�ڵ���\n");
//	}
//	//��ӡ���Ϊ"����"��strlen����ֵΪ�޷�����
//	return 0;
//}
//
////ģ��strlen
////1.������
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
////2.ָ��-ָ��
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
////3.�ݹ�ķ���
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

////strcpy(Ŀ��Դ) ��������
////�ὫԴ�ַ�����'\0'������Ŀ���ַ���
////Ŀ��ռ�����㹻����ȷ���ܴ��Դ�ַ��� 
////Ŀ��ռ����ɱ�
//
////ģ��ʵ��strcpy(Ŀ��Դ)
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

////strcat(Ŀ,Դ)  ׷�Ӻ���
////Ŀ���ַ�����Դ�ַ����ж�������'\0'
////Ŀ��ռ�����㹻������������Դ�ַ���������
////Ŀ��ռ������Ըı�
////��ò�Ҫ�Լ����Լ�׷��
// 
////ģ��strcat(Ŀ,Դ)
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

////strcmp(arr1, arr2) �ַ����ȽϺ���
////ģ��strcmp(arr1, arr2)
////���ڷ�������  ���ڷ���0 С�ڷ��ظ���
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


////strncpy(arr1,arr2,n) ������󲻼�\0 ����������Դ�ַ�����"\0"
//int main()
//{
//	char arr1[30] = "abcdefyyyyyyyyy";
//	char arr2[5] = "xxxx";
//	strncpy(arr1, arr2,7);//����ֵ2,7
//	return 0;
//}



////ģ��strncpy
//char* my_strncpy(char* dest, const char* src, int sz)
//{
//	assert(dest && src);
//	char* ret = dest;
//
//
//	while (*dest++ = *src++)  //��*srcΪ'\0 'ʱ����ѭ��
//		if (!--sz)            //��sz==0������ѭ��   
//			return ret;
//
//
//	                          //������󲻼�\0 ����������Դ�ַ�����'\0 '
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



////strncat(arr1,arr2,n) ׷�����ֱ��׷��'\0' ���׷��һ��������Դ�ַ���
//int main()
//{
//	char arr1[20] = "abcdef\0yyyyyyyyy";
//	char arr2[] = "xxxx";
//	strncat(arr1, arr2,7);����ֵ2��7
//	return 0;
//}

//ģ��strcat

//char* my_strncat(char* dest, const char* src, int sz)
//{
//	assert(dest && src);
//	int i = 1;
//	char* ret = dest;
//
//	//�ҵ�Ŀ���ַ�����'\0'
//	while (*dest++)
//		;
//
//	//�����ҵ�֮����++��һ�Σ������˻�'\0'��λ��
//	dest--;
//
//	while (*dest++ = *src++)   //��*srcΪ'\0 'ʱ����ѭ��
//		if (!--sz)             //��sz=0ʱ����ѭ��   
//			break;
//
//
//	*dest = '\0';	           //׷�����ֱ��׷��'\0' ���׷��һ��������Դ�ַ���
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


////strncmp(arr1,arr2,n) ֻ�Ƚ�ǰn���ַ�
//int main()
//{
//	char arr1[] = "abcqefyuiop";
//	char arr2[] = "abcdef";
//	int ret = strncmp(arr1, arr2, 6);
//	printf("%d\n", ret);
//
//	return 0;
//}

////strstr - �ַ����������ַ���
//
////ģ��strstr
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
//		printf("�Ҳ���\n");
//	return 0;
//}

////strtok ͨ���ָ�������
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

////strerror ������Ϣ ��������ʱ�Ĵ���
//int main() //�⺯���Ĵ������浽ȫ�ֱ���errno�� 
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//		printf("%d�� %s\n", i, strerror(i));
//	return 0;
//}

//int main()
//{
////	C�����п��Բ����ļ�
////	1.�����ļ��Ĳ���
////	2.��/д
////	3.�ر��ļ�
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		printf("fopen: %s\n", strerror(errno));
//		perror("fopen");
//		
//			return 1;
//	}
////	���ļ�
//	
//
//
////	�ر��ļ�
//	fclose(pf);
//
//		return 0;
//}

////�ַ����ຯ��
//int main()
//{
//	printf("%d\n", isupper('a')); //��С�ַ�
//	printf("%d\n", isdigit('2')); //�����ַ�
//	printf("%c\n", tolower('A')); //��дתСд
//	printf("%c\n", toupper('s')); //Сдת��д
//	char arr[20] = { 0 };
////	gets(arr);//�����ո����
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

