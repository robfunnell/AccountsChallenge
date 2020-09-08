#include "I_Printable.h"

std::ostream& operator<<(std::ostream& os, const I_Printable& obj) {
	os.precision(2);
	os << std::fixed;
	obj.print(os);
	return os;
}