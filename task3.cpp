#include <iostream>
using namespace std;
bool found(int idx);
main()
{
   
    string name;
    cout<<"Enter words:";
    getline(cin,name);
    int idx=0;
    idx=name.length();
    bool isFound=found(idx);
    if (isFound==true)
    {
        cout<<"True";
    }
    if (isFound==false)
    {
        cout<<"False";
    }
}
bool found(int idx)
{
     bool isFound=false;
    if (idx%2==0)
    {
        isFound=true;
    }
    else 
    isFound=false;
    
    return isFound;
}