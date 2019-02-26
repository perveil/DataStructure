#include "iostream"
#include "string"
using  namespace std;

class Teacher{
public:
    string name;
    int age;
    int height;
    char rank; //教师等级
};
class Student1{
    string name;
public:
    void add(){
        int a=10;
        int sum=0;
        for (int i = 0; i <a ; ++i) {
            sum+=a;
        }
    }
};
