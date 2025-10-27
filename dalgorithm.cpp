#include<iostream>
#include<string>
#include<fstream>
#include<chrono>

using namespace std;

bool verifyPassword(const string &attempt){
	const string correctPassword = "apple123";
	return attempt == correctPassword;
}
int main(){
	
	ifstream wordlist("wordlist.txt");
	auto start = chrono::high_resolution_clock::now();
	
	if(!wordlist){
		cerr<<"Error: Could not open wordlist.txt\n";
		return 1;
	}
	
	string word;
	bool found = false;
	int attempts = 0;
	
	while(getline(wordlist, word)){
		attempts++;
		if(verifyPassword(word)){
			found = true;
			break;
		}
	}
	if(!found){
		cout<<"Password not found in dictionary.\n";
	}
	
	auto end = chrono::high_resolution_clock::now();
	auto duration = chrono::duration_cast<chrono::milliseconds>(end - start);
	cout << "Time elapsed: " << duration.count() << " ms" << endl;
	cout << "Attempts per second: " << (attempts * 1000.0) / duration.count() <<endl;
	
	return 0;
	
}