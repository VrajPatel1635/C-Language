#include<stdio.h>
#include<stdbool.h>
int main() {
    int arr[8];
    for(int i = 0; i < 8; i++) {
        printf("%d element is : ", i);
        scanf("%d", &arr[i]);
    }
    int x = 4, idx = -1;
    bool flag = false;
    for(int i = 0; i < 8; i++) {
        if(arr[i] == x) {
            flag = true;
            idx = i;
            break;
        }
    }
    if(flag == false) {
        printf("%d is not present in the array\n", x);
    } else {
        printf("%d is present in the array and it's index is %d\n", x, idx);

    }
    return 0;
}