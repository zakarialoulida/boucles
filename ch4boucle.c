#include <stdio.h>
#include <stdlib.h>

int main()
{int nbr ,s=0,max=0;
char c;
do{
    printf("veuillez entrer un nbr  ");
    scanf("%d",&nbr);
    if(nbr%10 ==0){
        s+=nbr;
    if(max<nbr ){
        max=nbr;
    }
    }
    printf("veuillez entrer un autre nbr (y/N )");
    scanf(" %c", &c);
}while(c =='y'||c == 'Y');
printf("la somme %d ",s);
printf("le max %d ",max);
return 0;
}
/*
int main() {
    int nbr, s = 0, max = 0;
    char c;

    do {
        printf("Veuillez entrer un nombre : ");
        scanf("%d", &nbr);

        if (nbr % 10 == 0) {
            s += nbr;

            if (nbr > max) {
                max = nbr;
            }
        }

        printf("Voulez-vous entrer un autre nombre ? (y/N) ");
        scanf(" %c", &c); // Notez l'espace avant %c pour ignorer les espaces blancs

    } while (c == 'y' || c == 'Y');

    printf("La somme des nombres multiples de 10 est : %d\n", s);
    printf("Le maximum des nombres multiples de 10 est : %d\n", max);

    return 0;
}*/
