#include<bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> u;
    cout<<"the size of vector u is "<<u.size()<<endl;
    cout<<"the capacity of vector u is "<<u.capacity()<<endl;
    vector <int> v (5,1);

    cout<<"the size of vector v is "<<v.size()<<endl;
    cout<<"the capacity of vector v is "<<v.capacity()<<endl;
        cout<<"the vector v consist of"<<endl;
    for(auto i:v)
    {
        cout<<i<<" ";
    }
    v.push_back(3);
     cout<<"the size of vector v is "<<v.size()<<endl;
    cout<<"the capacity of vector v is "<<v.capacity()<<endl;
     cout<<endl;
    vector<int> w(v);
        cout<<"the vector w consist of"<<endl;
    for(auto i:w)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    vector<int> x {1,2,3,4,5};
     cout<<"the vector x consist of"<<endl;
    for(auto i:x)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"front and back function demo"<<x.front()<<" "<<x.back()<<endl;


    cout<<"before pop_back demo"<<endl;
     for(auto i:x)
    {
        cout<<i<<" ";
    }
    x.pop_back();
     cout<<"after pop_back demo"<<endl;
     for(auto i:x)
    {
        cout<<i<<" ";
    }

     cout<<"displaying the clear functionality of vector"<<endl;
     x.clear();
      for(auto i=x.begin();i<x.end();i++)
    {
        cout<<*i<<" ";
    }
        cout<<"the size of vector v is "<<x.size()<<endl;
    cout<<"the capacity of vector v is "<<x.capacity()<<endl;




}
