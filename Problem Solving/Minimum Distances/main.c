int minimumDistances(int a_count, int* a) {
    int minDistance = -1;

    for(int i = 0; i < a_count - 1; i++) {
        for(int j = i + 1; j < a_count; j++) {
            if (a[i] == a[j]) {
                if(minDistance == -1 || abs(i-j) < minDistance) {
                    minDistance = abs(i-j);
                    break;
                }
            }
        }
    }

    return minDistance;
}