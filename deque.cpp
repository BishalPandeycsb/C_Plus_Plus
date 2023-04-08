#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque<int> d;

    cout<<"the size of deque is -->"<<d.size()<<endl;
    cout<<"to check whether the deque is empty or not  ->>"<<d.empty()<<endl;
    cout<<"inserting in  a deque"<<endl;

    for(int i=0;i<5;i++)
    {
        d.push_back((10+i-4));
        d.push_front((5-i));
    }
    for(auto i:d)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"the size of deque is -->"<<d.size()<<endl;
    cout<<"to check whether the deque is empty or not    ->>"<< d.empty()<<endl;
      for(auto i:d)
    {
        cout<<i<<" ";
    }
        cout<<endl;
    cout<<"the front of deque is --->"<<d.front()<<endl;
    cout<<"the last of deque is --->"<<d.back()<<endl;





    cout<<"random access of deque is "<<d.at(5)<<endl;
    cout<<"the erase functionality of deque is :"<<endl;
    d.erase(d.begin(),d.begin()+5);

      for(auto i:d)
    {
        cout<<i<<" ";
    }
       cout<<endl;
    cout<<"clearing the deque now"<<endl;
    d.clear();
    cout<<"the size of deque is -->"<<d.size()<<endl;


}
