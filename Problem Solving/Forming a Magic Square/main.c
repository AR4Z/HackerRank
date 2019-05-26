int formingMagicSquare(int s_rows, int s_columns, int** s) {
    int costo = -1;
    int cambios = 0;
    int solutions [8][3][3] = {
        {{8, 1, 6}, {3, 5, 7}, {4, 9, 2}},
        {{8, 3, 4}, {1, 5, 9}, {6, 7, 2}},
        {{4, 3, 8}, {9, 5, 1}, {2, 7, 6}},
        {{4, 9, 2}, {3, 5, 7}, {8, 1, 6}},
        {{2, 9, 4}, {7, 5, 3}, {6, 1, 8}},
        {{2, 7, 6}, {9, 5, 1}, {4, 3, 8}},
        {{6, 7, 2}, {1, 5, 9}, {8, 3, 4}},
        {{6, 1, 8}, {7, 5, 3}, {2, 9, 4}}
    };
    for(int i_solution = 0; i_solution < 8; i_solution++){
      for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cambios += abs(solutions[i_solution][i][j] - s[i][j]);
        }
      }
      if (costo == -1 || cambios < costo){
          costo = cambios;
      }
      cambios =0;
    }

    return costo;
    
}
