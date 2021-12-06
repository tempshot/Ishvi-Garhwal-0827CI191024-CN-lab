#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
string dotted_decimal_to_binary(long int dec)
{
    string s="";
    int temp[8]={0};
    int i = 0;
    while (dec > 0)
    {
        temp[i]=  dec % 2;
        dec /= 2;
        i++;
    }
    reverse(temp, temp+8);

    for (int i = 0; i < 8; i++)
        s+=to_string(temp[i]);

    return s;
}
int main()
{
    string s;
    long int first, second, third, fourth;
    cout << "Enter the IP Address in Dotted Decimal Notation: "<<endl;
    cout << " Enter First Octet: ";
    cin >> first;
    cout << "Enter Second Octet: ";
    cin >> second;
    cout << "Enter Third Octet: ";
    cin >> third;
    cout << "Enter Fourth Octet: ";
    cin >> fourth;
    string a= dotted_decimal_to_binary(first);
    string b= dotted_decimal_to_binary(second);
    string c= dotted_decimal_to_binary(third);
    string d= dotted_decimal_to_binary(fourth);
    cout<<a<<b<<c<<d;
return 0;
}
