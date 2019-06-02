int beautifulTriplets(int d, int arr_count, int *arr) {
  int count = 0;
  int aim = 0;
  int aim2 = 0;
  int pos = -1;
  int pos2 = -1;

  for (int i = 0; i < (arr_count - 1); i++) {
    aim = d + arr[i];

    for (int j = i + 1; j < arr_count; j++) {
      if (aim == arr[j]) {
        pos = j;
        break;
      }
    }

    if (pos > -1) {
      aim2 = d + arr[pos];
      for (int j = pos + 1; j < arr_count; j++) {
        if (aim2 == arr[j]) {
          pos2 = j;
          break;
        }
      }
    }

    if (pos > -1 && pos2 > -1) {
      count++;
    }
    pos = pos2 = -1;
  }
  return count;
}