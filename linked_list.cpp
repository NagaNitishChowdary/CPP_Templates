#include<bits/stdc++.h>
using namespace std ;

struct node{
    int data ;
    node *next ;
    node(int val){
        data = val ;
        next = NULL ;
    }
} ;

void printList(node *knnc){
    while(knnc != NULL){
        cout << knnc -> data << " " ;
        knnc = knnc -> next ;
    }
    cout << endl ;
}

int main()
{
    node *list1 = new node() ;
    list1 -> next = new node() ;
    list1 -> next -> next = new node() ;

    node *list2 = new node() ;
    list2 -> next = new node() ;
    list2 -> next -> next = new node() ;
}
