#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"

//ͨѶ¼-��̬�汾
// �ܹ����1000�˵���Ϣ
//1.ÿ���˵���Ϣ
//����+����+�Ա�+��ַ
//2.ɾ��
//3.�޸�
//4.����
//5.����
//6.����

//�汾2��
//��̬�����İ汾
//1.ͨѶ¼��ʼ�����ܴ�������˵���Ϣ
//2.���ܿռ������ʱ����������2����Ϣ
//3+2+2+2.....

//�汾3
//��ͨѶ¼�˳���ʱ�򣬰���Ϣд���ļ�
//��ͨѶ¼��ʼ����ʱ�򣬼����ļ���Ϣ��ͨѶ¼
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
		case EXIT://Ҫ�����ڴ�
			//������Ϣ���ļ�
			//����ͨѶ¼
			Savecontact(&con);
			DestoryContact(&con);
			printf("�˳�\n");
			break;
		default:
			printf("err  enter a number again\n");
			break;
		}
	}while(choose);
	
}




