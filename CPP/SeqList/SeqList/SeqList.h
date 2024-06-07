#pragma once
#include<iostream>
#include<cstdlib>
#include<cassert>
using namespace std;
// 顺序表结构定义
typedef int SLDataType;
class SeqList {
public:
	SLDataType* arr;
	int size;
	int capacity;
};
typedef SeqList SL;
//检查顺序表容量是否合理
void checkSLCaoacity(SL* ps);
//顺序表初始化
void SLInit(SL* ps);
//顺序表的销毁
void SLDestroy(SL* ps);

//顺序表的插入操作
//头插尾插
void SLPushFront(SL* ps,SLDataType x);
void SLPushBack(SL* ps, SLDataType x);
//头删尾删
void SLPopFront(SL* ps);
void SLPopBack(SL* ps);
//选择插入
void SLInsert(SL* ps,int i, SLDataType x);
//选择删除
void SLDelete(SL* ps, SLDataType x);

//顺序表的查找操作
void SLFind(SL* ps, SLDataType x);
//顺序表的修改操作
void SLUpdate(SL* ps, int i, SLDataType x);

//输出所以元素
void SLPrint(SL* ps);