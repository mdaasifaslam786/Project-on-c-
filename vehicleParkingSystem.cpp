#include<iostream>
#include<conio.h>
using namespace std;
class vehicleParking{
private:
    int NB,NC,NA,NBU,total,amountB,amountA,amountC,amountBU;
public:
    vehicleParking(void){
        NB=NC=NA=NBU=total=amountB=amountC=amountA=amountBU=0;
    }
    void bikeParking(void){
        NB+=1;
        amountB+=50;
        total+=50;
    }
    void autoParking(void){
        NA+=1;
        amountA+=100;
        total+=100;
    }
    void carParking(void){
        NC+=1;
        amountC+=200;
        total+=200;
    }
    void busParking(void){
        NBU+=1;
        amountBU+=400;
        total+=400;
    }
    void showRecord(void){
        cout<<"***************************************\n";
        cout<<"Number of BIKE park + Amount:"<<NB<<"\t"<<amountB<<"\n";
        cout<<"Number of AUTO park + Amount:"<<NA<<"\t"<<amountA<<"\n";
        cout<<"Number of CAR park + Amount:"<<NC<<"\t"<<amountC<<"\n";
        cout<<"Number of BUS park + Amount:"<<NBU<<"\t"<<amountBU<<"\n";
        cout<<"Total amount:"<<total<<"\n";
        cout<<"**************************************\n";
    }
    void deleteRecord(void){
        cout<<"Are you really want to delete the the record.\n";
        cout<<"Press 1 for YES or 0 for NO.";
        bool sure;
        cin>>sure;
        if(sure){
            NB=NC=NA=NBU=total=0;
            cout<<"All Record deleted.\n";
        }
        else{
            cout<<"All records are still there.\n";
        }
    }
    ~vehicleParking(){

    }
};
int main(void){
    vehicleParking vp;
    int choice;
    do{
        cout<<"Press 1 to park BIKE.\n";
        cout<<"Press 2 to park AUTO.\n";
        cout<<"Press 3 to park CAR.\n";
        cout<<"Press 4 to park BUS.\n";
        cout<<"Press 5 to see all record.\n";
        cout<<"Press 6 to delete all record.\n";
        cout<<"Press 7 to exit.\n\n";
        cin>>choice;
        switch(choice){
            case 1:
                vp.bikeParking();
                break;
            case 2:
                vp.autoParking();
                break;
            case 3:
                vp.carParking();
                break;
            case 4:
                vp.busParking();
                break;
            case 5:
                vp.showRecord();
                break;
            case 6:
                vp.deleteRecord();
                break;
            case 7:
                break;
            default:
                cout<<"Enter correct choice.\n";
        }
    }while(choice!=7);
return 0;
}
