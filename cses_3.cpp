#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long int ll;

int main()
{
    string s;
    cin >> s;
    
    ll max = 1;
    ll temp = 0;
    for(ll i = 0; i < s.size()-1; i++)
    {
        if(s[i] == s[i+1])
       {
            max += 1;
            if(temp <= max)
                temp = max;  
       }
        else
            max = 1;
        
    }
    if (temp == 0) cout <<1<<endl;
    else cout << temp<<endl;
	
    return 0;
}