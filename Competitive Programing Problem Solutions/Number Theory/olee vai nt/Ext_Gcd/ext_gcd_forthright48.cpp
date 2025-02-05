#include<bits/stdc++.h>
using namespace std;
int ext_gcd ( int A, int B, int *X, int *Y ){
    int x2, y2, x1, y1, x, y, r2, r1, q, r;
    x2 = 1; y2 = 0;
    x1 = 0; y1 = 1;
    for (r2 = A, r1 = B; r1 != 0; r2 = r1, r1 = r, x2 = x1, y2 = y1, x1 = x, y1 = y ) {
        q = r2 / r1;
        r = r2 % r1;
        x = x2 - (q * x1);
        y = y2 - (q * y1);
    }
    *X = x2; *Y = y2;
    return r2;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,x,y;
    cin>>a>>b;
    int ans=ext_gcd(a,b,&x,&y);
    printf("gcd(%d, %d) = %d, x = %d, y= %d",a,b,ans,x,y);
    return 0;
}
