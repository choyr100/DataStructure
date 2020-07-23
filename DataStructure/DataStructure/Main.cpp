#include "LinkedList.h"

using namespace std;

int main()
{

	LinkedList* ll = new LinkedList();

	ll->AddNode(1);
	ll->AddNode(2);
	ll->AllPrint();
	ll->AddNode(3);
	ll->AddNode(222);
	ll->AddNode(321);
	ll->AllPrint();

	ll->DeleteNode(1);
	ll->AllPrint();
	ll->AddNode(7);
	ll->AllPrint();
	ll->DeleteNode(7);
	ll->AllPrint();
	ll->AddNode(10);
	ll->AllPrint();
	ll->DeleteNode(222);
	ll->AllPrint();
	delete ll;

	cout << "sadf" << endl;

	return 0;
}