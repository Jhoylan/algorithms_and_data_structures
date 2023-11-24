#include <stdio.h>

int register_array(int arr[5]){
        int count = 0, max = 0;
        
        while(count < 5){
                printf("Type a number\n");

                scanf("%i", &arr[count]);

                if(arr[count] > max){
                        max = arr[count];
                }

                count++;
        }

        return max;
}

void show(int arr[5]){
        for(int i = 0; i < 5; i++){
                printf("%d ", arr[i]);
        }

        printf("\n");
}

void sort(int arr[5], int max){
        int count[max + 1];
        
        for(int i = 0; i < 5; i++){
                count[arr[]]
        }
}

int main(){
        int arr[5], max;

        max = register_array(arr);

        printf("The original array is: \n");

        show(arr);

        sort(arr, max);

        return 0;
}
