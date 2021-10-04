
#include <iostream>
#include <string>

class Building_floor_plan{
public:
    std::string floor_plan;

    int cement = 1000000;
    std::string get_floor_plan(){
        return this->floor_plan;
    }

    void set_floor_plan(std::string f){
        this->floor_plan = f;
    }

};
class Building : public Building_floor_plan{
    int floor;
    std::string elevator;
public:
    ~Building(){
        std::cout << "\n Building complete";
    }
    Building(int f,std::string e){
        this->floor = f;
        this->elevator = e;
    }
    int get_floor(){
        return this->floor;
    }
    static void print_elevator(std::string e){
        std::cout << e <<"\n";
    }

    std::string get_elevator(){
        return this->elevator;
    }
    void print_cement(){
        std::cout << this->cement;
    }
};


int main() {

    Building test (25,"50");
     int b = test.get_floor();
     std::cout << b << "\n";
     Building::print_elevator("50");
    test.set_floor_plan("\nArtsakh Square Garden");
    test.print_cement();
    std::cout <<test.get_floor_plan();


    return 0;
}