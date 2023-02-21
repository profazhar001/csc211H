# How to Test Exercise Solutions
All the exercises come with tests to verify your solutions, made using a testing library
called Catch2.

All you need to do to run the tests is compile them using CMake. The steps to do so are:
1. Create a build directory in the root of this repository. (`mkdir build`)
2. Enter the build directory. (`cd build`)
3. Run `cmake ..` from within the build directory *(this generates your makefile)*.
4. Run `make` in the build directory *(this generates executables/libraries)*.
   * Both of these processes can take a minute or so to complete, especially on first run.
5. You can use `ls` to see the name of all test executables.
6. Run `./<name_of_test>` in the build directory.

If you have not made any modifications to the file structure, or names of files or functions,
this is all you should need to do.

If you have any questions, feel free to email me at petervaiciulis@gmail.com.

If you believe there are issues with the tests or solutions, please open an issue on the GitHub repository, and be sure
to @ me.