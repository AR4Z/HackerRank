int migratoryBirds(int arr_count, int* arr) {
    int birds[5] = {0, 0, 0, 0, 0};
    int maxVal = 0;
    int index = 0;
    for(int i = 0; i < arr_count; i++){
        *(birds + (*(arr + i) - 1))+=1;
    }
    maxVal = birds[0];

    for(int x = 1; x < 5; x++) {
        if(maxVal < *(birds + x)) {
            maxVal = *(birds + x);
            index = x;
        }
    }

    return index + 1;
}
