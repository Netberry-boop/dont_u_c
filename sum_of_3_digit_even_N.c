/* sum_of_3_digit_even_N.c */
/*Algorithm 
1) start 
2) intialize variables
3) traverse natural numbers
4) if a number is a 3-digit number and is even, add it to sum 
5) continue until all 3-digit numbers have been taken into consideration 
6) print value of sum
7) stop
*/

#include<stdio.h>
int num_digit(int num){
    int count = 0;
    while(num>0){
        num=num/10;
        ++count;
    }
    return count;
}
int is_even(int num){
    if(num%2==0){
        return 1;
    }
    return 0;
} 

int main(){
    int num = 1; // start of natural numbers 
    int sum = 0;
    while(num_digit(num)>0 && num_digit(num)<4){
        if(num_digit(num)==3&&is_even(num)){
            sum+=num;
        }
        ++num;
    }
    printf("Sum of all 3-digit even natural number is : %d\n",sum);
    return 0;
}