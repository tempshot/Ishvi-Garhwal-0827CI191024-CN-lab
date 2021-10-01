/*
Program Objective: To convert Dotted Decimal Notation IP to Binary Notation IP

Program 4: Write a program to convert Dotted Decimal Notation IP to Binary Notation IP
Sample input by user:
Enter the IP in Dotted Decimal Notation:
Enter first octet: 126
Enter second octet: 7
Enter third octet: 89
Enter fourth octet: 76
You entered in Dotted Decimal Notation: 126.7.89.76
Sample output:
IP in Binary Decimal Notation:
01111110 00000111 01011001 01001100 
*/

#include <iostream>
#include <algorithm>
using namespace std;

int dotted_decimal_to_binary(long int dec)
{
    int bArr[8] = {0};
    int i = 0;
    while (dec > 0)
    {
        bArr[i] = dec % 2;
        dec /= 2;
        i++;
    }

    int n = sizeof(bArr) / sizeof(bArr[0]);
    reverse(bArr, bArr + n);

    for (int i = 0; i < 8; i++)
    {
        cout << bArr[i];
    }
    cout << " ";
}

void convertIP(long int first, long int second, long int third, long int fourth)
{
    cout << "IP Address in Dotted Decimal Notation: " << first << "." << second << "." << third << "." << fourth;
    if ((0 <= first && first <= 255) && (0 <= second && second <= 255) && (0 <= third && third <= 255) && (0 <= fourth && fourth <= 255))
    {
        cout << "\n IP Address in Binary Notation: ";
        dotted_decimal_to_binary(first);
        dotted_decimal_to_binary(second);
        dotted_decimal_to_binary(third);
        dotted_decimal_to_binary(fourth);
    }
    else
    {
        cout << "\n Invalid Address ";
    }
}

int main()
{
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

    convertIP(first, second, third, fourth);
    return 0;
}