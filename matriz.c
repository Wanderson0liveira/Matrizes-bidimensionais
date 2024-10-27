#include <stdio.h>

int main() {
    int w, s;
    int mat[3][3], mat1[3][3];

    // Preenchendo a matriz
    for (w = 0; w < 3; w++) {
        for (s = 0; s < 3; s++) {
            printf("Digite o elemento da linha %d, coluna %d da matriz: ", w + 1, s + 1);
            scanf("%d", &mat[w][s]);
        }
    }

    
    printf("Matriz Original:\n");
    for (w = 0; w < 3; w++) {
        for (s = 0; s < 3; s++) {
            printf("%d\t", mat[w][s]);
        }
        printf("\n");
    }

    // Multiplicando os elementos da matriz por 5
    for (w = 0; w < 3; w++) {
        for (s = 0; s < 3; s++) {
            mat1[w][s] = mat[w][s] * 5; 
        }
    }

    // Exibindo a matriz com elementos multiplicados por 5
    printf("\nMatriz com elementos multiplicados por 5:\n");
    for (w = 0; w < 3; w++) {
        for (s = 0; s < 3; s++) {
            printf("%d\t", mat1[w][s]);
        }
        printf("\n");
    }

    return 0;
}