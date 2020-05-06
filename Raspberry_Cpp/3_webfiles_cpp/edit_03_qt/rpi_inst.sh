#!/bin/bash
chmod +x rpi_inst.sh

echo " ######################################################################################

    €€ﬂ€€€   €    €€  €€€‹    €      €€€€€€  ‹€€€€‹   €€ﬂ€€€   €€≤ €€≤€€€  ‹‹‹€€€€€≤
   ≤€€ ± €€± €€  ≤€€± €€ ﬂ€   €    ±€€    ± ±€€ﬂ ﬂ€  ≤€€ ± €€±≤€€±≤€€∞  €€±≤  €€± ≤±
   ≤€€ ∞‹€ ±≤€€  ±€€∞≤€€  ﬂ€ €€±   ∞ ≤€€‹   ±≤€    ‹ ≤€€ ∞‹€ ±±€€±≤€€∞ €€≤±± ≤€€∞ ±∞
   ±€€ﬂﬂ€‹  ≤≤€  ∞€€∞≤€€±  ﬁ›€€±     ±   €€±±≤≤‹ ‹€€±±€€ﬂﬂ€‹  ∞€€∞±€€‹€≤± ±∞ ≤€€≤ ∞
   ∞€€≤ ±€€±±±€€€€€≤ ±€€∞   ≤€€∞   ±€€€€€€±±± ≤€€€ﬂ ∞∞€€≤ ±€€±∞€€∞±€€± ∞  ∞  ±€€± ∞
   ∞ ±≤ ∞±≤∞∞±≤± ± ± ∞ ±∞   ± ±    ± ±≤± ± ∞∞ ∞± ±  ∞∞ ±≤ ∞±≤∞∞≤  ±≤±∞ ∞  ∞  ± ∞∞
     ∞± ∞ ±∞∞∞±∞ ∞ ∞ ∞ ∞∞   ∞ ±∞   ∞ ∞±  ∞ ∞  ∞  ±     ∞± ∞ ±∞ ± ∞∞± ∞         ∞
     ∞∞   ∞  ∞∞∞ ∞ ∞    ∞   ∞ ∞    ∞  ∞  ∞  ∞          ∞∞   ∞  ± ∞∞∞         ∞
      ∞        ∞              ∞          ∞  ∞ ∞         ∞      ∞
                                            ∞

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