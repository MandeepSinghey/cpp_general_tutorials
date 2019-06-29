#include <iostream>
#include <string>

using namespace std;
#define LIMIT 5
#define Pi 3.14

int main()
{
    for(int i=0; i<LIMIT; i++){
	cout << i <<"\n";
	}
    int area_of_circle;
    int radius;
    cout << "enter radius";
    cin >> radius;
    cout << "Area of circle is" << Pi * radius * radius << "\n";
    return 0;
}
