#include <stdio.h>
#include <stdlib.h>
#include "tarik.h"

int main(){

int izbor, i, j, k, l, bpolja, fizbor;
char nastavi;

printf("Dobrodosli u menu!\n");

while(1){

    printf("\nIzaberi polje:\n1:Bijelo\n2:Crno\n3:Bijele figure i polja\n4:Crne figure i polja\n5:Napusti menu\n");
    scanf(" %d", &bpolja);

    if(bpolja==5){
    printf("\nNapusanje menu-a ...\n");
    break;
    }

    if(bpolja==1){
        init_polja(&figura, 1);
        ispis_polja(&figura);
    }
    if(bpolja==2){
        init_polja(&figura, 2);
        ispis_polja(&figura);
    }
    printf("\nIzaber figuru:\n1:Pjesak  2:Top  3:Skakac  4:Lovac  5:Kralj  6:Kraljica\n");
    scanf(" %d", &fizbor);
    if(bpolja==1){
        switch(fizbor){
    case 1 :
        init_polja(&figura, 3);
        ispis_polja(&figura);
        break;
    case 2 :
        init_polja(&figura, 4);
        ispis_polja(&figura);
        break;
    case 3 :
        init_polja(&figura, 5);
        ispis_polja(&figura);
        break;
    case 4 :
        init_polja(&figura, 6);
        ispis_polja(&figura);
        break;
    case 5 :
        init_polja(&figura, 7);
        ispis_polja(&figura);
        break;
    case 6 :
        init_polja(&figura, 8);
        ispis_polja(&figura);
        break;
        }
    }

    if(bpolja==2){
        switch(fizbor){
    case 1 :
        init_polja(&figura, 9);
        ispis_polja(&figura);
        break;
    case 2 :
        init_polja(&figura, 10);
        ispis_polja(&figura);
        break;
    case 3 :
        init_polja(&figura, 11);
        ispis_polja(&figura);
        break;
    case 4 :
        init_polja(&figura, 12);
        ispis_polja(&figura);
        break;
    case 5 :
        init_polja(&figura, 13);
        ispis_polja(&figura);
        break;
    case 6 :
        init_polja(&figura, 14);
        ispis_polja(&figura);
        break;
        }
    }
    if(bpolja==3){
        switch(fizbor){
    case 1 :
        init_polja(&figura, 15);
        ispis_polja(&figura);
        break;
    case 2 :
        init_polja(&figura, 16);
        ispis_polja(&figura);
        break;
    case 3 :
        init_polja(&figura, 17);
        ispis_polja(&figura);
        break;
    case 4 :
        init_polja(&figura, 18);
        ispis_polja(&figura);
        break;
    case 5 :
        init_polja(&figura, 19);
        ispis_polja(&figura);
        break;
    case 6 :
        init_polja(&figura, 20);
        ispis_polja(&figura);
        break;
        }
    }
    if(bpolja==4){
        switch(fizbor){
    case 1 :
        init_polja(&figura, 21);
        ispis_polja(&figura);
        break;
    case 2 :
        init_polja(&figura, 22);
        ispis_polja(&figura);
        break;
    case 3 :
        init_polja(&figura, 23);
        ispis_polja(&figura);
        break;
    case 4 :
        init_polja(&figura, 24);
        ispis_polja(&figura);
        break;
    case 5 :
        init_polja(&figura, 25);
        ispis_polja(&figura);
        break;
    case 6 :
        init_polja(&figura, 26);
        ispis_polja(&figura);
        break;
        }
    }
}


return 0;

}

