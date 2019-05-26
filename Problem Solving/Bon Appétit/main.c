void bonAppetit(int bill_count, int* bill, int k, int b) {
    int sum = 0;
    int difference  = 0;
    for(int i = 0; i < bill_count; i++) {
        sum += i != k ? bill[i]: 0;
    }

    sum /= 2;

    if (sum == b) {
        printf("Bon Appetit");
    } else {
        printf("%d", b-sum);
    }
}
