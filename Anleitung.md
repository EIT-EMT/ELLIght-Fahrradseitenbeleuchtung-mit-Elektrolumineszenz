# 1 Nachbau 

Um einen Nachbau zu realisieren, gibt es einige Voraussetzungen. Unteranderem ist es erforderlich, einen Druck des Gehäuses umsetzen zu können. Auch ist mindestens eine Lötstation erforderlich. Um die Platine auf Fehler testen zu können, ist es ebenso wichtig, über Messeinrichtungen wie ein Multimeter zu verfügen. Auch muss der Betrieb simulierbar sein und unter Spannung programmiert werden, weshalb ein externes Netzteil zur Stromversorgung nötig ist. Zusätzlich sollte diverses Werkzeug verfügbar sein. Wenn die Bedingungen erfüllt sind, kann ein Nachbau des gesamten Projektes erfolgen. Andernfalls ist ein Nachbau nicht empfehlenswert. Die Exceldatei [Materialliste](Dateien/Materialliste_EL.xlsx) beinhaltet eine Liste mit allen Materialien, die zusätzlich zum Arbeitsmaterial benötigt werden, um einen Nachbau zu vollziehen. Jegliche Materialien, die verwendet werden, sollten für die Verwendung im Freien geeignet sein. 

## 1.1 Nachbau Platine

Für den Nachbau der Platine steht der Ordner [Platine](Dateien/Platine) aus dem Programm KiCad zur Verfügung. Es gibt verschiedene Möglichkeiten die Platine umzusetzen. Zum einen lässt sich diese selbst mittels Belichtens, Entwickeln und Ätzen herstellen. Hierfür ist jedoch das passende Equipment erforderlich. Um diese Option weiter zu verfolgen, muss sich umfassend informiert werden. Für Einsteiger ist es daher ratsam, die Platinen von Extern entwickeln zu lassen. Dazu stehen auch die nötigen [Gerberdateien](Dateien/Gerber.zip) zur Verfügung.  
Wird die Platine selbst erstellt, müssen zunächst die Löcher für die Durchkontaktierungen und die Stiftleisten bzw. die JST-Stiftleisten gebohrt werden. Für die Durchkontaktierungen ist ein 0,4 mm Loch empfehlenswert. Für die restlichen Löcher kann ein Loch von 1,0 mm gebohrt werden. In diesem Fall gilt es anschließend die Durchkontaktierungen zu verlöten, dafür sollte ein verzinnter Kupferdraht durchgesteckt und beidseitig verlötet werden. Bei Extern entwickelten Platinen sind Durchkontaktierungen meist schon vorhanden und müssen nicht extra gebohrt und gelötet werden. Auf diesen sind in der Regel ebenfalls die Löcher für die Stiftleisten und die JST-Stiftleisten schon durchkontaktiert, sodass diese Bauteiel in dem Fall nur auf der Seite Back festgelötet werden müssen. Die 3D-Ansichten der Platine zeigen die Bezeichnungen der einzelnen Bauteile auf. Die Tabelle zeigt welches Bauteil konkret zu welcher Beschriftung gehört. Dementsprechend sind die Bauteile zu verlöten. 
Wenn vorhanden, bietet es sich an, für die Seite Back mit einem Pick & Place System für SMD zu arbeiten. Ist dies nicht der Fall, gilt es alle Bauteile händisch zu verlöten. Dabei ist es wichtig darauf zu achten, dass alle Bauteile an den richtigen Stellen und auch richtig herum aufgebracht werden. Bei den ICs, den Dioden und den Elektrolytkondensatoren gibt es nur eine Funktionsrichtung. Bei den Dioden muss darauf geachtet werden, dass Anode und Kathode richtig herum eingesetzt werden. Viele Dioden haben auf dem Gehäuse auf der Seite der Kathode einen Strich. Dies gilt auch für die Dioden in der 3D-Ansicht. Um Fehler zu vermeiden, muss jeweils das Datenblatt der Dioden überprüft werden. Ebenso ist dies bei den Elektrolytkondensatoren zu überprüfen. Der jeweilige PIN 1 der ICs ist mit einem Pfeil gekennzeichnet. Die ICs haben oft an der Stelle des PIN 1 eine Markierung, hier ist aber ebenfalls das Datenblatt zu prüfen. Der Lötvorgang auf der Seite Front sollte mit dem Verlöten des MOSFET starten. Dafür sollten vor verlöten die Kontaktflächen verzinnt werden. Beim Verlöten sollte darauf geachtet werden, dass der Kontakt über die ganze Fläche entsteht. Hierfür kann auch mit Heißluft gearbeitet werden. Dabei ist drauf zu achten, die Heißluftpistole stetig in Bewegung zu halten und keine Beschädigungen an Bauteilen hervorzurufen. Auf der Seite Front sollten die Stiftleisten und die JST-Stiftleisten als letztes aufgebracht werden, weil das Plastik nicht hitzebeständig ist und z.B. beim Kontakt mit dem Lötkolben schmelzen könnte. Der Pololu ist mit einer Buchsenleiste zu verlöten, so dass der Pololu im aufgesteckten Zustand über die Beschriftung J3 und Q1 ragt. Hierfür sind zwei Leitlinien in Abbildung 1 zu erkennen. Nach dem Löten sollte kontrolliert werden, dass alle Kontaktstellen richtig verlötet sind und dass die Platine keine Kurzschlüsse hat. Damit die Platine einsatzbereit ist, muss noch der Mirkocontroller programmiert werden. 

|<img width="1700" height="822" alt="Platine_Front" src="https://github.com/user-attachments/assets/dc899312-d4ee-4b14-ac0f-3a0e1e19b114" />|
|----------|
|Abbildung 1, Platine, Seite Front, entnommen aus Kicad|

|<img width="1700" height="822" alt="Platine_Back" src="https://github.com/user-attachments/assets/b65deeaa-17d4-4808-940c-7373c35e39bd" />|
|--|
Abbildung 2, Platine, Seite Back, entnommen aus KiCad |

|Tabelle 1||||
|--|--|--|--|
|Bauteil/Material|	Bezeichnung Schaltplan|	Wert/Info|	Menge|
|Elektrolyt-Kondensator (SMD, (Ø x L) 10 x 10,5) |	C1, C2|	470 µF; 22 V|	2|
|Kondensator (SMD, C1210) |	C3| 	4,7 µF; 5 V |	1|
|Kondensator (SMD, C0805) 	|C4|	0,1 µF; 5 V| 	1|
|Kondensator (SMD, C0805) |	C5	|1000 nF; 5 V	|1|
|Kondensator (SMD, C0603) |	C6 |	10 nF; 200 V |	1|
|Kondensator (SMD, C0603)| 	C7	|1nF; 5 V	|1|
|Schottky-Diode, VS-10MQ040-M3/5AT|	D1, D2, D3, D4|	–| 	4|
|Z-Diode, BZV55-C10	|D5|	10 V|	1|
|Schottky-Diode, BAS21GWX	|D6|	– 	|1|
|Spule, KLZ2012MHR100HTD25|	L1| 	10 µH| 	1|
|Spule, SDR0604-221KL	|L2 	|220 µH |	1|
|Widerstand (SMD, R0805) 	|R1, R5, R6| 	10 kΩ|	3|
|Widerstand (SMD, R2512) 	|R2, R3 |	30 Ω; 1,5 W	|2|
|Widerstand (SMD, R0805)	|R4| 	8,2 Ω; 0,5 W|	1|
|Widerstand (SMD, R0805) 	|R7	|1 MΩ |	1|
|Widerstand (SMD, R0805) 	|R9|	1 kΩ|	1|
|Widerstand (SMD, R0805) 	|R8	|3,3 MΩ|	1|
|P-Kanal-MOSFET, IRF4905S| 	Q1| 	– |	1|
|ATtiny85V-10SU 	|IC1	|– 	|1|
|El-Folientreiber, HV830LG-G	|IC2	|– |	1|
|Pololu, 5 V Step-Up/Step-Down-Wandler| 	J3	|– |	1|
|Stiftleiste (1-reihig)	|J1, J2, J3|	2,54 mm| 	11|
|Buchsenleiste (1-reihig)   |	J3|	2,54 mm |	3|
|Stiftleiste, JST XH 2‑Pin, vertikal| 	PWR, EL, SW1, SW2|	2,5 mm|	4|


## 1.2 Programmierung inklusive Inbetriebnahme  

Der Ordner [Programm-Seitenlicht](Dateien/Programm_Seitenlicht) beinhaltet das Programm, welches auf den ATtiny85V-10SU zu laden ist, um ein Betrieb mit Dauerlicht oder einem Blinkintervall von einer Sekunde zu ermöglichen. Eine Möglichkeit, um das Programm auf den Mikrocontroller zu laden, ist die Verwendung des AVRISP mkII Programmiergeräts in Kombination mit dem Programm Microchip Studio. Das Programmiergerät hat die PINs VCC, MOSI, GND, MISO, SCK, RST. Diese sind mit den jeweiligen PINs auf der Platine zu verbinden. Das AVRISP mkII Programmiergerät hat eine andere Anordnung der PINs wie die PINs auf der Platine, sodass ZipWire zwischen Platine und AVRISP mkII verwendet werden müssen [4]. Die PINs auf der Platine sind direkt beschriftet. Die des AVRISP mkII sind am Konnektor in zwei Spalten mit je drei Reihen angeordnet. Die Seite, bei der die Kabel ankommen, ist die der zweiten Spalte. An der Stelle wo VCC ist, ist ein rotes Kabel. In der Spalte mittig ist MOSI und am anderen Ende GND. Gegenüber von VCC in Spalte 1 ist MISO. Mittig in Spalte 1 ist SCK und gegenüber von GND ist RST [4]. Abbildung 3 zeigt diesen Konnektor. Für die Programmierung ist außerdem die Inbetriebnahme erforderlich. Hierfür sollte ein externes Netzteil mit einer Spannungsversorgung von 6 V verwendet werden, denn das Programmiergerät liefert über den VCC PIN keine Spannung, sondern misst diese nur. Das Netzteil lässt sich ebenfalls über ZipWire Kabel anschließen. Außerdem ist SW1 mit einem solchen Kabel zu brücken. Um einen vollständigen Funktionstest zu realisieren, sollte eine EL Folie angeschlossen werden. Wenn die richtigen PINs miteinander verbunden sind und Spannung auf die Schaltung gegeben wird, leuchtet ein grünes Lämpchen am AVRISP mkII [4]. Die Abbildungen 4 und 5 zeigen Nummern auf, diese werden in folgenden Aufgegriffen. Um das Programm auf den Mikrocontroller zu laden, ist in Microchip Studio unter dem Reiter "Tools"(1) der Punkt "Device Programming"(2) zu öffnen. Als "Tool"(3) ist AVRISP mkII und als "Device"(4) ATtiny85 und als "Interface"(5) ISP zu wählen. Nun ist "Apply"(6) auszuwählen. Folglich erscheinen weitere Punkte und unter "Memories"(7) ist für "Flash"(8) die Hex-Datei Programm_Seitenlicht auszuwählen. Mit dem Button "programm"(9) lässt sich die Programmierung vornehmen. Anschließend ist die Schaltung von der Spannung zu trennen und das Programmiergerät zu entfernen. Erst wenn das Programmiergerät von der Platine getrennt wird, zeigt sich eindeutig, ob die Programmierung erfolgreich verlaufen ist, sodass für einen abschließenden Funktionstest erneut Spannung auf die Schaltung zu geben ist. 

|<img width="256" height="270" alt="Proprammiergerät" src="https://github.com/user-attachments/assets/bc109423-b6a1-49a9-8adf-98a98a5df9a5" />|
|--|
|Abbildung 3, PINs AVRISP mkII|

|<img width="2040" height="1120" alt="Mircoship 1" src="https://github.com/user-attachments/assets/333b1a5c-0d5b-4d77-9103-fad44c5cdf52" />|
|--|
|Abbildung 4, Screenshot Microchip Studio|

|<img width="1910" height="1426" alt="Microship 2" src="https://github.com/user-attachments/assets/5795363d-625b-4c1d-8f6b-1d4385937f5d" />|
|--|
|Abbildung 5, Screenshot Microchip Studio|


## 1.3 Gehäusenachbau

Das Gehäuse sollte bestenfalls aus PETG gedruckt werden. Dieses Material neigt beim Drucken nicht grundsätzlich zu Verformung, es ist hitze- und witterungsbeständig. Außerdem zieht es kein Wasser und ist somit gut für den Einsatz am Fahrrad geeignet [5]. Für den Druck des Gehäuses steht ein Modell zur Verfügung, welches auf einem Rohr mit einem Durchmesser von 35 mm befestigt werden kann. Der Druck kann mit den stl-Dateien [Gehäuse_Deckel](Dateien/Gehäuse_Deckel.stl) und [Gehäuse_Hauptkörper](Dateien/Gehäuse_Hauptkörper.stl) umgesetzt werden. Hier sollte der Schritt Montage beachtet werden, je nach Fahrrad ist es notwendig den Durchmesser des Rohres am Gehäuse anzupassen. Hierfür steht die ipt-Datei [Gehäuse](Dateien/Gehäuse.ipt) zur Verfügung. Die Datei ist in einem passenden Editor zu öffnen und unter Skizze (Grundform) erscheint die in der Abbildung 6 zu sehende Skizze. Der mit Gelb markierte Wert, ist der Wert für den Durchmesser. Dieser ist auf den gewünschten Durchmesser anzupassen. In Rot ist der Abstand des Mittelpunktes des Rohres zum allgemeinen Mittelpunkt zu sehen. Dieser ist so anzupassen, dass nicht zu viel Material verschwendet wird, aber auch nicht so, dass die Kabelbinderdurchführungen freiliegen. Es ist insgesamt drauf zu achten, dass das Gehäuse die vollständige Funktion beibehält. Der Druck sollte so erfolgen, dass die beiden Flächen zwischen den Körpern die aufliegende Seite auf der Druckplatte sind. Es ist empfehlenswert mit einer Sichtdicke von 0,15 mm zu drucken. Des Weiteren sollte eine Fülldichte von 40% verwendet werden. Wichtig ist es auch Stützstruktur nur mit Druckplattenhaftung zu verwenden, andernfalls wird diese auch Stelle gedruckt, an welchen ein Entfernen nur schwer möglich ist. 

|<img width="1546" height="942" alt="Skizze_Grundform" src="https://github.com/user-attachments/assets/48b4fc0c-6643-45dd-b80f-ecefeb56d0d7" />|
|--|
|Abbildung 6, Skizze Grundform, entnommen aus Autodesk Inventor|

Ist der Druck erfolgt, gilt es die Gewindeeinsätze in den Deckel einzuschmelzen. Hierfür gibt es spezielle Aufsätze für Lötkolben. Sind diese nicht vorhanden, lässt sich auch mit einem normalen Lötkolben arbeiten. Der Gewindeeinsatz wird sehr warm und Unachtsamkeiten können schnell zu Verbrennungen führen oder das Gehäuse beschädigen. Es ist zu beachten, dass die Gewindeeinsätze in einer Linie mit der Auflagefläche eingeschmolzen werden, andernfalls kann es beim Verschrauben zu Problemen kommen. Als nächstes gilt es den O-Ring vorzubereiten, denn wird z.B. ein endloser O-Ring verwendet, ist dieser testweise einzulegen und passen abzuschneiden. Empfehlenswert ist es den O-Ring mit dem Hauptkörper zu verkleben. Hierfür eignet sich Sekundenkleber. Ist eine Schnittstelle vorhanden sollte sich diese an der Stelle befinden, wo das Gehäuse im montieren Zustand seine tiefste Stelle hat. 

## 1.4 Hochzeit bzw. Zusammenbau

Die Julet-Kabel sind aufzutrennen. Empfehlenswert ist es 5 cm hinterm Female Stecker aufzutrennen. Die Kabel mit dem Female Stecker sind durch die Löcher durchzuführen. Um die Stecker mit dem Gehäuse zu verkleben, sind die Stecker so zu positionieren, dass das Kabel noch gerade so durchgesteckt ist. In die Durchführungen kann nun z.B. MS-Polymer Kleber eingespritzt werden, es sollte eine ausreichende Menge verwendet werden, jedoch aber auch nicht zu viel. Anschließend können die Stecker so weit wie möglich hineingeschoben werden. Die Aushärtungszeit des Klebers ist abzuwarten, ansonsten kann es dazu kommen, dass sich die Klebeverbindung wieder löst. Beispielhaft wird das Kabel mit drei PINs so verwendet, dass es für die Stromversorgung der Platine genutzt wird. Da nur zwei Adern benötigt werden, ist eine Ader „tot“. Das Kabel mit zwei PINs wird folglich für die Versorgung der Folien eingesetzt. Außerdem sind die Schalter in den Deckel einzuschrauben. Hierzu sind die Schalter von innen nach außen durchzustecken und von außen mit dem beiliegenden Dichtungsring und der Kappe zu verschrauben. Die jeweiligen Enden sind mit den JST-Buchsenleisten zu versehen, in dem die Enden mit dem Crimpkontakt für Buchsen vercrimpt werden und in die JST-Buchsenleisten eingeklickt werden. Die Kabel der Schalter sind auf eine passende Länge zu kürzen. Außerdem haben die Kabel eine starke Isolierung, hier ist es empfehlenswert, die Isolierung zu entfernen und mit dünnerem Schrumpfschlauch zu versehen. Dieser lässt sich in das Gehäuse der Schalter einschieben. Die Platine ist mit der Seite Front nach oben einzulegen. Die JST-Stiftleisten sollten sich auf der Seite der Kabeleinführung befinden. Die JST-Stift- und JST-Buchsenleisten sind jeweils richtig zu verbinden. Dafür ist das Kabel mit drei Adern mit PWR, das mit zwei Adern mit EL zu verbinden. Der Schalter welcher bei EIN/AUS eingeschraubt ist, mit SW1 zu verbinden. Der Schalter bei BLINKEN ist mit SW2 zu verbinden. Abschließend können die Schrauben eingesetzt werden. Nach Belieben kann der Hohlraum noch mit Schaumstoff ausgefüllt werden. 

# 2 Montage

Für jedes Fahrrad ist individuell zu entscheiden, an welchem Ort das Gehäuse und die Folien angebracht werden. Für das Gehäuse ist ein Ort nahe dem Dynamo z.B. auf dem Fahrradrahmen empfehlenswert. Für die Folien bietet sich z.B. die Fahrradgabel an. Grundsätzlich sollten jegliche Kontaktstellen unter Schrumpfschlauch verschwinden. 

## 2.1 Montage Gehäuse 

Durch die Kabelbinderdurchführungen sind Kabelbinder durchzuführen. Das Rohr und das Gehäuse können mit doppelseitigem Silikonklebeband verklebt werden. Anschließend kann das Gehäuse festgezurrt werden. 

## 2.2 Montage EL-Folien

Je nach Einsatzort und Aufmachung der Folie ist zu beachten, dass die Folien nicht zu stark verbogen werden, weil es ansonsten zu Defekten kommen kann [2]. Ist eine starke Verbiegung notwendig, bietet es sich an, eine Warmverformung durchzuführen. Dazu ist die Folie auf einem hitzebeständigen Rohr mit Fixierband zu fixieren. Die Temperatur für eine Warmverformung ist so zu wählen, dass am oberen Ende der Lagertemperatur begonnen wird und die Temperatur so lange gesteigert wird, bis sich ein Erfolg einstellt. Bei Tests war dies bei 120°C der Fall. Es ist drauf zu achten, die Folien nicht zu beschädigen. Beim Zurückbauen ist das Fixierband entgegen der Folie abzuziehen [2]. Die ausgewählten Flächen zur Montage können bei Bedarf mit Lösungsmittel gereinigt werden. Anschließenden ist ein großflächiger Schrumpfschlauch aufzubringen. Dieser stellt einen Kontaktschutz dar. Anschließend können die Folien z. B. mit doppelseitigem Klebeband auf dem Schrumpfschlauch verklebt werden. Als Witterungsschutz ist über der Folie ein weiterer transparenter Schrumpfschlauch aufzubringen. Hierbei ist es wichtig darauf zu Achten, nicht zu heiß zu schrumpfen, um nicht die Folien zu beschädigen. Bei durchgeführter Verformung kann z.B. die dort verwendetet Temperatur benutzt werden. Es ist empfehlenswert die Enden zusätzlich mit einem starken Schrumpfschlauch zu versehen. An der Seite mit den Kabeln kann ein Dichtring für Zugentlastung sorgen [2].

## 2.3 Verkabelung

Beim Verlegen der Kabel ist darauf zu achten, dass es bei der Fahrradgabel zu Bewegung kommt und genug Bewegungsmöglichkeit für die Kabel vorgesehen wird. Das Kabel mit drei PINs ist mit dem Dynamo zu verbinden. Je nachdem wie viele Folien eingesetzt werden, sind jeweils die Leitungen zu verbinden. Dabei kann so vorgegangen werden, dass Kabel aufgetrennt werden, abgemantelt werden und anschließen mit dem gewünschten Kabeln verlötet werden. Jeweils sollte mit Schrumpfschlauch gearbeitet werden, um einen Witterungsschutz und einen Kontaktschutz herzustellen. 


# 3 Literaturverzeichnis

[1] T. Kollmeier (2024): „Elektrolumineszenz-basierte Seitenbeleuchtung für Fahrräder“, Masterarbeit, Hochschule Hannover

[2] A. Hesse (2024): „Realisierung einer elektrolumineszierenden Fahrradseitenbeleuchtung“, Bachelorarbeit, Hochschule Hannover

[3] M. Schirmer (2025): „Entwicklung eines Fertigungsprozesses und Ansteuerungsoptimierung für elektrolumineszente Lacksysteme am Beispiel einer Fahrradseitenbeleuchtung“, Bachelorarbeit, Hochschule Hannover

[4] Atmel (2016): „AVRISP mkII USER GUIDE“, Datenblatt  

[5] P. Sussmann (2024): „3D-Drucker richtig füttern: Das beste Filament – ASA, ABS, PLA & Exoten im Test“, Heise Online, Zugriff am 28.12.2025. [Online.] https://www.heise.de/bestenlisten/ratgeber/3d-drucker-richtig-fuettern-das-beste-filament-asa-abs-pla-und-exoten-im-test/jpntepg
