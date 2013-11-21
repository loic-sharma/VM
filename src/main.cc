#include <map>
#include <ctime>
#include <iostream>

#include "vm/program.h"
#include "vm/objects/object.h"
#include "vm/objects/instance.h"
#include "vm/opcodes/opcodes.h"

class UserModelGetNameMethod : public Method {
  public:
	~UserModelGetNameMethod() {

	}

	Instance *execute(std::map<std::string, Instance *> arguments) {
		return arguments["this"]->get_property("name")->get_instance();
	}
};

class UserModel : public Object {
  public:
	UserModel() {
		set_name("UserModel");

		add_property("name");
		add_property("age");

		add_method("getName", new UserModelGetNameMethod());
	}
};

class String : public Object {
  public:
	String() {
		set_name("String");
	}
};

int main(int argc, const char *argv[]) {
	Instance *userModel = new Instance(new UserModel());
	Instance *string = new Instance(new String());

	userModel->get_property("name")->set_instance(string);
	
	std::cout << userModel->to_string() << std::endl;
	std::cout << userModel->call_method("getName")->to_string() << std::endl;

	return 0;
}
