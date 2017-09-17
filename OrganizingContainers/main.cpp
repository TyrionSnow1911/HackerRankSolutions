#include <iostream>
#include <vector>
#include <string>

using namespace std;


void printMatrix(vector<vector<int> > matrix, int n) {

    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            cout<<matrix[i][j]<<" ";
        }
        cout<<"\n";
    }
}


int main()
{
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        vector<vector<int> > matrix(2, vector<int>(2, 0));
        for (int i=0;i<n;i++){
            for (int j=0;j<n;j++) {
                int num; cin>>num;
                matrix[i][j] = num;
            }
        }
        printMatrix(matrix, n);
    }


    return 0;
}
