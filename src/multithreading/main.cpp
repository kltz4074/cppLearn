#include <chrono>
#include <iostream>
#include <thread>

void task1() {
    std::cout << "Thread 1 is running. ID: " << std::this_thread::get_id() << std::endl;
}

void task2() {
    std::cout << "Thread 2 is running. ID: " << std::this_thread::get_id() << std::endl;
}

int main() {
    std::thread t1(task1);
    std::thread t2(task2);
    
    std::cout << "t1 ID: " << t1.get_id() << std::endl;
    std::cout << "t2 ID: " << t2.get_id() << std::endl;

    if (t1.joinable()) {
        t1.join();
        std::cout << "thread 1 joined" << std::endl;
    }
    
    if (t2.joinable()) {
        t2.detach();
        std::cout << "thread 1 detached" << std::endl;
    }

    std::cout << "Main thread sleeping for 1 second..." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "Main therad awake." << std::endl;

    return 0;
}