#include"SeqList.h"

void test01() {
	SL s;
	SLInit(&s);//��ʼ��
	//��ɾ���
	//ʹ��forѭ������100��Ԫ��
	for (int i = 1; i <= 100; i++)
	{
		if(i&1)
			SLPushFront(&s, i);
		else
			SLPushBack(&s, i);
	}
	//�������Ԫ��
	SLPrint(&s);
	//����Ԫ��
	SLFind(&s, 55);
	SLFind(&s, 999);
	//ɾ��Ԫ��
	SLDelete(&s, 100);
	SLDelete(&s, 404);
	SLPrint(&s);
	//�޸�Ԫ��
	SLUpdate(&s, 55, 969696);
	SLPrint(&s);
	SLDestroy(&s);//����
}

int main()
{
	test01();
	return 0;
}