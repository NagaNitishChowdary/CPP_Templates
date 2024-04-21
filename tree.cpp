#include<bits/stdc++.h>
using namespace std ;

struct node{
    int data ;
    node *left,*right ;
    node(int val){
        data = val ;
        left = right = NULL ;
    }
};

int main()
{
    node *root = new node() ;
    root -> left = new node() ;
    root -> right = new node() ;
    return 0 ; 
}
