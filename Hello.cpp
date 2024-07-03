#include<iostream>
#include<string>
#include<limits>
using namespace std;
// compliing command: g++ Hello.cpp -o Hello

// function prototype
void discountApp(); 
void selectProgram();

int main() {
    selectProgram(); // call function
    return 0;
}


void discountApp() {
  /// issue: unstop loop after type string in amount input => solution: because data type input wrong so it become cin fail state and infinitie loop need [ cin.clear(), cin.igore , #include<limits> ]
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
                cout << " = 30%\n";
            }
            else if (amount >= 20000 && amount < 30000){
                cout << " = 20%\n";
            }
            else if (amount >= 15000 && amount < 20000){
                cout << " = 10%\n";
            }
            else if (amount < 15000){
                cout << " = No Discount\n";
            }
            else{
                cout << " = 50%\n";
            }
        }
        else if (cin.fail()){
            cin.clear(); // Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore the invalid input
            cout << "\nPlease enter a number." << endl;
            continue; // Restart the loop to prompt for input again
        }
    break;    
    }
    
}

void selectProgram() {
    //learn about switchCase by select program apps
    
    int service;
    cout << "\n--- Select Services ---" << endl;
    cout << "1 = Discount App\n2 = Other Apps\n3 = Exit" << endl;
    cout << "Enter number of service: ";
    cin >> service;
    switch (service){

        case 1:
            cout << " Discount App";
            discountApp();
            selectProgram();
            break;
        case 2:
            cout << " Others Apps\n";
            // otherApp(); no other app for now
        case 3:
            char exit;
            cout << "\nDo you want to exit? (y/n): ";
            cin >> exit;
            switch(exit){
                case 'y':
                    break;
                case 'Y':
                    break;
                case 'n':
                    selectProgram();
                    break;
                case 'N':
                    selectProgram();
                    break;
                default:
                    while(true){
                        cout <<"Invalid Please enter (y/n) Do you want to exit? (y/n): "; 
                        cin >> exit;
                        if(exit == 'y'){
                            break;
                        }
                        else if(exit == 'Y'){
                            break;
                        }
                        else if(exit == 'n'){
                            selectProgram();  
                        }
                        else if(exit == 'N'){
                            selectProgram();  
                        }
                        else{
                            continue;
                        }
                    }
                    
            }

}
}

