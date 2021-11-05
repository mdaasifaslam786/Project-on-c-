#include<iostream>
#include<windows.h>
using namespace std;
class clock{
private:
    int h,m,s,err,a;
public:
    clock(void){
        h=m=s=err=a=0;
    }
    void setDisplayTime(void){
        while(err==0){
            cout<<"Enter hour:";
            cin>>h;
            cout<<"Enter minute:";
            cin>>m;
            cout<<"Enter second:";
            cin>>s;
            if(h<=24&&m<60&&s<60){
                err++;
            }
            else{
                cout<<"you have put wrong time.\n";
                system("cls");
            }
        }
        while(a==0){
            system("cls");
            cout<<h<<":"<<m<<":"<<s<<"\n";
            Sleep(1000);
            s++;
            if(s>59){
                m++;
                s=0;
            }
            if(m>59){
                h++;
                m=0;
            }
            if(h>24){
                h=1;
            }
        }
    }
};
int main(void){
clock cl;
    cl.setDisplayTime();
return 0;
}

