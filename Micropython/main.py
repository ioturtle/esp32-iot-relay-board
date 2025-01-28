# MicroPython code to control LEDs connected to pins 18, 19, 23,
# and 25 of your ESP32, turning them on and off in sequence

from machine import Pin
from time import sleep

# Define LED pins
led_pins = [18, 19, 23, 25]

# Initialize LED pins as output
leds = [Pin(pin, Pin.OUT) for pin in led_pins]

while True:
    # Turn on LEDs in sequence
    for led in leds:
        led.value(1)  # Turn LED on
        sleep(0.5)    # Delay for visibility

    # Turn off LEDs in reverse sequence
    for led in reversed(leds):
        led.value(0)  # Turn LED off
        sleep(0.5)    # Delay for visibility
