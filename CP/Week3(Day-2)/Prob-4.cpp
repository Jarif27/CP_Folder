#include <iostream>
#include <string>
#include <list>
#include <unordered_set>

using namespace std;

string alt_tab_order(int n, const list<string>& programs) 
{
    list<string> program_order;
    unordered_set<string> active_programs;

    
    for (list<string>::const_iterator it = programs.begin(); it != programs.end(); ++it) 
    {
        string program = *it;
        
        
        if (active_programs.count(program)) 
        
        {
            program_order.remove(program);
        } 
        
        else 
        
        {
            active_programs.insert(program);
        }
        program_order.push_front(program);
    }

   
    string result;
    for (list<string>::const_iterator it = program_order.begin(); it != program_order.end(); ++it) 
    {
        string program = *it;
        result += program.substr(program.size() - 2);
    }

    return result;
}

int main() 
{
    int n;
    cin >> n;
    list<string> programs;

    for (int i = 0; i < n; ++i) 
    {
        string program;
        cin >> program;
        programs.push_back(program);
    }

    string output = alt_tab_order(n, programs);
    cout << output << endl;

    return 0;
}
