#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        int square = i * i;
        int cube = square * i;

        // Primeira linha
        printf("%d %d %d\n", i, square, cube);
        // Segunda linha
        printf("%d %d %d\n", i, square + 1, cube + 1);
    }

    return 0;
}
