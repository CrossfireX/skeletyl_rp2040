# Skeletyl with QMK on rp2040 

Recipe to get it done:
* put rp2040 into bootloader mode
* copy folder to qmk_firmware\keyboards
* compile & flash left side with:
``` qmk compile -kb custom_b -km default:uf2-split-left
```
* compile & flash right side with:
```
 qmk compile -kb custom_b -km default:uf2-split-right
 ```
