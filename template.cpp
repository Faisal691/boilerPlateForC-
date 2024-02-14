#include<bits/stdc++.h>
using namespace std;
#define endl '\n'


vector<int> freqArr(vector<int> v)
{
    int max = *max_element(v.begin(),v.end());
    vector<int> res(max+1);
    for(int i=0;i<v.size();i++)
    {
        res[v[i]]++;
    }
    
    return res;
}

int toBinary(int n){
  int ans = 0,p = 1;
  while(n>0)
  {
    int lastBit = n&1;
    ans+=lastBit*p;
    p*=10;
    n = n>>1;
  } 

  return ans;
}

void solve(){
	// vector<int> freq = freqArr(v); // To calculate Frequency Array.
	
	 // toBinary(n); // decimal to binary
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);  cout.tie(0);
	
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		solve();
	}
	
	return 0;
}
