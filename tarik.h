#include <string.h>
#define DUZINA 8
#define SIRINA 16
#define CPOLJE 177
#define BPOLJE 178
#define CFIGURA 170
#define BFIGURA 219

struct polje{

    char matrica[DUZINA][SIRINA];

};

struct polje figura;
struct polje tabla[DUZINA][DUZINA];
struct polje pomocnaTabla[DUZINA][SIRINA];

//Inicijalizacija polja.
struct polje init_polja(struct polje *figura, int tipFigure){

int i, j;

switch(tipFigure){

/** PRAZNO CRNO I BIJELO POLJE **/

case 1 : //BPOLJE

    for(i=0; i<DUZINA; i++){
        for(j=0; j<SIRINA; j++){
            figura->matrica[i][j]=BPOLJE;
        }
    }
break;


case 2 ://CPOLJE

    for(i=0; i<DUZINA; i++){
        for(j=0; j<SIRINA; j++){
            figura->matrica[i][j]=CPOLJE;
        }
    }
break;

/** CRNE FIGURE NA BIJELIM POLJIMA **/

case 3 ://Pje�ak - BPOLJE - CFIGURA

    for(i=0; i<DUZINA; i++){
        for(j=0; j<SIRINA; j++){
            figura->matrica[i][j]=BPOLJE;
            if(i==3){
                    if(j==6||j==7||j==8){
            figura->matrica[i][j]=CFIGURA;}
        }
        if(i==4){
                if(j==4||j==5||j==6||j==7||j==8||j==9||j==10)
            figura->matrica[i][j]=CFIGURA;
        }
        if(i==5){
                if(j==5||j==6||j==7||j==8||j==9)
            figura->matrica[i][j]=CFIGURA;
        }
        if(i==6){
                if(j==3||j==4||j==5||j==6||j==7||j==8||j==9||j==10||j==11)
            figura->matrica[i][j]=CFIGURA;
        }


        }
    }
break;

case 4 : //Top - BPOLJE - CFIGURA

   for(i=0; i<DUZINA; i++){
           for(j=0; j<SIRINA; j++){
            figura->matrica[i][j]=BPOLJE;
            if(i==3||i==2){
                if(j==4||j==5||j==6||j==7||j==8||j==9||j==10||j==11)
                    figura->matrica[i][j]=CFIGURA;
            }
            if(i==4||i==5){
                if(j==5||j==6||j==7||j==8||j==9||j==10)
                    figura->matrica[i][j]=CFIGURA;
            }
            if(i==6){
                if(j==3||j==4||j==5||j==6||j==7||j==8||j==9||j==10||j==11||j==12)
                    figura->matrica[i][j]=CFIGURA;
            }


        }

   }
break;

case 5 : //Skakac - BPOLJE - CFIGURA
    for(i=0; i<DUZINA; i++){
        for(j=0; j<SIRINA; j++){
            figura->matrica[i][j]=BPOLJE;
            if(i==1){
                if(j==5||j==6||j==7||j==8||j==9)
                    figura->matrica[i][j]=CFIGURA;
            }
            if(i==2){
                if(j==3||j==4||j==5||j==6||j==7||j==8||j==9||j==10||j==11)
                    figura->matrica[i][j]=CFIGURA;
            }
            if(i==3){
                if(j==2||j==3||j==4||j==5||j==6||j==7||j==8||j==9||j==10||j==11)
                    figura->matrica[i][j]=CFIGURA;
                    if(j==7||j==8||j==9)
                        figura->matrica[i][j]=BPOLJE;
            }
            if(i==4){
               if(j==3||j==4||j==5||j==6)
                    figura->matrica[i][j]=CFIGURA;
            }
            if(i==5){
               if(j==4||j==5||j==6)
                    figura->matrica[i][j]=CFIGURA;
            }
            if(i==6){
                if(j==2||j==3||j==4||j==5||j==6||j==7||j==8||j==9||j==10||j==11)
                    figura->matrica[i][j]=CFIGURA;
            }
        }
    }
break;

case 6 ://Lovac - BPOLJE - CFIGURA

    for(i=0; i<DUZINA; i++){
        for(j=0; j<SIRINA; j++){
            figura->matrica[i][j]=BPOLJE;
            if(i==2){
                if(j==6||j==7)
                    figura->matrica[i][j]=BFIGURA;
            }
            if(i==3){
                if(j==4||j==5||j==6||j==7||j==8||j==8||j==9)
                    figura->matrica[i][j]=CFIGURA;
            }
            if(i==4||i==5){
                if(j==5||j==6||j==7||j==8||j==8)
                    figura->matrica[i][j]=CFIGURA;
            }
            if(i==6){
                if(j==3||j==4||j==5||j==6||j==7||j==8||j==8||j==9||j==10)
                    figura->matrica[i][j]=CFIGURA;
            }
        }
    }
break;

case 7 : //Kralj - BPOLJE - CFIGURA

    for(i=0; i<DUZINA; i++){
        for(j=0; j<SIRINA; j++){
            figura->matrica[i][j]=BPOLJE;
            if(i==1){
                if(j==3||j==4||j==6||j==7||j==9||j==10)
                    figura->matrica[i][j]=CFIGURA;
            }
            if(i==2){
                if(j==3||j==4||j==5||j==6||j==7||j==8||j==9||j==10)
                    figura->matrica[i][j]=CFIGURA;
            }
            if(i==3){
                if(j==4||j==5||j==6||j==7||j==8||j==9)
                    figura->matrica[i][j]=CFIGURA;
            }
            if(i==4){
                if(j==5||j==6||j==7||j==8)
                    figura->matrica[i][j]=CFIGURA;
            }
            if(i==5){
                if(j==4||j==5||j==6||j==7||j==8||j==9)
                    figura->matrica[i][j]=CFIGURA;
            }
            if(i==6){
                if(j==2||j==3||j==4||j==5||j==6||j==7||j==8||j==9||j==10||j==11)
                    figura->matrica[i][j]=CFIGURA;
            }
        }

    }
break;

case 8 : //Kraljica - BPOLJE - CFIGURA

    for(i=0; i<DUZINA; i++){
        for(j=0; j<SIRINA; j++){
            figura->matrica[i][j]=BPOLJE;
            if(i==1){
                if(j==3||j==4||j==6||j==7||j==9||j==10)
                    figura->matrica[i][j]=CFIGURA;
            }
            if(i==2){
                if(j==3||j==4||j==5||j==6||j==7||j==8||j==9||j==10)
                    figura->matrica[i][j]=CFIGURA;
            }
            if(i==3){
                if(j==4||j==5||j==6||j==7||j==8||j==9)
                    figura->matrica[i][j]=CFIGURA;
            }
            if(i==4){
                if(j==5||j==6||j==7||j==8)
                    figura->matrica[i][j]=CFIGURA;
            }
            if(i==5){
                if(j==2||j==3||j==5||j==6||j==7||j==8||j==10||j==11)
                    figura->matrica[i][j]=CFIGURA;
            }
            if(i==6){
                if(j==2||j==3||j==4||j==5||j==6||j==7||j==8||j==9||j==10||j==11)
                    figura->matrica[i][j]=CFIGURA;
            }

        }
    }
break;

/** BIJELE FIGURE NA CRNIM POLJIMA **/

case 9 ://Pje�ak - CPOLJE - BFIGURA
        for(int i=0; i<DUZINA; i++){
           for(int j=0; j<SIRINA; j++){
            figura->matrica[i][j]=CPOLJE;
            if(i==3){
                    if(j==6||j==7||j==8){
            figura->matrica[i][j]=BFIGURA;}
        }
        if(i==4){
                if(j==4||j==5||j==6||j==7||j==8||j==9||j==10)
            figura->matrica[i][j]=BFIGURA;
        }
        if(i==5){
                if(j==5||j==6||j==7||j==8||j==9)
            figura->matrica[i][j]=BFIGURA;
        }
        if(i==6){
                if(j==3||j==4||j==5||j==6||j==7||j==8||j==9||j==10||j==11)
            figura->matrica[i][j]=BFIGURA;
        }


        }
    }
break;

case 10 : //Top - CPOLJE - BFIGURA

   for(int i=0; i<DUZINA; i++){
           for(int j=0; j<SIRINA; j++){
            figura->matrica[i][j]=CPOLJE;

            if(i==3||i==2){
                if(j==4||j==5||j==6||j==7||j==8||j==9||j==10||j==11)
                    figura->matrica[i][j]=BFIGURA;
            }
            if(i==4||i==5){
                if(j==5||j==6||j==7||j==8||j==9||j==10)
                    figura->matrica[i][j]=BFIGURA;
            }
            if(i==6){
                if(j==3||j==4||j==5||j==6||j==7||j==8||j==9||j==10||j==11||j==12)
                    figura->matrica[i][j]=BFIGURA;
            }


        }

   }

break;

case 11 : //Skakac - CPOLJE - BFIGURA
    for(i=0; i<DUZINA; i++){
        for(j=0; j<SIRINA; j++){
            figura->matrica[i][j]=CPOLJE;
            if(i==1){
                if(j==5||j==6||j==7||j==8||j==9)
                    figura->matrica[i][j]=BFIGURA;
            }
            if(i==2){
                if(j==3||j==4||j==5||j==6||j==7||j==8||j==9||j==10||j==11)
                    figura->matrica[i][j]=BFIGURA;
            }
            if(i==3){
                if(j==2||j==3||j==4||j==5||j==6||j==7||j==8||j==9||j==10||j==11)
                    figura->matrica[i][j]=BFIGURA;
                    if(j==7||j==8||j==9)
                        figura->matrica[i][j]=CPOLJE;
            }
            if(i==4){
               if(j==3||j==4||j==5||j==6)
                    figura->matrica[i][j]=BFIGURA;
            }
            if(i==5){
               if(j==4||j==5||j==6)
                    figura->matrica[i][j]=BFIGURA;
            }
            if(i==6){
                if(j==2||j==3||j==4||j==5||j==6||j==7||j==8||j==9||j==10||j==11)
                    figura->matrica[i][j]=BFIGURA;
            }
        }
    }
break;

case 12 ://Lovac - CPOLJE - BFIGURA

    for(i=0; i<DUZINA; i++){
        for(j=0; j<SIRINA; j++){
            figura->matrica[i][j]=CPOLJE;
            if(i==2){
                if(j==6||j==7)
                    figura->matrica[i][j]=CFIGURA;
            }
            if(i==3){
                if(j==4||j==5||j==6||j==7||j==8||j==8||j==9)
                    figura->matrica[i][j]=BFIGURA;
            }
            if(i==4||i==5){
                if(j==5||j==6||j==7||j==8||j==8)
                    figura->matrica[i][j]=BFIGURA;
            }
            if(i==6){
                if(j==3||j==4||j==5||j==6||j==7||j==8||j==8||j==9||j==10)
                    figura->matrica[i][j]=BFIGURA;
            }
        }
    }
break;

case 13 : //Kralj - CPOLJE - BFIGURA

    for(i=0; i<DUZINA; i++){
        for(j=0; j<SIRINA; j++){
            figura->matrica[i][j]=CPOLJE;
            if(i==1){
                if(j==3||j==4||j==6||j==7||j==9||j==10)
                    figura->matrica[i][j]=BFIGURA;
            }
            if(i==2){
                if(j==3||j==4||j==5||j==6||j==7||j==8||j==9||j==10)
                    figura->matrica[i][j]=BFIGURA;
            }
            if(i==3){
                if(j==4||j==5||j==6||j==7||j==8||j==9)
                    figura->matrica[i][j]=BFIGURA;
            }
            if(i==4){
                if(j==5||j==6||j==7||j==8)
                    figura->matrica[i][j]=BFIGURA;
            }
            if(i==5){
                if(j==4||j==5||j==6||j==7||j==8||j==9)
                    figura->matrica[i][j]=BFIGURA;
            }
            if(i==6){
                if(j==2||j==3||j==4||j==5||j==6||j==7||j==8||j==9||j==10||j==11)
                    figura->matrica[i][j]=BFIGURA;
            }
        }

    }
break;

case 14 : //Kraljica - CPOLJE - BFIGURA

    for(i=0; i<DUZINA; i++){
        for(j=0; j<SIRINA; j++){
            figura->matrica[i][j]=CPOLJE;
            if(i==1){
                if(j==3||j==4||j==6||j==7||j==9||j==10)
                    figura->matrica[i][j]=BFIGURA;
            }
            if(i==2){
                if(j==3||j==4||j==5||j==6||j==7||j==8||j==9||j==10)
                    figura->matrica[i][j]=BFIGURA;
            }
            if(i==3){
                if(j==4||j==5||j==6||j==7||j==8||j==9)
                    figura->matrica[i][j]=BFIGURA;
            }
            if(i==4){
                if(j==5||j==6||j==7||j==8)
                    figura->matrica[i][j]=BFIGURA;
            }
            if(i==5){
                if(j==2||j==3||j==5||j==6||j==7||j==8||j==10||j==11)
                    figura->matrica[i][j]=BFIGURA;
            }
            if(i==6){
                if(j==2||j==3||j==4||j==5||j==6||j==7||j==8||j==9||j==10||j==11)
                    figura->matrica[i][j]=BFIGURA;
            }

        }
    }
break;

/** BIJELE FIGURE NA BIJELIM POLJIMA **/

case 15 ://Pje�ak - BPOLJE - BFIGURA

    for(i=0; i<DUZINA; i++){
        for(j=0; j<SIRINA; j++){
            figura->matrica[i][j]=BPOLJE;
            if(i==3){
                    if(j==6||j==7||j==8){
            figura->matrica[i][j]=BFIGURA;}
        }
        if(i==4){
                if(j==4||j==5||j==6||j==7||j==8||j==9||j==10)
            figura->matrica[i][j]=BFIGURA;
        }
        if(i==5){
                if(j==5||j==6||j==7||j==8||j==9)
            figura->matrica[i][j]=BFIGURA;
        }
        if(i==6){
                if(j==3||j==4||j==5||j==6||j==7||j==8||j==9||j==10||j==11)
            figura->matrica[i][j]=BFIGURA;
        }


        }
    }
break;

case 16 : //Top - BPOLJE - BFIGURA

   for(i=0; i<DUZINA; i++){
           for(j=0; j<SIRINA; j++){
            figura->matrica[i][j]=BPOLJE;
            if(i==3||i==2){
                if(j==4||j==5||j==6||j==7||j==8||j==9||j==10||j==11)
                    figura->matrica[i][j]=BFIGURA;
            }
            if(i==4||i==5){
                if(j==5||j==6||j==7||j==8||j==9||j==10)
                    figura->matrica[i][j]=BFIGURA;
            }
            if(i==6){
                if(j==3||j==4||j==5||j==6||j==7||j==8||j==9||j==10||j==11||j==12)
                    figura->matrica[i][j]=BFIGURA;
            }


        }

   }
break;

case 17 : //Skakac - BPOLJE - BFIGURA
    for(i=0; i<DUZINA; i++){
        for(j=0; j<SIRINA; j++){
            figura->matrica[i][j]=BPOLJE;
            if(i==1){
                if(j==5||j==6||j==7||j==8||j==9)
                    figura->matrica[i][j]=BFIGURA;
            }
            if(i==2){
                if(j==3||j==4||j==5||j==6||j==7||j==8||j==9||j==10||j==11)
                    figura->matrica[i][j]=BFIGURA;
            }
            if(i==3){
                if(j==2||j==3||j==4||j==5||j==6||j==7||j==8||j==9||j==10||j==11)
                    figura->matrica[i][j]=BFIGURA;
                    if(j==7||j==8||j==9)
                        figura->matrica[i][j]=BPOLJE;
            }
            if(i==4){
               if(j==3||j==4||j==5||j==6)
                    figura->matrica[i][j]=BFIGURA;
            }
            if(i==5){
               if(j==4||j==5||j==6)
                    figura->matrica[i][j]=BFIGURA;
            }
            if(i==6){
                if(j==2||j==3||j==4||j==5||j==6||j==7||j==8||j==9||j==10||j==11)
                    figura->matrica[i][j]=BFIGURA;
            }
        }
    }
break;

case 18 ://Lovac - BPOLJE - BFIGURA

    for(i=0; i<DUZINA; i++){
        for(j=0; j<SIRINA; j++){
            figura->matrica[i][j]=BPOLJE;
            if(i==2){
                if(j==6||j==7)
                    figura->matrica[i][j]=CFIGURA;
            }
            if(i==3){
                if(j==4||j==5||j==6||j==7||j==8||j==8||j==9)
                    figura->matrica[i][j]=BFIGURA;
            }
            if(i==4||i==5){
                if(j==5||j==6||j==7||j==8||j==8)
                    figura->matrica[i][j]=BFIGURA;
            }
            if(i==6){
                if(j==3||j==4||j==5||j==6||j==7||j==8||j==8||j==9||j==10)
                    figura->matrica[i][j]=BFIGURA;
            }
        }
    }
break;

case 19 : //Kralj - BPOLJE - BFIGURA

    for(i=0; i<DUZINA; i++){
        for(j=0; j<SIRINA; j++){
            figura->matrica[i][j]=BPOLJE;
            if(i==1){
                if(j==3||j==4||j==6||j==7||j==9||j==10)
                    figura->matrica[i][j]=BFIGURA;
            }
            if(i==2){
                if(j==3||j==4||j==5||j==6||j==7||j==8||j==9||j==10)
                    figura->matrica[i][j]=BFIGURA;
            }
            if(i==3){
                if(j==4||j==5||j==6||j==7||j==8||j==9)
                    figura->matrica[i][j]=BFIGURA;
            }
            if(i==4){
                if(j==5||j==6||j==7||j==8)
                    figura->matrica[i][j]=BFIGURA;
            }
            if(i==5){
                if(j==4||j==5||j==6||j==7||j==8||j==9)
                    figura->matrica[i][j]=BFIGURA;
            }
            if(i==6){
                if(j==2||j==3||j==4||j==5||j==6||j==7||j==8||j==9||j==10||j==11)
                    figura->matrica[i][j]=BFIGURA;
            }
        }

    }
break;

case 20 : //Kraljica - BPOLJE - BFIGURA

    for(i=0; i<DUZINA; i++){
        for(j=0; j<SIRINA; j++){
            figura->matrica[i][j]=BPOLJE;
            if(i==1){
                if(j==3||j==4||j==6||j==7||j==9||j==10)
                    figura->matrica[i][j]=BFIGURA;
            }
            if(i==2){
                if(j==3||j==4||j==5||j==6||j==7||j==8||j==9||j==10)
                    figura->matrica[i][j]=BFIGURA;
            }
            if(i==3){
                if(j==4||j==5||j==6||j==7||j==8||j==9)
                    figura->matrica[i][j]=BFIGURA;
            }
            if(i==4){
                if(j==5||j==6||j==7||j==8)
                    figura->matrica[i][j]=BFIGURA;
            }
            if(i==5){
                if(j==2||j==3||j==5||j==6||j==7||j==8||j==10||j==11)
                    figura->matrica[i][j]=BFIGURA;
            }
            if(i==6){
                if(j==2||j==3||j==4||j==5||j==6||j==7||j==8||j==9||j==10||j==11)
                    figura->matrica[i][j]=BFIGURA;
            }

        }
    }
break;

/** CRNE FIGURE NA CRNIM POLJIMA **/

case 21 ://Pje�ak - CPOLJE - CFIGURA

    for(i=0; i<DUZINA; i++){
        for(j=0; j<SIRINA; j++){
            figura->matrica[i][j]=CPOLJE;
            if(i==3){
                    if(j==6||j==7||j==8){
            figura->matrica[i][j]=CFIGURA;}
        }
        if(i==4){
                if(j==4||j==5||j==6||j==7||j==8||j==9||j==10)
            figura->matrica[i][j]=CFIGURA;
        }
        if(i==5){
                if(j==5||j==6||j==7||j==8||j==9)
            figura->matrica[i][j]=CFIGURA;
        }
        if(i==6){
                if(j==3||j==4||j==5||j==6||j==7||j==8||j==9||j==10||j==11)
            figura->matrica[i][j]=CFIGURA;
        }


        }
    }
break;

case 22 : //Top - CPOLJE - CFIGURA

   for(i=0; i<DUZINA; i++){
           for(j=0; j<SIRINA; j++){
            figura->matrica[i][j]=CPOLJE;
            if(i==3||i==2){
                if(j==4||j==5||j==6||j==7||j==8||j==9||j==10||j==11)
                    figura->matrica[i][j]=CFIGURA;
            }
            if(i==4||i==5){
                if(j==5||j==6||j==7||j==8||j==9||j==10)
                    figura->matrica[i][j]=CFIGURA;
            }
            if(i==6){
                if(j==3||j==4||j==5||j==6||j==7||j==8||j==9||j==10||j==11||j==12)
                    figura->matrica[i][j]=CFIGURA;
            }


        }

   }
break;

case 23 : //Skakac - CPOLJE - CFIGURA
    for(i=0; i<DUZINA; i++){
        for(j=0; j<SIRINA; j++){
            figura->matrica[i][j]=CPOLJE;
            if(i==1){
                if(j==5||j==6||j==7||j==8||j==9)
                    figura->matrica[i][j]=CFIGURA;
            }
            if(i==2){
                if(j==3||j==4||j==5||j==6||j==7||j==8||j==9||j==10||j==11)
                    figura->matrica[i][j]=CFIGURA;
            }
            if(i==3){
                if(j==2||j==3||j==4||j==5||j==6||j==7||j==8||j==9||j==10||j==11)
                    figura->matrica[i][j]=CFIGURA;
                    if(j==7||j==8||j==9)
                        figura->matrica[i][j]=CPOLJE;
            }
            if(i==4){
               if(j==3||j==4||j==5||j==6)
                    figura->matrica[i][j]=CFIGURA;
            }
            if(i==5){
               if(j==4||j==5||j==6)
                    figura->matrica[i][j]=CFIGURA;
            }
            if(i==6){
                if(j==2||j==3||j==4||j==5||j==6||j==7||j==8||j==9||j==10||j==11)
                    figura->matrica[i][j]=CFIGURA;
            }
        }
    }
break;

case 24 ://Lovac - CPOLJE - CFIGURA

    for(i=0; i<DUZINA; i++){
        for(j=0; j<SIRINA; j++){
            figura->matrica[i][j]=CPOLJE;
            if(i==2){
                if(j==6||j==7)
                    figura->matrica[i][j]=BFIGURA;
            }
            if(i==3){
                if(j==4||j==5||j==6||j==7||j==8||j==8||j==9)
                    figura->matrica[i][j]=CFIGURA;
            }
            if(i==4||i==5){
                if(j==5||j==6||j==7||j==8||j==8)
                    figura->matrica[i][j]=CFIGURA;
            }
            if(i==6){
                if(j==3||j==4||j==5||j==6||j==7||j==8||j==8||j==9||j==10)
                    figura->matrica[i][j]=CFIGURA;
            }
        }
    }
break;

case 25 : //Kralj - CPOLJE - CFIGURA

    for(i=0; i<DUZINA; i++){
        for(j=0; j<SIRINA; j++){
            figura->matrica[i][j]=CPOLJE;
            if(i==1){
                if(j==3||j==4||j==6||j==7||j==9||j==10)
                    figura->matrica[i][j]=CFIGURA;
            }
            if(i==2){
                if(j==3||j==4||j==5||j==6||j==7||j==8||j==9||j==10)
                    figura->matrica[i][j]=CFIGURA;
            }
            if(i==3){
                if(j==4||j==5||j==6||j==7||j==8||j==9)
                    figura->matrica[i][j]=CFIGURA;
            }
            if(i==4){
                if(j==5||j==6||j==7||j==8)
                    figura->matrica[i][j]=CFIGURA;
            }
            if(i==5){
                if(j==4||j==5||j==6||j==7||j==8||j==9)
                    figura->matrica[i][j]=CFIGURA;
            }
            if(i==6){
                if(j==2||j==3||j==4||j==5||j==6||j==7||j==8||j==9||j==10||j==11)
                    figura->matrica[i][j]=CFIGURA;
            }
        }

    }
break;

case 26 : //Kraljica - CPOLJE - CFIGURA

    for(i=0; i<DUZINA; i++){
        for(j=0; j<SIRINA; j++){
            figura->matrica[i][j]=CPOLJE;
            if(i==1){
                if(j==3||j==4||j==6||j==7||j==9||j==10)
                    figura->matrica[i][j]=CFIGURA;
            }
            if(i==2){
                if(j==3||j==4||j==5||j==6||j==7||j==8||j==9||j==10)
                    figura->matrica[i][j]=CFIGURA;
            }
            if(i==3){
                if(j==4||j==5||j==6||j==7||j==8||j==9)
                    figura->matrica[i][j]=CFIGURA;
            }
            if(i==4){
                if(j==5||j==6||j==7||j==8)
                    figura->matrica[i][j]=CFIGURA;
            }
            if(i==5){
                if(j==2||j==3||j==5||j==6||j==7||j==8||j==10||j==11)
                    figura->matrica[i][j]=CFIGURA;
            }
            if(i==6){
                if(j==2||j==3||j==4||j==5||j==6||j==7||j==8||j==9||j==10||j==11)
                    figura->matrica[i][j]=CFIGURA;
            }

        }
    }
break;
}

return *figura;
}



//Ispis polja.
void ispis_polja(struct polje *figura){

int i, j;



for(i=0;i<DUZINA;i++){
    for(j=0;j<SIRINA;j++){
        printf("%c", figura->matrica[i][j]);
    }
    printf("\n");
}

};



/**ZADATAK 3**/

struct polje slova[8];
struct polje brojevi[8];


// init_slova
struct polje init_slova(struct polje *slova, int slovo){
int i, j;

switch(slovo){

case 1 : // slovo : A

    for(i=0; i<DUZINA; i++){
        for(j=0; j<SIRINA; j++){
          slova->matrica[i][j]=0;
          if(i==1){
            if(j>3&&j<13)slova->matrica[i][j]=219;
          }
          if(i==2){
            if(j>3&&j<6)slova->matrica[i][j]=219;
            if(j>10&&j<13)slova->matrica[i][j]=219;
          }
          if(i==3){
            if(j>3&&j<6)slova->matrica[i][j]=219;
            if(j>10&&j<13)slova->matrica[i][j]=219;
            if(j>5&&j<11)slova->matrica[i][j]=219;
          }
          if(i==4){
            if(j>3&&j<6)slova->matrica[i][j]=219;
            if(j>10&&j<13)slova->matrica[i][j]=219;
          }
          if(i==5){
            if(j>3&&j<6)slova->matrica[i][j]=219;
            if(j>10&&j<13)slova->matrica[i][j]=219;
          }
        }
    }
break;

case 2 : // SLOVO : B
     for(i=0; i<DUZINA; i++){
        for(j=0; j<SIRINA; j++){
            slova->matrica[i][j]=0;
          if(i==1){
            if(j>3&&j<10)slova->matrica[i][j]=219;
          }
          if(i==2){
             if(j>3&&j<6)slova->matrica[i][j]=219;
             if(j>8&&j<11)slova->matrica[i][j]=219;

          }
          if(i==3){
            if(j>3&&j<10)slova->matrica[i][j]=219;


          }
          if(i==4){
            if(j>3&&j<6)slova->matrica[i][j]=219;
            if(j>8&&j<11)slova->matrica[i][j]=219;
          }
          if(i==5){
            if(j>3&&j<10)slova->matrica[i][j]=219;

          }
        }
     }
break;

case 3 : // SLOVO : C
    for(i=0; i<DUZINA; i++){
        for(j=0; j<SIRINA; j++){
            slova->matrica[i][j]=0;
          if(i==1){
            if(j>3&&j<10)slova->matrica[i][j]=219;
          }
          if(i==2){
             if(j>3&&j<6)slova->matrica[i][j]=219;


          }
          if(i==3){
            if(j>3&&j<6)slova->matrica[i][j]=219;


          }
          if(i==4){
            if(j>3&&j<6)slova->matrica[i][j]=219;

          }
          if(i==5){
            if(j>3&&j<10)slova->matrica[i][j]=219;

          }
        }
     }
break;

case 4 : // SLOVO : D
    for(i=0; i<DUZINA; i++){
        for(j=0; j<SIRINA; j++){
            slova->matrica[i][j]=0;
          if(i==1){
            if(j>3&&j<10)slova->matrica[i][j]=219;
          }
          if(i==2){
             if(j>3&&j<6)slova->matrica[i][j]=219;
             if(j>8&&j<11)slova->matrica[i][j]=219;

          }
          if(i==3){
            if(j>3&&j<6)slova->matrica[i][j]=219;
            if(j>8&&j<11)slova->matrica[i][j]=219;

          }
          if(i==4){
            if(j>3&&j<6)slova->matrica[i][j]=219;
            if(j>8&&j<11)slova->matrica[i][j]=219;
          }
          if(i==5){
            if(j>3&&j<10)slova->matrica[i][j]=219;

          }
        }
     }
break;

case 5 : // SLOVO : E
    for(i=0; i<DUZINA; i++){
        for(j=0; j<SIRINA; j++){
            slova->matrica[i][j]=0;
          if(i==1){
            if(j>3&&j<10)slova->matrica[i][j]=219;
          }
          if(i==2){
             if(j>3&&j<6)slova->matrica[i][j]=219;


          }
          if(i==3){
            if(j>3&&j<10)slova->matrica[i][j]=219;


          }
          if(i==4){
            if(j>3&&j<6)slova->matrica[i][j]=219;

          }
          if(i==5){
            if(j>3&&j<10)slova->matrica[i][j]=219;

          }
        }
     }
break;

case 6 :// SLOVO : F
    for(i=0; i<DUZINA; i++){
        for(j=0; j<SIRINA; j++){
            slova->matrica[i][j]=0;
          if(i==1){
            if(j>3&&j<10)slova->matrica[i][j]=219;
          }
          if(i==2){
             if(j>3&&j<6)slova->matrica[i][j]=219;

          }
          if(i==3){
            if(j>3&&j<9)slova->matrica[i][j]=219;


          }
          if(i==4){
            if(j>3&&j<6)slova->matrica[i][j]=219;

          }
          if(i==5){
            if(j>3&&j<6)slova->matrica[i][j]=219;

          }
        }
     }
break;

case 7 :// SLOVO : G
    for(i=0; i<DUZINA; i++){
        for(j=0; j<SIRINA; j++){
            slova->matrica[i][j]=0;
          if(i==1){
            if(j>3&&j<10)slova->matrica[i][j]=219;
          }
          if(i==2){
             if(j>3&&j<6)slova->matrica[i][j]=219;


          }
          if(i==3){
            if(j>3&&j<6)slova->matrica[i][j]=219;
            if(j>7&&j<12)slova->matrica[i][j]=219;

          }
          if(i==4){
            if(j>3&&j<6)slova->matrica[i][j]=219;
            if(j>9&&j<12)slova->matrica[i][j]=219;

          }
          if(i==5){
            if(j>3&&j<12)slova->matrica[i][j]=219;

          }
        }
     }
break;

case 8 : // SLOVO : H
    for(i=0; i<DUZINA; i++){
        for(j=0; j<SIRINA; j++){
            slova->matrica[i][j]=0;
            if(i>0&&i<6){
                if(j>3&&j<6)slova->matrica[i][j]=219;
                if(j>8&&j<11)slova->matrica[i][j]=219;
            }
            if(i==3){
                if(j>3&&j<11)slova->matrica[i][j]=219;
            }
        }
     }
break;

}
return *slova;
};



// init_brojeva
struct polje init_brojeva(struct polje *brojevi, int broj){
int i, j;

switch(broj){

case 1 : // BROJ : 1
    for(i=0; i<DUZINA; i++){
        for(j=0; j<SIRINA; j++){
            brojevi->matrica[i][j]=0;
          if(i==1||i==2||i==3||i==4||i==5){
            if(j>3&&j<6)brojevi->matrica[i][j]=219;
          }
        }
     }
break;

case 2 : // BROJ : 2
    for(i=0; i<DUZINA; i++){
        for(j=0; j<SIRINA; j++){
            brojevi->matrica[i][j]=0;
          if(i==1){
            if(j>3&&j<10)brojevi->matrica[i][j]=219;
          }
          if(i==2){
             if(j>7&&j<10)brojevi->matrica[i][j]=219;


          }
          if(i==3){
            if(j>3&&j<10)brojevi->matrica[i][j]=219;


          }
          if(i==4){

            if(j>3&&j<6)brojevi->matrica[i][j]=219;
          }
          if(i==5){
            if(j>3&&j<10)brojevi->matrica[i][j]=219;

          }
        }
     }
break;

case 3 : // BROJ : 3
    for(i=0; i<DUZINA; i++){
        for(j=0; j<SIRINA; j++){
            brojevi->matrica[i][j]=0;
          if(i==1){
            if(j>3&&j<10)brojevi->matrica[i][j]=219;
          }
          if(i==2){
             if(j>7&&j<10)brojevi->matrica[i][j]=219;


          }
          if(i==3){
            if(j>3&&j<10)brojevi->matrica[i][j]=219;


          }
          if(i==4){
            if(j>7&j<10)brojevi->matrica[i][j]=219;

          }
          if(i==5){
            if(j>3&&j<10)brojevi->matrica[i][j]=219;

          }
        }
     }
break;

case 4 : // BROJ : 4
    for(i=0; i<DUZINA; i++){
        for(j=0; j<SIRINA; j++){
            brojevi->matrica[i][j]=0;
            if(i==1||i==2){
                if(j>3&&j<6)brojevi->matrica[i][j]=219;
                if(j>9&&j<12)brojevi->matrica[i][j]=219;
            }
            if(i==3){
                if(j>3&&j<12)brojevi->matrica[i][j]=219;
            }
            if(i==4||i==5){
                if(j>9&&j<12)brojevi->matrica[i][j]=219;
            }
        }
     }
break;

case 5 : // BROJ : 5
     for(i=0; i<DUZINA; i++){
        for(j=0; j<SIRINA; j++){
            brojevi->matrica[i][j]=0;
          if(i==1){
            if(j>3&&j<10)brojevi->matrica[i][j]=219;
          }
          if(i==2){
             if(j>3&&j<6)brojevi->matrica[i][j]=219;


          }
          if(i==3){
            if(j>3&&j<10)brojevi->matrica[i][j]=219;


          }
          if(i==4){

            if(j>7&&j<10)brojevi->matrica[i][j]=219;
          }
          if(i==5){
            if(j>3&&j<10)brojevi->matrica[i][j]=219;

          }
        }
     }
break;

case 6 : // BROJ : 6
    for(i=0; i<DUZINA; i++){
        for(j=0; j<SIRINA; j++){
            brojevi->matrica[i][j]=0;
          if(i==1){
            if(j>3&&j<10)brojevi->matrica[i][j]=219;
          }
          if(i==2){
             if(j>3&&j<6)brojevi->matrica[i][j]=219;


          }
          if(i==3){
            if(j>3&&j<10)brojevi->matrica[i][j]=219;


          }
          if(i==4){
            if(j>3&&j<6)brojevi->matrica[i][j]=219;
            if(j>7&&j<10)brojevi->matrica[i][j]=219;
          }
          if(i==5){
            if(j>3&&j<10)brojevi->matrica[i][j]=219;

          }
        }
     }
break;

case 7 : // BROJ : 7
    for(i=0; i<DUZINA; i++){
        for(j=0; j<SIRINA; j++){
           brojevi->matrica[i][j]=0;
           if(i==1){
            if(j>2&&j<8)brojevi->matrica[i][j]=219;
           }
           if(i==1||i==2||i==3||i==4||i==5){
            if(j>7&&j<10)brojevi->matrica[i][j]=219;
           }
        }
    }
break;

case 8 : // BROJ : 8
    for(i=0; i<DUZINA; i++){
        for(j=0; j<SIRINA; j++){
            brojevi->matrica[i][j]=0;
          if(i==1){
            if(j>3&&j<10)brojevi->matrica[i][j]=219;
          }
          if(i==2){
             if(j>3&&j<6)brojevi->matrica[i][j]=219;
             if(j>7&&j<10)brojevi->matrica[i][j]=219;

          }
          if(i==3){
            if(j>3&&j<10)brojevi->matrica[i][j]=219;


          }
          if(i==4){
            if(j>3&&j<6)brojevi->matrica[i][j]=219;
            if(j>7&&j<10)brojevi->matrica[i][j]=219;
          }
          if(i==5){
            if(j>3&&j<10)brojevi->matrica[i][j]=219;

          }
        }
     }
break;

}
return *brojevi;
};

