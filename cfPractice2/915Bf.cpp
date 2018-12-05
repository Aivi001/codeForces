#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>
#include <cstring>
using namespace std;
int main()
{
	int n,pos,l,r;
	cin>>n>>pos>>l>>r;
	if(l==1 and r==n)
	{
		cout<<0;
		return 0;
	}
	else
	{
		if(pos==r)
		{
			if(l==1)
			{
				cout<<1;
				return 0;
			}
		}
		if(l!=1 and r!=n)
		{
			cout<<abs(pos-l)+1+r-l+1;
		}
		if(l==1)
		{
			cout<<abs(r-pos)+1;
		}
		if(r==n)
		{
			cout<<abs(l-pos)+1;
		}
	}
	return 0;
}
