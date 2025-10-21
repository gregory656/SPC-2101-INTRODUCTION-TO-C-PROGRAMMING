#include<stdio.h>
float convertTocelsius(float fah){
    return (fah - 32)*5.0/9.0;
}

int main(){
    float fah;
    printf("Enter Temperature in fah:");
    scanf("%f",&fah);

    printf("Tempearature in celsius = %.2f \n",convertTocelsius(fah));
    
    return 0;
}