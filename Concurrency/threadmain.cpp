//
// Created by Nitheesh Prakash on 7/16/24.
//

#include <iostream>
#include <thread>
#include <vector>
#include <future>

using namespace std;

int Add(int x, int y){
    return x+y;
}

int Square(int x){
    return x*x;
}

int Compute(const vector<int> &data) {
    int sum{};
    for(auto x:data){
        sum+=x;
        this_thread::sleep_for(1s);
        cout << ".";
    }
    return sum;
}

int main(){

    packaged_task<int(int,int)> taskAdd(Add);
    future<int> ft = taskAdd.get_future();
    taskAdd(3,5);
    auto result = ft.get();
    cout << "Result of ADD : " << result << endl;

    packaged_task<int(int)> tasksquare(Square);
    auto fs = tasksquare.get_future();
    tasksquare(5);
    cout << "Result of Square: " << fs.get() << endl;

    packaged_task<int(const vector<int> &)> taskcomputer(Compute);
    auto fc = taskcomputer.get_future();
    taskcomputer({1,2,3,4,5});


    cout << "Result of compute: " << fc.get() << endl;

    cout << "End of main()" << endl;

    return 0;
}