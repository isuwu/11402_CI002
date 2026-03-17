#include <iostream>
using namespace std;

int main()
{
    int t,n;
    cin >> t;
    for (int i=0;i<t;i++)
    {
        cin >> n;
        string cmd[n+5];
        for (int j=0;j<=n;j++)
        {
            getline(cin, cmd[j]);
        }
        int dis=0;
        for (int j=1;j<=n;j++)
        {
            int rpt=j;
            while (cmd[rpt]!="LEFT"&&cmd[rpt]!="RIGHT")
            {
                rpt=int(cmd[rpt][8])-48;
                if (rpt<=0) break;
            }
            if (cmd[rpt]=="LEFT") dis--;
            if (cmd[rpt]=="RIGHT") dis++;
        }
        cout << dis << endl;
    }
}
/*/

/*/
