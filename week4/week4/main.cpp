//
//  main.cpp
//  week4
//
//  Created by Yan Peng on 2/9/22.
//

// Pass by reference

#include <iostream>
#include<string>

using namespace std;

class Person{
private:
    string _name;
    
public:
    Person(string name){
        _name = name;
        //this._name=name;
    }
    string getName(){
        return _name;
    }
    void setName(string name){
        _name=name;
    }
        
    
    
};

class Student:public Person{
private:
    string _studentId;
public:
    Student(string name,string studentId):Person(name){//super
        _studentId = studentId;
    }
    
    string getStudentId(){
        return _studentId;
    }
    
    string getName(){
        return " s:" + Person::getName();
    }
};

    


int main() {
    
    Person luo = Person("michael");
    Person cam{"cam"};
    
    Student josh = Student("josh","abc123");
    
    cout<<"hello "<<luo.getName()<<endl;
    cout<<"hello"<<josh.getName()<<":"<< josh.getStudentId()<<endl;
    return 0;
}
