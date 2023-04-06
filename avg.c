//  main.c
//  average
//  Created by Arlind Alliu on 4/6/23.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

double average(void){
    
    
    double avg, sum=0, cnt=0;
    printf("Input the numbers that you want to find the average.\n");
    printf("Input 'x' to indicate the end of the numbers.\n");
    float number;
    char c;
    
    while (1) {
        if (scanf("%f%c", &number, &c)!=2 || c=='x') {
            break;
        }
        sum+=number;
        cnt++;
    }
    avg=sum/cnt;
    
    return avg;
}


int main(void){
    char operator;
    printf("Inout operator. \n");
    scanf("%c",&operator);
    if (operator=='a'){
        printf("The average of the numbers is: %.3f \n",average());
    }
return 0;
}
