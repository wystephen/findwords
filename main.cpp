#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;
ifstream in("D:\\findwords\\dic.txt");
ofstream out("D:\\findwords\\out.txt");

int main()
{
    cout << "Hello World!" << endl;
    cout << in.is_open()<<endl;
    while(!in.eof())
    {
    char *line = new char[50];
    in.getline(line,50);
    int i(0);
    for( i=0;i<50;i++)
    {
        if(line[i] == '\0') break;
        if(line[i] >= 'A' && line[i] <= 'Z')
        {
            line[i]= 'a' + line[i]-'A';
        }

    }
    int sum(0);
    for(;i>0;i--)
    {
        if(line[i] >='a' && line[i] <='z')
        sum+=(line[i]-'a'+1);
    }
    //string k;




    if(sum == 100)
    {cout <<sum;
        printf("%s",line);
        cout <<endl;

        out.write(line,49);
    }

    }
    //string p=in.getline();
    //cout << p <<endl;
    return 0;
}

