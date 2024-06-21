#include <iostream>
using namespace std;

int main (){
	int name[9], sum, avg;
	
	for(int a = 0; a < 9; a++){
		cout << "Enter Grade : ";
		cin >> name[a];
		}
		
		cout << "-----AVERAGE-----" << endl;
		for(int a = 0; a <= 8; a++){
			cout << name[a] << " ";
			sum += name[a];
			}
			cout << endl;
			avg = sum / 9;
			
			cout << "The average grade is: " << avg << endl;
	}