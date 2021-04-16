#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    
    srand(time(NULL));
    ll n;
    cin>>n;
    ll a[n];
    //getting random array
    for (int i = 0; i < n; ++i)
    {    
        a[i]=rand()%100;
    }
    cout<<"Randomized Array:\n";
    for (int i = 0; i < n; ++i)
    {
        cout<<a[i]<<" ";
    }

    priority_queue<ll> q;
    for (int i = 0; i < n; ++i)
    {   
        //for reversing the priority queue to ascending order
        q.push(-1*a[i]);
    }
    ll ans=0;
    while(!q.empty())
    {   
        ll x=-1*q.top();
        q.pop();
        if(q.empty())
            break;
        ll y=-1*q.top();
        q.pop();
 
        ans+=x+y;
        q.push(  -1*(x+y) );

    }
    cout<<"\nTotal computation time:"<<ans;

    return 0;
}
