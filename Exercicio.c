#include <stdio.h>

int main(){

float n1, cont, k, peso, maior, menor=10000000, media, cmedia, cmaior;

printf("Digite quantas pessoas serao:\n");
    scanf("%f", &n1);
for (cont=0; cont<n1; cont++){
    printf("%.f numero: ", cont+1);
        scanf("%f", &k);

        if(k>maior){
            maior=k;
        }
        if (k<menor){
            menor=k;
        }
        if (k>=70 && k<=85.5){
            media=media+k;
            cmedia=cmedia+1;
        }
        if (k>75){
            cmaior=cmaior+1;
        }
}
printf("\n\nQuantidade de pesos entre 75kg e 85.5 kg: %.f\n", cmedia);
if(cmedia>=1){
    printf("A media dos pesos entre 70kg e 85.5kg e': %.2f\n", media/cmedia);
}
printf("A quantidade de pesos acima de 75kg e': %.f\n", cmaior);
printf("Maior peso: %.2f\n", maior);
printf("Menor peso: %.2f\n", menor);

}
