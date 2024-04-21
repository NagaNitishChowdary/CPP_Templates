vector<int> robin_karp(string text,string pattern){
    int size1 = text.size() , size2 = pattern.size() ;
    const int p = 31 , m = 1e9+9 ;

    // PRE COMPUTATION OF POWERS 
    vector<long long> p_pow(max(size1,size2)) ;
    p_pow[0] = 1 ;
    for(long long i=1 ; i<(int)p_pow.size() ; i++){
        p_pow[i] = (p_pow[i-1]*p)%m ;
    }
    // for(auto it:p_pow) cout << it << " " ; cout << endl ;

    // CALCULATING HASH VALUE OF TEXT STRING 
    vector<long long> textHash(size1+1,0) ;
    for(int i=0 ; i<size1 ; i++){
        textHash[i+1] = (textHash[i] + (text[i]-'a'+1)*p_pow[i]) % m ;
    }
    // for(auto it:textHash) cout << it << " " ; cout << endl ;

    // CALCULATING HASH VALUE OF PATTERN STRING 
    long long patternHash = 0 ;
    for(int i=0 ; i<size2 ; i++){
        patternHash = (patternHash + (pattern[i]-'a'+1)*p_pow[i]) % m ;
    }
    // cout << patternHash << endl ;

    vector<int> ans ;
    for(int i=0 ; i+size2-1 < size1 ; i++){
        long long cur_hash = (textHash[i+size2]+m-textHash[i])%m ;
        if(cur_hash == patternHash*p_pow[i] % m)
            ans.push_back(i) ;
    }
    return ans ;
}
