#include<bits/stdc++.h>
using namespace std;
int main()
{
    multiset <int> s {12,15,12,6,8,10};
    cout<<"the size of multiset is"<<s.size()<<endl;
    for(auto i:s)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    int x=0,y;
    for(auto i=s.begin();i!=s.end();i++)
    {
        auto k=i;
        cout<<*i<<" ";
        x=(*i);
        y=x/2;

        s.erase(k);
        s.insert(y);


    }
    cout<<endl;
     cout<<"the size of multiset is"<<s.size()<<endl;
     for(auto i:s)
    {
        cout<<i<<" ";
    }
}
