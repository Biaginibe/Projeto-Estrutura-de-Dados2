#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <sys/time.h>
#include "trab.h"

int *setArrayElements(int length);

int *growingArray(int length);

int *decreasingArray(int length);

double tempo();

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int opcaosort, len;
	int *arrayToSort;
	double tempoAntes, tempoDepois;

    printf("Organiza��o de vetores usando sorts - DEFININDO A COMPLEXIDADE\n\n\n"
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
            "Sua op��o: ");
            scanf("%d", &opcaosort);

    switch (opcaosort){

            {
        case 1:
            len = submenu();
            arrayToSort = setArrayElements(len);
            mergeSort(arrayToSort, 0, len-1);
            printf("Com Merge Sort\n");
            printArray(arrayToSort, len);
            break;
        case 2:
            len = submenu();
			arrayToSort = setArrayElements(len);
            bead_sort(arrayToSort, len);
            printf("Com Bead Sort\n");
            printArray(arrayToSort, len);

            break;
        case 3:
            len = submenu();
						arrayToSort = setArrayElements(len);
            countingSort(arrayToSort, len);
            break;
        case 4:
            len = submenu();
						arrayToSort = setArrayElements(len);
            quick_sort(arrayToSort, 0, len);
            printf("Com Quick Sort\n");
            exibirOrdenado(arrayToSort, len);
            break;
        case 5:
            len = submenu();
			arrayToSort = setArrayElements(len);
            insertion_Sort(arrayToSort,0 , len);
            printf("Com Insertion Sort\n");
            exibirOrdenado(arrayToSort, len);
            break;
        case 6:
            len = submenu();
						arrayToSort = setArrayElements(len);
            timSort(arrayToSort, len);
            printf("Com Tim Sort\n");
            exibirOrdenado(arrayToSort, len);
            break;
        case 7:
            len = submenu();
						arrayToSort = setArrayElements(len);

            selectionSort(arrayToSort, len);
            printf("Com Selection Sort\n");
            exibirOrdenado(arrayToSort, len);
            break;
        case 8:
            len = submenu();
						arrayToSort = setArrayElements(len);
            tempoAntes = tempo();
            printf("Tempo antes: %lf", tempoAntes);
            bubbleSort(arrayToSort, len);
            tempoDepois = tempo();
            printf("Tempo depois: %lf", tempoDepois);
            printf("Tempo gasto: %f\n", tempoDepois - tempoAntes);
            printf("Com Bubble Sort\n");
            exibirOrdenado(arrayToSort, len);
            break;
        case 9:
            len = submenu();
            arrayToSort = setArrayElements(len);

            radixsort(arrayToSort, len);
            printf("Com Radix Sort\n");
            exibirOrdenado(arrayToSort, len);
            break;
        case 10:
            len = submenu();
						arrayToSort = setArrayElements(len);
            printf("Com Heap Sort\n");
            HeapSort(arrayToSort, len);
            exibirOrdenado(arrayToSort, len);
            break;
        case 11:
            len = submenu();
						arrayToSort = setArrayElements(len);

            shellSort(arrayToSort, len);
            printf("Com Shell Sort\n");
            exibirOrdenado(arrayToSort, len);
            break;

        default:
            break;
        }
}
}

int *setArrayElements(int length) {
	int *numbersArray = (int*) malloc(length * sizeof(int));

	if (!numbersArray) return NULL;

	srand(time(0));
    int i;
	for (i = 0; i < length; i++) {
		numbersArray[i] = rand() % 10 + 1;
		printf("%d\n", numbersArray[i]);
	}

    return numbersArray; /*retorna endere�o do array*/
}

int *growingArray(int length){
    int *numbersArray = (int*) malloc(length * sizeof(int));

    for(int i = 0; i<length; i++){
        numbersArray[i] = i;
        printf("%d\n", numbersArray[i]);
    }

    return numbersArray;

}

int *decreasingArray(int length){
    int *numbersArray = (int*) malloc(length * sizeof(int));

    for(int i = length; i >=0 ; i--){
        numbersArray[i] = i;
        printf("%d\n", numbersArray[i]);
    }
    return numbersArray;
}

double tempo(){
    struct timeval tv; //tv de timeval
    gettimeofday(&tv,NULL);
    return tv.tv_sec + tv.tv_usec/1000000;
}

