#include <stdio.h>
#define ex1

//=========================================
//============== LIST 3 ===================
//=========================================

#ifdef ex1
int main(){

char op;
do{
int k[5], i;

printf("|| EX. 1 ||\n");
printf("===========\n\n");

printf("Enter five numbers:\n\n");
for(i=0; i<5; i++){
    printf("%d number: ", i+1);
    scanf("%d", &k[i]);
}
printf("\n=======================\n");
printf("Numbers: ");
for(i=0; i<5; i++){
    printf("%d ", k[i]);
}

printf("\n=======================\n");
printf("\nRepeat? Y for Yes, any for No\n");
    scanf(" %c", &op);
system("cls");
} while (op=='Y' || op=='y');
printf("Thanks!\n\n");

system("pause");
}
#endif // ex1

/*==================================================================*/

#ifdef ex2
int main(){
char op;
do{
printf("|| EX. 2 ||\n");
printf("===========\n\n");
int n1, i, x[10], z=0, y[10];
printf("Enter 10 numbers. \n\n");
for(i=0; i<10; i++){
    printf("%d number: ", i+1);
        scanf("%d", &x[i]);
}
printf("\n==============================================\n");
printf("Numbers bigger than 121: ");
for(i=0; i<10; i++){
    if(x[i]>121){
       printf("%d ", x[i]);
    }
}

printf("\n==============================================\n");
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
int main(){

char op;
do{
int k[5], i, bigger=0, pos=0, times=0;

printf("|| EX. 3 ||\n");
printf("===========\n\n");

printf("Enter five numbers:\n\n");
for(i=0; i<5; i++){
    printf("%d number: ", i+1);
    scanf("%d", &k[i]);
        if(k[i]>bigger){
            bigger=k[i];
            pos=i+1;
            times=1;
        } else if(k[i]==bigger){
            times=times+1;
        }
}
printf("\n===========================================================\n");
printf("Numbers: ");
for(i=0; i<5; i++){
    printf("%d ", k[i]);
}
printf("\n\nThe %d number is the biggest one, and it is %d\n", pos, bigger);
printf("It appeared %d times", times);

printf("\n===========================================================\n");
printf("\nRepeat? Y for Yes, any for No\n");
    scanf(" %c", &op);
system("cls");
} while (op=='Y' || op=='y');
printf("Thanks!\n\n");

system("pause");
}
#endif // ex3

/*==================================================================*/

#ifdef ex4
int main(){
char op;
do{
int a[5], b[5], i;

printf("|| EX. 4 ||\n");
printf("===========\n\n");
printf("Enter 5 positive numbers: \n\n");
for(i=0; i<5; i++){
    printf("%d number: ", i+1);
    scanf("%d", &a[i]);
            while (a[i]<0){
                printf("Positive number.");
                scanf("%d", &a[i]);
            }
    b[i]=a[i]*-1;
}
printf("\n==============================================\n");
printf("Numbers on vector A: ");
for (i=0; i<5; i++){
    printf("%d ", a[i]);
}
printf("\n\nNumbers on vector B: ");
for (i=0; i<5; i++){
    printf("%d ", b[i]);
}

printf("\n==============================================\n");
printf("\nRepeat? Y for Yes, any for No\n");
    scanf(" %c", &op);
system("cls");
} while (op=='Y' || op=='y');
printf("Thanks!\n\n");

system("pause");

}
#endif // ex4

/*==================================================================*/

#ifdef ex5
int main(){
char op;
do{
int k, i, y;

printf("How many numbers? More than 4 and less than 20.\n");
    scanf("%d", &k);
    while (k<4 || k>20){
        printf("More than 4 and less than 20.\n");
        scanf("%d", &k);
    }
int a[k], b[k];

for(y=k-1,i=0; i<k; y--,i++){
    printf("%d number: ", i+1);
    scanf("%d", &a[i]);
    b[y]=a[i];
}

printf("\n==============================================\n");
printf("Vector A: ");
for(i=0; i<k; i++){
    printf("%d ", a[i]);
}
printf("\n\nVector B: ");
for(y=0; y<k; y++){
    printf("%d ", b[y]);
}

printf("\n==============================================\n");
printf("\nRepeat? Y for Yes, any for No\n");
    scanf(" %c", &op);
system("cls");
} while (op=='Y' || op=='y');
printf("Thanks!\n\n");

system("pause");

}
#endif // ex5

/*==================================================================*/
