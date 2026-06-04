/*grading.c*/
/* Algorithm -
1) start 
2) initialize variables
3) accept department confirmation from the user
4) if user belongs to computer science department, proceed otherwise terminate program
5) accept marks from user
6) if marks > 90 print grade A
7) if 70<=marks<=90  print grade B 
8) if 50<=marks<=69  print grade C
9) if marks<50 print grade D
10) if marks input invalid - exit
11)stop
*/

#include<stdio.h> 

int main() {
    char dep_check;
    printf("Are you a student of computer science ?(Y/N) : ");
    scanf("%c",&dep_check);
    if(dep_check == 'Y'||dep_check == 'y'){
        int marks;
        printf("Please enter your marks : ");
        scanf("%d",&marks);
        if(marks > 90){ // here the cap to marks is unspecified (Max marks is unknown)
            printf("your grade is : %c\n",'A');
        }
        else if(marks>=70 && marks<=90){
            printf("your grade is : %c\n",'B');
        }
        else if(marks>=50 && marks<=69){
            printf("your grade is : %c\n",'C');
        }
        else if(marks < 50){ // here the cap to marks is unspecified (Min marks is unknown(negative?))
            printf("your grade is : %c\n",'D');
        }
        else{
            printf("Invalid entry");
            return 0;
        }
    }
    else if(dep_check == 'N'||dep_check == 'n'){ // input from student only in the cs department 
        printf("sorry! this grading system is only for computer science department\n");
    }
    else{
        printf("Invalid choice!\n");
    }
    return 0;
}