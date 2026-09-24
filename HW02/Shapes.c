#include <stdio.h>

//Creats a right side up pyramid
void CreatePyramid(int x){

    for(int i = 1; i <= x; i++){
        //first for loop sets the height
        //gap variable subtracts the current iteration from the height to determine the number of gap spaces needed
        int gap = x-i;
        for(int j = 0; j <= gap; j++){
            //second loop fills gaps using the variable
            printf(" ");
        }
        for(int j = 0; j < i+(i-1); j++){
            //third loop prints the stars. If we consider it mirrored, by adding i-1 to i, we can get the number of stars relatively easy
            printf("*");

        }

        printf("\n");

    }

}

// creates an upside down pyramid
void CreatePyramidReverse(int x){

        for(int i = x; i >= 1; i--){
        //Like the other, this one sets the height. It does so from the top down however
            for(int j = x; j >= i; j--){
                //sets gaps
                printf(" ");
            }
            for(int j = 0; j < i+(i-1); j++){
                //same as other
                printf("*");
            }
            printf("\n");
        }
}

void gradeHistogram(int arr[], int length){


    for(int i = 0; i < length-1; i++){
        //iterates through every item
        int grade = arr[i];

        //else if chain, could also use switch statement but idk the syntax for C
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
