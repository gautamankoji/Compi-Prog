# Standard Template Library

• `unodered_set` :

An unoderedset in STL(Standard Template Library) is a [container] that `stores unique elements in no particular order.`

- Every operation on an unoderered set takes:
  - **O(1)** complexity in the average case
  - **O(n)** in the worst case

---

@ **Syntax**

```cpp
unordered_set<obj_type> name; // unordered set
```

---

@ **inBuilt functions**

`insert()`
-> Inserts element into container if it does not already exist, otherwise returns false

`begin()`
-> Returns iterator to first element in container (or end() if empty).

`end()`
-> Returns iterator one past last element in container.

`count()`
-> Counts number of elements equal to value x.

`clear()`
-> Removes all elements from a set or multi-map object.

`find()`
-> Searches for an item by its key. If found the function will return pointerto that item else NULL is returned.

`erase()`
-> Erases specified element from list/vector.

`size()`
-> Return size of vector/list.

`empty()`
-> Checks whether given map/set has any items inside it or not?

`cbegin()` and `cend()`
-> These are similar to begin and end but they work with const iterators so you can't modify them while iterating over them.

`bucket_size()`
-> This returns bucket count, which means how many keys we have stored under each hash table
index (which is basically just another array).

`emplace()`
-> It's like insert() except instead of returning iterator pointing at inserted position, emplace() inserts new value in container directly without creating a temporary copy first.

`max_size()`
-> Returns maximum number of elements this container could hold if no more space was available for insertion into the container due to capacity constraints.

`max_bucket_count()`
-> Returns current max size of map that will be allocated by default when using reserve(). If there are too few buckets then performance may suffer because it takes time to rehash all values from one large vector to smaller vectors with fewer slots per element.

-------------------------------------------------------------------------------------------------------;

• `vector` :

A `dynamic array which can grow or shrink as needed` and is indexed starting at 0 (like C
arrays). It has constant-time access, insertions/deletions, iterators etc.. A vector stores elements in contiguous memory locations.

---

@ **Syntax**

```cpp
vector<obj_type> name;  // vector
```

```cpp
std::vector<int> v; // empty vector
v = {1,2};         // initialize a vector with two ints: [1,2
v[3]               // get the value stored at index position 4
v.size()            // number of items currently held by this container
v.push_back(5)      // add an item onto end of list
v.pop_back();       // remove last item from list
v.insert(begin(),7); // inserts new int into beginning of list
v.erase(begin());   // removes first element from list
for (auto i=v.cbegin();i!=v.end();++i){
  std::cout << *i << " ";
}
```

------------------;

@ **Common inBuit functions**

`push_back()`
-> Adds given object as final member of sequence, the element is inserted at the end.

`pop_back()`
-> Removes and destroys the last element in a vector or deque; has no effect on other containers.

`front()`
-> Returns reference to front element without removing it from its current location.

`back()`
-> Returns reference to back element without removing it from its current location.

`rend()`
-> Returns an iterator pointing one past the last position in container.

`capacity()`
-> The maximum number of elements that can be stored within the container before resizing occurs.

`crbegin()`
-> Const reverse bidirectional iterator for accessing beginning of reversed range (reverse order).

`crend()`
-> Const reverse bidirectional iterator for accessing ending of reversed range (reverse order).

-------------------------------------------------------------------------------------------------------;

• `set` :

  A Set in STL is a container that `stores unique elements in a particular order`.

- Every operation on an set takes:
  - **O(1)** complexity in the average case
  - **O(n)** in the worst case

@ **Syntax**

```cpp
set<obj_type> name;   // decleration
```

@ **Common inBuit functions**

`count()`
-> Returns count of element present at given position or 0 if not found.

`find()`
-> Finds first occurrence of specified value and returns its iterator, else it return end().

-------------------------------------------------------------------------------------------------------;

• `unordered_multiset` :

An unordered multiset `stores objects with` no particular ordering (the `order they were inserted`).

@ **Syntax**

```cpp
unordered_multiset<obj_type> name;    // declearation
```

-------------------------------------------------------------------------------------------------------;

• `mutiset`:

A mutiset is a container that `stores elements sorted by their keys`. The order depends on the
comparison function object passed to the set's constructor. Elements are unique in each set.

@ **Syntax**

```cpp
multiset<obj_type> name;
```

-------------------------------------------------------------------------------------------------------;

• `unordered_map` :
An unordered map associates `objects of type KeyType and ValueType`, where both types can be any class or struct (or even another template). It also provides an interface for iterating through its contents.

@ **Syntax**

```cpp
unordered_map<obj_type, obj_type> name;  // decleration 
```

```cpp
#include <unordered_map> // C++17
using namespace std;

int main()
{
    unordered_map<string, string> umap = {"a", "apple"};
    cout << umap["a"] << endl;  // apple
    return EXIT_SUCCESS;
}
```

-------------------------------------------------------------------------------------------------------;

• `map` :

A map is a container that associates keys with values in the form of pairs. The key-value pair can be accessed by either the key or value (or both) and it has logarithmic time complexity for insertion/deletion operations. It also supports random access to its elements through iterators.

@ **Syntax**

```cpp
map<obj_type, obj_type> name;   // decleration
```

-------------------------------------------------------------------------------------------------------;

• `unordered_multimap` :

An unordered multimap stores multiple copies of each element using hashing as an internal data structure.
Unlike maps which use balanced trees internally, unorderd multisets are implemented via hash tables, where no ordering guarantees exist between different elements within one bucket. This means there's no guarantee on iteration order when iterating over a set with this container type.
The size is always O(1).

@ **Syntax**

```cpp
unordered_multimap <key_type, value_type>;  // declaration
```

-------------------------------------------------------------------------------------------------------;

• `multimap` :

A multimap in STL are associative containers like maps where each element consists of a key value and a mapped value, the only difference is `multimaps can store duplicate elements`.

@ **Syntax**

```cpp
multimap<obj_type, obj_type> name;    // declaration
```

-------------------------------------------------------------------------------------------------------;

• `queue` :

A queue (FIFO) provides `first-in/first` out access to its contents and supports the following operations: push back, pop front, peek at top item without removing it from the queue; empty check, etc.. The underlying implementation uses `linked lists for storage of items in the queue`.
This data structure has an average time complexity of **O(n)** per operation.

@ **Syntax**

```cpp
queue<obj_type> name;   // decleration
```

```cpp
#include<queue>
using namespace std;
int main() {
  priority_queue<int> pq;
  int n = 50;
  while (!pq.full())
  pq.push(rand());
  cout << "The size of Priority Queue is:" << pq.size();
  return 0;
}
```

@ **Common inBuit functions**

`push()`
-> inserts(push) an element in the queue

`pop()`
-> removes (pops off or dequeues ) the first inserted element from a queue
and returns that value as its result. If the queue was previously empty, pop throws an exception.

`front()`
-> Returns reference to front item without removing it from the container. It does not throw any
exceptions if called on an empty container.

`back()`
-> Returns reference to back item without removing it from the container. It does not throw any
exceptions if called on an empty container.

`emplace()`
-> Inserts new elements at end of priority_queue by constructing them directly into the heap using placement-new operator. The arguments are forwarded to constructor for type T.
This function can be used only with types which have default constructors and copy/move assignment operators defined.

-------------------------------------------------------------------------------------------------------;

• `stack` :

A `stack is a non-primitive linear data structure` that follows `Last In First Out (LIFO) principle`, meaning last element inserted will be first one out when popped off. Stacks provide efficient access to top most or last added items in **O(1)**.
They also `allow fast insertion and deletion operations` as they do not require shifting all other existing elements after an item has been removed from it.

@ **Syntax**

```cpp
stack<obj_type> name;    // Default Constructor
```

@ **Common inBuit functions**

`top()`
-> returns the value of the object at the top of stack without removing it, if there are no objects on the stack then this function throws exception.

-------------------------------------------------------------------------------------------------------;

• `deque` :

`Double ended queue` is a container adaptor which `provides both front-end and back end insertions/deletions` with constant time complexity for any position within its sequence.

- It can be used like stacks but unlike them deque does not have restrictions regarding order of items stored inside it. Deque `supports random access to elements by index or iterators` as well as fast insertion and deletion operations either at beginning(front) or ending(back).
- The only restriction that applies when using deques is that all inserted values must
fit in memory, otherwise an overflow_error will occur.

**Example:**

```cpp
#include <iostream>
// include the header file containing class declaration
using namespace std;int main() {
  int arr[] = {10, 20};
  deque<int> dq(arr + 0, arr + sizeof(arr)/sizeof
  (*arr));
  // initialize a deque from array
  for (deque<int>::iterator i = dq.begin();
  i != dq.end(); ++i){
    cout << *i << endl;
  }
  return 0;}
```

@ **Syntax**

```cpp
deque<obj_type> name;   // declearation
```

@ **Common inBuit functions**

`push_back()`
-> inserts element at back of queue and increases size by one.

`push_front()`
-> insert elements at front of queue and increase size by one.

`pop_back()`
-> removes last inserted element from queue and decrease size by one.

`pop_front()`
-> remove first inserted element form the queue and reduce its size by one.

-------------------------------------------------------------------------------------------------------;

• `priority_queue` :

It is similar to **heap**. The difference between heap and priority queue is that, we `can access any node or object using index but not with a key` value like min-heap while accessing an item in priority queue requires us to provide some sort of comparison function which will be used for sorting
items in ascending order according to their keys.

@ **Syntax**

```cpp
priority_queue<obj_type> name;    // decleration
```

-------------------------------------------------------------------------------------------------------;

• `list` :

A `doubly linked list data structure` where `insertion/deletion at both ends are possible` without affecting the other end.
It has two pointers:

- one points towards first element (head) & another pointer points toward last element(tail).
The head pointer always refers to the oldest element present and tail point referes to newest element present.

@ **Syntax**

```cpp
list<obj_type> name ;   // declaration
```

@ **Common inBuit functions**

`reverse()`
-> reverse a given list

`sort()`
-> sort elements of a list based on key value provided by user or default sorting `algorithm used is Bubble Sort`, if no argument is passed then it uses less than operator for comparison.

`merge()`
-> merges two lists into single sorted list using `MergeSort Algorithm`.

`-----------------------------------------------------------------------------------------------------`

@ **BuiltIn functions in STL**

`next_permutation()`
-> returns true when next permutation exists else false, this function works only with integer type data structure like vector , deque etc..

@ *Syntax*

```cpp
next_permutation(begin, end);   // decleration
```

`prev_permutation()`
-> same as above but reverses the order and checks prev permuteion instead of next one

`sort()`
-> sorts a given range according to some criteria (default sort algorithm)

@ *syntax*

```cpp
sort(beg,end);  // default sorting algo
sort(beg,end,comp);    // custom comparator for sorting
```

`min_element()`
-> finds minimum element from beg-end interval. Returns iterator pointing at min value or `end` if no such element is found.

@ *Syntax*

```cpp
*min_element(fist index, last index);
```

`max_element()`
-> similarly it returns max element in an interval.

@ *Syntax*

```cpp
*max_element(first index,last index);
```
