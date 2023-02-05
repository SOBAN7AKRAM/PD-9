#include <iostream>
using namespace std;
float total(string name,float kgs);
main()
{
    string name;
    float kgs;
    float totalprice;
    
    cout<<"Enter the name of fruit:";
    cin>>name;
    cout<<"Enter the amount in Kgs:";
    cin>>kgs;
    totalprice=total(name,kgs);
    cout<<"Total price is:"<<totalprice;
}
float total(string name,float kgs)
{
    float totalprice;
    string fruit[4]={"peach","apple","guava","watermelon"};
    float price[4]={60,70,40,30};
    for (int i=0;i<4;i++)
    {
        if (name==fruit[i])
        {
            totalprice=price[i]*kgs;
        }
    }
    return totalprice;
}