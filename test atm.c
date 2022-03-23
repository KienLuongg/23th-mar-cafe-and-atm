#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int pin=123;
    int mypin, limit;
    do{
    	printf("\nEnter your pin: ");
    	scanf("%d", &mypin);
    	limit++;
    if(mypin==123){
    	printf("Login completed\n");
	} else{
		printf("wrong numbers\n");
	}
	}while(mypin!=pin && limit<3);
	if(mypin==pin){
	char c;
	int option;
	do{	
	printf("\nEnter your option 1, 2: ");
	scanf("%d", &option);
	switch(option){
		case 1:
			printf("check your ballance");
			break;
		case 2:
		    printf("enter cast?");
		    break;
		default:
		    printf("no answer!");
		    break;			
	}
	fflush(stdin);
	printf("\ncontinue? Y/N ");
	scanf("%c", &c);
}
	while(c=='Y');
	printf("byebye!");
}   else{
	printf("\nyour account is blocked!");
}
	return 0;
}
