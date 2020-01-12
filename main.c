#include <stdio.h>
#include <stdlib.h>

///langkah 1 : pendeklarasian nama fungsi dan variabel yg digunakan
/// tipe_fungsu bana_fungsu(parameter_fungsi);
int tambah(int , int b);
float hitung_volume( float pjg,float lbr, float tinggi);
///langkah 2 : fungs(berisikan rumus)
int tambah( int a,int b)
{
    return(a+b);
}
float hitung_volume( float pjg,float lbr, float tinggi)
{
    float volume;
    volume = pjg*lbr*tinggi;
    return(volume);
}

///langkah 3 output

int main()
{
    int a,b,hasil_tambah;
    printf("input a : ");
    scanf("%d", &a);
    printf("input b : ");
    scanf("%d", &b);
    hasil_tambah=tambah(a,b); ///penggunaan fungsi
    printf("hasil tambah : %d \n",hasil_tambah);

    puts("\n");

    ///volume
    float p,l,t,vol_balok;
    printf("input alas : ");
    scanf("%f",&p);
    printf("input alas : ");
    scanf("%f",&l);
    printf("input alas : ");
    scanf("%f",&t);
    vol_balok = hitung_volume(p,l,t);
    printf("volume : %.2f \n",vol_balok);
    return 0;
}
