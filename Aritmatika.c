#include <stdio.h>
 int sn;
 int i,j,y,n,hasil, hasil2;

int aritmatika(int i, int j, int n, int y)
{
    do{
        printf("%d \t", i);
        i=i+y;
        j++;
    }while(j<n);
}
int jumlah(int a, int b, int n)
{
    printf("%d", sn);
    sn=(n/2*(2*a+(n-1)*b));
    return sn;
}
main()
{
    printf("Masukan suku pertama : ");
    scanf("%d", &i);
    printf("Masukan beda :");
    scanf("%d", &y);
    printf("Masukkan Banyaknya Suku : ");
    scanf("%d",&n);

    sn=jumlah(i,y,n);

    printf("Barisan Arimatika : \n", hasil);
    hasil=aritmatika(i,j,n,y);
    printf("\nJumlah Barisan Deret : %d ", sn);


}
