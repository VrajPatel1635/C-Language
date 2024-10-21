#include<stdio.h>

void printArray(int* A, int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void merge(int A[], int mid, int low, int high) {
    int i, j, k, B[100];
    i = low;
    j = mid + 1; 
    k = low;
    
    while(i <= mid && j <= high) {
        if(A[i] < A[j]) {
            B[k] = A[i];
            i++;
            k++;
        } else{
            B[k] = A[j];
            j++;
            k++;
        }
    }   

    while(i <= mid) {
        B[k] = A[i];
        k++;
        i++;
    }
    while(j <= high) {
        B[k] = A[j];
        k++;
        j++;
    }

    for(int i = low; i <= high; i++) {
        A[i] = B[i];
    }
}

void Merge_Sort(int A[], int low, int high) {
    int mid;
    if(low < high) {
        mid = (low + high)/2;
        Merge_Sort(A, low, mid);
        Merge_Sort(A, mid+1, high);
        merge(A, mid, low, high);
    }
}

int main() {
    int A[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int n = sizeof(A)/sizeof(int);
    printArray(A, n);
    Merge_Sort(A, 0, n-1);
    printArray(A, n);
    return 0;
}