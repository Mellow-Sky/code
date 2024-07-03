#include<vector>
#include<iostream>
std::vector<int> vec;

int parent(int i){
    return (i - 1) / 2;
}
int left(int i){
    return 2 * i + 1;
}
int right(int i){
    return 2 * i + 2;
}


void pretree(std::vector<int> &tree, int i){
    if(i < 0 || i >= tree.size()){
        return;
    }
    vec.push_back(tree[i]);
    pretree(tree, left(i));
    pretree(tree, right(i));
}
void intree(std::vector<int> &tree, int i){
    if(i < 0 || i >= tree.size()){
        return;
    }
    intree(tree, left(i));
    vec.push_back(tree[i]);
    intree(tree, right(i));
}
void posttree(std::vector<int> &tree, int i){
    if(i < 0 || i >= tree.size()){
        return;
    }
    posttree(tree, left(i));
    posttree(tree, right(i));
    vec.push_back(tree[i]);
}

int main(){
    std::vector<int> tree(10);
    for(int i = 0; i < 10; i++){
        std::cin >> tree[i];
    }

    pretree(tree, 0);
    for(auto &i : vec){
        std::cout << i << " ";
    }
    std::cout << std::endl;
    vec.clear();

    intree(tree, 0);
    for(auto &i : vec){
        std::cout << i << " ";
    }
    std::cout << std::endl;
    vec.clear();

    posttree(tree, 0);
    for(auto &i : vec){
        std::cout << i << " ";
    }
    std::cout << std::endl;
    vec.clear();

    return 0;
}