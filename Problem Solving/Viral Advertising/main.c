int viralAdvertising(int n) {
    int i = 2;
    int sum = 2;
    for(int j = 0; j < n-1 ; j++) {
        i = (i * 3)/2;
        sum +=i;
    }

    return sum;
}