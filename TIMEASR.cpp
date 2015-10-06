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

int main() {
    int T;
    cin>>T;
    while(T--) {
        double A;
        cin>>A;
        for(int i = 0; i < 12; i++) {
            for(int j = 0; j < 60; j++) {
                if(abs((abs(30 * i - 5.5 * (double)j) - A)) < (double)1 / (double)120 ||
                abs((abs(30 * i - 5.5 * (double)j - 360) - A)) < (double)1 / (double)120 || 
                abs((abs(30 * i - 5.5 * (double)j + 360) - A)) < (double)1 / (double)120) {
                    if(i < 10) {
                        cout<<"0";
                    }
                    cout<<i;
                    cout<<":";
                    if(j < 10) {
                        cout<<"0";
                    }
                    cout<<j<<endl;
                }
            }
        }
    }

    return 0; 
}
