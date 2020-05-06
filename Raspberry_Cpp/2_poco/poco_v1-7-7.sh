#!/bin/bash

# chmode	$ chmod +x poco_v1-7-7.sh
# run file	$ sh poco_v1-7-7.sh

###############################

echo "### chmod +x poco_v1-7-7.sh ###"
chmod +x poco_v1-7-7.sh
echo "### ok ###"

echo "##############################"

echo "### wget https.......poco-1.7.7.tar.gz ###"
wget https://pocoproject.org/releases/poco-1.7.7/poco-1.7.7.tar.gz
echo "### ok ###"

echo "##############################"

echo "### gunzip poco-1.7.7.tar.gz ###"
gunzip poco-1.7.7.tar.gz
echo "### ok ###"

echo "##############################"

echo "### tar -xf poco-1.7.7.tar ###"
tar -xf poco-1.7.7.tar
echo "### ok ###"

echo "##############################"

echo "### cd poco-1.7.7 ###"
cd poco-1.7.7
echo "### ok ###"

echo "##############################"

echo "### ./configure --no-tests --no-samples ###"
./configure --no-tests --no-samples
echo "### ok ###"

echo "##############################"

echo "### make -j4 ###"
make -j4         	# create procedure 60 min on raspberry pi 3 b+
echo "### ok ###"

echo "##############################"

echo "### sudo make install ###"
sudo make install
echo "### ok ###"