#include <iostream>
#include <vector>

using namespace std;


vector<int> res, wt, c;
vector<vector<int>> dp;

void path(int i, int j) {
    if (dp[i][j] == 0)
        return;
    if (dp[i - 1][j]  == dp[i][j] )
        path(i - 1, j);
    else{
        path(i - 1, j - wt[i]);
        res.push_back(i);
    }
}

int main() {

    wt.push_back(0);
    c.push_back(0);

    int n, W;
    cin >> n >> W;

    for (int i = 0; i < n; ++i) {
        int j;
        cin >> j;
        wt.push_back(j);
    }

    for (int i = 0; i < n; ++i) {
        int j;
        cin >> j;
        c.push_back(j);
    }


    for (int i = 0; i < n + 1; ++i) {
        vector<int> v;
        for (int j = 0; j < W + 1; ++j)
            v.push_back(0);
        dp.push_back(v);
    }

    for (int i = 1; i < n + 1; i++){
        for (int j = 1; j < W + 1; j++){
            if (j >= wt[i]) {
                if (dp[i - 1][j - wt[i]] + c[i] < dp[i - 1][j])
                    dp[i][j] = dp[i - 1][j];
                else
                    dp[i][j] = dp[i - 1][j - wt[i]] + c[i];
            }
            else
                dp[i][j] = dp[i - 1][j];
        }
    }

    path(n, W);

    cout << res.size() << "\n";
    for (int i = 0; i < res.size(); ++i)
        cout << res[i] <<" ";
}