// #include <iostream>
// #include <fstream>
// using namespace std;

// int main() {
//     ofstream outFile;                 // 创建文件输出流对象
//     outFile.open("E:\\fstream.txt");      // 打开文件
//     if (outFile.is_open()) {
//         outFile << "Hello, world!";   // 写入文件
//         outFile.close();              // 关闭文件
//     }
//     return 0;
// }




// #include <iostream>
// #include <fstream>
// #include <string>
// int main () {
//     std::ifstream fin;
//     std::ofstream fout;
//     fin.open("E:\\TEST.txt", std::ios::in);
//     fout.open("E:\\fstream.txt", std::ios::app);
//     //std::cerr << "worry";
//     if (fout.is_open() && fin.is_open()) {
//         std::string s;
//         while (getline(fin, s)) {
//             fout << s << "\n";
//         }
//         fout << "END";
//         fin.close();
//         fout.close();
//     }
//     return 0;
// }



// #include <iostream>
// #include <string>

// int main () {
//     std::string s;
    
//     return 0;
//}


// #include <iostream>
// #include <numeric>

// int main () {
//     int a[10];
//     int b[10];
//     for (int i = 0; i < 10; i++) {
//         std::cin >> a[i];
//     }
//     std::partial_sum(a, a + 9, b);
//     for (int i = 0; i < 10; i++) {
//         std::cout << a[i] << " ";
//     }
//     return 0;
// }



// #include <iostream>
// #include <numeric>
// int main () {
//     int n;
//     std::cin >> n;
//     for (int i = 1; i <= n - 1; i++) {
//         for (int j = i + 1; j <= n; j++) {
//             if (std::gcd(i, j) == 1) {
//                 std::cout << i << " " << j << "\n";
//             }
//         }
//     }
// }

