#include<bits/stdc++.h>
using namespace std;
int main()
{

    list <int> l;
    list <int> m {1,5,8,19,6};
    for(int i=1;i<=5;i++)
    {
        l.push_back((10-5+i));
        l.push_front((5-i+1));
    }

    cout<<"the size of list is :"<<l.size()<<endl;
    cout<<"the front of list is :"<<l.front()<<endl;
    cout<<"the end of list is :"<<l.back()<<endl;

    list <string> y (5,"hello world");
     for(auto i=y.begin();i!=y.end();i++)
    {
        cout<<*i<<" ";
    }
      cout<<endl;


      auto it = y.begin();

      y.insert(it,2,"hy");

      advance(it,4);
       y.insert(it,"k xa");

       for(auto i=y.begin();i!=y.end();i++)
    {
        cout<<*i<<" ";
    }
      cout<<endl;
    cout<<"default n on l"<<endl;
    list <int> n (l);
     for(auto i=n.begin();i!=n.end();i++)
    {
        cout<<*i<<" ";
    }
    cout<<"on ascending order"<<endl;
    for(auto i=l.begin();i!=l.end();i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
    cout<<"on descending order with iterator "<<endl;
    for(auto i=l.rbegin();i!=l.rend();i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
    cout<<" using reverse inbuilt operator"<<endl;
    l.reverse();
      for(auto i=l.begin();i!=l.end();i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
    cout<<" checking the sorting "<<endl;
   m.sort();
    for(auto i:m)
    {
        cout<<i<<" ";

    }

}

