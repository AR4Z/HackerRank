char *dayOfProgrammer(int year) {
  static char dest[11];
  if (year == 1918) {
    static char s[] = "26.09.1918";
    return s;
  } else if (((year <= 1917 || year % 100 !=0) && year % 4 == 0) || year % 400 == 0) {
    static char s[] = "12.09.";

    sprintf(dest, "%s%d", s, year);
  } else {
    static char s[] = "13.09.";
    sprintf(dest, "%s%d", s, year);
  }
  return dest;
}
