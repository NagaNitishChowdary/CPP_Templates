ll z=1000000;
bool arr[1000001];
void SieveOfEratosthenes(){
    for(ll i=2;i<=z;i++) arr[i]=true;
    for(ll i=2;i*i<=z;i++){
        if(arr[i]==true){
            for(ll j=i*i;j<=z;j+=i) arr[j]=false;
        }
    }
}
