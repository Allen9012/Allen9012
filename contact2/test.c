#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"



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
		case EXIT://要回收
			DestoryContact(&con);
			printf("退出\n");
			break;
		default:
			printf("err  enter a number again\n");
			break;
		}
	}while(choose);
	
}




////板书
 
 
 
//void menu()
//{
//	printf("*****************************************\n");
//	printf("****** 1. add           2. del    *******\n");
//	printf("****** 3. search        4. modify *******\n");
//	printf("****** 5. show          6. sort   *******\n");
//	printf("****** 0. exit                    *******\n");
//	printf("*****************************************\n");
//}
//
//int main()
//{
//	int input = 0;
//	//创建通讯录
//	struct Contact con;//con就是通讯录，里边包含：1000的元素的数和size
//	//初始化通讯录
//	InitContact(&con);
//	//
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			AddContact(&con);
//			break;
//		case 2:
//			break;
//		case 3:
//			break;
//		case 4:
//			break;
//		case 5:
//			ShowContact(&con);
//			break;
//		case 6:
//			break;
//		case 0:
//			printf("退出通讯录\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}