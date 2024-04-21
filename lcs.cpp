int lcs(string s, string t){   
    int n = s.size() , m = t.size() ;
    vector<int> prev(m+1,-1) , curr(m+1,0) ;
    for(int j=0 ; j<=m ; j++) prev[j] = 0 ;
    for(int ind1=1 ; ind1<=n ; ind1++){
        for(int ind2=1 ; ind2<=m ; ind2++){
            if(s[ind1-1] == t[ind2-1]) curr[ind2] = 1 + prev[ind2-1] ;
     else curr[ind2] = max(prev[ind2] , curr[ind2-1]);
        }
        prev = curr ;
    }
    return curr[m] ;
}
