# QMK Firmware – m1cha3l's pad

QMK firmware for the **m1cha3l's pad** – a 4-key macropad with a rotary
encoder, per-key SK6812MINI-E RGB LEDs, and a 0.91" SSD1306 OLED display,
all running on a Seeed XIAO RP2040.

---

## Hardware

| Component | Details |
|-----------|---------|
| MCU | Seeed XIAO RP2040 |
| Switches | 4 × MX-style (direct wiring) |
| Encoder | EC11 rotary encoder with push switch |
| LEDs | 4 × SK6812MINI-E (per-key, WS2812-compatible) |
| Display | 0.91" SSD1306 OLED (128 × 32, I2C) |

### Pin mapping

| Signal | XIAO pin | RP2040 GPIO |
|--------|----------|-------------|
| Switch K1 | D1 | GP27 |
| Switch K2 | D2 | GP28 |
| Switch K3 | D3 | GP29 |
| Switch K4 | D9 | GP4 |
| Encoder push | D8 | GP2 |
| Encoder A | D7 | GP1 |
| Encoder B | D6 | GP0 |
| RGB data | D0 | GP26 |
| OLED SDA | D4 | GP6 |
| OLED SCL | D5 | GP7 |

---

## Default keymap

```
┌────────┬────────┬────────┬────────┬──────────────┐
│  Mply  │  Mute  │ Ctrl+C │ Ctrl+V │  TG(Fn) ●    │
└────────┴────────┴────────┴────────┴──────────────┘
                                       ↑ encoder push

Encoder:  CCW = Vol−     CW = Vol+
```

### Fn layer (tap encoder push to enter / exit)

```
┌────────┬────────┬────────┬────────┬──────────────┐
│RGBPrev │RGBNext │ Brt−   │ Brt+   │  TG(Fn) ●    │
└────────┴────────┴────────┴────────┴──────────────┘

Encoder:  CCW = Hue−     CW = Hue+
```

### OLED display

Displays the keyboard name on the first line and the active layer on the
second line.

---

## Building the firmware

### Prerequisites

1. Install [QMK CLI](https://docs.qmk.fm/newbs_getting_started).
2. Set up your QMK environment:
   ```bash
   qmk setup
   ```

### Add keyboard to QMK

Copy (or symlink) the `keyboards/m1cha3l_s_pad` folder from this repository
into the `keyboards/` directory of your local QMK installation:

```bash
cp -r keyboards/m1cha3l_s_pad ~/qmk_firmware/keyboards/
```

### Compile

```bash
qmk compile -kb m1cha3l_s_pad -km default
```

This produces a `.uf2` file (e.g.
`m1cha3l_s_pad_default.uf2`) in the `qmk_firmware` root.

### Flash

1. Put the XIAO RP2040 into bootloader mode by holding **BOOT** and pressing
   **RESET** (or by double-tapping RESET).
2. A USB mass-storage device called **RPI-RP2** will appear.
3. Drag the `.uf2` file onto it – the board reboots automatically.

Alternatively, use QMK's flash command:

```bash
qmk flash -kb m1cha3l_s_pad -km default
```

---

## Customising

Edit `keyboards/m1cha3l_s_pad/keymaps/default/keymap.c` to change key
bindings, RGB effects, or the OLED display.  Then recompile and reflash.
