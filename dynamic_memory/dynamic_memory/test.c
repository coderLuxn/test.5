#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//��̬�ڴ����

//1.molloc ����ʼ�� ����һ����̬�ڴ�ռ�
//void* malloc( size_t size )
//int main()
//{
//	int* p = (int*)malloc(10*sizeof(int);
//	int i = 0;
//	//���ж�malloc�����Ƿ�ɹ�
//	if (p == NULL)
//	{
//		printf("%s", strerror(errno));
//	}
//	else
//	{
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//2.calloc ��ʼ���ڴ�λ0
//void *calloc( size_t num, size_t size )
             //���ٿռ�ĸ��� ��Ҫ���ٵ����͸���
//int main()
//{
//    int* p = (int*)malloc(20);
//    int i = 0;
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d \n", *(p + i) = i);
//    }
//    free(p);
//    p = NULL;
//    int* p1 = (int*)calloc(5, sizeof(int));
//    if (p1 != NULL)
//    {
//        
//        for (i = 0; i < 5; i++)
//        {
//            printf("%d ", *(p1 + i));
//        }
//    }
//    //�ͷŶ�̬�ռ�
//    free(p1);
//    p1 = NULL;
//    return 0;
//}

//int main()
//{
//    int* p = (int*)malloc(20);
//    int* p1 = (int*)calloc(5, sizeof(int));
//    return 0;
//}

//3.realloc ������̬�ڴ�ռ�Ĵ�С
//void *realloc( void *memblock, size_t size );
              //Ҫ�������ڴ��ַ ����֮����´�С
//int main()
//{
//    int* p = (int*)malloc(20);
//    int  i = 0;
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d ", *(p + i)=i);
//    }
//    printf("\n");
//    int* p1 = (int*)realloc(p, LLONG_MAX);
//    if (p1 != NULL)
//    {
//        p = p1;
//        for (i = 0; i < 10; i++)
//        {
//            printf("%d ", *(p + i) = i);
//        }
//    }
//    return 0;
//}

//4.free �ͷŶ�̬�ռ�

//int print2(char* c1)
//{
//    int count = 0;
//    while((*c1) != '\0')
//    {
//        count++;
//        c1++;
//    }
//    return count;
//}
//
//void swap(char* p)
//{
//    char a = "lxn";
//    p = &a;
//}
//int main()
//{
//    char* c1 = "abcdef";
//   //int ret=print2(c1);
//   //printf("%d", ret);
//    swap(c1);
//    printf(c1);
//    
//    return 0;
//}

//��������
//struct S
//{
//    int n;
//    int arr[];
//};
//int main()
//{
//    struct S s;
//    //printf("%d ", sizeof(s));//4
//    struct S* p=malloc(sizeof(s) + 5 * sizeof(s));//4+20
//    p->n = 10;
//    int i = 0;
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d ", p->arr[i] = i);
//    }
//    free(p);
//    p = NULL;
//    return 0;
//}

//struct S
//{
//    int n;
//    int arr[];//��������
//};
//int main()
//{
//    struct S s;
//    //printf("%d ", sizeof(s));//4
//    struct S* p = malloc(sizeof(s) + 5 * sizeof(s));//4+20
//    p->n = 10;
//    int i = 0;
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d ", p->arr[i] = i);
//    }
//    //������С
//    int* str = realloc(p, 10* sizeof(s));
//    if (str != NULL)
//    {
//        p = str;
//    }
//    for (i = 5; i < 15; i++)
//    {
//        p->arr[i] = i;
//    }
//    for (i = 0; i < 15;i++)
//    {
//        printf("%d ", p->arr[i]);
//    }
//    free(p);
//    p = NULL;
//    return 0;
//}

//struct S
//{
//    int n;
//    int* arr;
//};
//
//int main()
//{
//    struct S* ps = (struct S*)malloc(sizeof(struct S));
//    ps->arr = malloc(5 * sizeof(int));
//    int i = 0;
//    for (i = 0; i < 5; i++)
//    {
//        ps->arr[i] = i;
//    }
//    //������С                 //һ��������ֽ��� ����ԭ�����ֽ���
//    int* str = realloc(ps->arr, 10 * sizeof(int));
//    if (str != NULL)
//    {
//        ps->arr = str;
//    }
//    for (i = 5; i < 10; i++)
//    {
//        ps->arr[i] = i;
//    }
//    for (i = 0; i < 10; i++)
//    {
//        printf("%d ", ps -> arr[i]);
//    }
//    //�ͷ�
//    free(ps->arr);
//    ps->arr = NULL;
//    free(ps);
//    ps = NULL;
//    return 0;
//}