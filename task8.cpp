#include <iostream>
using namespace std;
main()
{
    
    int size;
    cout<<"Enter Size:";
    cin>>size;
    string colour[size];
    int count=0;
    count=2*size;
    for(int i=0;i<size;i++)
    {
     
        cout<<"Enter colour:";
        cin>>colour[i];
       
       
    }
    for (int i=0;i<size;i++)
    {
         
        if (colour[i]!=colour[i+1])
        {
            count=count+1;
        }
    }

    cout<<count-1;
}