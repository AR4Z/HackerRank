int divisibleSumPairs(int n, int k, int ar_count, int* ar) {
    int result = 0;
    for(int x=0; x < n; x++) {
        int j = ar[x];

        for(int y = 0; y < n; y++){
            int i = ar[y];
            if(x<y && (j+i)%k ==0){
                result++;
            }
        }
    }
    return result;
}
