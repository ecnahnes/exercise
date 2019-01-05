#include <iostream>
#include <iomanip>
#include <fstream>
#include <stdio.h>
#include <cstdio>
#include <vector>
#include <cstring>
#include <string>
#include <cmath>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
using namespace std;

#define fi(i, b, e) for(int i = b; i <= e; ++i)
#define fd(i, b, e) for(int i = b; i >= e; --i)
#define pb push_back
#define mp make_pair
#define INT_MAX 2147483647
#define all(x) x.begin(), x.end()

typedef unsigned long long ull;
typedef long long ll;
typedef double db;

int n;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	map<int, int> sockcount;
	fi(i, 1, 9)
	{
		int num;
		cin >> num;
		sockcount[num] += 1;
	}	
	ll sum = 0;
	for(auto it : sockcount)
	{
		sum += (ll)(it.second / 2);
	}
	cout << sum;
	return 0;
}