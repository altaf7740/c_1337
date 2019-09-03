#include"iostream"
#include"stdio.h"
#include"string.h"
using  namespace std;
class l337{
    char str[100];
    public:
    l337(){
        cout<<"enter text : ";
        scanf(" %[^\n]", str);
    }
    void kk();
};
void l337::kk(){
    for(int i=0;i<=strlen(str);++i){
    if(str[i]=='a'||str[i]=='A')
    cout<<"/-\\";
    else if(str[i]=='b'||str[i]=='B')
    cout<<"8";
    else if(str[i]=='c'||str[i]=='C')
    cout<<"(";
    else if(str[i]=='d'||str[i]=='D')
    cout<<"|)";
    else if(str[i]=='e'||str[i]=='E')
    cout<<"3";
    else if(str[i]=='f'||str[i]=='F')
    cout<<"|=";
    else if(str[i]=='g'||str[i]=='G')
    cout<<"6";
    else if(str[i]=='h'||str[i]=='H')
    cout<<"}{";
    else if(str[i]=='i'||str[i]=='I')
    cout<<"!";
    else if(str[i]=='j'||str[i]=='J')
    cout<<"9";
    else if(str[i]=='k'||str[i]=='K')
    cout<<"|<";
    else if(str[i]=='l'||str[i]=='L')
    cout<<"1";
    else if(str[i]=='m'||str[i]=='M')
    cout<<"|v|";
    else if(str[i]=='n'||str[i]=='N')
    cout<<"|/|";
    else if(str[i]=='o'||str[i]=='O')
    cout<<"0";
    else if(str[i]=='p'||str[i]=='P')
    cout<<"|*";
    else if(str[i]=='q'||str[i]=='Q')
    cout<<"0,";
    else if(str[i]=='r'||str[i]=='R')
    cout<<"|2";
    else if(str[i]=='s'||str[i]=='S')
    cout<<"5";
    else if(str[i]=='t'||str[i]=='T')
    cout<<"7";
    else if(str[i]=='u'||str[i]=='U')
    cout<<"|_|";
    else if(str[i]=='v'||str[i]=='V')
    cout<<"|/";
    else if(str[i]=='w'||str[i]=='W')
    cout<<"|/|/";
    else if(str[i]=='x'||str[i]=='X')
    cout<<"><";
    else if(str[i]=='y'||str[i]=='Y')
    cout<<"`/";
    else if(str[i]=='z'||str[i]=='Z')
    cout<<"2";
    else
    cout<<str[i];
    }cout<<endl;
}
int main(){
    l337 lol;
    lol.kk();
    return 0;
 };
