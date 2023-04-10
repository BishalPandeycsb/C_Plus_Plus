#include<bits/stdc++.h>
using namespace std;
int main()
{

    map<int,string> m;
    cout<<"the size of initial map is :"<<m.size()<<endl;
    cout<<"checking whether map is empty or not"<<m.empty()<<endl;

   m[13]="bishal";
   m[1]="Pandey";
   m[3]="Ashim";
   m[2]="Smarika";
   cout<<"the size of initial map is :"<<m.size()<<endl;
    cout<<"checking whether map is empty or not"<<m.empty()<<endl;
    m.insert({4,"Rahul"});
    m.erase(2);
    for(auto i=m.rbegin();i!=m.rend();i++)
    {

        cout<<i->first<<" "<<i->second;
        cout<<endl;
    }
    m.insert({2,"Sapana"});  //key already exists and so no extra value added
    cout<<"the size of initial map is :"<<m.size()<<endl;
    cout<<"checking whether map is empty or not"<<m.empty()<<endl;
   for(auto i:m)
   {
       cout<<i.first<<" "<<i.second;
       cout<<endl;
   }
   auto it=m.find(2);
    if(it!=m.end())
    {
        cout<<"found"<<m[2]<<endl;
    }

    else
    {
        cout<<"not found"<<endl;
    }
     for (auto itr = m.find(1); itr != m.end(); itr++)
        {
            cout << itr->first << '\t' << itr->second << '\n';
        }
}
