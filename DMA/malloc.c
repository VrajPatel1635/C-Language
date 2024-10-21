#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *ptr;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    // Allocate memory for 'n'
    // elements using malloc()
    ptr = (int *)malloc(n*sizeof(int));

    if(ptr == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    printf("Enter the elements : ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &ptr[i]);

    }
    printf("The elements you entered are : ");
    for(int i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }
    free(ptr);
    return 0;
}