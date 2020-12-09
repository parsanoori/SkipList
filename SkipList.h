#ifndef _SKIPLIST_HEADER_FILE_
#define _SKIPLIST_HEADER_FILE_

class SkipList {
	struct Node {
		int data;
		int nu=0;
		struct Node* previous;
		struct Node* next;
		struct Node* up;
		struct Node* down;
	};
	Node* upleft;
	Node* downlleft;

    public:

	struct Node* getNextTop(struct Node* p);
	void insert(int data);

	
	

};

#endif
