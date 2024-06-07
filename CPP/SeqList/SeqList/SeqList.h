#pragma once
#include<iostream>
#include<cstdlib>
#include<cassert>
using namespace std;
// ˳���ṹ����
typedef int SLDataType;
class SeqList {
public:
	SLDataType* arr;
	int size;
	int capacity;
};
typedef SeqList SL;
//���˳��������Ƿ����
void checkSLCaoacity(SL* ps);
//˳����ʼ��
void SLInit(SL* ps);
//˳��������
void SLDestroy(SL* ps);

//˳���Ĳ������
//ͷ��β��
void SLPushFront(SL* ps,SLDataType x);
void SLPushBack(SL* ps, SLDataType x);
//ͷɾβɾ
void SLPopFront(SL* ps);
void SLPopBack(SL* ps);
//ѡ�����
void SLInsert(SL* ps,int i, SLDataType x);
//ѡ��ɾ��
void SLDelete(SL* ps, SLDataType x);

//˳���Ĳ��Ҳ���
void SLFind(SL* ps, SLDataType x);
//˳�����޸Ĳ���
void SLUpdate(SL* ps, int i, SLDataType x);

//�������Ԫ��
void SLPrint(SL* ps);