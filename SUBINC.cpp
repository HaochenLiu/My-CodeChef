#include <iostream>
#include <math.h>
#include <string>
#include <set>
#include <map>
#include <unordered_map>
#include <vector>
#include <functional>
#include <numeric>
#include <algorithm>

using namespace std;

int A[100000];

int main() {
    int T;
    cin>>T;
    while(T--) {
        int N;
        cin>>N;
        for(int i = 0; i < N; i++) {
            cin>>A[i];
        }
        long long res = 0;
        long long cur = 1;
        for(int i = 0; i < N; i++) {
            if(i < N - 1 && A[i] < A[i + 1]) {
                cur++;
            } else {
                res += (cur * (cur + 1) / 2);
                cur = 1;
            }
        }
        cout<<res<<endl;
    }

    return 0; 
}
