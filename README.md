# OBS-Keyb4Derby

We use OBS to stream Roller Derby events.
Our setup use 3 Webcams, two C920 for the game caption and a third one to film the speakers.

We needed a simple way to manage theses sources.
I first make a quick and dirty keyboard that emulate an HID interface with an Arduino MICRO.

I later found a way to add three things to it, using the OBS Websocket :
- A Record and a Stream indicator.
- A TALLY Light so the people who speak on the stream know when there are "about to be" and "On Air".

I also designed a case for the keyboard and the Tally Light.


This project is a mix of two things :
- A simple keyboard made with an arduino micro.
- A .NET app (very badly) forked from https://boprograms.eu/obsTally/. 
(I'am not fluent to write windows code and a total noob with .NET app Visual Studio.)

Included in this Github :
- A compiled "OBSTallyClientbyZoe.exe" and its source.
- The Arduino Code for Arduino
- Schematics of the keyboard 
- .STL and .OBJ to print a Case and and a Tally Light indicator.

# Build the keyboard

A Verobard Stripboard. i Used some scrap laying around in my stuff so it's not really standard (size is 160mm x 73mm).
You could use this kind of board (https://www.amazon.fr/gp/product/B01KS4TC0G/ref=crt_ewc_title_oth_1?ie=UTF8&psc=1&smid=A2GZQ0HPGDFWPN) 
Some cheap push button (https://www.amazon.fr/gp/product/B0749KNQNH/ref=ppx_yo_dt_b_search_asin_title?ie=UTF8&psc=1)
Some few resistors (10K, 

