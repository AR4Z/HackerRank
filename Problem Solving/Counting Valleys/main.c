int countingValleys(int n, char* s) {
    int valleys = 0;
    int level = 0;
    int start_valley = 0;
    for(int i = 0; i < n; i++) {
        if(level == 0) {
            start_valley = s[i] == 'D';
        }

        if(s[i] == 'D') {
            level -= 1;
        } else {
            level += 1;
        }

        if(start_valley && level == 0){
            valleys++;
        }
    }
    return valleys;
}
