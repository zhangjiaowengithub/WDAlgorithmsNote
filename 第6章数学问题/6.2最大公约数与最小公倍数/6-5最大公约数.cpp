#include<iostream>

using namespace std;

int GCD(int a,int b) {
    if(b==0) {
        return a;
    } else {
        return GCD(b,a%b);
    }
}
int main() {
    int a,b;
    while(~(scanf("%d%d",&a,&b))) {
        cout<<GCD(a,b)<<endl;
    }
    return 0;
}
