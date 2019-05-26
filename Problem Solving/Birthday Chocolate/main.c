int birthday(int s_count, int* s, int d, int m) {
    int inicial = 0;
    int result = 0;
    int suma = 0;
    while(inicial < s_count) {
        for(int i = inicial, y = 0; i < inicial + m; y++, i++){
            suma += s[i];
        }

        if(suma ==d){
            result++;
        }
        inicial++;
        suma = 0;
    }
    return result;
}
