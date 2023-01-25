# Skeletyl with QMK on rp2040 

Rp2040 boards use PIO serial communication and are connected over 3.5" audio jack.<br>
It uses 3 pins: 3V3 (36), GND (38) and TX (GP0).

Recipe to get it done:
* put rp2040 into bootloader mode
* copy folder to qmk_firmware\keyboards
* compile & flash left side with:
``` 
qmk compile -kb custom_b -km default:uf2-split-left
```
* compile & flash right side with:
```
qmk compile -kb custom_b -km default:uf2-split-right
```
