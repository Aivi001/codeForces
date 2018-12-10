#include <bits/stdc++.h>
using namespace std;

int main() {
	int i;
	string s;
	vector<string> refs;
	vector<string> biblio;
	map<string, string> M;
	int pos,posMinus;
	while (getline(cin, s)) {
		bool inside = false;
		bool cite = false;
		string current;
		if (s.find("{thebibliography") != string::npos) {
			continue;
		}
		for (int i = 0; i < (int)s.length(); ++i) {
			if (s[i] == '{') {
				if (s[i - 1] == 'e') {
					cite = true;
				} else {
					cite = false;
				}
				current = "";
				inside = true;
			} else if (s[i] == '}') {
				if (cite) {
					refs.push_back(current);
				} else {
					biblio.push_back(current);
					M[current] = s;
				}
				inside = false;
			} else if (inside) {
				current += s[i];
			}
		}
		/*
		doesn't work: gives RTE, maybe because of getline 
		
		bool cite = false;
		string current;
		if (s.find("{thebibliography") != string::npos) {
			continue;
		}
		
		if(s.find('{')!=string::npos)
			pos=s.find('{');
		if(s[pos-1]=='e')
			cite=true;
		posMinus=s.find('}');
		current=s.substr(pos+1,posMinus-pos-1);

		if(cite)
			refs.push_back(current);
		else
		{
			biblio.push_back(current);
			M[current]=s;
		}*/
	}

	if (refs == biblio) {
		cout << "Correct\n";
	} else {
		cout << "Incorrect\n";
		cout << "\\begin{thebibliography}{99}\n";
		for (auto s : refs) {
			cout << M[s] << "\n";
		}
		cout << "\\end{thebibliography}\n";
	}

	return 0;
}