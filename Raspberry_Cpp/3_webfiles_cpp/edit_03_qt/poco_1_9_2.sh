#!/bin/bash
chmod +x poco_1_9_2.sh

echo "######################################################################################

    ██▀███   █    ██  ███▄    █      ██████  ▄████▄   ██▀███   ██▓ ██▓███  ▄▄▄█████▓
   ▓██ ▒ ██▒ ██  ▓██▒ ██ ▀█   █    ▒██    ▒ ▒██▀ ▀█  ▓██ ▒ ██▒▓██▒▓██░  ██▒▓  ██▒ ▓▒
   ▓██ ░▄█ ▒▓██  ▒██░▓██  ▀█ ██▒   ░ ▓██▄   ▒▓█    ▄ ▓██ ░▄█ ▒▒██▒▓██░ ██▓▒▒ ▓██░ ▒░
   ▒██▀▀█▄  ▓▓█  ░██░▓██▒  ▐▌██▒     ▒   ██▒▒▓▓▄ ▄██▒▒██▀▀█▄  ░██░▒██▄█▓▒ ▒░ ▓██▓ ░ 
   ░██▓ ▒██▒▒▒█████▓ ▒██░   ▓██░   ▒██████▒▒▒ ▓███▀ ░░██▓ ▒██▒░██░▒██▒ ░  ░  ▒██▒ ░ 
   ░ ▒▓ ░▒▓░░▒▓▒ ▒ ▒ ░ ▒░   ▒ ▒    ▒ ▒▓▒ ▒ ░░ ░▒ ▒  ░░ ▒▓ ░▒▓░░▓  ▒▓▒░ ░  ░  ▒ ░░   
     ░▒ ░ ▒░░░▒░ ░ ░ ░ ░░   ░ ▒░   ░ ░▒  ░ ░  ░  ▒     ░▒ ░ ▒░ ▒ ░░▒ ░         ░    
     ░░   ░  ░░░ ░ ░    ░   ░ ░    ░  ░  ░  ░          ░░   ░  ▒ ░░░         ░      
      ░        ░              ░          ░  ░ ░         ░      ░                    
                                            ░                                       

#######################################################################################"


wget https://pocoproject.org/releases/poco-1.9.2/poco-1.9.2.tar.gz
read -t 5 -p "I am going to wait for 5 seconds only ..."

gunzip poco-1.9.2.tar.gz
read -t 5 -p "I am going to wait for 5 seconds only ..."

tar -xf poco-1.9.2.tar
read -t 5 -p "I am going to wait for 5 seconds only ..."

cd poco-1.9.2
read -t 5 -p "I am going to wait for 5 seconds only ..."

./configure --no-tests --no-samples
read -t 5 -p "I am going to wait for 5 seconds only ..."

make -j4
read -t 5 -p "I am going to wait for 5 seconds only ..."

sudo make install
read -t 5 -p "I am going to wait for 5 seconds only ..."
