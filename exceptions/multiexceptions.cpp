/*
 * Please read basic_exceptions first and notice the key differences in the two projects.
 */
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
        getline(cin, str);
        // Removed check for multi character string replaced with check for more than 1 character to prove a point
        if (str.size() > 1) {
            if (str == "exit") {
                break;
            }
            else{
                cout << "More than 1 character provided, try again!" << endl;
                //No exception thrown since we aren't inside a function.
            }
        }
        try{
            char c = str.at(0);
            cout << "Testing '" << c << "': " << upperToLower(c) << endl;
        }
        catch (domain_error& varName){ // reference to exception is a variable. you can name it whatever you want!
            cout << "Invalid character detected: " << varName.what() << endl; // Prints error message
        }
        catch (invalid_argument& e){ //
            cout << "Non-alphanumeric character detected: " << e.what() << endl;
            // Multiple catch statements can be used to catch different types of exceptions and handle them separately.
            // It is a good practice to use different types of exceptions depending on what occurred, that way it is easier to handle the error.
        }
        catch (out_of_range&){  // Catches the potential out_of_range thrown by str.at(0) in the case str is empty.
            //Still want that &. try rerunning "make multi" without the & to see what warning appears without it.
            //Not required to use the exception at all or even make it into a variable
            cout << "No character detected. Try again." << endl;
        }
    }
    cout << "Exiting.." << endl;
}