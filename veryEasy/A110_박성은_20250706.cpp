#include <iostream>

using namespace std;

int main(){

    int money = 1000;
    int count[6] = {0};
    int total = 0;

    int price = 0;

    cin >> price;

    money = money - price;

    
    while(1){
        if(money <= 0)
            break;

        if(money >= 500){
        count[0] = money / 500;
        money = money % (500 * count[0]);
        }
        else if(money >= 100){
            count[1] = money / 100;
            money = money % (100 * count[1]);
        }
        else if(money >= 50){
            count[2] = money / 50;
            money = money % (50 * count[2]);
        }
        else if(money >= 10){
            count[3] = money / 10;
            money = money % (10 * count[3]);
        }
        else if(money >= 5){
            count[4] = money / 5;
            money = money % (5 * count[4]);
        }
        else if(money >= 1){
            count[5] = money / 1;
            money = money % (1 * count[5]);
        }
    }

    for(int i=0; i<6; i++)
        total += count[i];

    cout << total;

    return 0;
    
}