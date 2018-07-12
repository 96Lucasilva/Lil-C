#include <stdio.h>
#define ex1

//=========================================
//============== LIST 2 ===================
//=========================================

#ifdef ex1
int main(){
int cont, n1;


char op;
do{
printf("|| EX. 1 ||\n");
printf("===========\n\n");
printf("How many cicles? ");
    scanf("%d", &n1);
if(n1<=0){
    printf("Nothing!\n");
    goto repeat;
}
printf("\n==============================================\n");
for(cont=1; cont<=n1; cont++){
    printf("%d ", cont*3);
    }
printf("\n----------------------------------------------\n");
for(cont=1; cont<=n1; cont++){
    printf("1/%d ", cont*4);
    }
printf("\n----------------------------------------------\n");
for(cont=1; cont<=n1; cont++){
    printf("%d/%d ", cont*2-1,cont*8 );
    }
printf("\n----------------------------------------------\n");
for(cont=1; cont<=n1; cont++){
    printf("%d/%d ", cont*2,cont*3);
    }
printf("\n----------------------------------------------\n");
for(cont=1; cont<=n1; cont++){
    printf("%d/%d ", cont*2,cont*5);
    }
printf("\n----------------------------------------------\n");
for(cont=1; cont<=n1; cont++){
    printf("%d/%d %d ", cont*cont*4,cont*8, cont/2+1);
    cont++;
    }

printf("\n==============================================\n");
repeat:
printf("\nRepeat? Y for Yes, any for No\n");
    scanf(" %c", &op);
system("cls");
} while (op=='Y' || op=='y');
printf("Thanks!\n\n");

system("pause");
}
#endif // ex1
