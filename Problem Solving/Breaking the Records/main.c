int* breakingRecords(int scores_count, int* scores, int* result_count) {
    int high_score, low_score, record_h = 0, record_l = 0;
    high_score = low_score = *scores;
    static int a[2];

    for(int i = 1; i < scores_count; i++) {
        if(*(scores + i) > high_score){
            high_score = *(scores + i);
            record_h++;
        }

        if(*(scores + i) < low_score){
            low_score = *(scores + i);
            record_l++;
        }
    }
    *result_count = 2;
    a[0] = record_h;
    a[1] = record_l;
    return a;
}
