#include <iostream>
using namespace std;
main()
{
    int size;
    cout<<"Enter size:";
    cin>>size;
    int array[size];
    for (int i=0;i<size;i++)
    {
        cout<<"Enter number:";
        cin>>array[i];

    }
    int times;
    cout<<"Enter number of times even-odd transformation need to be done:";
    cin>>times;
    int j;
    for (int i=0;i<size;i++)
    {
        j=0;
        if (array[i]%2==1)
        {
            while(j<times)
            {
                array[i]=array[i]+2;
                j=j+1;
            }
        }
        j=0;
        if (array[i]%2==0)
        {
            while(j<times)
            {
                array[i]=array[i]-2;
                j=j+1;
            }
        }
    }
    for (int i=0;i<size;i++)
    {
        cout<<array[i]<<",";

    }
}