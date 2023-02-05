#include <iostream>
using namespace std;
main()
{
    bool isFound=false;
    int size;
    cout<<"Enter the size of array:";
    cin>>size;
    int number[size];
    for (int i=0;i<size;i++)
    {
        cout<<"Enter number";
        cin>>number[i];
        if (number[i]==7)
        {
            isFound=true;
        }
        if (number[i]>9)
        {
            while (number[i]!=0)
            {
                if (number[i]%10==7)
                {
                    isFound=true;
                    break;
                }
                number[i]=number[i]/10;
            }    
        }
        
    }
    if (isFound==true)
    {
        cout<<"Boom!";
    }
    if (isFound==false)
    {
        cout<<"7 is not found in the array";
    }

}