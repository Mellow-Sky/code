#include"SeqList.h"

void test01() {
	SL s;
	SLInit(&s);//初始化
	//增删查改
	//使用for循环插入100个元素
	for (int i = 1; i <= 100; i++)
	{
		if(i&1)
			SLPushFront(&s, i);
		else
			SLPushBack(&s, i);
	}
	//输出所有元素
	SLPrint(&s);
	//查找元素
	SLFind(&s, 55);
	SLFind(&s, 999);
	//删除元素
	SLDelete(&s, 100);
	SLDelete(&s, 404);
	SLPrint(&s);
	//修改元素
	SLUpdate(&s, 55, 969696);
	SLPrint(&s);
	SLDestroy(&s);//销毁
}

int main()
{
	test01();
	return 0;
}