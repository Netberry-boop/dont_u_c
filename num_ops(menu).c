#include<stdio.h>

void ops(int num1, char choice){
    int num = num1;
    int sum = 0 ;
    int rem ;
    int rev_num = 0; 
    if(choice == 'a'){
        while(num>0){
            rem = num%10;
            sum += rem;
            num = num/10;
        }
        printf("the sum of all the digits of the number %d is %d\n",num1,sum);
    }
    else if(choice == 'b'){
        while(num>0){
            rem = num%10;
            if(num%2==0) {
            sum += rem;}
            num = num/10;
        }
        printf("the sum of all the digits of the number %d that are even is %d\n",num1,sum);
    }
    else if(choice == 'c'){
        while(num>0){
            rem = num%10;
            if(num%2!=0){
            sum += rem;}
            num = num/10;
        }
        printf("the sum of all the digits of the number %d that are odd is %d\n",num1,sum);
    }
    else if(choice == 'd'){
        while (num>0){
        
        
        rem = num%10;
        rev_num = (rev_num*10)+rem;
        num = num / 10;
    }
    printf("the reverse of number %d is %d\n",num1,rev_num);
}   
else{
    printf("invalid choice !! -- exiting program \n");
}
}

int main(){
    int num;
    char choice;
    printf("Enter a number :");
    scanf("%d",&num);
    
    printf("a)display the sum of the digits of the number :\n");
    printf("b)display the sum of odd digits of the number :\n");
    printf("c)display the sum of even digits of the number :\n");
    printf("d)display the reverse digits of the number :\n");
    printf("operations : select your option [a-d] : ");
    scanf(" %c",&choice);
    ops(num,choice);
    
    
    return 0 ;
    
}