#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define enBuyukSayi(sayi1,sayi2) (sayi1 > sayi2) ? sayi1 : sayi2
#define sayilariTopla(sayi1,sayi2) sayi1+sayi2

int main()
{
    setlocale(LC_ALL,"Turkish");

    int sayi1 = 9;
    int sayi2 = 4;

    printf("%d\n",enBuyukSayi(sayi1,sayi2));
    printf("%d",sayilariTopla(sayi1,sayi2));

    return 0;
}
