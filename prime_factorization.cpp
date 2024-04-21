vector<int> prime_factorization(int n){
    vector<int> vt1 ; 
    for(int i=2; i<=n ; i++){
        while(n%i==0){
            vt1.push_back(i) ; n/=i ;
        }
    }
    return vt1 ; 
}
