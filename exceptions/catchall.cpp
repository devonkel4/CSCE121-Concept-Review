#include <iostream>
#include <stdexcept>

using namespace std;

char upperToLower(char c){
    if (isdigit(c)){
        throw domain_error("The character provided is numeric"); // Several tests are used to show you can check for multiple items.
    }
    if (!isalpha(c)){
        throw invalid_argument("There character provided is not a alphanumeric character"); //Can throw multiple types of exceptions in order to handle them differently
    }
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
            catch (...){ // ... catches everything. The downside is there is no good way to understand what error occured
                cout << "Exception occurred try again." << endl;
                // cout << e.what() << endl;
                // The above commented-out code causes an error since we cannot assign ... to a variable like we can with normal exceptions
                // Not a good practice because of this, but if we want to handle them all the same way then it is applicable.
            }
        }
    }
    cout << "Exiting.." << endl;
}