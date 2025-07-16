#include <iostream>
using namespace std;
int main() {
   cout << "Calculator" << endl; 
   cout << "---------------------------" << endl;
   int op,num1,num2;
   cin >> op;
   if(op==1){
        cout << "Adder function" << endl;
        // num1
        cout << "Enter num1 :";
        cin >> num1;
        cout << endl;
        //num2
         cout << "Enter num2 :";
        cin >> num2;
        cout << endl;
        cout <<"----------------------------------" << endl;
        cout << num1 << " + " << num2 << " = " << num1+num2 << endl;
   }else if(op==2){
        cout << "Delete function" << endl;
        // num1
        cout << "Enter num1 :";
        cin >> num1;
        cout << endl;
        //num2
         cout << "Enter num2 :";
        cin >> num2;
        cout << endl;
        cout <<"----------------------------------" << endl;
        cout << num1 << " - " << num2 << " = " << num1-num2 << endl;
   }else if (op==3){
      cout << "Multiplication function" << endl;
        // num1
        cout << "Enter num1 :";
        cin >> num1;
        cout << endl;
        //num2
         cout << "Enter num2 :";
        cin >> num2;
        cout << endl;
        cout <<"----------------------------------" << endl;
        cout << num1 << " * " << num2 << " = " << num1*num2 << endl;
   }else if (op==4){
       cout << "Divide function" << endl;
        // num1
        cout << "Enter num1 :";
        cin >> num1;
        cout << endl;
        //num2
         cout << "Enter num2 :";
        cin >> num2;
        cout << endl;
        cout <<"----------------------------------" << endl;
        cout << num1 << " / " << num2 << " = " << num1/num2 << endl;
   }
    return 0;


}
