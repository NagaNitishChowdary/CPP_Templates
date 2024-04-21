void floyd_warshal(vector<vector<int>>&matrix){
    int n = matrix.size() , m = matrix[0].size() ;
    
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            if(matrix[i][j] == -1) matrix[i][j] = 1e9 ;
            if(i == j) matrix[i][j] == 0 ;
        }
    }
    
    for(int via=0 ; via<n ; via++){
        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<n ; j++){
                matrix[i][j] = min(matrix[i][j] , matrix[i][via] + matrix[via][j]) ;
            }
        }
    }
    
    // HOW TO CHECK IF THERE IS A NEGATIVE CYCLE 
    for(int i=0 ; i<n ; i++){
        if(matrix[i][i] < 0){
            // THEN THERE IS A NEGATIVE CYCLE 
        }
    }
    
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            if(matrix[i][j] == 1e9) matrix[i][j] = -1 ;
        }
    }
    
}
