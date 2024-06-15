#include <iostream>
#include <conio.h>
#include <cmath>
#include <vector>
#define pi 3.141592
using namespace std;
class screen{
  public:
    
    void main_page();
    void simple_calculator();
    void trigonometric_calculator();
    void equations();
    void complex_Number();
    void logical_operator();
    void choise_simple_calculator();
    void choise_trigonometric_calculator();
    void choise_equations();
    void choise_complex_number();
    void choise_logical_operator();
    void choise_factorial();
    void choise_fibonacci();
};
void screen::main_page(){
  system("cls");
  cout<<"---------------------------------"<<endl;
  cout<<"|     Scientific Calculator     |"<<endl;
  cout<<"---------------------------------"<<endl;
  cout<<"| 1- Simple Calculator          |"<<endl;
  cout<<"| 2- Trigonometric Calculator   |"<<endl;
  cout<<"| 3- Equations                  |"<<endl;
  cout<<"| 4- Complex Number             |"<<endl;
  cout<<"| 5- Logical operator           |"<<endl;  
  cout<<"| 6- Factorial                  |"<<endl;
  cout<<"| 7- Fibonacci                  |"<<endl;
  cout<<"| 8- Exit                       |"<<endl;
  cout<<"---------------------------------"<<endl;
  cout<<"| Enter number(1-8):";
}
void screen::simple_calculator(){
  system("cls");
  cout<<"-------------------"<<endl;
  cout<<"| 1- Add          |"<<endl;
  cout<<"| 2- Minus        |"<<endl;
  cout<<"| 3- Multiply     |"<<endl;
  cout<<"| 4- Division     |"<<endl;
  cout<<"| 5- Power        |"<<endl;
  cout<<"| 6- the root     |"<<endl;
  cout<<"| 7- logarithm    |"<<endl;
  cout<<"| 8- Back         |"<<endl;
  cout<<"-------------------"<<endl;
  cout<<"|Enter number(1-8):";
}
void screen::trigonometric_calculator(){
  system("cls");
  cout<<"-------------------"<<endl;
  cout<<"| 1- sin          |"<<endl;
  cout<<"| 2- cos          |"<<endl;
  cout<<"| 3- tan          |"<<endl;
  cout<<"| 4- cot          |"<<endl;
  cout<<"| 5- Back         |"<<endl;
  cout<<"-------------------"<<endl;
  cout<<"|Enter number(1-5):";
}
void screen::equations() {
  system("cls");
  cout<<"------------------------------"<<endl;
  cout<<"| 1- First order equations   |"<<endl;
  cout<<"| 2- Second order equations  |"<<endl;
  cout<<"| 3- Back                    |"<<endl;
  cout<<"------------------------------"<<endl;
  cout<<"|Enter number(1-3):";
}
void screen::complex_Number() {
  system("cls");
  cout<<"--------------------------"<<endl;
  cout<<"| 1- Add Complex         |"<<endl;
  cout<<"| 2- Minus Complex       |"<<endl;
  cout<<"| 3- Multiply Complex    |"<<endl;
  cout<<"| 4- Division Complex    |"<<endl;
  cout<<"| 5- Back                |"<<endl;
  cout<<"--------------------------"<<endl;
  cout<<"|Enter number(1-5):";
}
void screen::logical_operator() {
  system("cls");
  cout<<"--------------------------"<<endl;
  cout<<"| 1- And                 |"<<endl;
  cout<<"| 2- Or                  |"<<endl;
  cout<<"| 3- Conditional         |"<<endl;
  cout<<"| 4- BiConditional       |"<<endl;
  cout<<"| 5- Xor                 |"<<endl;
  cout<<"| 6- Back                |"<<endl;
  cout<<"--------------------------"<<endl;
  cout<<"|Enter number(1-6):";
}

class SimpleCalculator {
  private :
    double x,y;
    
  public :
    SimpleCalculator(){}
    SimpleCalculator(double a, double b) : x(a) , y(b) {} 
    void setx(double a){ x=a ; }
    double add() { return (x+y) ; };
    double minus() { return (x-y) ; };
    double multiply() { return(x*y) ; };
    double division() { return (x/y) ; };
    double power(){ return pow(x,y) ; };
    double root() { return sqrt(x) ; };
    double logarithm() { return log10(x) ; };
    
};
class TrigonometricCalculator {
  private :
    double x;
  public :
    TrigonometricCalculator(){}
    TrigonometricCalculator(double a) : x(a*pi/180) {} 
  double sinx(){ return sin(x)  ;}
  double cosx(){ return cos(x)  ;}
  double tanx(){ return tan(x)  ;}
  double cotx(){ return 1/tan(x) ;}


};
class Equation {
public:
    virtual void solve() = 0; 
};


class LinearEquation : public Equation {
private:
    double a, b;

public:
    LinearEquation(double a, double b) : a(a), b(b) {}

    void solve() {
        if (a == 0) {
            if (b == 0) {
              cout << "Infinite solutions exist." << endl;
            } else {
                cout << "No solution exists." << endl;
            }
        } else {
            double x = -b / a;
            cout << "The solution is x = " << x << endl;
        }
    }
};
class QuadraticEquation : public Equation {
private:
    double a, b, c;

public:
    QuadraticEquation(double a, double b, double c) : a(a), b(b), c(c) {}

    void solve() {
        if (a == 0) {
            LinearEquation linearEq(b, c);
            linearEq.solve();
        } else {
            double discriminant = b * b - 4 * a * c;
            if (discriminant > 0) {
                double x1 = (-b + sqrt(discriminant)) / (2 * a);
                double x2 = (-b - sqrt(discriminant)) / (2 * a);
                cout << "Two real solutions: x1 = " << x1 << ", x2 = " << x2 << endl;
            } else if (discriminant == 0) {
                double x = -b / (2 * a);
                cout << "One real solution: x = " << x << endl;
            } else {
                cout << "No real solutions." << endl;
            }
        }
    }
};
class Complex {
private:
    double real;
    double imag;

public:
    
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

    double getReal() const { return real; }
    double getImag() const { return imag; }

    void setReal(double r) { real = r; }
    void setImag(double i) { imag = i; }

    Complex operator + (const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    Complex operator - (const Complex& other) const {
        return Complex(real - other.real, imag - other.imag);
    }

    Complex operator * (const Complex& other) const {
        return Complex(real * other.real - imag * other.imag,
                       real * other.imag + imag * other.real);
    }
    
    Complex operator / (const Complex& other) const {
        double denominator = other.real * other.real + other.imag * other.imag;
        return Complex((real * other.real + imag * other.imag) / denominator,
                       (imag * other.real - real * other.imag) / denominator);
    }

    void display() {
      cout<<"The answer is :";
        if (imag < 0)
            cout << real << " - " << -imag << "i" << endl;
        else
            cout << real << " + " << imag << "i" << endl;
    }
};
class LogicalOperator {
private:
    bool A, B;
public:
    
    LogicalOperator(bool a, bool b) : A(a), B(b) {}

    bool AND() const {
        return A && B;
    }

    bool OR() const {
        return A || B;
    }

    bool CONDITIONAL() const {
        return !A || B;
    }

    bool BICONDITIONAL() const {
        return A == B;
    }

    bool XOR() const {
        return A != B;
    }


};
class Factorial {
private :
  int n;
public:
  Factorial(int a) : n(a) {}
    
  int iterativeFactorial() {
        int result = 1;
        for (int i = 1; i <= n; ++i) {
            result *= i;
        }
        return result;
    }
    int geter() { return n ;} 

};
class Fibonacci {
private:
    vector<long long> memo;

public:
    Fibonacci() {
        memo.push_back(0); 
        memo.push_back(1); 
    }


    long long get(int n) {
        if (n < memo.size()) {
            return memo[n-1];
        } else {
            for (int i = memo.size(); i <= n-1; ++i) {
                memo.push_back(memo[i-1] + memo[i-2]);
            }
            return memo[n-1];
        }
    }
};
void screen::choise_simple_calculator(){
  int a;
  cin >> a;
  screen ob;
  switch(a){
    
    case 1:{
      system("cls");
      double x,y;
      cout<<"Enter First Number:";
      cin >> x;
      cout<<"Enter second Number:";
      cin >> y;
      SimpleCalculator ob1 (x,y);
      cout<<"Answer is = "<<ob1.add();
      cout<<"\nEnter to back menu...";
      getch();
      break;
    }
    case 2:{
      system("cls");
      double x,y;
      cout<<"Enter First Number:";
      cin >> x;
      cout<<"Enter second Number:";
      cin >> y;
      SimpleCalculator ob2 (x,y);
      cout<<"Answer is = " <<ob2.minus();
      cout<<"\nEnter to ack menu...";
      getch();
      break;
    }
    case 3:{
      system("cls");
      double x,y;
      cout<<"Enter First Number:";
      cin >> x;
      cout<<"Enter second Number:";
      cin >> y;
      SimpleCalculator ob3 (x,y);
      cout<<"Answer is = "<<ob3.multiply();
      cout<<"\nEnter to back menu...";
      getch();
      break;
    }
    case 4:{
      system("cls");
      double x,y;
      cout<<"Enter First Number:";
      cin >> x;
      cout<<"Enter second Number:";
      cin >> y;
      SimpleCalculator ob4 (x,y);
      cout<<"Answer is = "<<ob4.division();
      cout<<"\nEnter to back menu...";
      getch();
      break;
    }
    case 5:{
      system("cls");
      double x,y;
      cout<<"Enter First Number:";
      cin >> x;
      cout<<"Enter second Number:";
      cin >> y;
      SimpleCalculator ob5 (x,y);
      cout<<"Answer is = "<<ob5.power();
      cout<<"\nEnter to back menu...";
      getch();
      break;
    }
    case 6:{
      system("cls");
      double x;
      cout<<"Enter First Number:";
      cin >> x;
      SimpleCalculator ob6;
      ob6.setx(x) ;
      cout<<"Answer is = "<<ob6.root();
      cout<<"\nEnter to back menu...";
      getch();
      break;
    }
    case 7:{
      system("cls");
      double x;
      cout<<"Enter First Number:";
      cin >> x;
      SimpleCalculator ob7 ;
      ob7.setx(x);
      cout<<"Answer is = "<<ob7.logarithm();
      cout<<"\nEnter to back menu...";
      getch();
      break;
    }
    case 8:{
      system("cls");
      ob.main_page();
      break;
    }
    default:
      system("cls");
      cout<<"---Error!---"<<endl;
      getch();
      break;
  }
};
void screen::choise_trigonometric_calculator(){
  int a;
  cin >> a;
  screen ob;
  switch(a){
    
    case 1:{
      system("cls");
      double x;
      cout<<"Enter number (Degrees):" ;
      cin >> x ;
      TrigonometricCalculator ob1 (x) ;
      cout<<"answer is = " <<ob1.sinx();
      getch();
      break;
    }
    case 2:{
      system("cls");
      double x;
      cout<<"Enter number (Degrees):" ;
      cin >> x ;
      TrigonometricCalculator ob2 (x) ;
      cout<<"answer is = " <<ob2.cosx();
      getch();
      break;
    }
    case 3:{
      system("cls");
      double x;
      cout<<"Enter number (Degrees):" ;
      cin >> x ;
      TrigonometricCalculator ob3 (x) ;
      cout<<"answer is = " <<ob3.tanx();
      getch();
      break;
    }
    case 4:{
      system("cls");
      double x;
      cout<<"Enter number (Degrees):" ;
      cin >> x ;
      TrigonometricCalculator ob4 (x) ;
      cout<<"answer is = " <<ob4.cotx();
      getch();
      break;
    }
    case 5:{
      system("cls");
      ob.main_page();
      break;
    }
    default:
      system("cls");
      cout<<"---Error!---"<<endl;
      getch();
      break;
  }
}
void screen::choise_equations(){
  int a;
  cin >>a;
  screen ob;
  switch(a){
    case 1:{
      system("cls");
      cout<<"Please Enter a,b(ax + b = 0) :"<<endl;
      double a,b;
      cout<<"Enter a:";
      cin >> a ;
      cout<<"Enter b:";
      cin >> b;
      LinearEquation ob1(a,b);
      ob1.solve();
      getch();

      break;
    }
    case 2:{
      system("cls");
      cout<<"Please Enter a,b,c(ax^2 + bx + c = 0 )"<<endl;
      double a,b,c;
      cout<<"Enter a:";
      cin >> a;
      cout<<"Enter b:";
      cin >> b;
      cout<<"Enter c:";
      cin >>c ;
      QuadraticEquation ob2(a,b,c);
      ob2.solve();
      getch();
      break;
    }
    case 3:{
      system("cls");
      ob.main_page();
      break;
    }
    default:
      system("cls");
      cout<<"---Error!---"<<endl;
      getch();
      break;
  }
}
void screen::choise_complex_number(){
  int a;
  cin >> a;
  screen ob ;
  switch(a){
    case 1:{
      system("cls");
      cout<<"Enter First Complex a,b (a + bi )"<<endl;
      double a1,b1;
      cout<<"Enter a : ";
      cin >> a1;
      cout<<"Enter b : ";
      cin >> b1;
      Complex ob1 (a1,b1) ;
      
      cout<<"Enter Second Complex a,b (a + bi )"<<endl;
      double a2,b2;
      cout<<"Enter a : ";
      cin >> a2;
      cout<<"Enter b : ";
      cin >> b2;
      Complex ob2 (a2,b2) ;
      
      Complex ob3 ;
      ob3 = ob1 + ob2 ;
      ob3.display() ;
      getch();
      break;
    }
    case 2:{
      system("cls");
      cout<<"Enter First Complex a,b (a + bi )"<<endl;
      double a1,b1;
      cout<<"Enter a : ";
      cin >> a1;
      cout<<"Enter b : ";
      cin >> b1;
      Complex ob1 (a1,b1) ;
      
      cout<<"Enter Second Complex a,b (a + bi )"<<endl;
      double a2,b2;
      cout<<"Enter a : ";
      cin >> a2;
      cout<<"Enter b : ";
      cin >> b2;
      Complex ob2 (a2,b2) ;
      
      Complex ob3 ;
      ob3 = ob1 - ob2 ;
      ob3.display() ;
      getch();
      break;
    }
    case 3:{
      system("cls");
      cout<<"Enter First Complex a,b (a + bi )"<<endl;
      double a1,b1;
      cout<<"Enter a:";
      cin >> a1;
      cout<<"Enter b:";
      cin >> b1;
      Complex ob1 (a1,b1) ;
      
      cout<<"Enter Second Complex a,b (a + bi )"<<endl;
      double a2,b2;
      cout<<"Enter a:";
      cin >> a2;
      cout<<"Enter b:";
      cin >> b2;
      Complex ob2 (a2,b2) ;
      
      Complex ob3 ;
      ob3 = ob1 * ob2 ;
      ob3.display() ;
      getch();
      break;
    }
    case 4:{
      system("cls");
      cout<<"Enter First Complex a,b (a + bi )"<<endl;
      double a1,b1;
      cout<<"Enter a:";
      cin >> a1;
      cout<<"Enter b:";
      cin >> b1;
      Complex ob1 (a1,b1) ;
      
      cout<<"Enter Second Complex a,b (a + bi )"<<endl;
      double a2,b2;
      cout<<"Enter a:";
      cin >> a2;
      cout<<"Enter b:";
      cin >> b2;
      Complex ob2 (a2,b2) ;
      
      Complex ob3 ;
      ob3 = ob1 / ob2 ;
      ob3.display() ;  
      getch();
      break;
    }
    case 5 :{
      system("cls");
      ob.main_page();
      break;
    }
    default:
      system("cls");
      cout<<"---Error!---"<<endl;
      getch();
      break;
  }
}
void screen::choise_logical_operator(){
  int a;
  cin >>a ;
  screen ob;
  switch(a){
    case 1:{
      system("cls");
      bool a,b ;
      cout<<"Enter First logic : ";
      cin >> a;
      cout<<"Enter Second logic : ";
      cin >> b;
      LogicalOperator ob1 (a,b);
      cout<<"AND is = "<<ob1.AND() ;
      getch();
      break;
    }
    case 2:{
      system("cls");
      bool a,b ;
      cout<<"Enter First logic : ";
      cin >> a;
      cout<<"Enter Second logic : ";
      cin >> b;
      LogicalOperator ob2 (a,b);
      cout<<"AND is = "<<ob2.OR() ;
      getch();  
      break;
    }
    case 3:{
      system("cls");
      bool a,b ;
      cout<<"Enter First logic : ";
      cin >> a;
      cout<<"Enter Second logic : ";
      cin >> b;
      LogicalOperator ob3 (a,b);
      cout<<"AND is = "<<ob3.CONDITIONAL() ;
      getch();
      break;
    }
    case 4:{
      system("cls");
      bool a,b ;
      cout<<"Enter First logic : ";
      cin >> a;
      cout<<"Enter Second logic : ";
      cin >> b;
      LogicalOperator ob4 (a,b);
      cout<<"AND is = "<<ob4.BICONDITIONAL() ;
      getch();
      break;
    }
    case 5:{
      system("cls");
      bool a,b ;

      cout<<"Enter First logic : ";
      cin >> a;
      cout<<"Enter Second logic : ";
      cin >> b;
      LogicalOperator ob5 (a,b);
      cout<<"AND is = "<<ob5.XOR() ;
      getch();
      break;
    }
    case 6:{
      system("cls");
      ob.main_page();
      break;
    }
    default:
      system("cls");
      cout<<"---Error!---"<<endl;
      getch();
      break;
  }
}
void screen::choise_factorial(){
  system("cls");
  cout<<"Please Enter Number : ";
  int a;
  cin>>a;
  Factorial ob1(a);
  cout<<"The Factorial of "<<ob1.geter()<<" is : "<<ob1.iterativeFactorial();
  getch();
}
void screen::choise_fibonacci(){
  system("cls");
  cout<<"Please Enter Number : ";
  int a;
  cin>>a;
  Fibonacci ob1;
  cout<<"The " << a << "sentence is : " <<ob1.get(a) ;
  getch();
}
int main(){
  
  int a;
  screen object;
  while(true){
    
    object.main_page();
    cin>>a;
    switch(a){
      case 1:
        object.simple_calculator() ; object.choise_simple_calculator() ;
        break;
      case 2:
        object.trigonometric_calculator() ; object.choise_trigonometric_calculator() ;
        break;
      case 3:
        object.equations() ; object.choise_equations() ;
        break;
      case 4:
        object.complex_Number() ; object.choise_complex_number() ;
        break;
      case 5:
        object.logical_operator() ; object.choise_logical_operator() ;
        break;
      case 6:
        object.choise_factorial() ;
        break;
      case 7:
        object.choise_fibonacci();
        break;
      case 8:  exit(0);  break;
      
      default:
        system("cls");
        cout<<"---Error!---"<<endl;
        getch();
        break;
    }  
  }
  return 0;  
}

