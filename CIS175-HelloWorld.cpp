// sets up our libraries which handle console input and output for the program
#include <iostream>
using namespace std;

int main(void)
{
    // variable(s) used to store user inputted data
    string strUserName;

    // output asking our user their name;
    cout << "What is your name? ";

    // input accepting our user's name
    cin >> userName;

    // output hello and our user's name
    cout << endl << "Hello " << userName << endl;

    // exit our main function
    return(0);
}
