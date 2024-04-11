#include<iostream>""
#include<random>
#include<vector>
#include<String>

using namespace std;

vector<string> sentence;
string scramble(string word);
string uInput;
string word = "";
int i = 0;

int main() {

	cout << "Enter Text: ";
	getline(cin, uInput);
	for (const auto& i : uInput) {
		if (i != ' ') {
			word += i;
		}
		else {
			cout << scramble(word) << " ";
			word = "";
		}
	}
	cout << scramble(word) << " ";
	word = "";

	return 0;
}

string scramble(string word) {
	srand(time(0));
	int stringLength = word.length();
	int prepStringLength = stringLength - 2;

	if (stringLength > 3) {
		int randIndex1 = rand() % prepStringLength + 1;
		int randIndex2 = rand() % prepStringLength + 1;
		char placeHolder = word[randIndex1];
		while (randIndex1 == randIndex2) {
			randIndex2 = rand() % prepStringLength + 1;
			cout << "bruh";
		}
		word[randIndex1] = word[randIndex2];
		word[randIndex2] = placeHolder;
		return word; 
	}
	
	return word;
}