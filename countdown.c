/* countdown.c */

#include<stdio.h>
#include<unistd.h>

int main(){
// application of sleep() and fflush() functions countdown of [10,9,8,7,6,5,4,3,2,1,0]
    int count_max; 
    printf("enter number from where the countdown should begin : ");    
    scanf("%d",&count_max);
    printf("countdown begins ...");
    sleep(1);
    fflush(stdout);
    printf("\n");
    while(count_max>=0){
        sleep(1);
        printf("%d\n", count_max--);
    }
    sleep(1);
    return 0;
}
