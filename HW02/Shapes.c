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





int main(){

    CreatePyramid(6);
}
