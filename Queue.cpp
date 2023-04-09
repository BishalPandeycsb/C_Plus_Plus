#include<bits/stdc++.h>
using namespace std;
int main()
{

    queue <int> q ;
    cout<<" the queue is empty or not "<<q.empty()<<endl;
    queue <int> p(q);
    cout<<"the size of queue is "<<p.size()<<endl;
        for(int i=0;i<3;i++)
        {
            q.push((i+5));
        }
        cout<<"the front element of q is : "<<q.front()<<endl;
        cout<<"the end element of q is : "<<q.back()<<endl;
    cout<<"the size of queue q is "<<q.size()<<endl;
   while(!q.empty())
   {
       cout<<q.front()<<" ";
       q.pop();
   }



}
