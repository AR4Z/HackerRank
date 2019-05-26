int pageCount(int n, int p) {
    /*
     * Write your code here.
     */
     int sum1 = 0;
     int sum2 = 0;
     
     for(int page = 1;page < p; page+=2) {
         sum1++;
     }

     for(int page = (n % 2) == 0 ? n: n-1; page != p && page > p; page -= 2){
         sum2++;
     }

     return sum1 < sum2 ? sum1 : sum2;
}
