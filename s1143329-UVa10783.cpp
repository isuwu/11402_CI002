#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i=0;i<t;i++)
    {
        int a,b,tt=0;
        cin >> a >> b;
        if (a%2==0)
        {
            a++;
        }
        for (int j=a;j<=b;j+=2)
        {
            tt+=j;
        }
        cout << "Case " << i+1 << ": " << tt << endl;
    }
    return 0;
}
