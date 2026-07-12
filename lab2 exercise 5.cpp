#include<iostream>
#include<iomanip>
using namespace std;
    int main (){
    	string name;
    	int score1, score2, score3;
    	float average;
    	
    	cout << "Enter student's name: ";
    	getline(cin, name);
    	cout << "Enter first test score: ";
    	cin >> score1;
    	cout << "Enter second test score: ";
    	cin >> score2;
    	cout << "Enter third test score: ";
    	cin >> score3;
    	
    	average = (score1 + score2 + score3) / 3.0;
    	
	    cout << fixed << setprecision(2);
    	cout << "student: " << name << endl;
    	cout << "average score: " << average << endl;
    	
    	return 0;
	}
