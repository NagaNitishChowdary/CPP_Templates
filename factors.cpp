void factors(ll n)
{
    ll c=0;
    for(ll i=1;i*i<=n;i++){
        if(n%i==0){
            c++;
            cout << i << " ";
            if(n/i!=i){
                 c++;
                 cout << n/i << " ";
            }
        }
    }
    cout << endl ;
}
