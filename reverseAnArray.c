#include <stdio.h>
#include <stdlib.h>

int main() {

int arr[] = {23,44,65,76,34};
int arrSize = (sizeof(arr)/4);


int* tempArr= malloc(arrSize*sizeof(int));

int n = 0;
for(int i = (arrSize-1); i >=0; i--) {
    tempArr[n] = arr[i];
    n++;
}

for(int i = 0; i< arrSize;i++){
    arr[i] = tempArr[i];
    printf("ARR [%d] = %d\n", i, arr[i]);
}

free(tempArr);

return 0;
}
