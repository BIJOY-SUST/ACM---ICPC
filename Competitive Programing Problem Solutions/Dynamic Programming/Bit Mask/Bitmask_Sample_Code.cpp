#include<bits/stdc++.h>
//#define pi             2*acos(0.0)
//#define valid(tx,ty)   tx>=0&&tx<r&&ty>=0&&ty<c
//#define p              pair<int,int>
//#define ll             long long int
//#define ull            unsigned long long int
//#define mx             100001
//#define mod            1000000007
//const int fx[]={+1,-1,+0,+0};
//const int fy[]={+0,+0,+1,-1};
//const int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};
//const int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};
//const int fx[]={-2,-2,-1,-1,+1,+1,+2,+2};
//const int fy[]={-1,+1,-2,+2,-2,+2,-1,+1};
int biton(int n,int pos){return n=n|(1<<pos);}
int bitoff(int n,int pos){return n=n&~(1<<pos);}
bool check(int n,int pos){return (bool)(n&(1<<pos));}
using namespace std;
int m;
int price[20][20];
int dp[(1<<15)+5];
int bit_mask(int p){
    if(p==(1<<m)-1) return 0;
    if(dp[p]!=-1) return dp[p];
    int ret1=1<<28;
    for(int i=0;i<m;i++){
        if(!check(p,i)){
            int w=price[i][i];
            for(int j=0;j<m;j++){
                if(i!=j&&check(p,j)) w+=price[i][j];
            }
//            cout<<"w "<<w<<endl;
            int ret2=w+bit_mask(biton(p,i));
//            cout<<p<<" "<<i<<" "<<ret2<<endl;
            ret1=min(ret1,ret2);
//            cout<<p<<" "<<i<<" "<<ret1<<endl;
        }
    }
//    cout<<"dp "<<p<<" "<<ret1<<endl;
    return dp[p]=ret1;
}
int main(){
//    freopen("Input.txt","r",stdin);
//    freopen("Output.txt","w",stdout);
    memset(dp,-1,sizeof(dp));
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&price[i][j]);
        }
    }
    int ans=bit_mask(0);
    printf("%d\n",ans);
    return 0;
}
/*
Input:
2
10 10
90 10
Output:
30
*/
