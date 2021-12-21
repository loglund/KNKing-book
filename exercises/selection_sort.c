#include <stdio.h>
#include <string.h>

int* selection_sort(int arr[], int len){
    if (len <= 1) return arr;
    int temp, max_candidate = 0, max_value = 0;
    for (int i = 0; i < len; i++) {
        if (max_value < arr[i]) {
            max_value = arr[i];
            max_candidate = i;
        }
    }
    temp = arr[len-1];
    arr[len-1] = max_value;
    arr[max_candidate] = temp;
    return selection_sort(arr, len-1);
}

int main(void){
    char input[10];
    int len;
    printf("Enter a list of at most 10 integers: ");
    scanf("%s", input);
    len = strlen(input);
    int arr[len];
    for (int i = 0; i < len; i++) {
        arr[i] = input[i] - '0';
    }
    selection_sort(arr, len);
    printf("The sorted list is: ");
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
