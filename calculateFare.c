#include<stdio.h>

float calculateFare(float distance){
    float ratePerKm = 50.0;

    return distance*ratePerKm;
}

int main(){
    float distance ;
    printf("Enter distance in Km");
    scanf("%f",&distance);

    printf("Total fare is KSH.%.2f\n",calculateFare(distance));
    return 0;
}