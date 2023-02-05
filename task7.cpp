#include <iostream>
using namespace std;
main()
{
    string array1;
    string array2;
    int count=0;
    cout<<"Enter array1:";
    cin>>array1;
    cout<<"Enter array2:";
    cin>>array2;
     for (int j=0;array1[j]!='\0';j++)
    {
        for (int i=0;array2[i]!='\0';i++)
        {
        if (array1[j]==array2[i])
        {
            count++;
            array1[j]='@';
            array2[i]='$';

        }
        }
        
        
    }
    
    cout<<count;

}