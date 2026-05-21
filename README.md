## A projekt leírása

A projekt célja egy Arduino UNO alapú közlekedési lámpa elkészítése volt.  
A kapcsolás három LED-et tartalmaz: piros, sárga és zöld LED-et.  
A LED-ek a közlekedési lámpa jelzéseit modellezik.

A rendszer egy kapcsolóval is rendelkezik. A kapcsoló állapotától függően a program kétféle működési módot valósít meg:

- normál közlekedési lámpa üzemmód,
- sárga villogó üzemmód.

## Felhasznált alkatrészek

- Arduino UNO
- piros LED
- sárga LED
- zöld LED
- 3 db ellenállás
- kapcsoló
- vezetékek

## Bekötés

| Alkatrész | Arduino láb |
|----------|-------------|
| Piros LED | 13 |
| Sárga LED | 12 |
| Zöld LED | 11 |
| Kapcsoló | 2 |

## Működés

Normál üzemmódban a lámpa zöld, sárga, piros, majd piros-sárga sorrendben működik.  
Ha a kapcsoló aktív állapotban van, akkor a rendszer sárga villogó üzemmódba kapcsol.

## Tinkercad szimuláció

A projekt kapcsolási rajza és működése Tinkercad szimulációban is megtekinthető:

https://www.tinkercad.com/things/gjEs2V9nS3H/editel?returnTo=%2Fdashboard%2Fdesigns%2Fcircuits&sharecode=NWRGMaP6tGwJbIHOh5JQYRobPIyx88KSiglY4RWC0oY


## Forráskód

A forráskód a `kozlekedesi_lampa.ino` fájlban található.
