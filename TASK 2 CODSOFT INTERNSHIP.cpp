#include<iostream>
using namespace std;
int main(){
float num1,num2;
char choice;
cout<<"select operator of your choice"<<"(+,-,*,/)"<<endl;
cin>>choice;
cout<<"enter first number"<<endl;
cin>>num1;
cout<<"enter second number"<<endl;
cin>>num2;
switch(choice){
	case '+':
		cout<<"the sum is:"<<num1+num2;
		break;
	case '-':
		cout<<"the difference is:"<<num1-num2;
		break;
	case '*':
			cout<<"the product is:"<<num1*num2;
			break;
    case '/':
    	if(num2!=0){
    		cout<<"the quotient is:"<<num1/num2;
    	}
    	else{
    		cout<<"division by zero is not allowed"<<endl;
    }
    break;
    default:
    cout<<"INVALID CHOICE OF OPERATOR"<<endl;
    break;
}
return 0;
}
