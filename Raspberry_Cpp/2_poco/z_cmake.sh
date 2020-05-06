#!/bin/bash

# chmode        $ chmod +x z_cmake.sh
# run file      $ sh z_cmake.sh

echo "##################################"

echo "### chmod +x z_poco.sh ###"
chmod +x z_poco.sh
echo "### ok ###"

echo "##################################"

echo "### mkdir build ###"
mkdir build
echo "### ok ###"

echo "##################################"

echo "### cd build ###"
cd build
echo "### ok ###"

echo "##################################"

echo "### cmake .. ###"
cmake ..
echo "### ok ###"

echo "##################################"

echo "### make ###"
make
echo "### ok ###"

echo "##################################"

echo "### ./Poco_orig ###"
./Poco_orig
echo "### ok ###"
