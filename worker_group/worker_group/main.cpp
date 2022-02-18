//
//  main.cpp
//  worker_group
//
//  Created by Yan Peng on 1/19/22.
//

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <utility> //std::pair, std::make_pair
#include <stdlib.h>
#include <time.h>
using namespace std;

#define DESIGN 1
#define HR 2
#define IT 3

class Worker
{
public:
    string wname;
    int wsalary;
    
};

void createWorker(vector<Worker>&vworker){
    
    string nameSeed = "ABCDEFGHIJ";
    for(int i=0; i<10; i++){
        Worker worker;
        worker.wname = "Employee";
        worker.wname += nameSeed[i];
        
        worker.wsalary = rand()%10000 +10000; //10000-19000
        vworker.push_back(worker);
    }
}

void setGroup(vector<Worker>&v, multimap<int,Worker>&m){
    //iterator vector workers to produce random department ID from 1-3
    vector<Worker> ::iterator it;
    for(it = v.begin(); it != v.end(); it++){
        int departmentID = rand() % 3 +1; //1-3
        
        // insert employee to group,*it is value represtents employee
        m.insert(make_pair(departmentID,*it));
    }
}

void showWorkerByGroup(multimap<int,Worker>&m)
{
    cout<<"DESIGN DEPARTMENT: "<< endl;
    multimap<int,Worker> :: iterator  pos = m.find(DESIGN);
    
    int numberWorker = m.count(DESIGN);
    int index =0;
    for( ; pos != m.end()&& index < numberWorker; pos++,index++)
    {
        cout << "Name: "<< pos -> second.wname << " Salary: " << pos -> second.wsalary<<endl;
    }
    
    cout<<"---------------------------------------"<< endl;
    cout<<"IT DEPARTMENT: "<< endl;
    multimap<int,Worker> :: iterator  pos1 = m.find(IT);
    
    int itNumberWorker = m.count(IT);
    int index1 =0;
    for( ; pos1 != m.end()&& index1 < itNumberWorker; pos1++,index1++)
    {
        cout << "Name: "<< pos1 -> second.wname << " Salary: " << pos1 -> second.wsalary<<endl;
    }
}

void hello() {
    typedef pair<int, string> person;

    map<int, string> people;
  people.insert(person(2, "aaa"));
  //people.insert(person(2, "lauren"));
  people[1] = "bbb";

  for (person kv : people)
    cout << kv.first << " " << kv.second << endl;
}

int main(int argc, const char * argv[]) {
    // created employer
    vector<Worker> vWorker;
    createWorker(vWorker);
    
    multimap<int,Worker>mWorker;
    
    //Group employee
    setGroup(vWorker, mWorker);
    
    
    //display employee group
    showWorkerByGroup(mWorker);
    cout<<"----------------------------------------"<< endl;
    //test
    vector<Worker> ::iterator it;
    for(it = vWorker.begin(); it != vWorker.end(); it++){
        cout<< "Empolyee Name: "<< it -> wname << " | " <<"Salary: "<< it-> wsalary<<endl;
    }
    cout<<"----------random 1-10------------------------------"<< endl;
    int i,j;
    srand((int)time(0));
    for(i=0;i<10;i++){
        j=1+(int)(10.0*rand())/(RAND_MAX+1.0);
        printf("%d\n",j);
    }
    cout<<"----------------------------------------"<< endl;
    for(i=0; i<10; i++)//产生10个10以内的数字
           printf("%d\n", rand() % 10);
    
    cout<<"----------------------------------------"<< endl;




    hello();
       
    return 0;
}
