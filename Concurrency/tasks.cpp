//
// Created by Nitheesh Prakash on 7/16/24.
//
#include <iostream>
#include <thread>
#include <future>

using namespace std;
void Downloader(){
    for(int i =0; i<10;++i){
        this_thread::sleep_for(1s);
        cout << i << " ";
    }
}

int main(){
    future<void> ft = async(Downloader);
    //Downloader();
    cout << "Main Continues" << endl;
    ft.get();
    return 0;
}

