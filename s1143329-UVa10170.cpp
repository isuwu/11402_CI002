#include <iostream>
using namespace std;
int main()
{
    long long s,d;
    while (cin >> s >> d)
    {
        while(d>0)
        {
            d-=s;
            if (d<=0) break;
            else s++;
        }
        cout << s << endl;
    }
    return 0;
}
