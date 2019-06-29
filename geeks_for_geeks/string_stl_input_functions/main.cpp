#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Declaring string
    string str;

    // Taking string input using getline() from user
    // "geeksforgeek" in givin output
    cout << "enter a string" << endl;
    getline(cin, str);

    // Displaying string
    cout << "The initial string is : ";
    cout << str << endl;

    // Using push_back() to insert a character
    // at end
    // pushes 's' in this case
    string last_name = "Singh";
    for (int i = 0; i < last_name.length(); i++)
    {
        str.push_back(last_name[i]);
    }

    // Displaying string
    cout << "The string after push_back operation is : ";
    cout << str << endl;

    // Using pop_back() to delete a character
    // from end
    // pops 's' in this case
    str.pop_back();

    // Displaying string
    cout << "The string after pop_back operation is : ";
    cout << str << endl;

    return 0;
}