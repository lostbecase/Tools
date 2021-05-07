#include<iostream>
#include<unistd.h>
#include<string>
using namespace std;
int main(int nArgs_, char* Args_[])
{
    int ch = 0;
    while((ch = getopt(nArgs_,Args_,"ab:c::"))!= -1)
    {
        switch(ch)
        {
            case 'a':
            {
                cout<<"Detected!!!"<<endl
                    <<"Option: a"<<endl
                    <<"Argument:"<<string(optarg)<<endl;
                break;
            }
            case 'b':
            {
                cout<<"Detected!!!"<<endl
                    <<"Option: b"<<endl
                    <<"Argument:"<<string(optarg)<<endl;
                break;
            }
            case 'c':
            {
                cout<<"Detected!!!"<<endl
                    <<"Option: c"<<endl
                    <<"Argument:"<<string(optarg)<<endl;
                break;
            }
            default:
            break;
        }
    }

    cout<<"Finish!!!"<<endl;
    
    return 0;
}