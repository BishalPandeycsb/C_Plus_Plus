#include<bits/stdc++.h>
using namespace std;
int main()
{

    priority_queue <int> pq ;
    for(int i=0;i<8;i++)
    {

        pq.push((i*3));
    }

    while(!pq.empty())
    {

        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;
    priority_queue <int,vector<int>,greater<int>> mini;
     for(int i=0;i<8;i++)
    {

        mini.push((i*3));
    }
    int s=mini.size();
    for(int i=0;i<s;i++)
    {
        cout<<mini.top()<<" ";
        mini.pop();
    }

}
