ll mod = 1e9 + 7;

ll fact[1000004];
ll modinv[1000004];

ll power(ll base, ll x){
    if(x < 0){
        return 0;
    }
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

void precomp(){
    modinv[0] = 1;
    fact[0] = 1;
    for(ll i = 1; i <= 1000000; i++){
        fact[i] = (fact[i-1]*i)%mod;
        modinv[i] = power(fact[i], mod-2);
    }
}

ll ncr(ll n, ll r){
    if(n < 0 || r < 0 || r > n){
        return 0;
    }
    return (((fact[n] * modinv[r])%mod)*modinv[n-r]) % mod;
}

void solve(){
    int q;
    cin >> q;
    precomp();
    while(q--){
        ll n, r;
        cin >> n >> r;
        cout << ncr(n, r) << endl;
    }
}
