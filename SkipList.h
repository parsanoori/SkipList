#ifndef _SKIPLIST_HEADER_FILE_
#define _SKIPLIST_HEADER_FILE_

class SkipList {
	struct Node {
		int data;
		struct Node* previous;
		struct Node* next;
		struct Node* up;
		struct Node* down;
	};
	Node* upleft;
	Node* downlleft;

    public:

	void insert(int data);

	
	

};

#endif
