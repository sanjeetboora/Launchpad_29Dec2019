#include <iostream>
using namespace std;

class Car{
	int price = 100;
public:
	char* name;
	int fuleTank;
	int wheels;

	//constructor
	Car(): wheels(4){
		cout<<"inside my constructor"<<endl;
		name = new char[10];
	}

	Car(int w, int p, char* n, int f){
		cout<<"inside my initialization list constructor"<<endl;
		wheels = w;
		setPrice(p);
		fuleTank=f;
		name = new char[strlen(n)];
		strcpy(name, n);
	}

	//copy constructor
	//shallow copy
	// Car(Car &X){ 
	// 	cout<<"my copy constructor"<<endl;
	// 	wheels = X.wheels;
	// 	price = X.price;
	// 	fuleTank = X.fuleTank;
	// 	name = X.name;
	// }
	
	//copy constructor
	//Deep copy
	Car(Car &X){ 
		cout<<"my copy constructor"<<endl;
		wheels = X.wheels;
		price = X.price;
		fuleTank = X.fuleTank;
		name = new char[strlen(X.name)];
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

	void operator = (Car &X){
		cout<<"my = operator"<<endl;
		wheels = X.wheels;
		setPrice(X.price);
		fuleTank = X.fuleTank;
		strcpy(name, X.name);
	}
	void operator + (Car &X){
		price  += X.price;
	}
	void print(){
		cout<<name<<endl;
		cout<<price<<endl;
		cout<<wheels<<endl;
		cout<<fuleTank<<endl;
		cout<<"----------------------"<<endl;
	}
};

// void operator <<(ostream& o,Car &X){
// 	o<<X.name<<endl;
// 	o<<X.getPrice()<<endl;
// 	o<<X.wheels<<endl;
// 	o<<X.fuleTank<<endl;
// 	o<<"----------------------";
// }

ostream& operator <<(ostream& o,Car &X){
	o<<X.name<<endl;
	o<<X.getPrice()<<endl;
	o<<X.wheels<<endl;
	o<<X.fuleTank<<endl;
	o<<"----------------------";
	return o;
}
istream& operator >>(istream& o,Car &X){
	int n;
	o>>n;
	X.fuleTank = n;
	return o;
}



int main(int argc, char const *argv[])
{	
	char arr[10] = "abc";

	Car E(4, 1000,arr , 30);
	//E.print();
	Car F(E);
	E.fuleTank = 100;
	E.name[0] = 'J';
	F.name[1] = 'Z';
	// E.print();
	// F.print();
	//Car F2 = E;
	// Car F2;
	// F2 = E;
	// F2.name[0] = 'D';
	// F2.print();
	// E.print();


	// F2 + E;
	// F2.print();
	// E.print();

	cout<<E<<F;
	cin>>F;
	cout<<F;




	
	return 0;
}


















