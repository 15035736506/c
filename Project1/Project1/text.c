#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void print1(int(*pa)[5], int x, int y)
{
	int i, j;
	for (i = 0;i < x;i++)
	{
		//*(pa + i)������arr
		for (j = 0;j < y;j++)
		{
			//printf("%d ", (*(pa + i))[j]);
			//printf("%d ", *(*(pa + i)+j));
			printf("%d ", pa[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
	print1(arr, 3, 5);
	return 0;
}
////дһ�δ��룬�������ǵ�ǰ�������ֽ�����ʲô
////int check_sys()
////{
////	int a = 1;
////	char* p=(char *)&a;
////	return *p;
////	//����1С��
////	// 01 00 00 00
////	//����0���
////	//00 00 00 01
////}
//
//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}
//int main()
//{
//	int ret = check_sys();
//	if (ret = 1)
//		printf("С��");
//	else
//		printf("���");
//	return 0;
//}