#include <iostream>
using namespace std;

int main()
{
     int n, originalnumber, digit, reversenumber = 0;

     cout << "Enter a positive number: ";
     cin >> originalnumber;

     n = originalnumber;

     do
     {
         digit = originalnumber % 10;
         reversenumber = (reversenumber * 10) + digit;
         originalnumber = originalnumber / 10;
     } while (originalnumber != 0);

     cout << " The reverse of the number is: " << reversenumber << endl;

     if (n == reversenumber)
         cout << " The number is a palindrome.";
     else
         cout << " The number is not a palindrome.";

    return 0;
}
