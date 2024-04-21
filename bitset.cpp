void solve(){
    // bitset<3> bs ; // 000 
    bitset<10> bs(5) ; // 0000000101

    // ACCESS FUNCTIONS
    
    // 1 --- ACCESS BIT  
    cout << bs[0] << endl ; // 1 
    // 2 --- COUNT BITS SET 
    cout << bs.count() << endl ; // 2  
    // 3 --- RETURN SIZE 
    cout << bs.size() << endl ; // 10
    // 4 --- RETURN BIT VALUE 
    cout << bs.test(2) << endl ; // 1
    // 5 --- TEST IF ANY BIT IS SET 
    cout << bs.any() << endl ; // 1 
    // 6 --- TEST IF NO BIT IS SET 
    cout << bs.none() << endl ; // 0  
    // 7 ---  TEST IF ALL BITS ARE SET 
    cout << bs.all() << endl ; // 0 
    // 8 --- SET BITS IN THE BITSET 
    bs.set(1) ; 
    cout << bs << endl ; // 0000000111
    // 9 --- RESET BITS IN THE BITSET
    bs.reset(1) ; 
    cout << bs << endl ; // 0000000101
    // 10 --- FLIP BITS IN THE BITSET 
    bs.flip(1) ; 
    cout << bs << endl ; // 0000000111
}
