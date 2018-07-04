#include <stdio.h>
#define ex1

//=========================================
//============== LIST 1 ===================
//=========================================

#ifdef ex1

int main(){

int n1, n2, res;
char op;

do{
printf("|| EX. 1 ||\n");
printf("===========\n\n");


printf("Enter the first int value: ");
    scanf("%i", &n1);
printf("\nEnter the second int value: ");
    scanf("%i", &n2);

if(n1>n2){
    res=n1-n2;
} else {
    res=n2-n1;
    }
printf("\n1st number: %i", n1);
printf("\n2nd number: %i", n2);
printf("\nThe difference between them is: %i\n\n", res);

printf("Repeat? Y for Yes, any for No\n");
    scanf(" %c", &op);
system("cls");
} while (op=='Y' || op=='y');
printf("\nThanks!\n");

system("pause");

return 0;
}
#endif
