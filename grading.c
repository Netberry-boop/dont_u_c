/*grading.c*/

#include<stdio.h> 

int main() {
    char dep_check;
    printf("Are you a student of computer science ?(Y/N) : ");
    scanf("%c",&dep_check);
    if(dep_check == 'Y'||dep_check == 'y'){
        int marks;
        printf("Please enter your marks : ");
        scanf("%d",&marks);
        if(marks > 90){
            printf("your grade is : %c\n",'A');
        }
        else if(marks>=70 && marks<=90){
            printf("your grade is : %c\n",'B');
        }
        else if(marks>=50 && marks<=69){
            printf("your grade is : %c\n",'C');
        }
        else if(marks < 50){
            printf("your grade is : %c\n",'D');
        }
        else{
            printf("Invalid entry");
            return 0;
        }
    }
    else if(dep_check == 'N'||dep_check == 'n'){
        printf("sorry! this grading system is only for computer science department\n");
    }
    else{
        printf("Invalid choice!\n");
    }
    return 0;
}