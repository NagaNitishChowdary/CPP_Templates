#include<bits/stdc++.h>
using namespace std ; 

// EXTENDED EUCLID'S ALGORITHM

int EGCD(int a,int b,int &x,int &y){
    // BASE CASE 
    if(a == 0){
        x = 0 ; 
        y = 1 ; 
        return b ; 
    }
    int x1,y1 ; 
    int g = EGCD(b%a,a,x1,y1) ; 
    x = y1 - (b/a)*x1 ; 
    y = x1 ; 
    return g ; 
}

int main(){
    int a,b ; cin >> a>> b ; 
    int x,y ; 
    cout << EGCD(a,b,x,y) << endl ; 
    cout << x << " " << y << endl ; 
}
