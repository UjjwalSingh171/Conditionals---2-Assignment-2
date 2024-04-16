// Write a program to count the minimum number of notes in a given amount using the switch statement.
#include<iostream>
using namespace std;
int main()
{
    int amt , notes = 0 ;
    cout<<"Enter amount: ";
    cin>>amt;
    while(amt>0)
    {
        switch(amt>=2000 ? 2000 : amt>=500 ? 500 : amt >= 200 ? 200 : amt >= 100 ? 100 : amt >= 50 ? 50 : amt >= 20 ? 20 : amt >= 10 ? 10 : amt >= 5 ? 5 : 2)
        {
            case 2000 :
                amt -= 2000;
                notes++;
                cout << "2000 Ruppee note\n";
                
            case 500:
                amt -= 500;
                notes++;
                cout << "500 Rupee Note\n";
                 
            case 200:
                amt -= 200;
                notes++;
                cout << "200 Rupee Note\n";
                 
            case 100:
                amt -= 100;
                notes++;
                cout << "100 Rupee Note\n";
                 
            case 50:
                amt -= 50;
                notes++;
                cout << "50 Rupee Note\n";
                 
            case 20:
                amt -= 20;
                notes++;
                cout << "20 Rupee Note\n";
                 
            case 10:
                amt -= 10;
                notes++;
                cout << "10 Rupee Note\n";
                 
            case 5:
                amt -= 5;
                notes++;
                cout << "5 Rupee Note\n";
                 
            case 2:
                amt -= 2;
                notes++;
                cout << "2 Rupee Coin\n";
                 
    }
        cout << "Total number of notes: " << notes << endl;

        return 0;
}
}