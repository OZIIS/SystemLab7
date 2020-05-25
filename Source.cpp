long double fact(int N)
{
	if (N < 0) 
		return 0; 
	if (N == 0)
		return 1; 
	else 
		return N * fact(N - 1); 
}
float example(int x,int n) {
	float y;
	float temp = 0;
	for (int i=0; i < n; i++) {
		y=((-1) ^ i) * (x ^ (2 * i + 1)) / fact(2 * i + 1);
		temp = temp + y;
}
	return temp;
}
#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	cout << example(5,3);
	return 0;
}