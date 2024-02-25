#include<bits/stdc++.h>
using namespace std;
class check
{
private:
    int a=1,b=2;

protected:
    int e=4,f=5;


    public:
    int d=3;
    void dis()
    {
        cout<<"the value of a and b are "<<a<<" "<<b<<endl;
    }

      void show()
    {
        cout<<"the value of e and f are "<<e<<" "<<f<<endl;
    }
};
int main()
{
    check c;
    c.dis();
    cout<<"the value of d is : "<<c.d<<endl;
    c.show();

}
