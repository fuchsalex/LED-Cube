# LED-Cube

8x8x8 LED Cube für Arduino Uno Rev3

[![MIT License](https://img.shields.io/github/license/mashape/apistatus.svg?maxAge=2592000)](https://github.com/fuchsalex/Smart-Mirror/blob/master/LICENSE)




## Dokumentation

:warning: Inhalt in Arbeit...


## Simulation
Der Schaltungsaufbau inklusive Arduino Uno ist in Proteus simuliert. 
Die Simulation ist auf 3 Seiten aufgeteilt:
- [Sheet 1] Platinenaufbau
- [Sheet 2] Analyse der Steuerleitungen
- [Sheet 3] Ansteuerung der 512 LEDs


[Simulation](https://github.com/fuchsalex/LED-Cube/tree/master/Simulation)

## Funktionstest
Um die Funktionalität der einzelnen Leds zu überprüfen wird das [Testprogramm](https://github.com/fuchsalex/LED-Cube/blob/master/Sourcecode/LED_CUBE_Testprogramm.ino) in den Microcontroller geladen.
Dabei wird jede LED für kurze Dauer beschalten. Sollte hier eine LED nicht leuchten, so liegt ein Fehler in der Platine vor.

## Programmcode
Ist der Cube auf funktionsfähigkeit geprüft, dann kann der [Programmcode](https://github.com/fuchsalex/LED-Cube/blob/master/Sourcecode/LED_CUBE_source.ino) in den Microcontroller geladen werden.

### Autor
![Alexander Fuchs](https://github.com/fuchsalex)

### Lizenz
MIT

### Info
Der Anfertigung eines eigenen LED Cube wurde inspiriert von [ChrisB](http://ledcubeblog.blogspot.co.at/).
