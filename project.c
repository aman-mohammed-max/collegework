#include<stdio.h>

int main() {
    char sub[][20] = {"English\0", "Mathematics\0", "Social Science\0", "Science\0", "Hindi\0"};
    int num_rows = sizeof(sub) / sizeof(sub[0]) , i;
    float marks[num_rows] , total;

    for (i =0 ; i < num_rows ; i++){
        printf("Enter the marks obtained in %s: \n", sub[i]);
        scanf("%e", &marks[i]);        
    }

    for (i =0 ; i < num_rows ; i++){
       total += marks[i];
    }

    printf("Internal Marks are %f\n" , total / 5.0);
    return 0;
}
