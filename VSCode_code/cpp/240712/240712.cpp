// #include<iostream>
// #include<queue>
// #include<vector>
// int main(){
//     int n, k;
//     std::cin >> n >> k;
//     std::priority_queue<int> pq;
//     std::vector<int> vec(n);
//     for(int i = 0; i < n; i++){
//         std::cin >> vec[i];
//     }
//     for(int i = 0; i < k; i++){
//         pq.push(vec[i]);
//     }
//     for(int i = k; i < n; i++){
//         if(vec[i] > pq.top()){
//             pq.pop();
//             pq.push(vec[i]);
//         }
//     }
//     while(!pq.empty()){
//         std::cout << pq.top() << " ";
//         pq.pop();
//     }   
//     std::cout << std::endl;
//     return 0;
// }


// #include<iostream>
// #include<vector>
// int main(){
//     std::vector<int>vec(3);
//     for(int i = 0; i < 2; i++){
//         std::cin >> vec[i];
//     }
//     vec.emplace_back(10);
//     for(auto &i : vec){
//         std::cout << i << " ";
//     }
//     std::cout << std::endl;
//     return 0;
// }