#include "SkipList.h"

struct Node* getNextTop(struct Node* p)
{
//while
}
void SkipList::insert(int data)
{
	struct Node* p = upleft;

	while (true)
	{
		if(p->next->data < data)
			p=p->next;
		else if (p->down != nullptr)
			p=p->down;	
		else break;
	}

	p = p->next;
	while(p->data == data)
		p = p->next;
	while (p->down)
		p = p->down;
	p = p->previous;


	
	
	



}



