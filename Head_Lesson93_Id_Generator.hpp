#ifndef HEAD_LESSON93_ID_GENERATOR_HPP
#define HEAD_LESSON93_ID_GENERATOR_HPP
#include <iostream>
#include <string>

class Human{
	public:
		static int Count;
		Human(std::string name_, std::string surname_, int age_){
			this->name = name_;
			this->surname = surname_;
			this->age = age_;
			Count++;
			id = Count;
		}
		~Human(){};
		int GetId(){
			return id;
		}
	private:
		std::string name;
		std::string surname;
		int age;
		int id;
	};
	int Human::Count = 0;
#endif
