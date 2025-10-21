//REGNO:PA106/G/28772/25
//NAME:GREGORY STEPHEN OTIENO
//COURSE:BSC SOFTWARE ENGINEERING
//YEAR:1ST YEAR

#include<stdio.h>
float calculateElectricBill(int units){
    float bill = 0;

    if (units <= 100)
    {
        bill = units*10;
    }
    else if (units <= 200)
    {
        bill = (100*10) + ((units - 100)*15);
    }
    else{
        bill = (100*10) + (100*15) + ((units - 200)*20);
    }

    return bill;
}
int main(){
    int units;
    printf("Enter The Amoun Of Units Consumed");
    scanf("%d",&units);

    printf("Tota electric billl is ksh. %.2f\n",calculateElectricBill(units));

    return 0;
}