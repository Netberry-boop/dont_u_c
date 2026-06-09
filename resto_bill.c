#include<stdio.h>

void print_choices(){
    printf("1. Burger - ₹120\n");
    printf("2. pizza - ₹120\n");
    printf("3. pasta - ₹120\n");
    printf("4. coke - ₹120\n");
    printf("5. ice cream - ₹120\n");
    printf("6. Generate bill\n");
}
int get_choice(){
    int choice;
    printf("enter your choice : ");
    scanf("%d",&choice);
    if(choice>0&&choice<=6) return choice ;
    else {
        printf("wrong entry , try entering from range [1-6]");
        return 0;
    }
}
int get_quantity(){
    int quantity;
    printf("enter quantity : ");
    scanf("%d",&quantity);
    if (quantity>=0) return quantity;
    else {
        printf("wrong entry of quantity , try entering positive numbers ");
    return 0;
    }
}
void generate_bill(int burg, int piz, int pas, int co, int ice){
    printf("=== FINAL BILL ====\n");
    float sum = (burg*120)+(piz*250)+(pas*180)+(co*50)+(ice*90);
    if(burg>0){
        printf("burger(%d) ₹ %d\n",burg,burg*120);
    }
    if(piz>0){
        printf("pizza(%d) ₹ %d\n",piz,piz*250);
    }
    if(pas>0){
        printf("pasta(%d) ₹ %d\n",pas,pas*180);
    }
    if(co>0){
        printf("coke(%d) ₹ %d\n",co,co*50);
    }
    if(ice>0){
        printf("icecream(%d) ₹ %d\n",ice,ice*90);
    }

    printf("--------------------------\n");
    printf("subtotal: ₹%.2f \n",sum);
    float disc ;
    if(sum>500&& sum<=1000){
        disc = 0.05;
    }
    if(sum>1000){
        disc = 0.1;
    }
    printf("Discount: ₹%.2f\n",sum*disc);
    
    sum = sum-sum*disc;
    int gst = sum*0.18;
    printf("GST(18%): ₹%.2f\n", gst);

    printf("-------------------\n");
    printf("total: ₹%.2f\n",(sum+gst));
}



int main(){
        int choice ;
        int burger_quantity = 0 ;
        int pizza_quantity = 0 ;
        int pasta_quantity = 0 ;
        int coke_quantity = 0 ;
        int icecream_quantity = 0;
        print_choices();
        do{ 
            choice = get_choice();
            switch(choice){
                case 1 :
                    burger_quantity+=get_quantity();
                    break;
                case 2 :
                    pizza_quantity+=get_quantity();
                    break;
                case 3 :
                    pasta_quantity+=get_quantity();
                    break;
                case 4 :
                    coke_quantity+=get_quantity();
                    break;
                case 5 :
                    icecream_quantity+=get_quantity();
                    break; 
                case 6:
                    generate_bill(burger_quantity,pizza_quantity,pasta_quantity,coke_quantity,icecream_quantity);
                    break;
            }
    }while(choice!=6);
    return 0 ;
}


