/*
  First candy cost 10c
  Increase cost 10c more than previous one
  have one dolar to spend 
  how many candy
*/
#include<stdio.h>

int main() {
    double totalMoney = 1.0;
    double cost = 0.10;
    int numOfCandy = 0;
    while(totalMoney > 0){
        totalMoney -= cost;
        numOfCandy++;
        cost = cost * 2;
    }
    
    printf("%i", numOfCandy);
}
