#include <iostream>
using namespace std;
int main()
{
    int n;
    while (cin >> n)
    {
        if (n==0) break;
        int tt=0;
        for (int i=1;i<=n;i++)
        {
            tt+=i*i;
        }
        cout << tt << endl;
    }
}
