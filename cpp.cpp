#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template<typename T> 
istream& operator>>(istream &istream, vector<T> &v) {for (auto &it : v)cin >> it;return istream;}
template<typename T> 
ostream& operator<<(ostream &ostream, const vector<T> &c) { for (auto &it : c) cout << it << " "; cout << endl ; return ostream; }
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007 
#define MOD1 998244353 
#define INF 1e18
#define nline "\n" 
#define pb push_back 
#define ppb pop_back
#define ff first 
#define ss second
#define set_bits __builtin_popcountll 

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
#define vll vector<ll> 
#define vstr vector<str> 
template<class T> using oset =tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update> ; 
// find_by_order, order_of_key , greater<T> , less_equal<T> --- multiset
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif
int vowels[26] = {1,0,0,0,1,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1};
void _print(ll t) {cerr << t;} void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;} void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;} void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;} template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v); template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v); template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";} 

/***************** KNNC ******************/

void solve(){
    
}

int main() {
    fastio() ; 
    #ifndef ONLINE_JUDGE
    freopen("Error.txt","w",stderr) ;
    #endif
    ll test ; cin >> test ;
    while(test--) solve();
    return 0;  
}  
