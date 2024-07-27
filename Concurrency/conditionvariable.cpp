//
// Created by Nitheesh Prakash on 7/16/24.
//

#include <iostream>
#include <thread>

using namespace std;

condition_variable cv;
mutex mtx;
int balance{};
void addMoney(int money){
    unique_lock<mutex> lock(mtx);
    balance+=money;
    cout << "Added Money; Current Balance is " << balance << endl;
    cv.notify_one();
}

void withdraw(int money){
    unique_lock<mutex> lock(mtx);
    cv.wait(lock, []{return (balance != 0);});
    if(balance>=money) {
        balance -= money;
        cout << "Withdraw success; Current Balance is " << balance << endl;
    }else{
        cout << "Withdraw Failed; Insuffcient Current Balance is " << balance << endl;
    }
}

int main(){

    thread t1(addMoney, 500);
    thread t3(addMoney, 500);
    thread t2(withdraw, 500);
    t1.join();
    t2.join();
    t3.join();
    return 0;
}


//std::mutex m1;
//int buffer{};
//
//void task(const char *threadN, int loop){
//    //m1.lock();
//    //lock_guard<mutex> lock(m1); //Lock for the scope, unlocks once it is leaving the scope.
//    unique_lock<mutex> lock(m1);
//    for(int i{};i<loop;++i) {
//        //if(i==5)
//        //    return;
//        buffer++;
//    }
//    cout << threadN << endl;
//    //m1.unlock();
//}
//
//int main(){
//    thread t1(task,"T1",10);
//    thread t2(task, "T2",10);
//    t1.join();
//    t2.join();
//    cout << "Value is " << buffer << endl;
//    return 0;
//}








//void fun(int x){
//    while(x-- > 0){
//        std::cout << x << std::endl;
//    }
//}
//
//int amt{};
//std::mutex mt;
//void money(){
//    mt.lock();
//    ++amt;
//    mt.unlock();
//}
//int count{};
//void trylock(){
//    for(int i{}; i < 100000;++i){
//        //if(mt.try_lock()){
//           mt.lock();
//           ++count;
//           mt.unlock();
//        //}
//    }
//}

//int main(){
//    std::thread t1(trylock);
//    std::thread t2(trylock);
//    t1.join();
//    t2.join();
//    std::cout << "Value: " << count;
//    return 0;
//
//}