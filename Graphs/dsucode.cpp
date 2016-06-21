#include <bits/stdc++.h>
using namespace std;
const int N=200004;
int n,m,d[N],w[N];
multiset <int> S;

int input(){
    scanf("%d%d",&n,&m);
    for (int i=1;i<=n;i++)
        scanf("%d",&w[i]);
    return 0;
}

int dsu(int x){
    return d[x] = ( x==d[x] ? x : dsu(d[x]) );
}

int sol(){

    for (int i=1;i<=n;i++)
        d[i]=i,
        S.insert(w[i]);

    int a,b;

    while (m--)
    {
        scanf("%d%d",&a,&b);
        a=dsu(a);
        b=dsu(b);
        if (a!=b)
        {
            S.erase(S.find(w[a]));
            S.erase(S.find(w[b]));
            w[a]+=w[b];
            w[b]=0;
            S.insert(w[a]);
            d[b]=a;
        }
        for (int i=1;i<=n;i++)
            cout<<d[i]<<" ";
        printf("%d\n",*S.begin());
    }

    return 0;
}
int main() {
    input();
    sol();
    return 0;
}