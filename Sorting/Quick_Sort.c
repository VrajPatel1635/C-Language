#include<stdio.h>

void printArray (int* A, int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int partition(int A[], int low, int high) {
    int pivot = A[low];//pivot = 2
    int i = low + 1;// i = 4
    int j = high; // j = 6
    int temp;

    do{
    while(A[i] <= pivot) {
        i++;
    }
    while(A[j] > pivot) {
        j--;
    }

    if(i < j) {
        temp = A[i];
        A[i] = A[j];
        A[j] = temp; 
    }
    } while(i < j);

    //swap A[low] and A[j]
    temp = A[low];
    A[low] = A[j];
    A[j] = temp; 

    return j;
}

void Quick_Sort(int A[], int low, int high) {
    int partitionIndex; // Index of pivet after partition
    if(low < high) {
    partitionIndex = partition(A, low, high);
    printArray(A,6);
    Quick_Sort(A, low, partitionIndex-1); // sort left subArray
    Quick_Sort(A, partitionIndex+1, high); // sort right subArray
    }
        

}

int main() {
    int A[] = {25,10,30,15,20,28};
    int n = sizeof(A)/sizeof(int);
    printArray(A,n);
    Quick_Sort(A, 0, n-1);
    printArray(A,n);
    return 0;
}