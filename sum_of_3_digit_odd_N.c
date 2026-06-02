/* sum_of_3_digit_odd_N.c */

#include<stdio.h>
int num_digit(int num){
    int count = 0;
    while(num>0){
        num=num/10;
        ++count;
    }
    return count;
}
int is_odd(int num){
    if(num%2!=0){
        return 1;
    }
    return 0;
}

int is_multiple_of_x(int num, int factor){
    if(num%factor==0){
        return 1;
    }
    return 0;
}


int main(){
    int num = 1; // start of natural numbers 
    int sum = 0;
    while(num_digit(num)>0 && num_digit(num)<4){
        if(num_digit(num)==3&&is_odd(num)&&is_multiple_of_x(num,5)){
            sum+=num;
        }
        ++num;
    }
    printf("Sum of all 3-digit odd natural number which are also multiple of 5 is : %d\n",sum);
    return 0;
}