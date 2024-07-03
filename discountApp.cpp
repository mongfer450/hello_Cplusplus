#include<iostream>
#include<string>
#include<limits>
using namespace std;

// compliing command: g++ discountApp.cpp -o discountApp
// issue: unstop loop after type string in amount input => solution: because data type input wrong so it become cin fail state and infinitie loop need [ cin.clear(), cin.igore , #include<limits> ]

int main() {
    bool l = true;

    while(l == true){
         // input
        int amount;
        cout << "\nEnter Amount: ";
        cin >> amount;
        cout << "Your Balance = " << amount << endl;

        if (amount >= 15000){
            cout << "You got discount";

            if (amount >= 30000 && amount < 40000){
                cout << " = 30%";
            }
            else if (amount >= 20000 && amount < 30000){
                cout << " = 20%";
            }
            else if (amount >= 15000 && amount < 20000){
                cout << " = 10%";
            }
            else{
                cout << " = 50%";
            }
        }
        else if (cin.fail()){
            cin.clear(); // Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore the invalid input
            cout << "\nPlease enter a number." << endl;
            continue; // Restart the loop to prompt for input again
        }
        
        else{
            cout << "No discount";
        }

        char exit;
        cout << "\nDo you want to exit? (y/n): ";
        cin >> exit;
        if (exit == 'y' || exit == 'Y'){
            l = false;
        }
        else{
            l = true;
            
        }
    }
    
    return 0;
}
