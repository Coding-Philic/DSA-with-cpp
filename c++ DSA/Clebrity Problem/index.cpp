#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int getCelebrity(vector<vector<int>> arr)
{
    stack<int> s;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        s.push(i);
    }
    int i;
    int j;
    while (s.size() > 1)
    {
        i = s.top();
        s.pop();
        j = s.top();
        s.pop();
        if (arr[i][j] == 0)
        {
            s.push(i);
        }
        else
        {
            s.push(j);
        }

    }
        int cleb = s.top();
        for (i = 0; i < n; i++)
        {
            if (i != cleb && (arr[i][cleb] == 0 || arr[cleb][i] == 1))
            {
                return -1;
            }
        }
        return cleb;
}

int main()
{
    vector<vector<int>> arr = {{0, 1, 0}, {0, 0, 0}, {0, 1, 0}};

    int ans = getCelebrity(arr);

    cout << "clebrity is : " << ans << endl;
    return 0;
}