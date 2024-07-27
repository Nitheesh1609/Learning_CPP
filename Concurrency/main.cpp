#include <iostream>
#include <thread>
#include <list>
#include <string>


using namespace std;
/*
 * C++11 has concurrency support
 *
 * how to create new thread
 * std::thread
 *  -> Accepts a callable constructor
 */

list<int> g_Data;

const int SIZE = 100;

mutex mtx;

void Download0(){
    for(int i{};i < SIZE; ++i){
        lock_guard<mutex> mt(mtx);
        //mtx.lock();
        g_Data.push_back(i);
        if(i==50)
            return;
        //mtx.unlock();
    }
}

void Download1(){
    for(int i{};i < SIZE; ++i){
        lock_guard<mutex> mt(mtx);
        //mtx.lock();
        g_Data.push_back(i);
        //mtx.unlock();
    }
}



int main() {
    //cout << "Hello, World!" << std::endl;

    //string file{"file.mp3"};
    //cout << "[main] Application P1" << endl;

    thread th0(Download0);
    thread th1(Download1);

    //Get ID of the thread
    cout << th0.get_id() << endl;

    //Number of cores
    int cores = thread::hardware_concurrency();

    cout << endl << cores;

    th0.join();
    th1.join();
    //cout << g_Data.size();

    //Download();
    //downloaderthread.detach();
    //cout << "[main] Application P2" << endl;

    //if(downloaderthread.joinable())
        //downloaderthread.join();
    //system("Pause");
    //wait(reinterpret_cast<int *>(5000000));
    return 0;
}
