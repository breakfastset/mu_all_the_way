#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    // argc is the number of arguments
    // argv is a array of C-strings

    cout << "There are " << argc << " arguments." << endl;
    for(int i = 0; i < argc ; i++)
    {
        cout << "argv[" << i << "]: " << argv[i] << endl;
    }

    return 0;
}