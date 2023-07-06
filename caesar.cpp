#include <iostream>
#include <string>
using namespace std;
char caesar(char);
int main()
{
    string input;
     
    do
    
    {
        cout << "Enter text." << endl;
        getline(cin, input);
        string output = "";
        for (int x = 0; x < input.length(); x++)
        {
            output += caesar(input[x]);
        }
        cout << output << endl;
    }
    while (!input.length() == 0);
}
 
char caesar(char c)
{
int count=0;
int n;
if(count==0){
    cout<<"enter the value of n "<<endl;
    cin>>n;
    count+=1;
}
    if (isalpha(c))
    {
        c = toupper(c); 
        c = (((c - 65) + n) % 26) + 65;
    }
    return c;
}