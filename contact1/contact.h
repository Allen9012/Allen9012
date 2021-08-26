#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#pragma once

#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30

#define MAX  1000 



//��������
typedef struct PeoInfo
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	int age;
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;

//ͨѶ¼
typedef struct Contact
{
	PeoInfo data[MAX];// �����ӽ����˵���Ϣ
	int sz;//��¼���ǵ�ǰͨѶ¼����Ч��Ϣ�ĸ���
}Contact;
//����
//��ʼ��
void InitContact( Contact* pc);
//����
void Addcontact( Contact* pc);
//��ӡ
void Printcontact(const Contact* pc);
//ɾ��
void Delcontact(Contact* pc);
//����
void Searchcontact(Contact* pc);
//�޸�
void Modifycontact(Contact* pc);