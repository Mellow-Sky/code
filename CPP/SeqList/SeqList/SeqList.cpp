#include"SeqList.h"

void SLInit(SL* ps) {
	ps->arr = NULL;
	ps->size=ps->capacity=0;
}

void SLDestroy(SL* ps) {
	if (ps->arr) {
		delete[] ps->arr;
	}
	ps->arr = NULL;
	ps->size = ps->capacity = 0;
}

void checkSLCaoacity(SL* ps) {
	//先判断空间够不够
	if (ps->size == ps->capacity) {
		int newCapacity = (ps->capacity == 0) ? sizeof(SLDataType) : 2 * ps->capacity;
		SLDataType* temp = (SLDataType*)realloc(ps->arr, newCapacity * sizeof(SLDataType));
		if (!temp) {
			perror("realloc failed");
			exit(1);
		}
		ps->arr = temp;
		//delete(temp);
		ps->capacity = newCapacity;
	}
}
	
//头插尾插
void SLPushFront(SL* ps, SLDataType x) {
	assert(ps);//传其他类型指针会导致崩溃，给爷爬
	checkSLCaoacity(ps);
	//插入
	for (int i = ps->size; i > 0; i--) {
		ps->arr[i] = ps->arr[i - 1];
	}
	ps->arr[0] = x;
	ps->size++;
}
void SLPushBack(SL* ps, SLDataType x) {
	assert(ps);
	checkSLCaoacity(ps);
	ps->arr[ps->size++] = x;
}
//头删尾删
void SLPopFront(SL* ps) {
	assert(ps);
	if (ps->size == 0) {
		return;
	}
	for (int i = 0; i < (ps->size--) - 1; i++) {
		ps->arr[i + 1] = ps->arr[i];
	}
}
void SLPopBack(SL* ps) {
	assert(ps);
	if (ps->size == 0) {
		return;
	}
	ps->size--;
}
//选择插入
void SLInsert(SL* ps, int i, SLDataType x) {
	assert(ps);
	checkSLCaoacity(ps);
	//1 2 3 4 5 size
	//0 1 2 3 4 
	for (int j = ps->size; j >i; j--) {
		ps->arr[j] = ps->arr[j - 1];
	}
	ps->arr[i] = x;
	ps->size++;
}
//选择删除
void SLDelete(SL* ps, SLDataType x) {
	assert(ps);
	if (ps->size == 0) { return; }
	for (int j = 0; j < ps->size; j++) {
		if (ps->arr[j] == x) {
			for (int k = j; k < ps->size - 1; k++) {
				ps->arr[k] = ps->arr[k + 1];
			}
			ps->size--;
			return;
		}
	}
	cout << "没有找到要删除的元素" << '\n';
}

//顺序表的查找操作
void SLFind(SL* ps, SLDataType x) {
	assert(ps);
	for (int i = 0; i <= ps->size - 1; i++) {
		if (ps->arr[i] == x) {
			cout << "找到了第" << i + 1 << "个元素\n";
			cout << "值为:" << ps->arr[i] << '\n';
			return;
		}
	}
	cout << "没有找到要查找的元素" << '\n';
}
//顺序表的修改操作
void SLUpdate(SL* ps, int i, SLDataType x) {
	assert(ps);
	checkSLCaoacity(ps);
	if (i <= 0 || i > ps->size - 1) {
		cout << "索引越界" << '\n';
		return;
	}
	ps->arr[i - 1] = x;
}

//输出所有元素
void SLPrint(SL* ps) {
	assert(ps);
	checkSLCaoacity(ps);
	for (int i = 0; i < ps->size; i++) {
		cout << ps->arr[i] << " ";
	}
	cout << '\n';
}