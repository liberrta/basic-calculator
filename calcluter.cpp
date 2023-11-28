#include <iostream>
using namespace std;
int main(){
    float a,b;
    char Operator;
    cout<<"Please, Enter your first number:";
    cin>>a;
    cout<<"So, Enter your second number:";
    cin>>b;
    cout<<"Now, Enter your operator between +,-,*,/ :";
    cin>>Operator;
    switch (Operator)
    {
    case '+' :
        cout<<"= "<<a+b<<endl;
        break;
    case '-':
        cout<<"= "<<a-b<<endl;
        break;
    case '*':
        cout<<"= "<<a*b<<endl;
        break;
    case '/':
        cout<<"= "<<a/b<<endl;
        break;
    default:
        cout<<"Sorry, your operator is not define:<";
    }
    return 0;
}