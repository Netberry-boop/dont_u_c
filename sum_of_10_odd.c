/* sum_of_10_odd */

#include<stdio.h> 
int is_odd(int num){
    if(num%2!=0){
        return 1;
    }
    return 0;
}
int main(){
    // sum of first 10 odd natural numbers
    int count = 0 ; 
    int num = 1 ;
    int sum = 0 ;
    while(count<10){ //0-9 is 10 iterations
        if(is_odd(num)){
            sum+=num;
            ++count; //incrementing count if new odd is added to sum
        }
        ++num;
    }
    printf("The sum of first 10 odd natural numbers is : %d\n",sum);
    return 0;
}