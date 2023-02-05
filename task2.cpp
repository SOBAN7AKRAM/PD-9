#include <iostream>
using namespace std;
float price(string name,string movie[5]);
main()
{
    string name;
    string movie[5]={"Gladiator","StarWars","Terminator","TakingLives","TombRaider"};
    cout<<"Enter name of movie:";
    cin>>name;
    float totalprice=price(name,movie);
    cout<<"Total Price after discount is:"<<totalprice;

}
float price(string name,string movie[5])
{
    float totalprice;
    for (int i=0;i<5;i++)
    {
        if (name==movie[i])
        {
            if (i%2==0)
            {
                totalprice=500-(0.05*500);
            }
            if (i%2==1)
            {
                totalprice=500-(0.10*500);
            }
        }
    }
    return totalprice;
}