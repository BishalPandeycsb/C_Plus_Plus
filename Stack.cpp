#include<bits/stdc++.h>
using namespace std;
int main()
{

    stack<string> s;
    cout<<" checking whether stack is empty "<<s.empty()<<endl;
    cout<<"the size of stack is :"<<s.size()<<endl;
     s.push("hi");
     s.push("hello");
     s.push("how ");
     s.push("are ");
     s.push("you?");
     stack<string> r (s);
     cout<<"the size of stack is :"<<s.size()<<endl;
     cout<<" checking whether stack is empty "<<s.empty()<<endl;
     while(s.size()!=0)
     {
         cout<<s.top()<<" ";
         s.pop();

     }
     cout<<endl;
     cout<<" at the top of R is "<< r.top()<<endl;
     while(!r.empty())
     {
         cout<<r.top()<<" ";
         r.pop();
     }




}
