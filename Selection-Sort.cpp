#include<iostream>
using namespace std;

int main(){
	//header
	for(int r = 1; r <= 15; ++r){
		for(int i = 1; i <= 8; i+=1){
			cout << "=";
		}
	}
	cout << "\n\tS\tE\tL\tE\tC\tT\tI\tO\tN\t \tS\tO\tR\tT\n";
	for(int r = 1; r <= 15; ++r){
		for(int i = 1; i <= 8; i+=1){
			cout << "=";
		}
	}
	cout << "\n\n";
	//size of array
	int n;
	cout << "\n\nEnter storage size: ";
	cin >> n;
	int list[n];
	cout << "\n\n";
	//input of element
	for(int i = 0; i < n; i++){
		cout << "Enter element of index [" << i << "]: ";
		cin >> list[i];
	}
	//output of element
	cout << "\n\nUNSORTED LIST:\t";
	for(int i = 0; i < n; i++){
		cout << list[i] << "\t";
	}
	cout << "\n\n";
	//selection sort
	int min = list[0] , temp , a = 0;
	cout << endl << endl;
	for(int o = 0; o < n; o++){
		min = list[o];
		a = o;
		for(int i = o; i < n; i++){
			if(min > list[i]){
				for(int b = 0; b < n; ++b){
					cout << list[b] << "\t";
				}
				cout << "\tMINIMUM: " << min << endl;
				min = list[i];
				a = i;
			}
			
		}
		for(int b = 0; b < n; ++b){
			cout << list[b] << "\t";
		}
		cout << "\tMINIMUM: " << min << endl;
		temp = list[o];
		list[o] = min;
		list[a] = temp;
	}
	return 0;
}
