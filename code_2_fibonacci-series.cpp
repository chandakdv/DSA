/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int n =10;
    
    int a=0;
    int b =1;
    cout<<a<<" "<<b<<endl;
    
    for(int i=1 ; i<=n ; i++){
        int nextnumber =a+b;
        cout<< nextnumber<<" ";
        a=b;
        b=nextnumber;
    }

}
