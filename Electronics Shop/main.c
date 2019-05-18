int getMoneySpent(int keyboards_count, int* keyboards, int drives_count, int* drives, int b) {
    /*
     * Write your code here.
     */
    int total = 0;

    for(int i = 0; i < keyboards_count; i++){
        for(int y = 0; y < drives_count; y++){
            int sum = keyboards[i] + drives[y];
            if(sum <= b && sum > total){
                total = sum;
            }
        }
    }
    return total == 0? -1: total;
}
