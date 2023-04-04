#include <stdio.h>
#define PI_SAYISI 3.14

int main()
{
    int yaricap;
    float cevre;

    printf("\n yarıcapı gırınız:");
    scanf("%d",&yaricap);

    cevre=2*PI_SAYISI*yaricap;
    printf("daırenın cevresi :%.2f\n",cevre);

    return 0;
}