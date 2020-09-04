#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <sys/time.h>
#include "trab.h"

int *setArrayElements(int length);

<<<<<<< HEAD
int *growingArray(int length);

int *decreasingArray(int length);

double tempo();

=======
>>>>>>> ba99f134125429fb68dcba60cdb2188d397a6a99
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int opcaosort, len, continua;
	int *arrayToSort;
<<<<<<< HEAD
	double tempoAntes, tempoDepois;

    printf("Organiza��o de vetores usando sorts - DEFININDO A COMPLEXIDADE\n\n\n"
=======
    do{
    printf("Organização de vetores usando sorts - DEFININDO A COMPLEXIDADE\n\n\n"
>>>>>>> ba99f134125429fb68dcba60cdb2188d397a6a99
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
            len = submenu();
<<<<<<< HEAD
						arrayToSort = setArrayElements(len);
            tempoAntes = tempo();
            printf("Tempo antes: %lf", tempoAntes);
=======
            arrayToSort = setArrayElements(len);
>>>>>>> ba99f134125429fb68dcba60cdb2188d397a6a99
            bubbleSort(arrayToSort, len);
            tempoDepois = tempo();
            printf("Tempo depois: %lf", tempoDepois);
            printf("Tempo gasto: %f\n", tempoDepois - tempoAntes);
            printf("Com Bubble Sort\n");
            exibirOrdenado(arrayToSort, len);
            free(arrayToSort);
            printf("Continua: ");
            scanf("%d", &continua);
            break;
        case 9:
            len = submenu();
            arrayToSort = setArrayElements(len);
<<<<<<< HEAD

=======
>>>>>>> ba99f134125429fb68dcba60cdb2188d397a6a99
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



double tempo(){
    struct timeval tv; //tv de timeval
    gettimeofday(&tv,NULL);
    return tv.tv_sec + tv.tv_usec/1000000;
}

