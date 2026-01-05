# 1 Fahrradseitenbeleuchtung mit Elektrolumineszenz

Dieses Projekt beinhaltet eine nachbaubare Lösung, um eine Seitenbeleuchtung an Fahrrädern mit Elektrolumineszenz zu realisieren. Zu dem Projekt gehört unter anderem ein SMD-Platinenlayout, ein Gehäuselayout und ein Programmcode [3]. Diese README stellt das Projekt vor. Die Datei [Anleitung](Anleitung.md) zeigt eine Möglichkeit, wie ein Nachbau des ganzen erfolgen kann. Dazu sind sämtliche Unterlagen mit angehängt. Jegliche Inhalte dieses Projektes stehen unter der CC BY-NC-SA 4.0 Lizenz.

# 2 Mehr Licht für mehr Sicherheit

Viele Fahrräder verfügen über einen Dynamo. Mit diesem lässt sich die klassische Fahrradbeleuchtung versorgen. Zusätzliche Beleuchtung zu der klassischen Beleuchtung kann für mehr Sicherheit sorgen. Dieses Projekt realisiert eine solch zusätzliche Beleuchtung. Die entwickelte Schaltung greift Strom vom Dynamo ab, verarbeitet diesen und betreibt damit einen Treiber für Elektrolumineszenz (EL). Mit diesem lassen sich EL-Folien betreiben, welche sich z. B. beidseitig an der Fahrradgabel befestigen lassen. Die Abbildungen zeigen zum einen eine montierte EL-Folie (Abbildung 1) und zum anderen den Einsatz dieser bei Nacht (Abbildung 2). Die Schaltung ist an altes Gesetz angepasst, welches vorgab, dass die Nennspannung von Dynamos bzw. Lichtmaschinen bei 6 V und die Nennleistung bei 3 W liegt [2][4]. Bei hoher Geschwindigkeit und ausgeschalteter Front- und Heckbeleuchtung lassen sich jedoch abhängig vom Dynamo deutlich höhere Spannungswerte messen [2]. Zur Gewährleistung, dass dieses Projekt auch für den einsatz am Fahrrad geeingt ist, sind verschiedene Tests durchgeführt worden. Diese Tests beruhen auf der Annahme, dass ein Fahrrad unter freiem Himmel im öffentlichen Straßenverkehr eingesetzt wird. Dabei kommt es zu Witterungseinflüssen und Unfällen. Erfolgt ein Ordnungsgemäßer aufbau, so kann dieser eine Schutzklasse von IP54 im gesamten Aufbau und IP 57 für die Platine erreichen. Dies bedeutet, dass berührungschutz Sichergestellt ist und das ein Spritzwasserschutz bzw. für die Platine ein Schutz vor kurzzeitgem Untertauchen besteht. Außerdem ist der Aufbau für Temperaturen von minus 20°C bis plus 60°C einsetztbar. Der Aufbau von Platine und Gehäuse besitzt eine Schalgferitgkeistklasse von IK07, d. h. diese sind mindestens gegen Stütze aus zwei Meteren Höhe abgesichert. Grundsätzlich gilt, dass der gesamte Aufbau nach einem Sturz geprüft werden muss. Außerdem sollten nur Materialien verwendet werden, welche UV-Beständig sind [6]. 

|<img width="764" height="670" alt="El Montiert" src="https://github.com/user-attachments/assets/be2d7bde-b528-4c3b-84f4-fa21d7962f0b" />| <img width="764" height="670" alt="EL bei Nacht" src="https://github.com/user-attachments/assets/9079c435-d69f-498d-bc82-675b0f59d952" />|
|----------|----------|
| Abbildung 1, Montierte EL-Folie [2]  | Abbildung 2, EL bei Nacht [2] |

  
##  2.1 Schaltplan/Platine

In der Abbildung 3 ist der Schaltplan zu sehen. Die zwei weiteren Abbildungen 4 und 5 zeigen die 3D-Ansicht der dazugehörigen Platine. Die vom Dynamo kommende Wechselspannung wird zunächst mit vier Schottky-Dioden gleichgerichtet (D1 - D4). Um Spannungsstabilität zu gewährleisten, sind zwei Elektrolytkondensatoren verbaut [1]. In der Schaltung ist der Spannungsregler S13V10F5 des Herstellers Pololu verbaut. Dieser gibt eine Spannung von 5 V aus und funktioniert bei einer Eingangsspannung zwischen 2,8 V und maximal 22 V [5]. Die Ausgangsspannung von 5 V ist die Betriebsspannung der Schaltung [1]. Zum Schutz des Spannungsreglers ist ein Überspannungsschutz eingebaut. Bestehend aus Z-Diode, selbstsperrendem P-Kanal MOSFET und Lastwiderstand, greift dieser, sobald die Gesamtspannung die Gate-Soure Spannung plus die Durchbruchspannung der Z-Diode übersteigt, dies passiert bei ungefähr 12 V. In Tests zeigte sich, dass die Spannung selbst bei Geschwindigkeiten von bis zu 40 km/h nicht über 12,8 V am Spannungsregler ansteigt [2]. Außerdem sind zwei Schalter vorgesehen. Zum einen SW1, um die Schaltung ein- und auszuschalten und SW2, um die Betriebsart zu steuern. SW2 umfasst die Möglichkeit von einem Dauerlicht in einen Blinkmodus zu wechseln. Für die Lastwiderstände R2 und R3 ist es empfehlenswert, dass diese zusammen die Nennleistung von 3 W verbrauchen können [2]. Weitere Bauteile sind vorhanden, um eine Rückkopplung zu vermeiden und um den Betrieb der ICs zu ermöglichen [1][3]. Eine verpolung der Schaltung innerhalb der einzelenen Kontaktstellen ist nicht möglich. 

|<img width="2362" height="928" alt="Schaltplan" src="https://github.com/user-attachments/assets/dadfde7e-7b47-43e7-a9df-fede8ae62544" />|
|-------|
|Abbildung 3, Schaltplan, entnommen aus KiCad|

|<img width="1700" height="822" alt="Platine_Front" src="https://github.com/user-attachments/assets/afc8d87a-ad66-4682-8bfc-9094f3703eed" />|<img width="1700" height="822" alt="Platine_Back" src="https://github.com/user-attachments/assets/a8dfc53d-a15c-46d7-81bf-c22cf48bbc88" />|
|----------|----------|
|Abbildung 4, Platine, Seite Front, entnommen aus Kicad|Abbildung 5, Platine, Seite Back, entnommen aus KiCad |
         
## 2.2 Gehäuse 

Die Abbildungen 6, 7, 8 und 9 zeigen das Gehäuse aus der Vogelperspektive (Abbildung 6), seitlich von unten (Abbildung 7), aufgeschnitten (Abbildung 8) und als Drahtkörper (Abbildung 9). Es besteht aus zwei Teilen. Einem Deckel mit Durchführungen für die Schalter, welche jeweils mit EIN/AUS bzw. BLINKEN beschriftet sind. Außerdem ist der Name ELLI(ght) des Projektes auf dem Deckel mit versehen. Neben dem Deckel gibt es den Hauptkörper. Beide sind mittels einer glatten Ebene, einer Auflagefläche voneinander getrennt. Der Hauptkörper ist so geformt, dass sich dieser an einem Rohr mit 35 mm Durchmesser mittels Kabelbinder befestigen lässt. Bei Bedarf lässt sich der Körper an verschiedene Rohrdurchmesser anpassen, dazu unter Gehäusenachbau mehr. Der Hauptkörper hat zwei Aussparungen für die Stromversorgung der Platine bzw. der EL-Folien. Diese sind so designt, dass sich Julet-Kabel so einschieben lassen, dass das Kabel durchgeführt wird und das der Stecker vom Kabel im Gehäuse verschwindet. Liegen beide Teile aufeinander, ergibt sich ein Hohlraum für die Platine. Dieser zieht sich durch beide Körper. Um den Hohlraum herum gibt es bei der Auflagefläche der Körper jeweils eine Aussparung für eine Dichtung. Diese Aussparungen ergeben zusammen einen Kreis mit einem Durchmesser von 2 mm. Außerdem sind Löcher für Senkkopfschrauben in dem Hauptkörper und Gewindeaufnahmen im Deckel vorgesehen, sodass sich die beiden Bauteile verschrauben lassen. Das Gehäuse hat eine Länge von 130,5 mm, eine maximale Breite von etwa 40,63 mm und in der für ein 35 mm Rohr vorgesehenen Ausführung eine Höhe von etwa 52,1 mm inklusive der Schrift.  

|<img width="440" height="365" alt="Gehäuse_Daurfsicht" src="https://github.com/user-attachments/assets/751480d0-5272-4cde-ab35-11fbf74b8093" />| <img width="440" height="365" alt="Gehäuse_Unterseite" src="https://github.com/user-attachments/assets/5b9306a6-06b4-4091-8042-20b77cf2325f" />|
|--|--|
|Abbildung 6, Gehäuse, Vogelperspektive|Abbildung 7, Gehäuse, seitlich von unten|                                                                     
|<img width="850" height="390" alt="Gehäuse_Aufschnitt" src="https://github.com/user-attachments/assets/3246ed21-93ff-4412-ba02-7d7d62cabb47" />|<img width="850" height="390" alt="Gehäuse_Drahtkörper" src="https://github.com/user-attachments/assets/f8d27ea5-962b-4de5-b0b9-928bf8999ee4" />|
|Abbildung 8, Gehäuse, aufgeschnitten| Abbildung 9, Gehäuse, Drahtkörper  |      

Abbildungen entnommen aus Autodesk Inventor

# 5 Literaturverzeichnis

[1] T. Kollmeier (2024): „Elektrolumineszenz-basierte Seitenbeleuchtung für Fahrräder“, Masterarbeit, Hochschule Hannover

[2] A. Hesse (2024): „Realisierung einer elektrolumineszierenden Fahrradseitenbeleuchtung“, Bachelorarbeit, Hochschule Hannover

[3] M. Schirmer (2025): „Entwicklung eines Fertigungsprozesses und Ansteuerungsoptimierung für elektrolumineszente Lacksysteme am Beispiel einer Fahrradseitenbeleuchtung“, Bachelorarbeit, Hochschule Hannover

[4] buzer.de: "Änderung § 67 StVZO vom 01.06.2017", Zugriff am 09.12.2025. [Online.] https://www.buzer.de/gesetz/10146/al61160-0.htm 

[5] Pololu: "5V, 1A Step-Up/Step-Down Voltage Regulator S13V10F5", Zugriff am 09.12.2025. [Online.] https://www.pololu.com/product-info-merged/4083 

[6] Conrad Electronic SE (2025). „IP Schutzklassen und Schutzarten“,  Zugriff am 09.12.2025 [Online.] https://www.conrad.de/de/ratgeber/industrie-40/ip-schutzklassen-und-schutzarten.html 
