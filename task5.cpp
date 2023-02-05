#include <iostream>
using namespace std;
main()
{
    bool isFound=false;
    string array[4];
    for (int i=0;i<4;i++)
    {
        cout<<"Enter the words:";
        cin>>array[i];
        if ((array[i]==array[1]) && (array[i]==array[2]) && (array[i]==array[3]) && (array[i]==array[0]))
        {
            isFound=true;
        }

    }
    if (isFound==true)
    {
        cout<<"true";
    }
    else 
    cout<<"false";
}