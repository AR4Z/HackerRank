int sockMerchant(int n, int ar_count, int* ar) {
    int color_sock = 0;
    int amount_this_color = 0;
    int sum_pairs = 0;

    for (int i = 0; i < ar_count - 1; i++) {
        color_sock = *(ar + i);
        if(color_sock != 0){
            for(int y = i;  y < ar_count; y++){
                if(*(ar + y) == color_sock){
                    amount_this_color++;
                    *(ar + y) = 0;
                }
            }
            sum_pairs += amount_this_color / 2;
            amount_this_color = 0;
        }
    }
    return sum_pairs;
}
