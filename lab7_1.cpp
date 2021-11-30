#include<iostream>
#include<string>

using namespace std;

string reverseText(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string func2(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

string func3(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += tolower(x[i]);
		i++;
	}
	return y;	
}

int main()
{
	string text1;
    	cout << "Input text: ";
		cin >> text1;
    	cout << "Reversed text: " << reverseText(text1);

			if(func3(text1) == reverseText(func3(text1)))
			{
				cout << "\nPalindrome: Yes";	
			}else{
				cout << "\nPalindrome: No";
			}
    return 0;
}
