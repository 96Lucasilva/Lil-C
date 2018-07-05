#include <stdio.h>
#define ex2

//=========================================
//============== LIST 1 ===================
#include <stdio.h>
#define ex6

//=========================================
//============== LIST 1 ===================
//=========================================

#ifdef ex1

/*Difference between two numbers*/

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
printf("\nThe difference between them is: %i\n", res);
printf("\n==============================================\n");

printf("\nRepeat? Y for Yes, any for No\n");
    scanf(" %c", &op);
system("cls");
} while (op=='Y' || op=='y');
printf("\nThanks!\n");

system("pause");

return 0;
}
#endif // ex1

/*==================================================================*/

#ifdef ex2

/*  Three numbers. 1st number must be bigger than zero and lower
    than 20. The 2nd must be negative and the 3rd, any number.
    Then, Result=(1st^2)+(2nd^2)+(3rd^2). If Result<1000, ask
    for new numbers. */


int main(){
int n1, n2, n3, result;
char op;

do{
    do{
printf("|| EX. 2 ||\n");
printf("===========\n\n");
printf("All the numbers must be int.\n\n");
printf("Enter the first number. Must be positive and lower than 20.\n");
    scanf("%i", &n1);
    while (n1<0 || n1>=20){
        printf("Positive and lower than 20.\n");
        scanf("%i", &n1);
    };
printf("Second number. Lower than zero.\n");
    scanf("%i", &n2);
    while (n2>=0){
        printf("Lower. Than. Zero.\n");
        scanf("%i", &n2);
    }
printf("Third number. Any int number.\n");
    scanf("%i", &n3);
printf("\n1st number: %i | 2nd number: %i | 3rd number: %i\n", n1, n2, n3);

result=(n1*n1)+(n2*n2)+(n3*n3);

printf("\n=================\n");
printf("Result: %i\n", result);
printf("=================\n");
    if (result<1000){
        printf("Result is lower than 1000. Reenter the numbers.\n\n");
        system("pause");
        system("cls");
    }
    } while (result<1000);

printf("\nRepeat? Y for Yes, any for No\n");
    scanf(" %c", &op);
system("cls");
} while (op=='Y' || op=='y');
printf("Thanks!\n\n");

system("pause");
}
#endif // ex2

/*==================================================================*/

#ifdef ex3

/* Enter a number, print him and his module. A positive number's
   module is himself and a negative number's module is the same
   number, but positive. */

int main(){
int n1;
char op;

do{
printf("|| EX. 3 ||\n");
printf("===========\n\n");

printf("Enter a number:\n");
    scanf("%i", &n1);
printf("\nThe entered number is: %i and Its module is ", n1);
    if(n1<0){
        printf("%i\n", n1*-1);
    } else {
        printf("%i\n", n1);
        }
printf("\n==============================================\n");
printf("\nRepeat? Y for Yes, any for No\n");
    scanf(" %c", &op);
system("cls");
} while (op=='Y' || op=='y');
printf("\nThanks!\n");

system("pause");
}
#endif // ex3

/*==================================================================*/

#ifdef ex4

/* Salary. Bonus = 5%, Tax = -7% and print the total to receive. */

int main(){
float s1, bonus, fee, s2;
char op;

do{
printf("|| EX. 4 ||\n");
printf("===========\n\n");
printf("Enter the salary:\n$ ");
    scanf("%f", &s1);

bonus = s1*0.05;
fee = (s1*0.07)*-1;
s2 = bonus+fee;


printf("\nBonus (+5%% of $ %.2f) = R$ %.2f\n", s1, bonus);
printf("Tax (-7%% of $ %.2f) = R$ %.2f\n", s1, fee);
printf("\nTotal to receive: $ %.2f", s1+s2);
printf("\n==========================================\n");
printf("\nRepeat? Y for Yes, any for No\n");
    scanf(" %c", &op);
system("cls");
} while (op=='Y' || op=='y');
printf("\nThanks!\n");

system("pause");

}

#endif // ex4

/*==================================================================*/

#ifdef ex5



#endif // ex5

/*==================================================================*/

#ifdef ex6
int main (){
int n1,n2,res;
char op;

do{
printf("Enter the first number.\n");
    scanf("%i", &n1);
printf("Enter the second number.\n");
    scanf("%i", &n2);

res=n1+n2;
printf("\n%i + %i = %i\n",n1,n2,res);
    if(res>=10){
        printf("Bigger or equal to 10 !\n%i + 5 = %i", res, res+5);
    } else {
        printf("Lower than 10.\n%i - 7 = %i", res, res-7);
    }

printf("\n===================================\n");
printf("\nRepeat? Y for Yes, any for No\n");
    scanf(" %c", &op);
system("cls");
} while (op=='Y' || op=='y');
printf("\nThanks!\n");

system("pause");

}

#endif // ex6

/*==================================================================*/
