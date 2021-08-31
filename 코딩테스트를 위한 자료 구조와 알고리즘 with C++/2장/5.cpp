#include <utility>

#include "vector"
#include "queue"
#include "iostream"

//struct Node {
//private:
//
//    std::vector<int> data;
//    Node *left;
//    Node *right;
//
//public:
//
//    Node(std::vector<int> data) {
//        this->data = std::move(data);
//        left = NULL;
//        right = NULL;
//    }
//
//    int current() const {
//        return data.front();
//    };
//
//    void pop() {
//        data.erase(data.begin());
//    }
//
//    bool empty() {
//        return data.empty();
//    }
//
//    void print() {
//        std::cout << current() << " --- idx " << idx << "in" << list_id << std::endl;
//        data.erase(data.begin());
//    }
//
//};
//
//struct compare {
//    bool operator()(Node &a, Node &b) {
//        return a.current() > b.current();
//    }
//};
//
//struct Tree {
//private:
//    std::priority_queue<Node, std::vector<Node>, compare> data;
//
//public:
//    void push(Node v) {
//         data.push(v);
//    }
//
//    int pop() {
//        auto top = data.top();
//        top.pop();
//        int result = data.top().current();
//        if (!top.empty()) {
//
//        }
//        data.pop();
//        return result
//    }
//
//};
//
//
//
//std::vector<int> merge (std::vector< std::vector<int> > data) {
//
//    Tree t;
//
//    for (auto & it : data) {
//        t.push(Node(it));
//    }
//
//
//
//}
//
int main() {

    std::vector<int> c1 {3, 7, 11, 15, 20};
    std::vector<int> c2 = {2, 3, 5, 7, 11};
    std::vector<int> c3 = {182, 1920, 39425, 294038};
    std::vector<int> c4 = {1, 2, 3, 5, 8, 13};

//    auto sorted = merge({c1, c2, c3, c4});
//
//    for (auto node : sorted) {
//        std::cout << node << ", " << std::endl;
//    }

}

