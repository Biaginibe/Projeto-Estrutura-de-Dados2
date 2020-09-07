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

    printf("Organiza��o de vetores usando sorts - DEFININDO A COMPLEXIDADE\n\n\n");

    do{
    printf("Organização de vetores usando sorts - DEFININDO A COMPLEXIDADE\n\n\n"
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

    switch (opcaosort){

            {
        case 1:
            len = submenu();
            arrayToSort = setArrayElements(len);
            mergeSort(arrayToSort, 0, len-1);
            printf("Com Merge Sort\n");
            printArray(arrayToSort, len);
            free(arrayToSort);
            printf("Continua: ");
            scanf("%d", &continua);
            break;
        case 2:
            len = submenu();
			arrayToSort = setArrayElements(len);
            bead_sort(arrayToSort, len);
            printf("Com Bead Sort\n");
            printArray(arrayToSort, len);
            free(arrayToSort);
            printf("Continua: ");
            scanf("%d", &continua);
            break;
        case 3:
            len = submenu();
            arrayToSort = setArrayElements(len);
            countingSort(arrayToSort, len);
            free(arrayToSort);
            printf("Continua: ");
            scanf("%d", &continua);
            break;
        case 4:
            len = submenu();
            arrayToSort = setArrayElements(len);
            quick_sort(arrayToSort, 0, len);
            printf("Com Quick Sort\n");
            exibirOrdenado(arrayToSort, len);
            free(arrayToSort);
            printf("Continua: ");
            scanf("%d", &continua);
            break;
        case 5:
            len = submenu();
			arrayToSort = setArrayElements(len);
            insertion_Sort(arrayToSort,0 , len);
            printf("Com Insertion Sort\n");
            exibirOrdenado(arrayToSort, len);
            free(arrayToSort);
            printf("Continua: ");
            scanf("%d", &continua);
            break;
        case 6:
            len = submenu();
            arrayToSort = setArrayElements(len);
            timSort(arrayToSort, len);
            printf("Com Tim Sort\n");
            exibirOrdenado(arrayToSort, len);
            free(arrayToSort);
            printf("Continua: ");
            scanf("%d", &continua);
            break;
        case 7:
            len = submenu();
            arrayToSort = setArrayElements(len);
            selectionSort(arrayToSort, len);
            printf("Com Selection Sort\n");
            exibirOrdenado(arrayToSort, len);
            free(arrayToSort);
            printf("Continua: ");
            scanf("%d", &continua);
            break;
        case 8:
            /*aqui estão os testes do diego aparentemente*/
            len = submenu();

            /*arrayToSort = setArrayElements(len);
            tempoAntes = ftempoAntes();
            printf("Tempo antes: %lf\n", tempoAntes);*/

            arrayToSort = setArrayElements(len);
            bubbleSort(arrayToSort, len);
            /*tempoDepois = ftempoDepois();
            printf("Tempo depois: %lf\n", tempoDepois);
            printf("Tempo gasto: %f\n", tempoDepois - tempoAntes);*/
            printf("Com Bubble Sort\n");
            exibirOrdenado(arrayToSort, len);
            free(arrayToSort);
            printf("Continua: ");
            scanf("%d", &continua);
            break;
        case 9:
            len = submenu();
            arrayToSort = setArrayElements(len);

            radixsort(arrayToSort, len);
            printf("Com Radix Sort\n");
            exibirOrdenado(arrayToSort, len);
            free(arrayToSort);
            printf("Continua: ");
            scanf("%d", &continua);
            break;
        case 10:
            len = submenu();
            arrayToSort = setArrayElements(len);
            printf("Com Heap Sort\n");
            HeapSort(arrayToSort, len);
            exibirOrdenado(arrayToSort, len);
            free(arrayToSort);
            printf("Continua: ");
            scanf("%d", &continua);
            break;
        case 11:
            len = submenu();
            arrayToSort = setArrayElements(len);
            shellSort(arrayToSort, len);
            printf("Com Shell Sort\n");
            exibirOrdenado(arrayToSort, len);
            free(arrayToSort);
            printf("Continua: ");
            scanf("%d", &continua);
            break;

        default:
            break;
        }
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

