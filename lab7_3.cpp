#include <iostream>
using namespace std;
int main()
{
    int age,height,money;
    string status;
    cout << "Input age: ";
    cin >> age;
    if(age<20){
        cout << "Input height: ";
        cin >> height;
        if(height<160){ status = "UNFRIEND" ; }
        else if(height<175){ status = "FRIEND"; }
        else{
            cout << "Input money: ";
            cin >> money;
            if(money>69000000){ status = "MARRIED"; }
            else{ status = "ONE-NIGHT-STAND"; }

        }

    }else if(age<30){
        cout << "Input money: ";
        cin >> money;
        if(money>10000000){ status = "BEST FRIEND"; }
        else{ status = "UNFRIEND" ; }

    }else{ status = "UNFRIEND"; }
    cout << status;
    return 0;
}
