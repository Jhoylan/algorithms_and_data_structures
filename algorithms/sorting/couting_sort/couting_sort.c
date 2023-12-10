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

        printf("\n");

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

        int sorted_arr[5];

        int key;

        for(int m = 0; m < max + 1; m++){
                if(m < 5){
                        sorted_arr[m] = 0;
                }

                count[m] = 0;
        }

        for(int i = 0; i < 5; i++){
                count[arr[i]] = count[arr[i]] + 1; 
        }
       
        for(int j = 1; j < max + 1; j++){
                count[j] = count[j] + count[j - 1];
        }

        for(int k = 4; k >= 0; k--){
                count[arr[k]] = count[arr[k]] - 1;
                
                sorted_arr[count[arr[k]]] = arr[k];
        }
        
        show(sorted_arr);    
}

int main(){
        int arr[5], max;

        max = register_array(arr);

        printf("The original array is: \n");

        show(arr);

        printf("The sorted array is: \n");

        sort(arr, max);

        return 0;
}
