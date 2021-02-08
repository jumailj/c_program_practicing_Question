/* Check if a key is present in every segment of size k in an array 

 Given an array arr[] and size of array is n and one another key x,
 and give you a segment size k. The task is to find that the key x
  present in every segment of size k in arr[].
*/

#include <stdio.h>
#include <stdlib.h>
int main() {

    int arr[]  = {1,2,10,3,2,10,3,2,5,2,3,4};
    size_t arr_size= (sizeof(arr))/4;
    int Correct = 0;

    int key = 5;
    int x = 10;

    int valueFoundInEachKey = arr_size/key;

    int *FoundOrNot = malloc(valueFoundInEachKey*sizeof(int));  
    int v= 0;

    for(int i = 0; i < valueFoundInEachKey; i++) {

        for(int j = 0; j < key; j++) {
            if ( arr[v] == x) {
                *(FoundOrNot+i) = 1; 
                break;
            } else {
                *(FoundOrNot+i) = 0;
            }
            v++;
        }
    }

    for (int i = 0; i < valueFoundInEachKey; i++) {

        if ( FoundOrNot[i] == 1) {
            Correct++;
        }
    }
    if ( Correct == valueFoundInEachKey ) {
        printf("yes");
    } else {
        printf("no");
    }
    
    return 0;
}
