#include<bits/stdc++.h>
using namespace std;
bool flag[101][101];
map<int,int>_no;
map<int,int>_time;
set<int>v;
class contest{
public:
    int iid;
    int score;
    int solve;
};
bool compare(contest a,contest b){
    if(a.solve==b.solve){
        return a.score<b.score;
    }
    else return a.solve>b.solve;
}
int main(){
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int T;
    int z=0;
    stringstream ss;
    string s;
    cin>>T;
    while(T--){
        getchar();
        getchar();
        memset(flag,false,sizeof(flag));
        contest ob[101];
        while(getline(cin,s)){
            if(s.empty()) break;
            int id,no,time;
            char ch;
            ss.clear();
            ss<<s;
            ss>>id>>no>>time>>ch;
            v.insert(id);
            if(ch=='C'&&flag[id][no]==false){
                _no[id]++;
                _time[id]+=time;
                flag[id][no]=true;
            }
            else if(ch=='I'&&flag[id][no]==false){
                _time[id]+=20;
            }
        }
        int h=0;
        for(__typeof(v.begin()) it=v.begin();it!=v.end();it++){
            //cout<<*it<<" "<<_no[*it]<<" "<<_time[*it]<<'\n';
            ob[h].iid=*it;
            ob[h].solve=_no[*it];
            ob[h].score=_time[*it];
            h++;
        }
        sort(ob,ob+h,compare);
        if(z) cout<<'\n';
        z=1;
        for(int i=0;i<h;i++){
            cout<<ob[i].iid<<" "<<ob[i].solve<<" "<<ob[i].score<<'\n';
        }
        _no.clear();
        _time.clear();
        v.clear();
    }
    return 0;
}


