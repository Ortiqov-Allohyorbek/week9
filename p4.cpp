#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
long long checkpower(int n) {
    int d=floor(log2(n));
    return d;
}
void printLucky(int n) {
    int d=1,c=0;
    int p=checkpower(n);
    for (int i=0;i<p;i++) {
        n-=d;
        d*=2;
    }
    cout<<n;
    n=n+1;
    while (p>0) {
        c=n-pow(2,p-1);
        if (c<=0) {
            cout<<4;
            p--;
        }
        else {
            cout<<7;
            p--;
            n=n-pow(2,p);
        }
    }
}
int main() {
    int n;
    cin>>n;
    printLucky(n);
}
