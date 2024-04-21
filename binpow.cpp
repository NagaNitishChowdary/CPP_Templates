ll binpow(ll base,ll x){
    ll ans = 1;
    while(x){
        if(x % 2 == 0){
            base = (base * base) % mod;
            x = x / 2;
        }else{
            ans = (ans * base) % mod;
            x--;
        }
    }
    return ans;
}


