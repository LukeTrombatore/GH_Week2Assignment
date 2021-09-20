//Luke Trombatore
//GAME-2303
//09/12/21

#include <iostream>
#include <string>
using namespace std;


void ProblemOne()
{
    cout << "\nProblem One\n" << "=================================\n";

    for (int i = 1; i <= 1000; i++)
    {
        if (i % 2 == 0) 
        {
            cout << i << ", is divisible by 2 different numbers" << endl;
        }
    }
}
void ProblemTwo()
{
    cout << "\nProblem Two\n" << "=================================\n";

    //string myString = "Hello World";

    string myString = " ";
    cout << "Enter a phrase: " << endl;
    getline(cin, myString);

    cout << "Reversed -> : ";
    

    for (int i = myString.length(); i >= 0; i--)
    {
        cout << myString[i];
    }
}
void ProblemThree()
{
    cout << "\n\nProblem Three\n" << "=================================\n";

    string myString = " ";
    cout << "Enter a phrase: " << endl;
    getline(cin, myString);
    cout << "Vowels removed -> : ";


    for (int i = 0; i <= myString.length(); i++)
    {
        if (myString[i] == 'a' || (myString[i] == 'e' || (myString[i] == 'i' || (myString[i] == 'o' || (myString[i] == 'u')))))
        {
        }
        else if ((myString[i] == 'A' || (myString[i] == 'E' || (myString[i] == 'I' || (myString[i] == 'O' || (myString[i] == 'U'))))))
        {
        }
        else
        {
            cout << myString[i];
        }
    }
}
int main()
{

    ProblemOne();
    ProblemTwo();
    ProblemThree();
}


