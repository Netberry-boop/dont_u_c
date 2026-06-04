/* disc_calc.c */
/*Algorithm
1) start
2) initialize variables
3) accept the total bill amount from the user
4) if the bill amount is less than 2000 apply 5% dicount 
5) if 2001<=totalcost<=5000 then apply 25% discount 
6) if 5001<=totalcost<=10000 then apply 35% dicount
7) if total cost exceeds 10000 then apply 50% dicount
8) print the final payable amount
9) stop
*/

#include<stdio.h> 

int main(){
    float tot_cost;
    printf("enter the total amount of the bill : ");
    scanf("%f",&tot_cost);
    if(tot_cost>=0&&tot_cost<2000){ //edge cases noticed - no discount for total_cost 2000, as condition is not mentioned in the question
        tot_cost-=tot_cost*0.05;
    }
    else if(tot_cost>=2001&&tot_cost<=5000){//edge cases noticed - no discount for float bill values between 2000-2001(ex:2000.5)
        tot_cost-=tot_cost*0.25;
    }
    else if(tot_cost>=5001&&tot_cost<=10000){//edge cases noticed - no discount for float bill values between 5000-5001(ex:5000.5) 
        tot_cost-=tot_cost*0.35;
    }
    else if(tot_cost>10000){
        tot_cost-=tot_cost*0.50;
    }
    else{
        printf("Bill amount is not suitable for discounts/ invalid input\n"); // for edge cases 
        // cases missed due to improper problem statement - 
        //(2000,2000-2000.9999,5000.1-5000.9999)
    }
    printf("Your total bill after discount is : %.2f\n",tot_cost);
    return 0 ; 
}