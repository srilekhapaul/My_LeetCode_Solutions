/*
 * Below is the interface for Iterator, which is already defined for you.
 * **DO NOT** modify the interface for Iterator.
 *
 *  class Iterator {
 *		struct Data;
 * 		Data* data;
 *  public:
 *		Iterator(const vector<int>& nums);
 * 		Iterator(const Iterator& iter);
 *
 * 		// Returns the next element in the iteration.
 *		int next();
 *
 *		// Returns true if the iteration has more elements.
 *		bool hasNext() const;
 *	};
 */

class PeekingIterator : public Iterator {
public:
    vector <int> numbers;
    int id=0;
	PeekingIterator(const vector<int>& nums) : Iterator(nums) {
	    // Initialize any member here.
	    // **DO NOT** save a copy of nums and manipulate it directly.
	    // You should only use the Iterator interface methods.
	    numbers=nums;
	}
	
    // Returns the next element in the iteration without advancing the iterator.
	int peek() {
        if(numbers.size()>0 and id<numbers.size())
            return numbers[id];
        return -1;
	}
	
	// hasNext() and next() should behave the same as in the Iterator interface.
	// Override them if needed.
	int next() {        
	    if(numbers.size()>0 and id<numbers.size())
            return numbers[id++];
        return -1;
	}
	
	bool hasNext() const {
	    if(numbers.size()>0 and id<numbers.size())
            return true;
        return false;
	}
};
