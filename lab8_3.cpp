#include <iostream>
using namespace std;

/*
"Enter your age: "
"Enter your height: "
"Enter your bounty: "
"Your character = "
"Zoro"
"Sanji"
"Usopp"
"Chopper"
"Franky"
"Brook"
"Jinbe"
*/

int main()
{
    int age, height, bounty;

    cout << "Enter your age: ";
    cin >> age;

    if(age <= 25){
        cout << "Enter your height: ";
        cin >> height;
    } else {
        if(age <= 60){
            cout << "Enter your bounty: ";
            cin >> bounty;
        } else {
            cout << "Your character = Brook";
        }
    }

  return 0;
}