#include <iostream>
#include "queue"

class Job {
private:
    int ID;
    std::string user;
    int pages;
public:

    Job(int id, std::string user, int pages) {
        ID = id;
        this->user = user;
        this->pages = pages;
    }

    void print() {
        std::cout << "{\n\tid : " << ID << "\n\tuser : " << user << "\n\tpages : " << pages << "\n}\n";
    }

};

class Printer {
private:
    std::queue<Job> queue;

public:
    Printer() {
        queue = std::queue<Job>();
    }

    void printOne() {
        if (queue.empty()) {
            return;
        }
        queue.front().print();
        queue.pop();
    }

    void insert(Job j) {
        queue.push(j);
    }

};

int main() {

    Printer p;
    Job a(301, "Kim", 3);
    Job b(4017, "Park", 30);
    Job c(8, "Lee", 17);
    Job d(132798, "Cho", 188);

    p.printOne();
    p.insert(a);
    p.insert(b);
    p.printOne();
    std::cout << "Printer is stopped because of jam.\n";
    p.insert(c);
    p.insert(d);
    p.printOne();
    p.printOne();
    p.printOne();
}