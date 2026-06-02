/* disc_calc.c */

#include<stdio.h> 

int main(){
    float tot_cost;
    printf("enter the total amount of the bill : ");
    scanf("%f",&tot_cost);
    if(tot_cost>0&&tot_cost<2000){
        tot_cost-=tot_cost*0.05;
    }
    else if(tot_cost>=2001&&tot_cost<=5000){
        tot_cost-=tot_cost*0.25;
    }
    else if(tot_cost>=5001&&tot_cost<=10000){
        tot_cost-=tot_cost*0.35;
    }
    else if(tot_cost>10000){
        tot_cost-=tot_cost*0.50;
    }
    else{
        printf("Bill amount is not suitable for discounts/ invalid input\n");
        // cases missed due to improper problem statement - 
        //(2000,2000-2000.9999,5000.1-5000.9999)
    }
    printf("Your total bill after discount is : %.2f\n",tot_cost);
    return 0 ; 
}