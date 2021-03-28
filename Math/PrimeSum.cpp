// https://www.interviewbit.com/problems/prime-sum/

vector<int> Solution::primesum(int A) {
    
    vector<bool> val(A+1,true);
    vector<int> sol;
    int i,j;
    for(i = 2; i <= sqrt(A); i++){
        if(val[i] == true){
            for( j = 2; i*j <= A; j++){
                val[i*j] = false;
            }
        }
    }
    
    for(i = 2; i < A; i++){
        if(val[i] == true){
            if(val[A - i] == true){
                sol.push_back(i);
                sol.push_back(A-i);
                return sol;
            }
        }
    }
    
