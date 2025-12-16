#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    vector<int> cases(t + 1);
    for (int i = 1; i <= t; i++)
    {
        cin >> cases[i];
    }

	int max_case = *max_element(cases.begin(), cases.end());

    vector<int> dp(max_case + 1);
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;
    for (int i = 3; i <= max_case; i++)
    {
        dp[i] = dp[i] + dp[i - 1] % 1000000009;
        dp[i] %= 1000000009;
        dp[i] = dp[i] + dp[i - 2] % 1000000009;
        dp[i] %= 1000000009;
        dp[i] = dp[i] + dp[i - 3] % 1000000009;
		dp[i] %= 1000000009;
    }

	for (int i = 1; i <= t; i++)
	{
		cout << dp[cases[i]] << "\n";
	}

    return 0;
}