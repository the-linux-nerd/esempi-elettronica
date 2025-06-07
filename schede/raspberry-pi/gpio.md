# introduzione ai pin GPIO di Raspberry Pi
![image](https://github.com/user-attachments/assets/baef4ef7-3df8-4649-8a2a-f93acea5a667)

## utilizzare un pin GPIO in scrittura
Si supponga di voler abilitare il pin GPIO 21 in OUTPUT:
```
echo 21 > /sys/class/gpio/export
echo out > /sys/class/gpio/gpio21/direction
```
e successivamente inviargli HIGH:
```
echo 1 > /sys/class/gpio/gpio21/value
```
e poi LOW:
```
echo 0 > /sys/class/gpio/gpio21/value
```
infine, lo disattiviamo:
```
echo 21 > /sys/class/gpio/unexport
```
# link-o-grafia
- https://www.raspberrypi-spy.co.uk/2014/07/raspberry-pi-b-gpio-header-details-and-pinout/
