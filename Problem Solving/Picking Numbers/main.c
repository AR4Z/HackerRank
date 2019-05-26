int pickingNumbers(int a_count, int* a) {
    int count = 0;
    int numbers[a_count];
    bool flag = false;
    int maxlen = 0;
    for(int i = 0; i < a_count; i++){
        numbers[count] = a[i];
        count++;
        for(int j = 0; j < a_count; j++) {
            for(int k = 0; k < count; k++) {
                flag = abs(a[j] - numbers[k]) <= 1;
                if(!flag){
                    break;
                } 
            }
            if (flag) {
              numbers[count] = a[j];
              count++;
            }
        }
        if(count > maxlen) {
            maxlen = count;
        }
        count = 0;
    }
    return maxlen - 1;
}
