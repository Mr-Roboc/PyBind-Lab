# PyBind-Lab 🧪

**PyBind-Lab** is a research-oriented repository focused on the mechanics of the Python-C++ bridge. The goal of this lab is to explore the "Data Copy Tax," build system automation, and the seamless integration of C++ binaries into Python virtual environments.

## 🔬 Experiment Goals
1. **Build System Orchestration:** Implementing `CMakeLists.txt` and `pyproject.toml` to automate binary compilation.
2. **The "Data Copy Tax":** Investigating the overhead cost of moving data between Python objects and C++ `std::vector`.
3. **Editable Installs:** Mastering the complexities of `-e` flags with compiled extensions.



## 🏗️ Technical Stack
* **C++17:** The logic core.
* **pybind11:** The glue layer.
* **CMake:** The build architect.
* **scikit-build-core:** The PEP 517 build backend.

## 📖 Lessons Learned
* **Compiler Flags:** The difference between a Debug build and a `-O3` Release build is night and day.
* **The "Empty Box" Problem:** How the `install(TARGETS ...)` command in CMake is critical for shipping binaries inside Python Wheels.
* **Build Isolation:** Why `--no-build-isolation` is sometimes necessary in restricted or specialized environments like Parrot OS.

## 🚀 Usage
```python
import py_vector
# Test the dot product
result = py_vector.dot_product([1.0, 2.0], [3.0, 4.0])
print(f"Lab Result: {result}")
