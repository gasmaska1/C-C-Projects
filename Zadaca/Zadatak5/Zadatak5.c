#include <stdio.h>
#include <stdlib.h>
#include <dir.h>

int main(){

FILE *fp1, *fp2, *fp3, *fp4, *fp5;

mkdir("Zadatak5");

fp1=fopen("Zadatak5\\Zadatak - Makroi.c", "w+");

fprintf(fp1, "/**\n1.Makroi.c\n\na) Pozvati makro koji računa maksimalan broj od dva cijela unesena broja.\nParametrizirani makro napisati u .h fajlu. Koristiti kondicionalni (tercijarni) operator.\n(2 boda) (.h)\n\nb) Izračunati faktorijel broja dobijenog broja pod a). (3 boda)\n\nc) Ispisati dobijeni faktorijel oktalno I heksadecimalno. Ostatak dijeljenja dobijenog\nfaktorijela sa 255 prikazati u ASCII tabeli (kao karakter)  (3 boda)\n\nd) Ispisati ime datoteke u kojoj se radi ovaj program, I trenutni datum I vrijeme\npomoću parametriziranih makroa (2 boda)\n**/\n\n int main(){\n\nreturn 0;\n}");
fclose(fp1);

fp2=fopen("Zadatak5\\Zadatak - Nizovi i Stringovi.c", "w+");

fprintf(fp2, "/**\n2. Nizovi i stringovi.c\n\na) Definisati niz karaktera veličine vašeg imena I prezimena I dodijeliti mu vrijednost\nvašeg imena. Pomnožiti svaki element niza sa 3 I prikazati rezultantni niz. (2 boda)\n\nb) Prikazati vrijednost svakog karaktera iz niza brojem I sabrati sve brojeve u sumu.\nNpr: Ako je “Goran” rezultantni niz iz a) prikazati na ekranu\n71+111+114+97+110=503 (brojevi su ekvivalenti slovima u ASCII tabeli) (2 boda)\n\nc) Unijeti string sa tastature. Od njega napraviti palindrom (riječ koja izgleda isto kada\nse čita I sa lijeve I sa desne strane) tako da se zadnje slovo unesenog stringa ne\nponavlja (3 boda)\n\nd) Pozvati funkciju I proslijediti joj palindrom iz zadatka pod c). Funkcija treba da\nispiše palindrom tako da je svako treće slovo palindroma izbačeno iz njega (3 boda) (.h)\n**/\n\n int main(){\n\nreturn 0;\n}");
fclose(fp2);

fp3=fopen("Zadatak5\\Zadatak - Matrice i Pokazivaci.c", "w+");

fprintf(fp3, "/**\n3.Pokazivaci i Matrice\n\na) Pomnožiti dvije realne matrice A(koja je 2x3 dimenzija) I B (koja je3x2 dimenzija).\nIzračunati prvo C=AxB. (2 boda)\n\nb) Izračunati  D=BxA. Koristiti pokazivačku notaciju (4 boda)\n\nc) Sabrati C I D (E=C+D) matrice preko pokazivača na nizove. (Dimenzije rezultante\ntrebaju da budu kao dimenzije veće matrice od C I D)  (2 boda)\n\nd) Napisati funkciju koja kao parametre prima 2 pokazivača I zamjenjuje mjesta\nprosljeđenim elementima  (u matrici). Pomoću funkcije zamijeniti vrijednost  u prvoj\nkoloni I prvom redu matrice sa vrijednošću u zadnjem redu I zadnjoj koloni matrice.\nIspisati matricu na monitor pomoću pokazivača na matricu  (2 boda) (.h)\n**/\n\n int main(){\n\nreturn 0;\n}");
fclose(fp3);

fp4=fopen("Zadatak5\\Zadatak - Dinamicka alokacija memorije i datoteke.c", "w+");

fprintf(fp4, "/**\n4.Dinamicko alociranje i Datoteke.c\n\na) Definisati strukturu cvor u .h fajlu koja ima sljedeće elemente: slovo (karakter),\nsljedeci (pokazivač na strukturu cvor). Dinamički alocirati memoriju za onoliko\nstruktura cvor koliko ima slova u vašem imenu I elementu slovo u svakoj strukturi dati\nredom vrijednosti slova iz vašeg imena.Povezati strukture cvor u listu (povezana\nlista). (3 boda) (.h)\n\nb) Pomjeriti prvi čvor na zadnje mjesto u listi (prvo slovo imena) I ispisati listu na\nekran pomocu funkcije kreirane u .h biblioteci (3 boda) (.h)\n\nc) Otvoriti binarnu datoteku koja se zove lista.dat u režimu pisanja I upisati elemente\nliste (slova) u nju (Koristiti funkciju fwrite). Zatvoriti datoteku.  (2 boda)\n\nd) Ponovo otvoriti datoteku u režimu čitanja I pročitati datoteku (fread)  do kraja.\nIspisati kolika je veličina datoteke. Zatvoriti datoteku (2 boda)\n**/\n\n int main(){\n\nreturn 0;\n}");
fclose(fp4);

fp5=fopen("Zadatak5\\Header fajl - Popravni.h", "w+");

fprintf(fp5, "/**\nPOPRAVNI.h\n\n1.a) (2 boda) 2.d) (3 boda) 3.d) (2 boda) 4.a) (1 bod) I b) (2 boda)\n**/\n\n int main(){\n\nreturn 0;\n}");
fclose(fp5);

return 0;
}
