#include "iostream"
using namespace std; 

class PayRaise {
	private:
		float current_pay, raise_percentage,raise_amount,new_pay;
		string employee_name;
			
		PayRaise(string emp_name=" ", float crnt_pay=0.0, float raise_per=0.0){
			employee_name=emp_name;
			current_pay=crnt_pay;
			raise_percentage=raise_per;
			raise_amount=current_pay*raise_percentage/100;
			new_pay=current_pay+raise_amount;
		}
		~PayRaise(void){
			cout<<"the name of "<<employee_name<<" is destroyed"<<endl;
		}
	public:
		void printData(void){
			cout<<"the person's name is "<<employee_name<<endl;
			cout<<"the old pay amount is $"<<current_pay<<endl;
			cout<<"the raise percentage is "<<raise_percentage<<endl;
			cout<<"the raise amount is $"<<raise_amount<<endl;
			cout<<"the new pay is $"<<new_pay<<endl;
		}
		void calcBonus(float bonus){
			current_pay=current_pay+bonus;
			raise_amount=current_pay*raise_percentage/100;
			new_pay=current_pay+raise_amount;
		}
};
//main
int main(){   
    //creating object
    PayRaise p1;
    PayRaise p("Corby Bryan", 50000, 10);
    p.printData();
    p.calcBonus(1000);
    p.printData();
    p1.printData();
    // cout<<"exiting code";
    return 0;
}