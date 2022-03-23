#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int option, price, amount, total=0;
	char c;
	printf("Menu:\n");
	printf("1. Coffee 2$\n");
	printf("2. Another coffee 3$\n");
	do{
		printf("Choose your order: ");
		scanf("%d", &option);
	    switch(option){
	    	case 1:
	    		price=2;
	    		printf("Enter how many drink would you want: ");
	    		scanf("%d", &amount);
	    		total+= amount * price;
	    		break;
	    	case 2:
			    price=3;
				printf("Enter how many drink would you want: ");
				scanf("%d", &amount);
				total+= amount * price;
				break;
			default:
			    printf("Out of knowledge! please try again.");
				break;		
		}
		printf("\nMore? (please choose Y or N): ");
		fflush(stdin);
		scanf("%c", &c);
	} while(c=='Y');
	printf("\nYour order is completed!");
	printf("\nThe amount you have to pay is %d$", total);
	 
	return 0;
}
