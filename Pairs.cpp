#include<bits/stdc++.h>
using namespace std;
int main()
{


    vector<pair<int,int>> r;
     vector<pair<int,int>>q;
    for(int i=0;i<5;i++)
    {

        r.push_back(make_pair(i,(i*2)));

    }
      for(int i=0;i<5;i++)
    {
        cout<<r[i].first<<"    "<<r[i].second<<endl;
    }



        for(int i=0;i<5;i++)
    {

        q.emplace_back(i+2,(i+3));

    }
    cout<<" for q vector"<<endl;
       for(int i=0;i<5;i++)
    {
        cout<<q[i].first<<"    "<<q[i].second<<endl;
    }


    swap(q,r);
    cout<<" for q vector"<<endl;
       for(int i=0;i<5;i++)
    {
        cout<<q[i].first<<"    "<<q[i].second<<endl;
    }



    pair<int,pair<int,char>> p = {10,{3,'a'}};
    //cout<<"the value of a pair  is :"<<p.first<<"  "<<p.second <<endl;   can't do this cause p.second has a pair
    int x,y;
    char z;
    tie(x,ignore)=p;
    cout<<x<<endl;;
    tie(y,z)=p.second;
    cout<<"x is :"<<x<<"\t  y is :"<<y<<"\t z is :"<<z<<endl;
}
