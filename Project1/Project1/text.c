#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//写一段代码，告诉我们当前机器的字节序是什么
//int check_sys()
//{
//	int a = 1;
//	char* p=(char *)&a;
//	return *p;
//	//返回1小端
//	// 01 00 00 00
//	//返回0大端
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
		printf("小端");
	else
		printf("大端");
	return 0;
}