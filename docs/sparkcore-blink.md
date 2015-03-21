# Control a LED on your SparkCore

Schematics:
* sparkcore_blink.fzz
* sparkcore_led_temperature.fzz

Reference: <http://docs.spark.io/start/>

Plug your Spark Core into one USB port of your laptop. The Core should start blinking blue.
If not, press and hold the MODE button until it starts blinking blue.

If this does not happen, apply the "Factory Reset" procedure.

See <http://docs.spark.io/connect/##connecting-your-core-connect-over-usb>

On the controlling laptop, look at Device Manager to identify the COMxx listed as "Spark Core with Wifi and Arduino Compatibility" - in our case this is COM23

Start > PuTTY

Configure for COMxx:115200,8,n,1

Type "W" to configure WiFi

* SSID: xxx
* Security: xxx
* Password: xxx

The RGB led should eventually start breathing cyan, which means the Core is connected.

Launch the Spark App on your iPhone, then select your Core and try to

* D0: digitalOut (this is the green LED added on the breadboard)
* D7: digitalOut (this is the on-board blue LED)
* A0: analogRead (this is the LM37)

<!-- EOF -->
