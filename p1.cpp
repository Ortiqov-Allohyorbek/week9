#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int n,mul=1,big=1;
    cin>>n;
    while (n>0) {
        int d=n%10;
        if (d==0) {
            n=n/10;
            continue;
        }
        else mul*=d;
        big=max(d,big);
        n/=10;
    }
    cout<<mul<<" "<<big;
}