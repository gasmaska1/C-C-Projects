#include <stdio.h>
#include <stdlib.h>
#include "tarik.h"

int main(){

int i, j, k, l;
int broj, pomjeranje=1, naBroj;
char slovo, naSlovo;


for(i=0; i<DUZINA; i++){//Dodjeljivanje vrijednosti tabli !
    for(j=0; j<DUZINA; j++){
        if(i==0){
            switch(j){
        case 0 :
            tabla[i][j]=init_polja(&tabla, 4);
            break;

        case 1 :
            tabla[i][j]=init_polja(&tabla, 23);
            break;

        case 2 :
            tabla[i][j]=init_polja(&tabla, 6);
            break;

        case 3 :
            tabla[i][j]=init_polja(&tabla, 25);
            break;

        case 4 :
            tabla[i][j]=init_polja(&tabla, 8);
            break;

        case 5 :
            tabla[i][j]=init_polja(&tabla, 24);
            break;

        case 6 :
            tabla[i][j]=init_polja(&tabla, 5);
            break;

        case 7 :
            tabla[i][j]=init_polja(&tabla, 22);
            break;
            }
        }

        if(i==1){
            if(j==0||j==2||j==4||j==6)tabla[i][j]=init_polja(&tabla, 21);
            else tabla[i][j]=init_polja(&tabla, 3);
          }

        if(i==2||i==3||i==4||i==5){
            if(j==0||j==2||j==4||j==6)tabla[i][j]=init_polja(&tabla, 1);
            else tabla[i][j]=init_polja(&tabla, 2);
        }

        if(i==6){
            if(j==0||j==2||j==4||j==6)tabla[i][j]=init_polja(&tabla, 15);
            else tabla[i][j]=init_polja(&tabla, 9);
          }
        if(i==7){
            switch(j){
        case 0 :
            tabla[i][j]=init_polja(&tabla, 10);
            break;

        case 1 :
            tabla[i][j]=init_polja(&tabla, 17);
            break;

        case 2 :
            tabla[i][j]=init_polja(&tabla, 12);
            break;

        case 3 :
            tabla[i][j]=init_polja(&tabla, 19);
            break;

        case 4 :
            tabla[i][j]=init_polja(&tabla, 14);
            break;

        case 5 :
            tabla[i][j]=init_polja(&tabla, 18);
            break;

        case 6 :
            tabla[i][j]=init_polja(&tabla, 11);
            break;

        case 7 :
            tabla[i][j]=init_polja(&tabla, 16);
            break;
            }
        }
    }
}
tabla[0][0]=init_polja(&tabla, 4);


    slova[1]=init_slova(&slova, 2);
    slova[2]=init_slova(&slova, 3);
    slova[3]=init_slova(&slova, 4);
    slova[4]=init_slova(&slova, 5);
    slova[5]=init_slova(&slova, 6);
    slova[6]=init_slova(&slova, 7);
    slova[7]=init_slova(&slova, 8);
    slova[0]=init_slova(&slova, 1);

for(i=0; i<DUZINA; i++){//SLOVA
    for(j=0; j<SIRINA*9; j++){
       if(i==0||i==1||i==2||i==3||i==4||i==5||i==6||i==7){
            if(j<15)printf(" ");
            if(j>14&&j<=30)printf("%c", slova[0].matrica[i][j-15]);
            if(j>29&&j<=44)printf("%c", slova[1].matrica[i][j-30]);
            if(j>43&&j<=58)printf("%c", slova[2].matrica[i][j-44]);
            if(j>57&&j<=72)printf("%c", slova[3].matrica[i][j-58]);
            if(j>71&&j<=86)printf("%c", slova[4].matrica[i][j-72]);
            if(j>85&&j<=100)printf("%c", slova[5].matrica[i][j-86]);
            if(j>99&&j<=114)printf("%c", slova[6].matrica[i][j-100]);
            if(j>114&&j<=129)printf("%c", slova[7].matrica[i][j-114]);
       }
    }
    printf("\n");
}

for(i=0; i<DUZINA; i++){//Dojeljivanje vrijednosti brojevima !
    switch(i){

case 0 :
    brojevi[i]=init_brojeva(&brojevi, 1);
break;

case 1 :
    brojevi[i]=init_brojeva(&brojevi, 2);
break;

case 2 :
    brojevi[i]=init_brojeva(&brojevi, 3);
break;

case 3 :
    brojevi[i]=init_brojeva(&brojevi, 4);
break;

case 4 :
    brojevi[i]=init_brojeva(&brojevi, 5);
break;

case 5 :
    brojevi[i]=init_brojeva(&brojevi, 6);
break;

case 6 :
    brojevi[i]=init_brojeva(&brojevi, 7);
break;

case 7 :
    brojevi[i]=init_brojeva(&brojevi, 8);

    }
}

while(pomjeranje==1){

for(i=0; i<DUZINA*9; i++){// TABLA !
    for(j=0; j<SIRINA*9; j++){

        if(i==0||i==1||i==2||i==3||i==4||i==5||i==6||i==7){ //if(j<15)printf(" "); !!!
            if(j<15)printf("%c", brojevi[0].matrica[i][j]);/** OVDE POSTAVITI BROJEVE !!! **/
            if(j>14&&j<=30)printf("%c", tabla[0][0].matrica[i][j-15]);
            if(j>29&&j<=44)printf("%c", tabla[0][1].matrica[i][j-30]);
            if(j>43&&j<=58)printf("%c", tabla[0][2].matrica[i][j-44]);
            if(j>57&&j<=72)printf("%c", tabla[0][3].matrica[i][j-58]);
            if(j>71&&j<=86)printf("%c", tabla[0][4].matrica[i][j-72]);
            if(j>85&&j<=100)printf("%c", tabla[0][5].matrica[i][j-86]);
            if(j>99&&j<=114)printf("%c", tabla[0][6].matrica[i][j-100]);
            if(j>114&&j<=129)printf("%c", tabla[0][7].matrica[i][j-114]);
        }

        if(i==8||i==9||i==10||i==11||i==12||i==13||i==14||i==15){

            if(j<15)printf("%c", brojevi[5].matrica[i][j]);
            if(j>14&&j<=30)printf("%c", tabla[1][3].matrica[i][j-15]);
            if(j>29&&j<=44)printf("%c", tabla[1][0].matrica[i][j-30]);
            if(j>43&&j<=58)printf("%c", tabla[1][3].matrica[i][j-44]);
            if(j>57&&j<=72)printf("%c", tabla[1][2].matrica[i][j-58]);
            if(j>71&&j<=86)printf("%c", tabla[1][5].matrica[i][j-72]);
            if(j>85&&j<=100)printf("%c", tabla[1][4].matrica[i][j-86]);
            if(j>99&&j<=114)printf("%c", tabla[1][1].matrica[i][j-100]);
            if(j>114&&j<=129)printf("%c", tabla[1][6].matrica[i][j-114]);
        }
        if(i==16||i==17||i==18||i==19||i==20||i==21||i==22||i==23){

            if(j<15)printf("%c", brojevi[3].matrica[i][j]);
            if(j>14&&j<=30)printf("%c", tabla[2][0].matrica[i][j-15]);
            if(j>29&&j<=44)printf("%c", tabla[2][1].matrica[i][j-30]);
            if(j>43&&j<=58)printf("%c", tabla[2][2].matrica[i][j-44]);
            if(j>57&&j<=72)printf("%c", tabla[2][3].matrica[i][j-58]);
            if(j>71&&j<=86)printf("%c", tabla[2][4].matrica[i][j-72]);
            if(j>85&&j<=100)printf("%c", tabla[2][5].matrica[i][j-86]);
            if(j>99&&j<=114)printf("%c", tabla[2][6].matrica[i][j-100]);
            if(j>114&&j<=129)printf("%c", tabla[2][7].matrica[i][j-114]);
        }
        if(i==24||i==25||i==26||i==27||i==28||i==29||i==30||i==31){
            if(j<15)printf("%c", brojevi[1].matrica[i][j]);
            if(j>14&&j<=30)printf("%c", tabla[3][0].matrica[i][j-15]);
            if(j>29&&j<=44)printf("%c", tabla[3][1].matrica[i][j-30]);
            if(j>43&&j<=58)printf("%c", tabla[3][2].matrica[i][j-44]);
            if(j>57&&j<=72)printf("%c", tabla[3][3].matrica[i][j-58]);
            if(j>71&&j<=86)printf("%c", tabla[3][4].matrica[i][j-72]);
            if(j>85&&j<=100)printf("%c", tabla[3][5].matrica[i][j-86]);
            if(j>99&&j<=114)printf("%c", tabla[3][6].matrica[i][j-100]);
            if(j>114&&j<=129)printf("%c", tabla[3][7].matrica[i][j-114]);
        }
        if(i==32||i==33||i==34||i==35||i==36||i==37||i==38||i==39){
            if(j<15){
             init_brojeva(&brojevi[4], 4);
               printf("%c", brojevi[4].matrica[i][j]);
            }
            if(j>14&&j<=30)printf("%c", tabla[4][0].matrica[i][j-15]);
            if(j>29&&j<=44)printf("%c", tabla[4][1].matrica[i][j-30]);
            if(j>43&&j<=58)printf("%c", tabla[4][2].matrica[i][j-44]);
            if(j>57&&j<=72)printf("%c", tabla[4][3].matrica[i][j-58]);
            if(j>71&&j<=86)printf("%c", tabla[4][4].matrica[i][j-72]);
            if(j>85&&j<=100)printf("%c", tabla[4][5].matrica[i][j-86]);
            if(j>99&&j<=114)printf("%c", tabla[4][6].matrica[i][j-100]);
            if(j>114&&j<=129)printf("%c", tabla[4][7].matrica[i][j-114]);
        }
        if(i==40||i==41||i==42||i==43||i==44||i==45||i==46||i==47){
            if(j<15)printf("%c", brojevi[6].matrica[i][j]);
            if(j>14&&j<=30)printf("%c", tabla[5][0].matrica[i][j-15]);
            if(j>29&&j<=44)printf("%c", tabla[5][1].matrica[i][j-30]);
            if(j>43&&j<=58)printf("%c", tabla[5][2].matrica[i][j-44]);
            if(j>57&&j<=72)printf("%c", tabla[5][1].matrica[i][j-58]);
            if(j>71&&j<=86)printf("%c", tabla[5][2].matrica[i][j-72]);
            if(j>85&&j<=100)printf("%c", tabla[5][1].matrica[i][j-86]);
            if(j>99&&j<=114)printf("%c", tabla[5][2].matrica[i][j-100]);
            if(j>114&&j<=129)printf("%c", tabla[5][1].matrica[i][j-114]);
        }
        if(i==48||i==49||i==50||i==51||i==52||i==53||i==54||i==55){
            if(j<15)printf("%c", brojevi[6].matrica[i][j]);
            if(j>14&&j<=30)printf("%c", tabla[6][0].matrica[i][j-15]);
            if(j>29&&j<=44)printf("%c", tabla[6][1].matrica[i][j-30]);
            if(j>43&&j<=58)printf("%c", tabla[6][0].matrica[i][j-44]);
            if(j>57&&j<=72)printf("%c", tabla[6][1].matrica[i][j-58]);
            if(j>71&&j<=86)printf("%c", tabla[6][0].matrica[i][j-72]);
            if(j>85&&j<=100)printf("%c", tabla[6][1].matrica[i][j-86]);
            if(j>99&&j<=114)printf("%c", tabla[6][0].matrica[i][j-100]);
            if(j>114&&j<=129)printf("%c", tabla[6][1].matrica[i][j-114]);
        }
        if(i==56||i==57||i==58||i==59||i==60||i==61||i==62||i==63){
            if(j<15)printf("%c", brojevi[7].matrica[i][j]);
            if(j>14&&j<=30)printf("%c", tabla[6][1].matrica[i][j-15]);
            if(j>29&&j<=44)printf("%c", tabla[6][2].matrica[i][j-30]);
            if(j>43&&j<=58)printf("%c", tabla[6][3].matrica[i][j-44]);
            if(j>57&&j<=72)printf("%c", tabla[6][4].matrica[i][j-58]);
            if(j>71&&j<=86)printf("%c", tabla[6][5].matrica[i][j-72]);
            if(j>85&&j<=100)printf("%c", tabla[6][6].matrica[i][j-86]);
            if(j>99&&j<=114)printf("%c", tabla[6][7].matrica[i][j-100]);
            if(j>114&&j<=129)printf("%c", tabla[6][8].matrica[i][j-114]);
        }


    }
    printf("\n");
}

printf("Upisite slovo i broj polja za pomjeranje.\n");
printf("Slovo:");
scanf(" %c", &slovo);
printf("Broj:");
scanf(" %d", &broj);

printf("Unesite slovo i broj polja na koje se pomjera figura.\n");
printf("Slovo:");
scanf(" %c", &naSlovo);
printf("Broj:");
scanf("%d", &naBroj);



}

return 0;
}










