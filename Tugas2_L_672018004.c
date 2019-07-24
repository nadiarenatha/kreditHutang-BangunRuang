#include <stdio.h>
#include <stdlib.h>

void main()
{
int pilihan,uangpinjam,bayar,tinggisegitiga,t,a,b,c,f;
char yesno,y,n;
printf(" 1.Kredit Hutang\n 2.Bangun Ruang\n 3.Exit\n Pilihan :");
pilihan: 1,2,3;
scanf("%i", &pilihan);
switch(pilihan)
{
case 1 :
    printf("\n");
    printf("Masukkan uang yang dipinjam :");
    scanf("%i", &uangpinjam);
    printf("Uang yang dipinjam adalah %i\n",uangpinjam);
    printf("=========\n");
    do{
    printf("Bayar Hutang :");
    scanf("%i" ,&bayar);
    uangpinjam = uangpinjam - bayar;
    if(uangpinjam == 0)
    {
       printf("hutang anda lunas.Terimakasih\n\n");
       system("pause");
       system("cls");
       main();
    }  else if(uangpinjam>0)
    {
       printf("Hutang anda masih = %i\n" ,uangpinjam);
       printf("Bayar hutang lagi? <y/n>:");
       scanf("%s",&yesno);
    }
    }while(yesno=='y' && yesno!='n');
    if(yesno=='n')
    {
        printf("Segera lunasi hutang anda!\n\n");
        system("pause");
        system("cls");
        main();
    }
    break;

case 2 :
    printf("\n");
    printf("Masukkan tinggi segitiga :");
    scanf("%i" ,&tinggisegitiga);fflush(stdin);
    t = tinggisegitiga;
    f=1;
    for(a=1;a<=t;a++)
    {
        for(b=1;b<=t-a;b++)
        {
            printf("\t");
        }
        for(c=1;c<=a;c++)
        {
            printf("%d\t\t",f);
            f+=2;
        }
        printf("\n");
    }
    system("pause");
    system("cls");
    main();
    break;

case 3 :
    break;
}
}
