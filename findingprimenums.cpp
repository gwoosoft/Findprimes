// ConsoleApplication12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>

using namespace std;





//let makes prime number count within a range 

int ctprime(int num) {
	vector<int> temp(num, 1);
	int sz = num;
	//1 is true and 0 is false 
	
	for (int p = 2; p*p<sz; p++){

			if (temp[p] == 1) {
				for (int i = p * p; i < sz; i += p) {
					temp[i] = 0;
				}
			}
		
	}

	int count = 0; 
	for (int p = 2; p < sz; p++) {
		if (temp[p] == 1) { cout << "p->" << p << endl; count++; }
	}
	return count;
}



int main()
{
	int num = 0;
	cout << "enter the number you want to see prime counts:" << endl;
	cin >> num;
	int count=ctprime(num);
	cout<<"the "<<num<<" has "<< count<<" numbers of prime within the range"<<endl;
}


