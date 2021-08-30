#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"

//通讯录-静态版本
// 能够存放1000人的信息
//1.每个人的信息
//名字+年龄+性别+地址
//2.删除
//3.修改
//4.增加
//5.查找
//6.排序

//版本2：
//动态增长的版本
//1.通讯录初始化后能存放三个人的信息
//2.达能空间放满的时候，我们增加2个信息
//3+2+2+2.....

//版本3
//当通讯录退出的时候，把信息写道文件
//打通讯录初始化的时候，加载文件信息到通讯录
void menu()
{
	printf("************************************\n");
	printf("********1. add   2. del*************\n");
	printf("********3.search 4.modify***********\n");
	printf("********5.sort   6.print************\n");
	printf("*************0.exit*****************\n");
}

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SORT,
	PRINT	
};
int main()
{
	int choose = 0;
	//创建通讯录
	// 
	 //通讯录中总共有几个元素
	 Contact con;//通讯录
	 
	 InitContact(&con);
	 do
	{
		menu();
		printf("请选择：>\n");
		scanf("%d",&choose); 
		switch (choose)
		{
		case ADD:
			Addcontact(&con);
			break;
		case DEL:
			Delcontact(&con);
			break;
		case SEARCH:
			Searchcontact(&con);
			break;
		case SORT://自己完善
			break;
		case MODIFY :
			Modifycontact(&con);
			break;
		case PRINT:
			Printcontact(&con);
			break;
		case EXIT://要回收内存
			//保存信息到文件
			//销毁通讯录
			Savecontact(&con);
			DestoryContact(&con);
			printf("退出\n");
			break;
		default:
			printf("err  enter a number again\n");
			break;
		}
	}while(choose);
	
}




