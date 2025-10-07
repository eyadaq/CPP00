#!/bin/bash

echo "Enter Folder Name:"
read filename
mkdir "$filename"
cd "$filename" || exit
touch main.cpp
touch Makefile

echo "Do you want to create a class? y / n:"
read ans

while [[ "$ans" == "y" || "$ans" == "Y" ]]; do
    echo "Enter Class name:"
    read class
    mkdir "$class"
    cat > "$class/$class.hpp" <<EOL
#ifndef ${class^^}_HPP
#define ${class^^}_HPP

class $class {
public:
    $class();   // Constructor
    ~$class();  // Destructor

private:
    // Add your member variables here
};

#endif
EOL

    # Create .cpp file with basic constructor/destructor
    cat > "$class/$class.cpp" <<EOL
#include "${class}.hpp"
#include <iostream>

${class}::${class}() {
    // Constructor implementation
}

${class}::~${class}() {
    // Destructor implementation
}
EOL

    echo "Class $class created!"
    echo "Do you want to create another class? y / n:"
    read ans
done

cd ..
