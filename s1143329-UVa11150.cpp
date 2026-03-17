#include <iostream>
using namespace std;
int main()
{
    int n,m1tt=0,m2tt=0;
    while (cin >> n)
    {
        //m1
        m1tt=n;
        int m1n=n;
        while (m1n>=3)
        {
            m1tt+=m1n/3;
            m1n=m1n/3+m1n%3;
        }
        //m2
        int m2n=n+m1n;
        m2tt=n;
        while (m2n>=3)
        {
            m2tt+=m2n/3;
            m2n=m2n/3+m2n%3;
        }
        if (m2tt>m1tt)  cout << m2tt <<endl;
        else cout << m1tt<<endl;
    }
}
