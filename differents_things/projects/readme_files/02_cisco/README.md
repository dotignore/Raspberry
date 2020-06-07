[<h1 id="custom-id"># Cisco 2811 </h1>](https://github.com/dotignore/Raspberry/tree/master/differents_things/projects/02_cisco)

[<h1 id="custom-id"> -- Back --</h1>](https://github.com/dotignore/Raspberry/tree/master/differents_things/)

```
Cisco 2811 

// Reset settings

	1) first step
R1# configure terminal (conf term)
R1(config)# config-register 0x2142	ignore settings 
R1(config)# exit

after reload

--- System Configuration Dialog ---
configurate and save files to flash

	2) second step go to

R1# configure terminal
R1(config)# config-register 0x2102	default
R1(config)# exit

and dont erase configurate

well done
=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
#show running-config
#show startup-config
#copy running-config startup-config
#copy startup-config running-config
#copy run flash:

```

#Cisco 2811 #putty #rs232


# 01

<img src="https://raw.githubusercontent.com/dotignore/Raspberry/master/differents_things/projects/02_cisco/DSC04748.jpg" alt="" data-canonical-src="" width="700" />

# 02

<img src="https://raw.githubusercontent.com/dotignore/Raspberry/master/differents_things/projects/02_cisco/EMaWmTfWsAASDTI.jpg" alt="" data-canonical-src="" width="700" />

[<h1 id="custom-id"> -- Back --</h1>](https://github.com/dotignore/Raspberry/tree/master/differents_things/)

<!-- =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= -->




