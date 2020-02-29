#include <iostream>
using namespace std;

class Car{
	int price = 100;
public:
	char name[20];
	int fuleTank;
	int wheels;

	//constructor
	Car(): wheels(4){
		cout<<"inside my constructor"<<endl;
	}
	// // parameterized constructor
	// Car(int w, int p, char n[20]){
	// 	cout<<"inside my parameterized constructor"<<endl;
	// 	wheels = w;
	// 	setPrice(p);
	// 	//name = n; // assignment not possible
	// 	strcpy(name, n);
	// }
	// initialization list
	Car(int w, int p, char n[20], int f): wheels(w), fuleTank(f){
		cout<<"inside my initialization list constructor"<<endl;
		//wheels = w;// assignment not possible for const
		setPrice(p);
		//name = n; // assignment not possible
		strcpy(name, n);
	}

	//copy constructor

	Car(Car &X){
		cout<<"my copy constructor"<<endl;
		wheels = X.wheels;
		setPrice(X.price);
		fuleTank = X.fuleTank;
		strcpy(name, X.name);
	}



	//setter
	void setPrice(int p){
		if(p>=100){
			price = p;
		}
		else{
			cout<<"price is too low"<<endl;
		}
	}
	//getter
	int getPrice(){
		return price;
	}
	void print(){
		cout<<name<<endl;
		cout<<price<<endl;
		cout<<wheels<<endl;
		cout<<fuleTank<<endl;
		cout<<"----------------------"<<endl;
	}
};

int main(int argc, char const *argv[])
{
	// Car c;
	// cout<<"size of object"<<sizeof(c)<<endl;
	// cout<<"size of class"<<sizeof(Car)<<endl;
	// //c.name = "ABC"; // assignment not possible
	// c.name[0] = 'A';
	// c.name[1] ='B';
	// c.name[2] ='C';
	// c.fuleTank = 25;
	// //c.price = 25;  //price is pvt
	// //c.wheels =4; // wheels is const
	// c.print();

	// Car D(5, 2000, "DEF", 20);
	// D.print();
	// D.setPrice(1000);
	// cout<<D.getPrice()<<endl;


	Car E(4, 1000, "EF", 30);
	E.print();
	Car F(E); //default copy constructor;
	E.name[0] = 'J';
	E.print();
	F.print();
	// Car G;
	// G = E; // default copy assignment operator
	// G.print();

	

	return 0;
}


















