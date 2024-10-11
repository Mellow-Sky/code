// #include<iostream>
// int main() {
//     std::ios::sync_with_stdio(0), std::cin.tie(0), std::cout.tie(0);
//     long long n, k;
//     std::cin >> n >> k;
//     long long x = (n + 2 - 1) / 2;
//     if(k <= x) {
//         int index = 1;
//         for(int i = 1; i <= n; i += 2) {
//             if (index == k) {
//                 std::cout << i;
//                 break;
//             }
//             index++;
//         }
//     } else {
//         int index = 1;
//         for(int i = 2; i <= n; i += 2) {
//             if (index == k - x) {
//                 std::cout << i;
//                 break;
//             }
//             index++;
//         }
//     }
//     return 0;
// }



// #include<iostream>
// int main() {
//     long long n, k;
//     std::cin >> n >> k;
//     long long x = n % 2 == 0 ? n / 2 : n / 2 + 1;
//     if(k > x) {
//         std::cout << (k - x) * 2;
//     } else {
//         std::cout << k * 2 - 1;
//     }
//     return 0;
// }





// #include<iostream>
// #include<string>
// void vol(){
//     int n;
//     std::cin >> n;
//     std::string s;
//     std::cin >> s;

// }

// int main() {
//     int t;
//     std::cin >> t;
//     while(t--) {
//         vol();
//     }
//     return 0;
// }




// #include <iostream>
// using namespace std;
// #include <algorithm>
// #include <iomanip>
// int n;
// struct cj {
// 	int xh;
// 	int sj[5];
// 	double zcj;
// }cj1[100];
// bool cmp(int a,int b) {
// 	return a < b;
// }
// bool cmp1(cj a, cj b) {
// 	return a.zcj > b.zcj;
// }
// int main() {
// 	cin >> n;
// 	for (int i = 1; i <= n; i++) {
// 		cin >> cj1[i].xh;
// 		for (int j = 0; j <= 4; j++) {
// 			cin >> cj1[i].sj[j];
// 		}
// 		sort(cj1[i].sj, cj1[i].sj + 5, cmp);
// 		cj1[i].zcj = (cj1[i].sj[1] + cj1[i].sj[2] + cj1[i].sj[3]) / 3.0;
// 	}
//     sort(cj1 + 1, cj1 + n + 1, cmp1);
// 	for (int k = 1; k <= 3; k++) {
// 		//cout << cj1[k].xh << ' ' << cj1[k].zcj << endl;
//         printf("%d %.3lf\n", cj1[k].xh, cj1[k].zcj);
// 	}
// 	return 0;
// }




// #include<iostream>
// #include<string>
// #include<algorithm>
// int main() {
//     std::string s;
//     std::cin >> s;
//     reverse(s.begin(), s.end());
//     std::cout << s;
//     return 0;
// }


// #include<iostream>
// int main() {
//     double t;
//     int n;
//     std::cin >> t >> n;
//     printf("%.3lf\n", t / n);
//     printf("%d", n * 2);
//     return 0;
// }



// #include<iostream>
// #include<cmath>
// int main() {
//     double a, b, c;
//     std::cin >> a >> b >> c;
//     double p = (a + b + c) / 2;
//     printf("%.1lf", std::sqrt(p * (p - a) * (p - b) * (p - c)));
//     return 0;
// }



// #include<iostream>
// int main() {
//     int s, v;
//     std::cin >> s >> v;
//     int t = (s + v - 1) / v + 10;
//     if(t >= 24 * 60) {
//         t -= 24 * 60;
//     }
//     int m = t % 60;
//     int h = t / 60;
//     if(8 - h - 1 >= 0) {
//         if(60 - m < 10) {
//             std::cout << "0" << 8 - h - 1 << ":" << "0" << 60 - m;
//         }else {
//             std::cout << "0" << 8 - h - 1 << ":" << 60 - m;
//         }
        
//     } else if(24 + 8 - h - 1 >= 10){
//         if(60 - m < 10) {
//             std::cout << 24 + 8 - h - 1 << ":" << "0" <<60 - m;
//         } else {
//             std::cout << 24 + 8 - h - 1 << ":" << 60 - m;
//         }
        
//     }
//     return 0;
// }




// #include<iostream>
// int main() {
//     double h, r;
//     std::cin >> h >> r;
//     double s = h * (3.14 * r * r);
//     std::cout << int((20000 + s - 1) / s);
//     return 0;
// }



// #include<iostream>
// int main() {
//     int a, b, c, d;
//     std::cin >> a >> b >> c >> d;
//     int t1 = a * 60 + b;
//     int t2 = c * 60 + d;
//     int tmp = t2 - t1;
//     int h = tmp / 60;
//     int m = tmp % 60;
//     std::cout << h << " " << m;
//     return 0;
// }


// #include<iostream>
// int main() {
//     int a, b, c;
//     std::cin >> a >> b >> c;
//     std::cout << (a * 0.2) + (b * 0.3) + (c * 0.5);
//     return 0;
// }



#include<iostream>
// 填上你觉得需要的其他头文件
#include<cmath>
using namespace std;
int main() {
    int T;
    cin >> T;
    if (T == 1) {
        // 粘贴问题 1 的主函数代码，除了 return 0
        cout << "I love Luogu!";
    } else if (T == 2) {
        // 粘贴问题 2 的主函数代码，除了 return 0
        cout << 2 + 4 << " " << 10 - 2 - 4;
    } else if (T == 3) {
        // 请自行完成问题 3 的代码
        cout << 3 << "\n" << 2 << "\n" << 2;
    } else if (T == 4) {
        // 请自行完成问题 4 的代码
        printf("%.3lf", 500 / 3.0);
    } else if (T == 5) {
        // 请自行完成问题 5 的代码
        cout << 15;
    } else if (T == 6) {
        // 请自行完成问题 6 的代码
        cout << sqrt(36 + 81);
    } else if (T == 7) {
        // 请自行完成问题 7 的代码
        cout << 110 << "\n" << 90 << "\n" << 0;
    } else if (T == 8) {
        // 请自行完成问题 8 的代码
        int r = 5;
        double p = 3.141593;
        cout << 2 * p * r << "\n";
        cout << p * r * r << "\n";
        cout << 4 / 3.0 * p * r * r * r;
    } else if (T == 9) {
        // 请自行完成问题 9 的代码
        cout << 22;
    } else if (T == 10) {
        // 请自行完成问题 10 的代码
        cout << 9;
    } else if (T == 11) {
        // 请自行完成问题 11 的代码
        cout<<1.0*100/3;
    } else if (T == 12) {
        // 请自行完成问题 12 的代码
        cout << 13 << "\n";
        cout << "R";
    } else if (T == 13) {
        // 请自行完成问题 13 的代码
        cout<<(int)(pow(4/3* 3.141593 *(4*4*4+10*10*10),1.0*1/3));
    } else if (T == 14) {
        // 请自行完成问题 14 的代码
        cout << 50;
    }
    return 0;
}