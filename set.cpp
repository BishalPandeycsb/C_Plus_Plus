#include<bits/stdc++.h>
using namespace std;
int main()
{

    set<int> s;
    cout<<"the size of s is : "<<s.size()<<endl;
    cout<<"checking whether the set is empty or not : "<<s.empty()<<endl;
    set<int>p {1,4,2,3,5,6};
     cout<<"the size of p is : "<<p.size()<<endl;
    cout<<"checking whether the set is empty or not : "<<p.empty()<<endl;
    cout<<"enter 4 numbers"<<endl;
    int num=0;
    /*for(int i=0;i<4;i++)
    {

        cin>>num;
        s.insert(num);
    }
    cout<<"the size of s is : "<<s.size()<<endl;
    cout<<"checking whether the set is empty or not : "<<s.empty()<<endl;
    for(auto i=s.rbegin();i!=s.rend();i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;*/
    for(auto i:p)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Find whether the number exists or  not"<<endl;
    auto j=p.lower_bound(2);
    auto k=p.upper_bound(3);
    cout<<"the lower_bound of 3 is "<<*j<<endl;
    cout<<"the upper_bound of 3 is "<<*k<<endl;
    if(p.find(16)!=p.end())
    {
        cout<<"Number  exist"<<endl;
    }
    else
    {

        cout<<"Number doesn't  exists"<<endl;

    }
}
