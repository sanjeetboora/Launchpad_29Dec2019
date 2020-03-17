#include <iostream>
using namespace std;

template<typename T>
class queue {
	T *arr;
	int rear;
	int front;
	int currentSize;
	int totalSize;

public:
	queue(int defaultSize = 5) {
		totalSize = defaultSize;
		arr	= new T[totalSize];
		currentSize = 0;
		front  = 0;
		rear = totalSize - 1;
		//rear = -1;
	}
	bool isFull() {
		return currentSize == totalSize;
	}
	bool isEmpty() {
		return currentSize == 0;
	}

	void push(T element) {
		//is queue already full
		if (isFull()) {
			cout << "queue is full" << endl;
			return;
		}

		rear = (rear + 1) % totalSize;
		arr[rear] = element;
		currentSize++;
	}
	void pop(){
		//is queue empty
		if (isEmpty()) {
			cout << "queue is empty" << endl;
			return;
		}
		front = (front + 1) % totalSize;
		currentSize--;
	}
	T getFront(){
		if(isEmpty()){
			cout << "queue is empty" << endl;
			return NULL;
		}
		return arr[front];
	}
};




int main(int argc, char const *argv[])
{
	queue<int> q;

	q.push(10);
	q.push(20);
	q.push(30);
	q.push(40);
	q.push(50);
	q.push(60);

	cout<<q.getFront()<<endl;
	q.pop();
	cout<<q.getFront()<<endl;
	q.pop();
	cout<<q.getFront()<<endl;
	q.pop();
	cout<<q.getFront()<<endl;
	q.pop();
	cout<<q.getFront()<<endl;
	q.pop();
	cout<<q.getFront()<<endl;
	q.pop();


	return 0;
}





