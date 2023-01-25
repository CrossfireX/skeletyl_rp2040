# Skeletyl with QMK on rp2040 

*Recipe to get it done:
* **Put rp2040 into bootloader mode
* **Copy folder to qmk_firmware\keyboards
* **Compile & flash left side with:

    qmk compile -kb custom_b -km default:uf2-split-left

* **Compile & flash right side with:

    qmk compile -kb custom_b -km default:uf2-split-right
