#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//дһ�δ��룬�������ǵ�ǰ�������ֽ�����ʲô
//int check_sys()
//{
//	int a = 1;
//	char* p=(char *)&a;
//	return *p;
//	//����1С��
//	// 01 00 00 00
//	//����0���
//	//00 00 00 01
//}

int check_sys()
{
	int a = 1;
	return *(char*)&a;
}
int main()
{
	int ret = check_sys();
	if (ret = 1)
		printf("С��");
	else
		printf("���");
	return 0;
}