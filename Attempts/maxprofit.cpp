#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        int B[n];
        for(int i=0; i<n; i++) {
            cin >> B[i];
        }
        sort(B, B+(sizeof(B) / sizeof(B[0])));
        int result = 0;
        for(int i = 0; i<n; i++) {
            if(result<B[i]*(n-i)){
                result=B[i]*(n-i);
            }
        }
        cout << result<<endl;
    }
    return 0;
}