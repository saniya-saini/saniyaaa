#include <iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    if (a&2==0){
        cout <<"Even";}
        else{
            cout <<"Odd";
        }
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int a,i;
    cin>>a;
    int flag=1;
    if (a<=10){
        flag=0;
    }
    else{
    for (i=2;i<a;i++){
        if (a%i==0){
            flag=0;
            break;
        }
           }
        }
        if (flag){
            cout<<"Prime";}
            else{
                cout<<"Not Prime";
            }
        }



