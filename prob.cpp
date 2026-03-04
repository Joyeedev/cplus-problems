#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
   string s=to_string(n);
   for(int i=s.length()-1;i>=0;i--)

    {
        char d=s[i];
        switch (d)
        {
        case '0':cout<<"O-|-OOOO\n";break;
         case '1':cout<<"O-|O-OOO\n";break;
          case '2':cout<<"O-|OO-OO\n";break;
           case '3':cout<<"O-|OOO-O\n";break;
            case '4':cout<<"O-|OOOO-\n";break;
             case '5':cout<<"-O|-OOOO\n";break;
              case '6':cout<<"-O|O-OOO\n";break;
               case '7':cout<<"-O|OO-OO\n";break;
                case '8':cout<<"-O|OOO-O\n";break;
                 case '9':cout<<"-O|OOOO-\n";break;
        }
    }
    return 0;
    
}