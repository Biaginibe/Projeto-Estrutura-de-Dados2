#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <sys/time.h>
#include "trab.h"


double ftempoAntes();
double ftempoDepois();


int main()
{
    setlocale(LC_ALL, "Portuguese");
    int opcaosort, len, continua;
	int *arrayToSort;
	double tempoAntes, tempoDepois;
	double tempos[10];
	int flag = 0;
	double media = 0;
do{
    printf("Ordenação de vetores usando sorts - DEFININDO A COMPLEXIDADE\n\n\n"
            "Escolha o sort que deseja usar para organizar seu vetor:\n"
            "1- Merge Sort\n"
            "2- Bead Sort\n"
            "3- Counting Sort\n"
            "4- Quick Sort\n"
            "5- Insertion Sort\n"
            "6- Tim Sort\n"
            "7- Selection Sort\n"
            "8- Bubble Sort\n"
            "9- Radix Sort\n"
            "10- Heap Sort\n"
            "11- Shell Sort\n"
            "Sua opção: ");
            scanf("%d", &opcaosort);

    switch (opcaosort) {
        case 1:
            len = submenu();
            printf("Ordendando com Merge Sort...\n");

            while (flag < 3) {
                if (flag == 0) printf("Etapa Atual: vetor crescente\n");
                if (flag == 1) printf("Etapa Atual: vetor decrescente\n");
                if (flag == 2) printf("Etapa Atual: vetor aleatorio\n");

                int i;
                for (i = 0; i < 10; i++) {
                    if (flag == 0) arrayToSort = growingArray(len);
                    if (flag == 1) arrayToSort = decreasingArray(len);
                    if (flag == 2) arrayToSort = setArrayElements(len);

                    tempoAntes = ftempoAntes();
                    mergeSort(arrayToSort, 0, len-1);
                    tempoDepois = ftempoDepois();

                    free(arrayToSort);

                    tempos[i] = tempoDepois - tempoAntes;
                    media+= tempos[i];
                }
                printf("Tempo médio para %s com %d elementos: %lf\n", flag == 0 ? "array crescente" : flag == 1 ? "array decrescente" : "array aleatorio", len, media / 10);
                flag++;
            }

            scanf("%d", &continua);
            break;
        case 2:
            len = submenu();
            printf("Ordendando com Bead Sort...\n");

            while (flag < 3) {
                if (flag == 0) printf("Etapa Atual: vetor crescente\n");
                if (flag == 1) printf("Etapa Atual: vetor decrescente\n");
                if (flag == 2) printf("Etapa Atual: vetor aleatorio\n");
                int i;
                for (i = 0; i < 10; i++) {
                    if (flag == 0) arrayToSort = growingArray(len);
                    if (flag == 1) arrayToSort = decreasingArray(len);
                    if (flag == 2) arrayToSort = setArrayElements(len);

                    tempoAntes = ftempoAntes();
                    bead_sort(arrayToSort, len);
                    tempoDepois = ftempoDepois();

                    free(arrayToSort);

                    tempos[i] = tempoDepois - tempoAntes;
                    media+= tempos[i];
                }
                printf("Tempo médio para %s com %d elementos: %lf\n", flag == 0 ? "array crescente" : flag == 1 ? "array decrescente" : "array aleatorio", len, media / 10);
                flag++;
            }
            scanf("%d", &continua);
            break;
        case 3:
            len = submenu();
            printf("Ordendando com Counting Sort...\n");

            while (flag < 3) {
                if (flag == 0) printf("Etapa Atual: vetor crescente\n");
                if (flag == 1) printf("Etapa Atual: vetor decrescente\n");
                if (flag == 2) printf("Etapa Atual: vetor aleatorio\n");
                int i;
                for (i = 0; i < 10; i++) {
                    if (flag == 0) arrayToSort = growingArray(len);
                    if (flag == 1) arrayToSort = decreasingArray(len);
                    if (flag == 2) arrayToSort = setArrayElements(len);

                    tempoAntes = ftempoAntes();
                    countingSort(arrayToSort, len);
                    tempoDepois = ftempoDepois();

                    free(arrayToSort);

                    tempos[i] = tempoDepois - tempoAntes;
                    media+= tempos[i];
                }
                printf("Tempo médio para %s com %d elementos: %lf\n", flag == 0 ? "array crescente" : flag == 1 ? "array decrescente" : "array aleatorio", len, media / 10);
                flag++;
            }
            break;
        case 4:
            len = submenu();
            printf("Ordendando com Quick Sort...\n");

            while (flag < 3) {
                if (flag == 0) printf("Etapa Atual: vetor crescente\n");
                if (flag == 1) printf("Etapa Atual: vetor decrescente\n");
                if (flag == 2) printf("Etapa Atual: vetor aleatorio\n");
                int i;
                for (i = 0; i < 10; i++) {
                    if (flag == 0) arrayToSort = growingArray(len);
                    if (flag == 1) arrayToSort = decreasingArray(len);
                    if (flag == 2) arrayToSort = setArrayElements(len);

                    tempoAntes = ftempoAntes();
                    quick_sort(arrayToSort, 0, len);
                    tempoDepois = ftempoDepois();

                    free(arrayToSort);

                    tempos[i] = tempoDepois - tempoAntes;
                    media+= tempos[i];
                }
                printf("Tempo médio para %s com %d elementos: %lf\n", flag == 0 ? "array crescente" : flag == 1 ? "array decrescente" : "array aleatorio", len, media / 10);
                flag++;
            }
            break;
        case 5:
            len = submenu();
            printf("Ordendando com Insertion Sort...\n");

            while (flag < 3) {
                if (flag == 0) printf("Etapa Atual: vetor crescente\n");
                if (flag == 1) printf("Etapa Atual: vetor decrescente\n");
                if (flag == 2) printf("Etapa Atual: vetor aleatorio\n");
                int i;
                for (i = 0; i < 10; i++) {
                    if (flag == 0) arrayToSort = growingArray(len);
                    if (flag == 1) arrayToSort = decreasingArray(len);
                    if (flag == 2) arrayToSort = setArrayElements(len);

                tempoAntes = ftempoAntes();
                insertion_Sort(arrayToSort,0 , len);
                tempoDepois = ftempoDepois();

                free(arrayToSort);

                tempos[i] = tempoDepois - tempoAntes;
                media+= tempos[i];
                }
                printf("Tempo médio para %s com %d elementos: %lf\n", flag == 0 ? "array crescente" : flag == 1 ? "array decrescente" : "array aleatorio", len, media / 10);
                flag++;
            }
            break;
        case 6:
            len = submenu();
            printf("Ordendando com Tim Sort...\n");

            while (flag < 3) {
                if (flag == 0) printf("Etapa Atual: vetor crescente\n");
                if (flag == 1) printf("Etapa Atual: vetor decrescente\n");
                if (flag == 2) printf("Etapa Atual: vetor aleatorio\n");
                int i;
                for (i = 0; i < 10; i++) {
                    if (flag == 0) arrayToSort = growingArray(len);
                    if (flag == 1) arrayToSort = decreasingArray(len);
                    if (flag == 2) arrayToSort = setArrayElements(len);

                    tempoAntes = ftempoAntes();
                    timSort(arrayToSort, len);
                    tempoDepois = ftempoDepois();

                    free(arrayToSort);

                    tempos[i] = tempoDepois - tempoAntes;
                    media+= tempos[i];
                }
                printf("Tempo médio para %s com %d elementos: %lf\n", flag == 0 ? "array crescente" : flag == 1 ? "array decrescente" : "array aleatorio", len, media / 10);
                flag++;
            }
            break;
        case 7:
            len = submenu();
            printf("Ordendando com Selection Sort...\n");

            while (flag < 3) {
                if (flag == 0) printf("Etapa Atual: vetor crescente\n");
                if (flag == 1) printf("Etapa Atual: vetor decrescente\n");
                if (flag == 2) printf("Etapa Atual: vetor aleatorio\n");
                int i;
                for (i = 0; i < 10; i++) {
                    if (flag == 0) arrayToSort = growingArray(len);
                    if (flag == 1) arrayToSort = decreasingArray(len);
                    if (flag == 2) arrayToSort = setArrayElements(len);

                    tempoAntes = ftempoAntes();
                    selectionSort(arrayToSort, len);
                    tempoDepois = ftempoDepois();

                    free(arrayToSort);

                    tempos[i] = tempoDepois - tempoAntes;
                    media+= tempos[i];
                }
                printf("Tempo médio para %s %d elementos: %lf\n", flag == 0 ? "array crescente" : flag == 1 ? "array decrescente" : "array aleatorio", len, media / 10);
                flag++;
            }
            break;
        case 8:
            len = submenu();
            printf("Ordendando com Bubble Sort...\n");

            while (flag < 3) {
                if (flag == 0) printf("Etapa Atual: vetor crescente\n");
                if (flag == 1) printf("Etapa Atual: vetor decrescente\n");
                if (flag == 2) printf("Etapa Atual: vetor aleatorio\n");
                int i;
                for (i = 0; i < 10; i++) {
                    if (flag == 0) arrayToSort = growingArray(len);
                    if (flag == 1) arrayToSort = decreasingArray(len);
                    if (flag == 2) arrayToSort = setArrayElements(len);

                    tempoAntes = ftempoAntes();
                    bubbleSort(arrayToSort, len);
                    tempoDepois = ftempoDepois();

                    free(arrayToSort);

                    tempos[i] = tempoDepois - tempoAntes;
                    media+= tempos[i];
                }
                printf("Tempo médio para %s com %d elementos: %lf\n", flag == 0 ? "array crescente" : flag == 1 ? "array decrescente" : "array aleatorio", len, media / 10);
                flag++;
            }
            break;
        case 9:
            len = submenu();
            printf("Ordendando com Radix Sort...\n");

            while (flag < 3) {
                if (flag == 0) printf("Etapa Atual: vetor crescente\n");
                if (flag == 1) printf("Etapa Atual: vetor decrescente\n");
                if (flag == 2) printf("Etapa Atual: vetor aleatorio\n");
                int i;
                for (i = 0; i < 10; i++) {
                    if (flag == 0) arrayToSort = growingArray(len);
                    if (flag == 1) arrayToSort = decreasingArray(len);
                    if (flag == 2) arrayToSort = setArrayElements(len);

                    tempoAntes = ftempoAntes();
                    radixsort(arrayToSort, len);
                    tempoDepois = ftempoDepois();

                    free(arrayToSort);

                    tempos[i] = tempoDepois - tempoAntes;
                    media+= tempos[i];
                }
                printf("Tempo médio para %s com %d elementos: %lf\n", flag == 0 ? "array crescente" : flag == 1 ? "array decrescente" : "array aleatorio", len, media / 10);
                flag++;
            }
            break;
        case 10:
            len = submenu();
            printf("Ordendando com Heap Sort...\n");

            while (flag < 3) {
                if (flag == 0) printf("Etapa Atual: vetor crescente\n");
                if (flag == 1) printf("Etapa Atual: vetor decrescente\n");
                if (flag == 2) printf("Etapa Atual: vetor aleatorio\n");
                int i;
                for (i = 0; i < 10; i++) {
                    if (flag == 0) arrayToSort = growingArray(len);
                    if (flag == 1) arrayToSort = decreasingArray(len);
                    if (flag == 2) arrayToSort = setArrayElements(len);

                    tempoAntes = ftempoAntes();
                    HeapSort(arrayToSort, len);
                    tempoDepois = ftempoDepois();

                    free(arrayToSort);
                    tempos[i] = tempoDepois - tempoAntes;
                    media+= tempos[i];
                }
                printf("Tempo médio para %s com %d elementos: %lf\n", flag == 0 ? "array crescente" : flag == 1 ? "array decrescente" : "array aleatorio", len, media / 10);
                flag++;
            }
            break;
        case 11:
            len = submenu();
            printf("Ordendando Shell Sort...\n");

            while (flag < 3) {
                if (flag == 0) printf("Etapa Atual: vetor crescente\n");
                if (flag == 1) printf("Etapa Atual: vetor decrescente\n");
                if (flag == 2) printf("Etapa Atual: vetor aleatorio\n");
                int i;
                for (i = 0; i < 10; i++) {
                    if (flag == 0) arrayToSort = growingArray(len);
                    if (flag == 1) arrayToSort = decreasingArray(len);
                    if (flag == 2) arrayToSort = setArrayElements(len);

                    tempoAntes = ftempoAntes();
                    shellSort(arrayToSort, len);
                    tempoDepois = ftempoDepois();

                    free(arrayToSort);

                    tempos[i] = tempoDepois - tempoAntes;
                    media+= tempos[i];
                }
                printf("Tempo médio para %s com %d elementos: %lf\n", flag == 0 ? "array crescente" : flag == 1 ? "array decrescente" : "array aleatorio", len, media / 10);
                flag++;
            }
            break;
        default:
            break;
        }


     }while(continua == 0);
}



double ftempoAntes(){
    struct timeval Tempo_antes; /*tv de timeval*/
    gettimeofday(&Tempo_antes, NULL);
    return (Tempo_antes.tv_sec + Tempo_antes.tv_usec/1000000.0);
}

double ftempoDepois(){
    struct timeval Tempo_depois; /*tv de timeval*/
    gettimeofday(&Tempo_depois, NULL);
    return (Tempo_depois.tv_sec + Tempo_depois.tv_usec/1000000.0);
}

