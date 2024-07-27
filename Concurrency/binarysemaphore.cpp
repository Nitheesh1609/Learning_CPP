//
// Created by Nitheesh Prakash on 7/16/24.
//

#include <iostream>
#include <semaphore>
#include <thread>

using namespace std;
binary_semaphore smphSignalMainToThread{0};
binary_semaphore smphSignalThreadtoMain{0};

void test(){
    smphSignalMainToThread.acquire();
    cout << "Got Signal [Thread]" << endl;
    this_thread::sleep_for(3s);
    cout << "Send Signal [Thread]" << endl;
    smphSignalThreadtoMain.release();
}

int main(){
    thread t1(test);
    cout << "[Main] Send Signal" << endl;
    smphSignalMainToThread.release();
    cout << "[Main] Waiting for Signal" << endl;
    smphSignalThreadtoMain.acquire();
    cout << "[Main] Got the signal " << endl;
    t1.join();
    return 0;
}