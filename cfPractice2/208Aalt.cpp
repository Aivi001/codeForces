#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string s;
    cin >> s;

    vector<string> words;
    size_t start = 0;
    while (true)
    {
        size_t end = s.find("WUB", start);
        if (end == string::npos)
        {
            cout<<"START "<<start<<"END "<<end<<"\n";
          cout<<"findend ==end\t"<<s.substr(start, end)<<"\n";
            words.push_back(s.substr(start, end));
            break;
        }
        if (end != start)
        {cout<<"START "<<start<<"END "<<end<<"\n";
          cout<<"findend !=end\t"<<s.substr(start, end-start)<<"\n";
            words.push_back(s.substr(start, end - start));
        }
        start = end + 3;
    }
    cout<<"Exit while\n";

    if (!words.empty())
    {
        cout << words[0];
    }
    for (size_t i = 1; i < words.size(); ++i)
    {
        cout << " " << words[i];
    }
    cout << endl;

    return 0;
}
