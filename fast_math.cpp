// Pybind11 is a lightweight, header-only C++ library that exposes C++ types and functions to Python and vice versa, allowing for seamless interoperability

#include<pybind11/pybind11.h>





namespace py = pybind11;


int add(int i,int j){
    return i+j;
}

int sub(int i, int j){
    return i-j;
}

// PYBIND11_MODULE is a macro that creates the "entry point" for Python. Creates a function that will be called when an import statement is issued from within Python.

// "super_math" will be the name of the import in Python.

PYBIND11_MODULE(super_math,m)
{
  m.doc() = "My first pybind11 plugin.";

// m.def("name_in_python", &function_pointer, "Description")
   m.def("add", &add, "A function that adds two numbers");

   m.def("sub",&sub,"A function that subtracts two numbers");
}
