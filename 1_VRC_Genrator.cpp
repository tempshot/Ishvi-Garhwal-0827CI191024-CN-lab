/* 
Program 1: Write a program to generate VRC for a given Character.
Input: Character (Any Letter, digit or symbol) (ASCII value to binary)
(Generate binary (8 bits) according to the ASCII value)
Output: VRC with even/odd parity in 9 bits
*/

#include <iostream>
#include <string>
using namespace std;

string DecToBin(int x)
{
    string s;
    while (x > 0)
    {
        if (x % 2 == 1)
        {
            s += '1';
        }
        else
        {
            s += '0';
        }
        x = x / 2;
    }
    int n = s.length();

    for (int i = 0; i < n / 2; i++)
        swap(s[i], s[n - i - 1]);
    return s;
}

int main()
{

    cout<<"Enter char: ";
    char c;
    cin>>c;
    
    string s= DecToBin(int(c));
    int count=0;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]=='1')
            count++;
    }
    if(count%2==0)
        s+='0';
    else
        s+='1';

    cout<<"VRC of "<<c<<" is: "<<s<<endl;
    
    return 0;
}