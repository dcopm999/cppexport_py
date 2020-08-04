#include <boost/python.hpp>
#include "human.h"

using namespace boost::python;

dict to_dict(Human &human);
void from_dict(Human &human, dict src);

BOOST_PYTHON_MODULE(example)
{
  class_<Human>("Human")
    .def(init<string>(args("name")))
    .def("get_name", &Human::get_name)
    .def("set_name", &Human::set_name, args("name"))
    .def("__repr__", &Human::repr)
    .def("__str__", &Human::str)
    .add_property("as_dict", to_dict, from_dict);
}

dict to_dict(Human &human)
{
  dict res;
  res["name"] = human.get_name();
  return res;
}

void from_dict(Human &human, dict src)
{
  src.has_key("name") ? human.set_name(extract<string>(src["name"])): human.set_name ("");
}
