#include <iostream>
#include <queue>

using namespace std;

void printPQ(priority_queue<int> pq) {
    priority_queue<int> x = pq;
    while(!x.empty()) {
        cout << x.top() << " ";
        x.pop();
    }
    cout << endl;
}

int main() {
    priority_queue<int> pq;
    for (int i = 0; i <= 5; i++) {
        pq.push(i);
    }

    cout << "The Elements in the priority_queue are: " << endl;
    printPQ(pq);

    cout << "The Size of the priority queue: " << pq.size() << endl;

    cout << "The top Element of the priority queue: " << pq.top() << endl;

    cout << "POP the top element!" << endl;
    pq.pop();

    printPQ(pq);

    return 0;
}

 <strong>Intuition:</strong>
 
 We have the following variables:
 
 - `z`: Pain strength
 - `n`: Number of soldiers
 - `minAttacks`: Minimum attacks done by soldiers to defeat Pain
 
 <b>The approach to solving this problem is as follows:</b>
 
 1. Store the elements in a queue.
 2. While the loop in line 26 is running, update the top element as `soldier_strength`.
 3. Subtract the top element with `z` (`z = z - soldier_strength`) and pop out the top element.
 4. If `soldier_strength/2` is still not equal to 0, update the top element with `soldier_strength/2`.
 5. Continue running this while loop until `z` becomes greater than 0.
 6. After traversing over every element in the queue and performing the above calculations:
     - If `z` is still greater than 0, print "Evacuate" to the console.
     - Otherwise, print `minAttacks`, which represents the minimum attacks done by soldiers to defeat Pain, the leader.