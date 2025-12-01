# introduzione ai pin GPIO di Raspberry Pi

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

## utilizzare un pin GPIO in lettura

# link-o-grafia
- https://www.raspberrypi-spy.co.uk/2014/07/raspberry-pi-b-gpio-header-details-and-pinout/
- https://youtu.be/llI9TFglIFY?si=mzbhpJldXRj6AYl6
