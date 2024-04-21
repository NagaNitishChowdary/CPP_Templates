void preorder(node *h){
    if(h == NULL) return ;
    cout << h -> data << " " ;
    preorder(h -> left) ;
    preorder(h -> right) ;
}
