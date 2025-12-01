#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////
//
//  Function name : Display
//  Description :   Displaying pattern using recursion
//  Input :         void
//  Output :        void
//  Author :        Prajwal Sanjay Pansare
//  Date :          01/12/2025
//
//////////////////////////////////////////////////////////////

void Display()
{
    static char ch = 'a';
    if(ch < 'g')
    {
        cout<<ch<<"\t";
        ch++;
        Display();
    }
}

int main()
{
    Display();

    return 0;
}