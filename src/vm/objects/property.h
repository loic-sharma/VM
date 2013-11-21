#ifndef VM_OBJECTS_PROPERTY_H_
#define VM_OBJECTS_PROPERTY_H_

#include <string>

class Instance;

class Property {
  public:
	enum Visibility {PUBLIC, PROTECTED, PRIVATE};

	~Property();

	Property();
	Property(Visibility visibility);
	Property(Visibility visibility, std::string type);

	void set_instance(Instance *);
	Instance *get_instance();

	std::string to_string();

  private:
	Visibility visibility;
	std::string type;

	Instance *instance;
};

#endif
