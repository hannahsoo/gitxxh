#include <iostream>
#include <string>
#include <numeric>
#include <sstream>
#include <vector>
#include <map>
#include <unordered_map>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ret;
        vector<int>::iterator iter,it;
        unordered_map<int,int> m;
        for(iter=nums.begin();iter<nums.end();iter++){
            int one = *iter;
            for(it=iter+1;it<nums.end();it++){
                if(*iter + *it == target){
                    ret.push_back(one);
                    ret.push_back(*it);
                    return ret;
                }
            }
        }
        return ret;
    }
};
struct node
{
    int val;
    node *left;
    node *right;
};
void InsertBST(node *root, int val){
    node *T,*father;
    T =root;
    father = NULL;
    while(T!=NULL&&T->val != val){//check if T exist first..otherwise segement fault
        cout<<"T->val : "<<T->val<<endl;
        father = T;
        if(val > T->val)    T = T->right;
        else    T = T->left;
    }
    if(T!=NULL)   return;//val is duplicate
    node *s = (node*)malloc(sizeof(node));
    s->val = val;
    s->left = NULL;
    s->right = NULL;
    if(val > father->val)    father->right = s;
    else father->left = s;
}
void CreateBiTree(node *root){
    string data;
    getline(cin,data);
    stringstream ss(data);
    string item;
    while(ss>>item){
        
        int val = stoi(item);
        cout<<val<<endl;
        if(root == NULL){
            cout<<"root is null"<<endl;
            root = (node*) malloc(sizeof(node));
            root->val = val;
            root->left =NULL;
            root->right=NULL;
        }
        else InsertBST(root,val);
    }
}
int main(){
    node *tree;
    tree = NULL;
    CreateBiTree(tree);
}