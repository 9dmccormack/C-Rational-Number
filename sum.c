#include <stdio.h>
#include <stdlib.h>

/*
*  Create a function named sum with returns an integer
*  The function accepts an integer pointer as input.
*/

int sum(int * a, int b){
    int num=0;
    int p;
    for(p=0;p<b;p++){
        num=num + a[p];
        //new = old + stuff
    }
    return num;
}


/*
*   Use the function you made above to complete the program
*
*/

int main(){
    //an array of twenty integers
    int numbers[20];

    //filling the array
    int i;
    for(i=0;i<20;i++){
        numbers[i] = (i * i) - (4 * i);
    }
    int total = sum(numbers, 20);


    return total;
}