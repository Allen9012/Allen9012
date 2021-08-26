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

void menu()
{
	printf("************************************\n");
	printf("********1. add   2. del*************\n");
	printf("********3.search 4.modify***********\n");
	printf("********5.sort   6.print************\n");
	printf("*************0.exit*****************\n");
}
//��̬�汾��
//void InitContact (Contact* pc)
//{
//	pc->sz = 0;
//	memset(pc->data, 0, sizeof(pc->data));
//}
 
 
//��̬�汾-��ʼ��
void InitContact (Contact* pc)
{
	pc->data = (PeoInfo*)malloc(DEFAULT_SZ * sizeof(PeoInfo));//PeoInfo�൱��һ������Ϣ�Ĵ�С
	if (pc->data == NULL)
	{
		perror("InitContact");
		return;
	}
	pc->sz = 0;//��ʼ����Ĭ����0
	pc->capacity = DEFAULT_SZ;
}
//��̬�汾��
//void Addcontact(Contact* pc)
//{
//	if (pc->sz == MAX)
//	{
//		printf("ͨѶ¼�Ѿ����ˣ������ټ���\n");
//		return;
//	}
//		//�����Ϣ
//		printf("���������֣�>\n");
//		scanf("%s",pc->data[pc->sz].name); 
//		printf("���������䣺>\n");
//		scanf("%d", &(pc->data[pc->sz].age));
//		printf("�������Ա�>\n");
//		scanf("%s", pc->data[pc->sz].sex);
//		printf("������绰���룺>\n");
//		scanf("%s",pc->data[pc->sz].tele);
//		printf("�������ͥסַ��>\n");
//		scanf("%s",pc->data[pc->sz].addr);
//		pc->sz++;
//}

//��̬�汾��
void Addcontact(Contact* pc)
{
	if (pc->sz == pc->capacity)
	{
		PeoInfo*ptr=(PeoInfo*)realloc(pc->data,(pc->capacity+INC_SZ)*sizeof(PeoInfo));
		if (ptr != NULL)
		{
			pc->data = ptr;//���û�����ͨ���м���������ݿռ�
			pc->capacity += INC_SZ;
			printf("���ݳɹ�\n");
		}
		else
		{
			perror("AddContact");
			printf("������ϵ��ʧ��\n");
			return;
		}
	}
	
		//�����Ϣ
		printf("���������֣�>\n");
		scanf("%s", pc->data[pc->sz].name);
		printf("���������䣺>\n");
		scanf("%d", &(pc->data[pc->sz].age));
		printf("�������Ա�>\n");
		scanf("%s", pc->data[pc->sz].sex);
		printf("������绰���룺>\n");
		scanf("%s", pc->data[pc->sz].tele);
		printf("�������ͥסַ��>\n");
		scanf("%s", pc->data[pc->sz].addr);
		pc->sz++;
		printf("���ӳɹ�\n");
}
void Printcontact(Contact* pc)
{
	int i = 0;
	//��ӡ����
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
			for (i = 0; i < pc->sz; i++)
			{
				printf("%-20s\t%-5d\t%-5s\t%-12s\t%-20s\n",
					//��ӡ����
					pc->data[i].name,
					pc->data[i].age,
					pc->data[i].sex,
					pc->data[i].tele,
					pc->data[i].addr);
			}
}
int FindByName(Contact*pc,char name[])
{
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[i].name, name) == 0)
		{
			return i;
		}	
	}
	return -1;
}
void Delcontact(Contact* pc)
{
	char name[MAX_NAME] = {0};
	if (pc->sz == 0)
	{
		printf("ͨѶ¼Ϊ�գ�����ɾ��");
		return;
	}
	printf("������Ҫɾ�����˵����֣�>");
	scanf("%s", name);
	//1.����   ר��ʵ��һ������
	//��/û��
	int pos=FindByName(pc,name);
	if (pos == -1)
	{
		printf("Ҫɾ�����˲�����\n");
		return;
	}
	
	//2.ɾ��
	int i = 0;
	for (i = pos; i < pc->sz - 1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->sz--;
	printf("ɾ���ɹ�\n");
}

void Searchcontact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	printf("������Ҫ���ҵ��˵����֣�>\n");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("Ҫ���ҵ��˲�����\n");
		return;
	}
	else
	{
		printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		printf("%-20s\t%-5d\t%-5s\t%-12s\t%-20s\n",
			//��ӡ����
			pc->data[pos].name,
			pc->data[pos].age,
			pc->data[pos].sex,
			pc->data[pos].tele,
			pc->data[pos].addr);
	}
}

void Modifycontact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	printf("������Ҫ�޸ĵ��˵����֣�>\n");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("Ҫ�޸ĵ��˲�����\n");
		return;
	}
	else
	{
		printf("���������֣�>\n");
		scanf("%s", pc->data[pos].name);
		printf("���������䣺>\n");
		scanf("%d", &(pc->data[pos].age));
		printf("�������Ա�>\n");
		scanf("%s", pc->data[pos].sex);
		printf("������绰���룺>\n");
		scanf("%s", pc->data[pos].tele);
		printf("�������ͥסַ��>\n");
		scanf("%s", pc->data[pos].addr);
	}
}
void DestoryContact(Contact* pc)
{
	free(pc->data);
	pc->data = NULL;
	pc->sz = 0;
	pc->capacity = 0;
		
}