#include <bits/stdc++.h>

using namespace std;

vector<int> bubble_sort(vector<int> v);

int main()
{   
    vector<int> v {4, 2, 6, 4, 7, 9, -1, -6, 14, 4, 1};
    v = bubble_sort(v);
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    return 0;
}

vector<int> bubble_sort(vector<int> v)
{   
    int n = v.size();
    for(int i=0; i<n-1; i++){
        for(int j=i; j<n; j++){
            if(v[i] > v[j]){
                int tmp = v[i];
                v[i] = v[j];
                v[j] = tmp;
            }
        }
    }
    return v;
}