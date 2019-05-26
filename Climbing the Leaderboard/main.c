int *climbingLeaderboard(int scores_count, int *scores, int alice_count,
                         int *alice, int *result_count) {
  int last_score = scores[0];
  int *result;
  int unique_score[scores_count];
  int count = 1;
  unique_score[0] = last_score;
  result = (int *)malloc(sizeof(int) * alice_count);

  for (int j = 1; j < scores_count; j++) {
    if (last_score != scores[j]) {
      unique_score[count] = scores[j];
      count++;
      last_score = scores[j];
    }
  }

  int pos = count;
  for (int i = 0; i < alice_count; i++) {
    if (unique_score[0] < alice[i]) {
      result[i] = 1;
      continue;
    }
    for (int j = pos - 1; j >= 0; j--) {
      if (unique_score[j] < alice[i]) {
        pos--;
      } else {
        if (unique_score[j] == alice[i]) {
          result[i] = pos;
        } else {
          result[i] = pos + 1;
        }
        break;
      }
    }
  }
  *result_count = alice_count;
  return result;
}
