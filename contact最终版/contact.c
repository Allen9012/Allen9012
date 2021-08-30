#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"
void check_capacity(Contact* pc)
{
	
    if (pc->sz == pc->capacity)
   {
		PeoInfo* ptr = (PeoInfo*)realloc(pc->data, (pc->capacity + INC_SZ) * sizeof(PeoInfo));
	if (ptr != NULL)
	{
		pc->data = ptr;//如果没问题就通过中间变量来传递空间
		pc->capacity += INC_SZ;
		printf("增容成功\n");
	}
	else
	{
		perror("AddContact");
		printf("增加联系人失败\n");
		return;
	}
   }
}
//静态版本的
//void InitContact (Contact* pc)
//{
//	pc->sz = 0;
//	memset(pc->data, 0, sizeof(pc->data));
//}
 
 
//动态版本-初始化
void InitContact (Contact* pc)
{
	pc->data = (PeoInfo*)malloc(DEFAULT_SZ * sizeof(PeoInfo));//PeoInfo相当于一个人信息的大小
	if (pc->data == NULL)
	{
		perror("InitContact");
		return;
	}
	pc->sz = 0;//初始化后默认是0
	pc->capacity = DEFAULT_SZ;
	//版本3 加载文件
	Loadcontact(pc);

}
//静态版本的
//void Addcontact(Contact* pc)
//{
//	if (pc->sz == MAX)
//	{
//		printf("通讯录已经满了，不能再加了\n");
//		return;
//	}
//		//添加信息
//		printf("请输入名字：>\n");
//		scanf("%s",pc->data[pc->sz].name); 
//		printf("请输入年龄：>\n");
//		scanf("%d", &(pc->data[pc->sz].age));
//		printf("请输入性别：>\n");
//		scanf("%s", pc->data[pc->sz].sex);
//		printf("请输入电话号码：>\n");
//		scanf("%s",pc->data[pc->sz].tele);
//		printf("请输入家庭住址：>\n");
//		scanf("%s",pc->data[pc->sz].addr);
//		pc->sz++;
//}

//动态版本的
void Addcontact(Contact* pc)
{
	check_capacity(pc);
		//添加信息
		printf("请输入名字：>\n");
		scanf("%s", pc->data[pc->sz].name);
		printf("请输入年龄：>\n");
		scanf("%d", &(pc->data[pc->sz].age));
		printf("请输入性别：>\n");
		scanf("%s", pc->data[pc->sz].sex);
		printf("请输入电话号码：>\n");
		scanf("%s", pc->data[pc->sz].tele);
		printf("请输入家庭住址：>\n");
		scanf("%s", pc->data[pc->sz].addr);
		pc->sz++;
		printf("增加成功\n");
}
void Printcontact(Contact* pc)
{
	int i = 0;
	//打印标题
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
			for (i = 0; i < pc->sz; i++)
			{
				printf("%-20s\t%-5d\t%-5s\t%-12s\t%-20s\n",
					//打印数据
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
		printf("通讯录为空，无需删除");
		return;
	}
	printf("请输入要删除的人的名字：>");
	scanf("%s", name);
	//1.查找   专门实现一个查找
	//有/没有
	int pos=FindByName(pc,name);
	if (pos == -1)
	{
		printf("要删除的人不存在\n");
		return;
	}
	
	//2.删除
	int i = 0;
	for (i = pos; i < pc->sz - 1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->sz--;
	printf("删除成功\n");
}

void Searchcontact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	printf("请输入要查找的人的名字：>\n");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("要查找的人不存在\n");
		return;
	}
	else
	{
		printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
		printf("%-20s\t%-5d\t%-5s\t%-12s\t%-20s\n",
			//打印数据
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
	printf("请输入要修改的人的名字：>\n");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("要修改的人不存在\n");
		return;
	}
	else
	{
		printf("请输入名字：>\n");
		scanf("%s", pc->data[pos].name);
		printf("请输入年龄：>\n");
		scanf("%d", &(pc->data[pos].age));
		printf("请输入性别：>\n");
		scanf("%s", pc->data[pos].sex);
		printf("请输入电话号码：>\n");
		scanf("%s", pc->data[pos].tele);
		printf("请输入家庭住址：>\n");
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

void Savecontact(Contact* pc)
{
	//打开文件
	FILE*pf=fopen("contact.dat", "w");
	if (pf == NULL)
	{
		perror("Savecontact");
		return 1;
	}
	//写文件
	 int i=0;
	 for (i = 0; i < pc->sz; i++)
	 {
		 fwrite(pc->data + i, sizeof(PeoInfo), 1, pf);
	}
	//关闭文件
	fclose(pf);
	pf = NULL;
}
void Loadcontact(Contact* pc)
{
	FILE* pf = fopen("contact.dat", "r");
	if (pf == NULL)
	{
		perror("Savecontact");
		return 1;
	}
	//读文件
	PeoInfo tmp = { 0 };
	while (fread(&tmp,sizeof(PeoInfo), 1, pf));
	{
		//也要增容函数
		check_capacity(pc);
		pc->data[pc->sz] = tmp;
		pc->sz++;
	}
	//关闭文件
	fclose(pf);
	pf = NULL;
}
