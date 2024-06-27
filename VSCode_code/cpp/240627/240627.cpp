#include<iostream>
#include<vector>
using namespace std;

int parent(int i){
    return i / 2;
}

int left(int i){
    return 2 * i;
}

int right(int i){
    return 2 * i + 1;
}

void max_heapify(vector<int> &a, int i){
    int l = left(i);
    int r = right(i);
    int largest;
    if(l < a.size() && a[l] > a[i]){
        largest = l;
    }else{
        largest = i;
    }
    if(r <= a.size() && a[r] > largest){
        largest = r;
    }
    if(largest != i){
        swap(a[i], a[largest]);
        max_heapify(a,largest);
    }
}

int main(){
    vector<int>arr(10);
    for(int i = 0; i < 10; i++){
        cin >> arr[i];
    }
    max_heapify(arr, 0);
   for(auto &i : arr){
        cout << i << " ";
    } 

    return 0;
}