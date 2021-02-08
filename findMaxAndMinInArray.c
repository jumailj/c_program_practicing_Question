/*Program to find the minimum (or maximum) element of an array*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int nSize = 0;
    printf("input arr Lenght: ");
    scanf("%d", &nSize);

    int *arr = malloc(nSize*(sizeof(int)));

    for(int i = 0; i < nSize; i++) {
        scanf("%d", &arr[i]);
    }


    int n;

    for(int i = 0; i < nSize; i++){
        for(int j = i +1; j < nSize; j++) {

            if ( arr[i] < arr[j]) {

                n = arr[i];
                arr[i] = arr[j];
                arr[j] = n;
            }
        }
    }

   printf("max value: %d\nmax value %d", *(arr), *(arr-3));



 printf("%d", *(arr+(nSize-1)));
    return 0;
}
