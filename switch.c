/* switch.c */ 

// demo if switch condition

#include<stdio.h>

int main()
{

 printf("Choose between 1. apples, 2. pears or 3. bananas\n");
 int choice;
 scanf("%d",&choice);
 switch(choice){
	case 1:
		printf("apples are a good choice!!\n");
		break;
	case 2:
		printf("pears are a good choice!!\n");
		break;
	case 3:
		printf("bananas are for babies !\n");
		break;
	default:
		printf("you didn't select from the provided options, exiting program ...\n");
 }
 return 0 ; 
}


