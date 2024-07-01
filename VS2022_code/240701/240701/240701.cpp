//#include<iostream>
//using namespace std;
//struct list {
//    int value;
//    list* next;
//    list(int x) {
//        value = x;
//        next = nullptr;
//    }
//};
//void insert(list* n, list* p) {
//    p->next = n->next;
//    n->next = p;
//}
//void remove(list* n) {
//    list* p = n->next;
//    n->next = p->next;
//    delete p;
//}
//list* access(list* head, int index) {
//    for (int i = 0; i < index; i++) {
//        if (head->next == nullptr) {
//            return nullptr;
//        }
//        head = head->next;
//    }
//    return head;
//}
//int find(list* head, int target) {
//    int index = 0;
//    while (head != nullptr) {
//        if (head->value == target) {
//            return index;
//        }
//        head = head->next;
//        index++;
//    }
//    return -1;
//}
//int main() {
//    list* n0 = new list(1);
//    list* n1 = new list(2);
//    list* n2 = new list(3);
//
//    n0 -> next = n1;
//    n1 -> next = n2;
//        
//    list* p = new list(10);
//    insert(n1, p);
//    cout << find(n0, 10);
//    return 0;
//}

//#include <iostream>
//#include <vector>
//
//int main() {
//    // ����һ���յ� vector
//    std::vector<int> vec;
//
//    // ���Ԫ��
//    vec.push_back(1);
//    vec.push_back(2);
//    vec.push_back(3);
//
//    // ����Ԫ��
//    std::cout << "��һ��Ԫ��: " << vec[0] << std::endl;
//    std::cout << "���һ��Ԫ��: " << vec.back() << std::endl;
//
//    // �޸�Ԫ��
//    vec[1] = 10;
//
//    // ʹ�õ���������
//    for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
//        std::cout << *it << " ";
//    }
//    std::cout << std::endl;
//
//    // ɾ�����һ��Ԫ��
//    vec.pop_back();
//
//    // ��� vector �Ĵ�С������
//    std::cout << "��С: " << vec.size() << std::endl;
//    std::cout << "����: " << vec.capacity() << std::endl;
//
//    return 0;
//}


