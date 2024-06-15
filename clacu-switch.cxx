#include <iostream>
using namespace std;

int main(){
	double num1, num2, result;
	char op;
	
	cout << "Enter Number 1: ";
	cin >> num1;
	
	cout << "Enter Operator: ";
	cin >> op;
	
	cout << "Enter Number 2: ";
	cin >> num2;
	
	
	switch (op){
		case '+':
		result = num1 + num2;
	break;
	
	case '-':
            result = num1 - num2;
            break;
            
        case '*':
            result = num1 * num2;
            break;
            
        case '/':
        /*    if (num2 != 0) */
                result = num1 / num2;
         /*  else
                cout << "Error! Division by zero is not allowed"; */
            break; 
            
        default:
            cout << "Error! Operator is not correct";
            break;						
}
	cout << num1 << " " << op << " " << num2 << " " << "= " << result << endl;
	
	main();
}