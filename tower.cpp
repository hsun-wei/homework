#include <stdio.h>

void tower(int n, char A, char B, char C, int& steps) {
    if (n == 1) {   
        printf("將盤子從 %c 移動到 %c\n", A, C);
        steps++;
    }
    else {
        tower(n - 1, A, C, B, steps);
        printf("將盤子從 %c 移動到 %c\n", A, C);
        steps++;
        tower(n - 1, B, A, C, steps);
    }
}

int main() {
    int n;  
    printf("請輸入盤數：");
    scanf_s("%d", &n);
    int steps = 0; 
    tower(n, 'A', 'B', 'C', steps);
    printf("總步數：%d\n", steps); 
    return 0;
}