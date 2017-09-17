#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

string solve(vector<vector<long long> > M, int n)
{
    vector<long long> sum_col(n,0),sum_row(n,0);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                sum_col[i]+=M[i][j];
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                sum_row[i]+=M[j][i];
            }
        }
        sort(sum_col.begin(),sum_col.end());
        sort(sum_row.begin(),sum_row.end());

        if(sum_col==sum_row)
            return "Possible";
        else return "Impossible";
}

int main()
{
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        vector<vector<long long> > matrix(n, vector<long long>(n, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int num;
                cin >> num;
                matrix[i][j] = num;
            }
        }
        cout << solve(matrix, n) << endl;
    }

    return 0;
}
