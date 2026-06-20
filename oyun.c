#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    srand (time (0));
int sayi = rand () %100 +1 ;
int tahmin ;
int hak= 0;
int maxhak= 5;

printf ("1-100 arasında bir sayi tahmin et: \n ");

while ( hak< maxhak) {
    printf ("tahmin gir:");
    scanf ("%d", &tahmin);

if (tahmin==sayi){ 
    printf ("tebrikler, dogru tahmin!");
    break;
}

else if (tahmin < sayi) {
printf ("tahmin degerini arttimalisin!\n");
}

else  {
    printf ("tahmin degerini azaltmalisin!\n");
}
hak ++;
printf ("kalan hak : %d\n", maxhak-hak);

}
if (hak== maxhak && tahmin!= sayi) {
    printf ("artik hakkiniz bitti! dogru sayi: %d\n", sayi);

}
return 0;
}