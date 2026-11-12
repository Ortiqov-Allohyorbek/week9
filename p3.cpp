#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int n;
    cin>>n;
    for (int i=1;i<=n;i++) {
        int a='A'+i-1;
        for (int j=0;j!=i;j++) {
            cout<<char (a-j);
        }
        cout<<endl;
    }
}