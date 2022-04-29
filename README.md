# OBS-Keyb4Derby

We use OBS to stream Roller Derby events.
Our setup use 3 Webcams, two C920 for the game caption and a third one to film the speakers.

We needed a simple way to manage theses sources.
I first make a quick and dirty keyboard that emulate an HID interface with an Arduino MICRO.

I later found a way to add three things to it, using the OBS Websocket (https://github.com/obsproject/obs-websocket) :
- A Record and a Stream indicator.
- A TALLY Light so the people who speak on the stream know when there are "about to be" and "On Air".

I also designed a case for the keyboard and the Tally Light.

This project is a mix of three things :
- A simple keyboard made with an arduino micro.
- Some 3D printed parts for the case and the Tally Light.
- A .NET app (very badly) forked from https://boprograms.eu/obsTally/. 
(I'am not fluent to write windows code and a total noob with .NET app Visual Studio.)

Included in this Github :
--------------------------
- A compiled "OBSTallyClientbyZoe.exe" and its source.
- The Arduino Code for Arduino
- Schematics of the keyboard 
- .STL and .OBJ to print a Case and and a Tally Light indicator.

# Build the keyboard
- An Arduino Micro : https://store.arduino.cc/products/arduino-micro
- A Verobard Stripboard. i Used some scrap laying around in my stuff so it's not really standard (size is 160mm x 73mm).
You could use this kind of board (https://www.amazon.fr/gp/product/B01KS4TC0G/ref=crt_ewc_title_oth_1?ie=UTF8&psc=1&smid=A2GZQ0HPGDFWPN) 
- Some cheap push button (https://www.amazon.fr/gp/product/B0749KNQNH/ref=ppx_yo_dt_b_search_asin_title?ie=UTF8&psc=1)
- Some few resistors, LEDs and a transistor (10K, 4.7K, 47 & 100 Ohm, a 2N3906) see attached partlist
- A 3.5mm Stereo female jack socket for the case, and a 3.5mm Stereo wire and male jack for the Tally Light.

# 3D print the case
I used a mixed material printing in 0.3mm layer height : 
First two layers are TPU, then pause the printing process and switch for clear PETG.
The back cover of the Tally Light if a full TPU print.
All the part are designed to be print with no support.

# How to use
**Please remember that OBS must be in Studio Mode for the Tally Client to work !!!**

- Install OBS Websocket if needed.
- The keyboard itself is plug and play, pressed key return F13 to F22
- Find the COM port of your Arduino.


- Start "OBSTallyClientbyZoe.exe" (the .exe need to be in a folder with all the files)
  -   Newtonsoft.Json.dll
  -   config.xml
  -   obs-websocket-dotnet.dll
  -   websocket-sharp.dll
- Setup your password and name of the scene to be advertised with the Tally light.
as i'd already mentionned, i'am a bad noob with .NET code it will probably advertise you with an error code, but it still work (tested on three different computers).
- Select the COM port of your Arduino in the software and Voila !





