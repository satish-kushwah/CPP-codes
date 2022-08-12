#include <iostream>
#include <queue>
using namespace std;

class Patient{
    // Access specifier
    public:
    // Data Members
    string fname;
    string lname;
    string insurancetype;
    string ssn;
    string address;
    string dateofvisit;
};

queue<Patient> p;

void enqueue(){
    Patient pt;
    cout << "Please enter Patient First Name: ";
    cin >> pt.fname;
    cout << "Please enter Patient Last Name: ";
    cin >> pt.lname;
    cout << "Please enter Patient insurance type: ";
    cin >> pt.insurancetype;
    cout << "Please enter Patient SSN: ";
    cin >> pt.ssn;
    cout << "Please enter Patient Address: ";
    // cin >> pt.address;
    getchar(); //to consume previous \n
    getline(cin,pt.address);
    cout << "Please enter Patient Date of Visit: ";
    cin >> pt.dateofvisit;
    p.push(pt);
}
Patient dequeue(){
    Patient pr;
    if(!p.empty())
    {
    pr=p.front();
    p.pop();
    }
    return pr;
}
void peek(){
    if(!p.empty())
    {
    Patient temp=p.front();
    cout << "\n Patient Name is: " <<temp.fname<<endl;
    }
}
int main(){
    int ch;
    Patient prev;
    while(1){
        cout<<"\n 1. Add Patient";
        cout<<"\n 2. Next Patient";
        cout<<"\n 3. Previous Patient";
        cout<<"\n 4. Delete Patientexit";
        cout<<"\n 5. View Current";
        cout<<"\n 6. Exit";
        cout<<"\n enter your choice: ";
        cin>>ch;
        switch(ch){
            case 1: enqueue(); break;
            case 2: prev=dequeue(); peek(); break;
            case 3: cout << prev.fname; break;
            case 4: prev=dequeue(); break;
            case 5: peek(); break;
            case 6: exit(0);
            default: cout<<"\n invalid choice";
        }
    }
}