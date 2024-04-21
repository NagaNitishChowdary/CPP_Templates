bool prime(ll n){
    ll c=0;
    for(ll i=2;i*i<=n;i++){
        if(n%i==0) c++;
    }
    if(c==0 && n!=1) return 1 ;
    else return 0 ;
}
