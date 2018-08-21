#include <iostream>
#include <string>
#include "Head_Lesson93_Id_Generator.hpp"
int main(){
	Human Nic("Nikolj","Demidovich",28);
	std::cout<<"Nic.id: "<<Nic.GetId()<<std::endl;
	Human Alex("Alex","Skoblic",32);
	std::cout<<"Alex.id: "<<Alex.GetId()<<std::endl;
	return 0;
}
