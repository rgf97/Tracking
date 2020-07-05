#include <bits/stdc++.h>
#include <vector>

using namespace std;

int max_sub(vector<int> v);

int main()
{
    vector<int> v{-1, 2, 4, -3, 5, 2, -5, 2};
    int r = max_sub(v);
    cout << r << "\n";
    return 0;
}

int max_sub(vector<int> v)
{   
    int ma = 0, sum = 0;
    int n = v.size();
    for(int i=0; i<n; i++){
        sum = max(v[i], sum + v[i]);
        ma = max(ma, sum);
    }
    return ma;
}



