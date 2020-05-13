#!/bin/bash
chmod +x rpi_inst.sh

echo " ######################################################################################

    ������   �    ��  ����    �      ������  ������   ������   �۲ �۲���  �������۲
   ��� � �۱ ��  ��۱ �� ��   �    ���    � ���� ��  ��� � �۱��۱��۰  �۱�  �۱ ��
   ��� ��� ����  ��۰���  �� �۱   � ����   ���    � ��� ��� ���۱��۰ �۲�� ��۰ ��
   �������  ���  ��۰��۱  ���۱     �   �۱���� ��۱�������  ��۰����۲� �� ��۲ �
   ��۲ ��۱������۲ ��۰   ��۰   ������۱�� ����� ���۲ ��۱��۰��۱ �  �  ��۱ �
   � �� �������� � � � ��   � �    � ��� � �� �� �  �� �� ������  ���� �  �  � ��
     �� � ������ � � � ��   � ��   � ��  � �  �  �     �� � �� � ��� �         �
     ��   �  ��� � �    �   � �    �  �  �  �          ��   �  � ���         �
      �        �              �          �  � �         �      �
                                            �

#######################################################################################"

# on Rpi:  SSH interface
# on Rpi:  VNC interface
# on Rpi:  Romote GPIO interface
#
# Update & Upgrade

sudo apt-get update
read -t 5 -p "I am going to wait for 5 seconds only ..."

sudo apt-get upgrade -y
read -t 5 -p "I am going to wait for 5 seconds only ..."

sudo apt-get install gedit -y
read -t 5 -p "I am going to wait for 5 seconds only ..."

sudo apt-get install mc -y
read -t 5 -p "I am going to wait for 5 seconds only ..."

sudo apt-get install cmake -y
read -t 5 -p "I am going to wait for 5 seconds only ..."

sudo apt-get install wiringpi -y