#include<vector>
#include<queue>
#include<iostream>
struct tree{
    int value;
    tree *left;
    tree *right;
    tree(int x) : value(x), left(nullptr), right(nullptr){}
};
std::vector<int> vec;
//层序遍历
std::vector<int> levelorder(tree *root){
    std::queue<tree *> q;
    q.push(root);
    std::vector<int> vec;
    while(!q.empty()){
        tree *node = q.front();
        q.pop();
        vec.push_back(node->value);
        if(node->left != nullptr){
            q.push(node->left);
        }
        if(node->right != nullptr){
            q.push(node->right);
        }
    }
    return vec;
}
//前序遍历
void preorder(tree *root){
    if(root == nullptr){
        return;
    }
    vec.push_back(root->value);
    preorder(root->left);
    preorder(root->right);
}
//中序遍历
void inorder(tree *root){
    if(root == nullptr){
        return;
    }
    inorder(root->left);
    vec.push_back(root->value);
    inorder(root->right);
}
//后序遍历
void postorder(tree *root){
    if(root == nullptr){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    vec.push_back(root->value);
}

int main(){
    tree *t0 = new tree(1);
    tree *t1 = new tree(2);
    tree *t2 = new tree(3);
    tree *t3 = new tree(4);
    tree *t4 = new tree(5);

    t0->left = t1;
    t0->right = t2;
    t1->left = t3;
    t1->right = t4;
    
    preorder(t0);
    for(auto &i : vec){
        std::cout << i << " ";
    }
    std::cout << std::endl;
    vec.clear();

    inorder(t0);
    for(auto &i : vec){
        std::cout << i << " ";
    }
    std::cout << std::endl;
    vec.clear();  

    postorder(t0);
    for(auto &i : vec){
        std::cout << i << " ";
    }
    std::cout << std::endl;
    vec.clear();

    return 0;
}