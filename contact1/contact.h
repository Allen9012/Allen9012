#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#pragma once

#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30

#define MAX  1000 



//定义类型
typedef struct PeoInfo
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	int age;
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;

//通讯录
typedef struct Contact
{
	PeoInfo data[MAX];// 存放添加进来人的信息
	int sz;//记录的是当前通讯录中有效信息的个数
}Contact;
//板书
//初始化
void InitContact( Contact* pc);
//增加
void Addcontact( Contact* pc);
//打印
void Printcontact(const Contact* pc);
//删除
void Delcontact(Contact* pc);
//查找
void Searchcontact(Contact* pc);
//修改
void Modifycontact(Contact* pc);