#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, maxDay;
    cin >> n >> maxDay;
    
    vector<int> minT(n), maxT(n);
    int sumMin = 0, sumMax = 0;
    
    for(int i = 0; i < n; i++){
        cin >> minT[i] >> maxT[i];
        sumMin += minT[i];
        sumMax += maxT[i];
    }
    
    if(sumMin > maxDay || sumMax < maxDay){
        cout << "NO" << endl;
        return 0;
    }
    
    cout << "YES" << endl;
    int extra = maxDay - sumMin;
    
    for(int i = 0; i < n; i++){
        int add = min(extra, maxT[i] - minT[i]);
        cout << minT[i] + add;
        extra -= add;
        if(i < n-1) cout << " ";
    }
    cout << endl;
    
    return 0;
}
