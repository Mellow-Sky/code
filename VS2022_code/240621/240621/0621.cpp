//#include <iostream>
//using namespace std;
//
//
//void test(int& b) {
//	cout << &b << endl;
//
//}
//
//int main() {
//	int a = 10;
//	test(a);
//	cout << &a << endl;
//	return 0;
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//struct MyStruct {
//    int a;
//    double b;
//    std::string c;
//};
//
//int main() {
//    std::vector<MyStruct> vec = { {1, 2.0, "hello"}, {3, 1.0, "world"}, {2, 3.0, "cpp"} };
//
//    // 按a排序
//    std::sort(vec.begin(), vec.end(), [](const MyStruct& lhs, const MyStruct& rhs) {
//        return lhs.a < rhs.a;
//        });
//
//    for (const auto& item : vec) {
//        std::cout << item.a << " " << item.b << " " << item.c << std::endl;
//    }
//
//    // 按b排序
//    std::sort(vec.begin(), vec.end(), [](const MyStruct& lhs, const MyStruct& rhs) {
//        return lhs.b < rhs.b;
//        });
//
//    for (const auto& item : vec) {
//        std::cout << item.a << " " << item.b << " " << item.c << std::endl;
//    }
//
//    return 0;
//}



//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//int main() {
//    std::vector<int> vec = { 1, 2, 3, 7 , 5 };
//
//    // Lambda表达式打印每个元素
//    std::for_each(vec.begin(), vec.end(), [](int n) {
//        std::cout << n << " ";
//        });
//
//    std::cout << std::endl;
//    return 0;
//}




//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//int main() {
//    std::vector<int> vec = { 1, 2, 3, 4, 5 };
//    int factor = 2;
//
//    // 捕获外部变量factor，按值捕获
//    std::for_each(vec.begin(), vec.end(), [factor](int& n) {
//        n *= factor;
//        });
//
//    for (int n : vec) {
//        std::cout << n << " ";
//    }
//
//    std::cout << std::endl;
//    return 0;
//}




//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//int main() {
//    std::vector<int> vec = { 1, 2, 3, 4, 5 };
//    int a = 0;
//    int* sum = &a;
//
//    // 捕获外部变量sum，按引用捕获
//    std::for_each(vec.begin(), vec.end(), [sum](int n) {
//        *sum += n;
//        });
//
//    std::cout << "Sum: " << *sum << std::endl;
//    return 0;
//}


//#include<iostream>
//using namespace std;
//
//auto test(int n) {
//	return n * 3.14;
//}
//
//int main() {
//	int n = 10;
//	cout << test(n);
//
//	return 0;
//}


//#include <iostream>
//
//// 使用auto关键字进行函数返回类型推导
//auto add(int a, int b) -> int{
//    return a + b;
//}
//
//int main() {
//    std::cout << add(2.4, 3.9) << std::endl;  // 输出 5
//    return 0;
//}
