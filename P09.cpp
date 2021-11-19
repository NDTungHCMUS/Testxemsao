// <21125171>
// <Nguyễn Đình Tùng>
// <21CTT1>
// Test case 1
// Input: 2
// Output: 2
// Test case 2
// Input: 3 
// Output: 6 
// Test case 3
// Input: 4
// Output: 24
#include<iostream>
#include"MyFunction.h"
using namespace std;
int main() {
	int n;
	cout << "The purpose of this program is finding the product of the number from 1 to n"<<endl;
	cout << "Please input n: ";
	cin >> n;
	cout << "The product is: " << product(n) << endl;
	return 0;
}