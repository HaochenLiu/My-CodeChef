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

int max(int a, int b) {
    if(a > b) return a;
    return b;
}

int A[2000];

int main() {
    int T;
    cin>>T;
    while(T--) {
        int N;
        cin>>N;
        string correct;
        string answer;
        cin>>correct>>answer;
        int cnt = 0;
        for(int i = 0; i < N; i++) {
            if(correct[i] == answer[i]) {
                cnt++;
            }
        }
        cin>>A[0];
        int res = A[0];
        for(int i = 1; i < N + 1; i++) {
            cin>>A[i];
            if(i <= cnt) {
                res = max(res, A[i]);
            }
        }
        if(cnt == N) {
            cout<<A[N]<<endl;
        } else {
            cout<<res<<endl;
        }
    }

    return 0; 
}
