int nonDivisibleSubset(int k, int S_count, int* S) {
    int rests[k];
    int count = 0;
    for(int i = 0; i < k; i++){
        rests[i] = 0;
    }
    for(int i = 0; i < S_count; i++) {
        rests[S[i] % k]++;
    }

    for(int j =1; j <= (k / 2); j++){
        if(j == k-j) {
            count++;
            continue;
        }
 

        count += rests[j] > rests[k-j] ? rests[j]: rests[k-j]; 
    }

    if(rests[0]> 0){
        count++;
    }

    return count;
}