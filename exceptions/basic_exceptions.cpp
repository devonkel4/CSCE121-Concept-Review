#include <iostream>
#include <stdexcept>

using namespace std;

char upperToLower(char c){
    if (!isupper(c)){
        throw domain_error("The character provided is not uppercase"); // throw used to indicate answer cannot be provided, along with reason
    }
    return (char)(c + 32);
}
int main(){
    cout << "Testing 'A': " << upperToLower('A') << endl; // should work without error
    while(true) {
        cout << "Enter a character or exit to exit: ";
        string str;
        cin >> str;
        if (str.length() != 1){
            if (str == "exit"){
                break;
            }
            else{
                cout << "Invalid string try again." << endl; // no throw is used since we aren't within a function
            }
        }
        else{
            try{
                char c = str.at(0);
                cout << "Testing '" << c << "': " << upperToLower(c) << endl;
            }
            catch (domain_error& e){ // & used to grab reference to object in order to prevent C++ from making a copy of the error
                //we will learn more about this in pass by reference / pass by value lectures
                cout << "Invalid character detected: " << e.what() << endl; // Prints error message
                // e.what() is the "reason" we entered inside our throw statement in upperToLower()
            }
        }
    }
    cout << "Exiting.." << endl;
}