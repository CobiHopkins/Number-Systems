#include <iostream>
using namespace std;

string decToHex(int decimal);

int main() 
{
    cout << decToHex(3017) << endl;
}

string decToHex(int decimal)
{
    string hexValue;
    string extraValues[7] = {"A", "B", "C", "D", "E", "F"};
    
    while (decimal > 0)
    {
        if ( (decimal % 16) > 9 )
        {
            hexValue = extraValues[(decimal % 16) - 10] + hexValue;
        } 
        else 
        {
            hexValue = to_string(decimal % 16) + hexValue;
        }
        decimal = decimal / 16;
    }
    
    return hexValue;
}
