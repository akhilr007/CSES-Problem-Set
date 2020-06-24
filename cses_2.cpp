// missing number

/*You are given all numbers between 1,2,…,n except one. Your task is to find the missing number.

Input

The first input line contains an integer n.

The second line contains n−1 numbers. Each number is distinct and between 1 and n (inclusive).

Output

Print the missing number.

Constraints
2≤n≤2⋅105
Example

Input:
5
2 3 1 5

Output:
4/**/

#include <iostream>
#include <unordered_set>
using namespace std;

typedef long long int lli;

int main()
{
	lli n;
	cin >> n;

	lli arr[n];

	unordered_set<int> s;
	for(lli i = 0; i < n-1; i++)
	{
		cin >> arr[i];
	}

	for(lli i = 0; i < n; i++)
		s.insert(i+1);

	for(lli i = 0; i < n; i++)
	{
		if(s.find(arr[i]) != s.end())
			s.erase(arr[i]);
	}

	auto it = s.begin();
	cout << *it;
	return 0;
}