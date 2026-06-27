#include<iostream>
#include<string>
using namespace std;

int main()
{
    long long roll_no;
    cout<<"enter university roll number of the student: ";
    cin>>roll_no;
    cin.ignore();
    string name;
    cout<<"enter full name of the student: ";
    getline(cin,name);
    float maths,ss,pps,elec,phy,chem,evs,total,perc;
    cout<<"enter marks obtained out of 100 in the following subjects: "<<endl;
    cout<<"MATHEMATICS: ";
    cin>>maths;
    cout<<"SOFT SKILLS: ";
    cin>>ss;
    cout<<"PROGRAMMING FOR PROBLEM SOLVING: ";
    cin>>pps;
    cout<<"ELECTRICAL ENGINEERING: ";
    cin>>elec;
    cout<<"PHYSICS: ";
    cin>>phy;
    cout<<"CHEMISTRY: ";
    cin>>chem;
    cout<<"ENVIRONMENTAL STUDIES: ";
    cin>>evs;

    cout<<"\t\tMARKSHEET"<<endl;
    cout<<"\tB.TECH 1ST YEAR"<<endl;
    cout<<"ROLL NO.: "<<roll_no<<endl;
    cout<<"NAME: "<<name<<endl;
    cout<<"MARKS OBTAINED:\n";
    cout<<"MATHEMATICS: "<<maths<<endl;
    cout<<"SOFT SKILLS: "<<ss<<endl;
    cout<<"PROGRAMMING FOR PROBLEM SOLVING: "<<pps<<endl;
    cout<<"ELECTRICAL ENGINEERING: "<<elec<<endl;
    cout<<"PHYSICS: "<<phy<<endl;
    cout<<"CHEMISTRY: "<<chem<<endl;
    cout<<"ENVIRONMENTAL STUDIES: "<<evs<<endl;
    total=maths+ss+pps+elec+phy+chem+evs;
    cout<<"\nTOTAL MAKRS = "<<total<<"/700"<<endl;
    cout<<"PERCENTAGE OBTAINED = "<<total/7<<endl;
}