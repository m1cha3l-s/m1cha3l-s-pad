# m1cha3l's pad

My take on a macropad but with comfort added. Featuring 5x custom mapable MX-Style switches, 1x Rotary encoder and a 0.91 inch OLED desplay.

The pad runs QMK Firmware with VIA on a Seeed XIAO RP2040. VIA Allows easy customization without the need to reflash firmware.

# Hardware used

| Part Name | Quantity |
|---|---:|
| 3D Printed case | 1 |
| Seeed XIAO RP2040 | 1 |
| EC11 Rotary encoders | 1 |
| MX-Style Switch | 5 |
| Keycap | 5 |
| Custom PCB| 1 |

# Build journal (rev:1)

Started with making the schematic for the pad as that was the step I was most familiar with. The hardest part about that was figuring out how to import the libraries needed into KiCad. Once I have done that the schematic took me ~30 minutes.

Next step was the pcb, at first I thought it would be hard but the only trouble I had was the edge.cuts layer. Didn't know what I was doing to be honest but after playing around with different tools I figured out that I needed to use the draw tool and not the line tool which was used for routing the traces. One tip I have for you if you ever try and edit the pcb is to not make all the traces on one side. It allowed me to make it slim and compact which will help with the looks and over all allow it to make it more sleek.

3D printed case gave me a lot of trouble not because of the design process but because I had trouble with Fusian360 again. Tried to solve that by doing a reinstall of it, which fixed the first issue of not being able to load. Second issue was crashing, sadly also a little setback because I forgot to do saves but that was my mistake and something to keep in mind next time. My idea for the case was simple, something that doesn't take up a lot of space on my desk and also is comfortable to reach. That resulted in me placing the pcb at an angle and making it one row. This allowed for better viewing of the OLED display and better reach route for fingers from mouse.

Firmware choice: at first I wanted to use only QMK but that would mean not being able to make customizations to the actions which buttons do without flashing new firmware every time. Then I found out about VIA, it was perfect as QMK config was feeling like the best choice to me and VIA config was quite easy I have to say.
