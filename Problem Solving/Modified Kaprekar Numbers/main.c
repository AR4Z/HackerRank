void kaprekarNumbers(int p, int q) {
  int count_kaprekar_numbers = 0;
  for (int n = p; n <= q; n++) {
    double current_number = n;
    int d = 0;
    int digit = 0;
    long squared_current_number = pow(current_number, 2);

    while (current_number >= 1) {
      current_number = (current_number / 10);
      d++;
    }

    int digits[2 * d];
    int n_digit = (2 * d) - 1;

    while (squared_current_number >= 1) {
      digits[n_digit] = squared_current_number % 10;
      squared_current_number /= 10;
      n_digit--;
    }
    int left_half = 0;
    int exp = 0;

    for (int i = d - 1; i > n_digit; i--, exp++) {
      left_half += digits[i] * pow(10, exp);
    }

    int right_half = 0;
    exp = 0;

    for (int i = 2 * d - 1; i >= d; i--, exp++) {
      right_half += digits[i] * pow(10, exp);
    }

    if ((left_half + right_half) == n) {
      printf("%d ", n);
      count_kaprekar_numbers++;
    }
  }
  if (!count_kaprekar_numbers) {
    printf("INVALID RANGE");
  }
}