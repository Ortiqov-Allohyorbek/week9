#include <iostream>
#include <iomanip>
using namespace std;
bool ip(int n) {
    int in=0,d=0;
    int orin=n;
    if (n<10) return true;
    while (n>0) {
        d=n%10;
        in=in*10+d;
        n/=10;
    }
    if (orin==in) return true;
    else return false;
}
int main() {
    int n,s=0;
    cin>>n;
    for (int i=1;i<=n;i++) {
        if (ip(i)) {
            s+=i;
        }
    }
    cout<<s;
}