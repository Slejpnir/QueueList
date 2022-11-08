
#include <iostream>
#include "QueueList.h"

using namespace std;

int main() {
	int a;
	Queue* q = new Queue;
	init(q);
	print(q);
	
	for (int i = 0; i < 5; ++i) {
		cout << endl;
		cout << "Input queue element: ";
		cin >> a;
		insert(q, a);
		cout << "Our queue: " ;
		print(q);
	}
	cout << endl;
	while (q->front !=nullptr) {
		a = remove(q);
		cout <<endl<< "Deleted element: " << a << endl;
		print(q);
	}
	return 0;
}