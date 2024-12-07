
void print_perm(int* f, int l) {
	for (int i = 0; i < l; i++)  {
        if (i % 16 == 0 ) printf("\n");
        printf("%03d ", f[i]);
        
    }
    printf("\n");
}
void print_matrix(int X[S][S][S]) {
    for (int s = 0; s < S; s++) {
        for (int r = 0; r < S; r++) {
            for (int c = 0; c < S; c++) {
                cursor_to(1+ r, 1+ 14*s + 2*c);
                switch (X[s][r][c]) {
                    case 0 : rgb(255,255,255);printf("O ");break;
                    case 1 : rgb(255,255,255);printf("| ");break;
                    case 2 : rgb(255,255,255);printf("2 ");break;
                    case 3 : rgb(255,255,255);printf("3 ");break;
                    case 4 : rgb(255,255,255);printf("4 ");break;
                    case 5 : rgb(255,255,255);printf("5 ");break;
                    case 6 : rgb(255,255,255);printf("6 ");break;
                    case 7 : rgb(255,255,255);printf("7 ");break;
                    case 8 : rgb(255,255,255);printf("8 ");break;
                    case 9 : rgb(255,255,255);printf("9 ");break;
                    default : printf("? ");break;
                }
            }
        }
    }
}

int h_dist(int X[S][S][S], int Y[S][S][S]) {
    int e = 0;
    for (int s = 0; s < S; s++) for (int i = 0; i < S; i++) for (int j = 0; j < S; j++) if (X[s][i][j] != Y[s][i][j]) e++;
    return e; 
}
