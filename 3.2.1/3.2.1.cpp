#include <iostream>
using namespace std;

int main()
{
    int count = 0;

    for (char letter = 'A'; letter <= 'Z'; letter++)
    {
        count++;
        cout << letter<<"="<<count << endl;
        
        
    }
}
