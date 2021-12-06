#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
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

int numberOfOne(string s){
    int x= count(s.begin(),s.end(),'1');
    return x;
}

int numberOfZero(string s){
    int x= count(s.begin(),s.end(),'0');
    return x;
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
    
    int one,zero;
    if (first==255)
    {
        if(second==255)
        {
            if(third==255){
                one=numberOfOne(d);
                zero=8-one;
            }
            else{
                one=numberOfOne(c);
                zero=16-one;
            }
        }
        else{
            one=numberOfOne(b);
            zero=24-one;
        }
    }

    cout<<"Number of subnets are: "<<pow(2,one)<<endl;
    cout<<"Number of hosts are: "<<(pow(2,zero)-2);
    
return 0;
}
