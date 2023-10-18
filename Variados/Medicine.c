#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int a;
    int b;
} Medicine;

// Função de comparação para ordenar os medicamentos com base nos dias restantes
int compare(const void *a, const void *b) {
    const Medicine *med1 = (const Medicine *)a;
    const Medicine *med2 = (const Medicine *)b;
    return med1->a - med2->a;
}

int main(void) {
    int types, pills, minIndex = 0, dia = 1;
    long long sum = 0;
    scanf("%d %d", &types, &pills);

    Medicine *medicine = malloc(types * sizeof(Medicine));

    for (int i = 0; i < types; i++) {
        scanf("%d %d", &medicine[i].a, &medicine[i].b);
        sum += medicine[i].b;
    }

    // Ordenar a matriz de medicamentos com base nos dias restantes
    qsort(medicine, types, sizeof(Medicine), compare);

    for (int i = 0; i < types; i++) {
        if (sum <= pills) {
            printf("%d\n", dia);
            break;
        }

        // Atribuir aos dias o equivalente daquele remédio depois removê-lo
        dia = medicine[minIndex].a + 1;
        sum -= medicine[minIndex].b;
        medicine[minIndex].a = 0;
        minIndex = 0;
    }

    free(medicine);

    return 0;
}
