# m1cha3l's pad

My take on a macropad but with comfort added. Featuring 4x custom mapable MX-Style switches, 1x Rotary encoder and a 0.91 inch OLED display.

The pad runs KMK Firmware on a Seeed XIAO RP2040. For easy configuration it has been done with POG Configurator for easy setup and reconfiguration. QMK firmware will come in the future to make use of the OLED display.

The current firmware can be found in the m1cha3l folder

# IMPORTANT NOTES

You need to have CircuitPython installed on your board. [Here](https://learn.adafruit.com/welcome-to-circuitpython/installing-circuitpython)'s a guide. After you put the insides of m1cha3l in production or m1cha3l onto the board, or you use [POG](https://pog.heaper.de) to flash and customize.

As of right now the leds and OLED are not yet set up and firmware not yet 100% tested as I don't have the hardware, once I get it I will update it.

To balance the weight you HAVE to put few washers in the bottom part and secure them with hot glue.

You first have to put the switches in the top part, then solder the OLED to the PCB, then you can solder the switches and click them into the bottom part of the case.

The rotary encoder isn't mounted on the PCB due to size savings and also because I wanted to try something new. You can connect it with female jumper cable through the header on the back of the PCB. Also it doesn't have a cap on because I dont like the feeling of them and something just makes me happy seeing raw hardware.

# Looks of the pad

![Front](https://github.com/sevcikmichael09-ops/m1cha3l-s-pad/blob/main/Pictures/pic%203.png)

![Back](https://github.com/sevcikmichael09-ops/m1cha3l-s-pad/blob/main/Pictures/pic%202.png)

# CAD (Case)

The case uses a screwless design.

![With top on](https://github.com/sevcikmichael09-ops/m1cha3l-s-pad/blob/main/Pictures/pic%201.png)

![Without top](https://github.com/sevcikmichael09-ops/m1cha3l-s-pad/blob/main/Pictures/pic%204.png)


# Schematic/PCB

![Schematic](https://github.com/sevcikmichael09-ops/m1cha3l-s-pad/blob/main/Pictures/Schematic.png)

![PCB](https://github.com/sevcikmichael09-ops/m1cha3l-s-pad/blob/main/Pictures/PCB.png)


# Hardware used

| Part Name | Quantity |
|---|---:|
| 3D Printed case | 1 |
| Seeed XIAO RP2040 | 1 |
| EC11 Rotary encoders | 1 |
| MX-Style Switch | 4 |
| Keycap | 4 |
| SK6812MINI-E | 4 |
| Custom PCB | 1 |
| Old/washers | 4 |

# My feelings

Love the project from start to finish and it helped me learn a lot of things and guide me to get my first shipped project! I highly suggest you try and build the macropad from scratch yourself as it is easy to understand and teaches you the basics. 
