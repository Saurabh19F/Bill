#include<stdio.h>
int main(void){
int num;
printf("Enter the number 1 to 5 to order any food\n");
scanf("%d",&num);
printf("You entered %d", num);

	if(num = 1){
	printf("\nYour ordered Food item - Pizza\n");
		printf("Price - Rs 239");
		}
	else if ( num = 2){
		printf(" Your ordered Food item - Burger\n");
		printf("Price - Rs 129 ");
		}
	else if ( num = 3){
		printf(" Your ordered Food item - Pasta\n");
		printf("Price - Rs 179");
		}
	else if ( num = 4){
		printf(" Your ordered Food item - French Fries\n");
		printf("Price - Rs 99");
		}
           else if ( num = 5){
		printf(" Your ordered Food item - Sandwich\n");
		printf("Price - Rs 149");
		}
		getch();
}

