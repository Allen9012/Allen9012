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
	//����ͨѶ¼
	// 
	 //ͨѶ¼���ܹ��м���Ԫ��
	 Contact con;//ͨѶ¼
	 
	 InitContact(&con);
	 do
	{
		menu();
		printf("��ѡ��>\n");
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
		case SORT://�Լ�����
			break;
		case MODIFY :
			Modifycontact(&con);
			break;
		case PRINT:
			Printcontact(&con);
			break;
		case EXIT://Ҫ����
			DestoryContact(&con);
			printf("�˳�\n");
			break;
		default:
			printf("err  enter a number again\n");
			break;
		}
	}while(choose);
	
}




////����
 
 
 
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
//	//����ͨѶ¼
//	struct Contact con;//con����ͨѶ¼����߰�����1000��Ԫ�ص�����size
//	//��ʼ��ͨѶ¼
//	InitContact(&con);
//	//
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
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
//			printf("�˳�ͨѶ¼\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}