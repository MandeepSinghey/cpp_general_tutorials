#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str1("Learning c plus plus");
    string str2 = "My name is mandeep";
    cout << str1 << endl;
    cout << str2 << endl;

    // various constructor of string class
    // or other ways to create string

    // initialization by raw string
    string str3("first string");

    // initialization by another string
    string str4(str1);

    // initialization # character with number of occurence =5
    string str5(5, '#');

    // initialization by part of another string
    string str6(str3, 6, 6); //    from 6th index (second parameter)
                             // 6 characters (third parameter)

    // initialization by part of another string : iteartor version
    string str7(str4.begin(), str4.begin() + 5);

    cout << "String 3 is " << str3 << endl;
    cout << "String 4 is " << str4 << endl;
    cout << "String 5 is " << str5 << endl;
    cout << "String 6 is " << str6 << endl;
    cout << "String 7 is " << str7 << endl;

    //  assignment operator
    str6 = str4;
    cout << "String 6 now is " << str6 << endl;
    // clear function deletes all character from string
    str4.clear();
    cout << "String 4 after clear is: " << str4 << endl;

    //  both size() and length() return length of string and
    //  they work as synonyms
    int str6_len = str6.length();
    int str6_size = str6.size();
    cout << "Length of string 6 using length method is: " << str6_len << endl;
    cout << "Length of string 6 using size method is: " << str6_size << endl;
    // a particular character can be accessed using at /
    // [] operator
    char ch_one = str6.at(1);
    char ch_two = str6[2];
    cout << "ch_one is :" << ch_one << endl;
    cout << "ch_two is :" << ch_two << endl;
    str1.append(" awesome");
    cout << "String 1 after append :" << str1 << endl;

    //  find returns index where pattern is found.
    //  If pattern is not there it returns predefined
    //  constant npos whose value is -1
    str4 = "r";
    if (str6.find(str4) != string::npos)
        cout
            << "Str4 found in str6 at " << str6.find(str4)
            << " pos" << endl;
    else
        cout << "Str4 not found in str6" << endl;

    //  substr(a, b) function returns a substring of b length
    //  starting from index a
    cout << "String 6 substring is " << str6.substr(7, 3) << endl;

    //  if second argument is not passed, string till end is
    // taken as substring
    str6 = "APPLE SNAPPLE";
    cout << "String 6 after substr: " << str6.substr(7) << endl;

    //  erase(a, b) deletes b characters at index a
    str6.erase(7, 4);
    cout << "String 6 after partial erase is: " << str6 << endl;

    //  iterator version of erase
    str6.erase(str6.begin() + 5, str6.end() - 3);
    cout << "String 6 is " << str6 << endl;

    str6 = "This is a examples";

    //  replace(a, b, str)  replaces b characters from a index by str
    str6.replace(0, 7, "else are test");

    cout << "String 6 is " << str6 << endl;

    return 0;
}