#include <stdio.h>

void CreatePyramid(int x){

    for(int i = 1; i <= x; i++){
        int gap = x-i;
        for(int j = 0; j <= gap; j++){
            printf(" ");
        }
        for(int j = 0; j < i+(i-1); j++){
            printf("*");

        }

        printf("\n");

    }

}

void CreatePyramidReverse(int x){

        for(int i = x; i >= 1; i--){
            for(int j = x; j >= i; j--){
                printf(" ");
            }
            for(int j = 0; j < i+(i-1); j++){
                printf("*");
            }
            printf("\n");
        }
}

void gradeHistogram(int arr[], int length){


    for(int i = 0; i < length-1; i++){

        int grade = arr[i];

        if (grade < 60){
            printf("**\n");
        } else if(grade < 70){
            printf("****\n");
        } else if(grade < 80){
            printf("******\n");
        } else if(grade < 90){
            printf("********\n");
        } else {
                printf("**********\n");
        }     
        }
}



int main(){
    int arr[6] = {90, 64, 50, 72, 85, 95};
    CreatePyramidReverse(7);
    CreatePyramid(7);
    printf("\n");
    gradeHistogram(arr, 6);
}
