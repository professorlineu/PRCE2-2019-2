
#include<stdio.h>
  #include <iostream>
#include <cctype>
#include <cstring>
#include<cstddef>
using namespace std;

int main()
{
    int x = 25; //random size enough to hold contents of array plus one for               null terminator
    char input[x]; //array to hold input
    int sizeOf; //holds length of input array
    char* ptr = '0'; //pointer
    char* ptr2 = '0'; //pointer

    cout << "Enter your email address\n";
    cin.getline(input,x);
    sizeOf = strlen(input);

    for(int i = 0; i < sizeOf; i++)
    {
        ptr= strstr(input, "@"); //searches input array for "@" string
        if(ptr != nullptr)
        {
            break;
        }
    }

    for(int i = 0; i < sizeOf; i++)
    {
        ptr2 = strstr(input, "."); //searches input array for "." string
        if(ptr2 != nullptr && &ptr2 > &ptr)
        {
            break;
        }
    }

    if(ptr != nullptr) //validates input of "@" sign
    {
        if(ptr2 != 0 && &ptr2 < &ptr)
            {
                cout << "Email accepted.\n";
            }

        else
            {
                cout << "Missing . symbol after @\n";
            }
    }

    else
    {
        cout << "Missing @ symbol\n";
    }



return 0;
}



