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
	//���жϿռ乻����
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
	
//ͷ��β��
void SLPushFront(SL* ps, SLDataType x) {
	assert(ps);//����������ָ��ᵼ�±�������ү��
	checkSLCaoacity(ps);
	//����
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
//ͷɾβɾ
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
//ѡ�����
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
//ѡ��ɾ��
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
	cout << "û���ҵ�Ҫɾ����Ԫ��" << '\n';
}

//˳���Ĳ��Ҳ���
void SLFind(SL* ps, SLDataType x) {
	assert(ps);
	for (int i = 0; i <= ps->size - 1; i++) {
		if (ps->arr[i] == x) {
			cout << "�ҵ��˵�" << i + 1 << "��Ԫ��\n";
			cout << "ֵΪ:" << ps->arr[i] << '\n';
			return;
		}
	}
	cout << "û���ҵ�Ҫ���ҵ�Ԫ��" << '\n';
}
//˳�����޸Ĳ���
void SLUpdate(SL* ps, int i, SLDataType x) {
	assert(ps);
	checkSLCaoacity(ps);
	if (i <= 0 || i > ps->size - 1) {
		cout << "����Խ��" << '\n';
		return;
	}
	ps->arr[i - 1] = x;
}

//�������Ԫ��
void SLPrint(SL* ps) {
	assert(ps);
	checkSLCaoacity(ps);
	for (int i = 0; i < ps->size; i++) {
		cout << ps->arr[i] << " ";
	}
	cout << '\n';
}