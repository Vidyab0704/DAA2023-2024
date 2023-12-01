//#include <bits/stdc++.h>

#include <iostream>
using namespace std;

// Returns true if there is a subset of set[] with sum equal to given sum

bool isSubsetSum(int set[], int n, int sum)
{

	if (sum == 0)
		return true;
	if (n == 0)
		return false;

	// If last element is greater than sum,then ignore it

	if (set[n - 1] > sum)
		return isSubsetSum(set, n - 1, sum);

	// Else, check if sum can be obtained by any of the following:

	// (a) including the last element
	// (b) excluding the last element

	return isSubsetSum(set, n - 1, sum)
		|| isSubsetSum(set, n - 1, sum - set[n - 1]);
}

int main()
{
    int m;
    cout<<"\n Enter the size of array :- \n";
    cin>>m;

	int set[m];
    cout<<"\n Enter the elements of set :- \n";
    for(int i=0;i<m;i++)
    cin>>set[i];

	int sum;
    cout<<"\nEnter the sum :- \n";
    cin>>sum;

	//int n= sizeof(set) / sizeof(set[0]);

	if (isSubsetSum(set, m, sum) == true)
		cout << "\n Found a subset with given sum \n";
	else
		cout << "\n No subset with given sum \n";
	return 0;

}
