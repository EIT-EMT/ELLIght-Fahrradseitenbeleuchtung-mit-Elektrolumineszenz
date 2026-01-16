# 1 Fahrradseitenbeleuchtung mit Elektrolumineszenz

Dieses Projekt beinhaltet eine nachbaubare Lösung, um eine Seitenbeleuchtung an Fahrrädern mit Elektrolumineszenz zu realisieren. Zu dem Projekt gehören unter anderem ein SMD-Platinenlayout, ein Gehäuselayout und ein Programmcode [1]. Diese README stellt das Projekt vor. Die Datei [Anleitung](Anleitung.md) zeigt eine Möglichkeit, wie ein Nachbau des Ganzen erfolgen kann. Die benötigten Unterlagen sind mit angehängt. Jegliche Inhalte dieses Projektes unterliegen der CC BY-NC-SA 4.0 Lizenz.

# 2 Mehr Licht für mehr Sicherheit

Viele Fahrräder verfügen über einen Dynamo zur versorgung der klassischen Fahrradbeleuchtung. Zusätzliche Beleuchtung zu der klassischen Beleuchtung kann für mehr Sicherheit sorgen. Dieses Projekt realisiert eine solch zusätzliche Beleuchtung. Die entwickelte Schaltung greift Strom vom Dynamo ab, verarbeitet diesen und betreibt damit einen Treiber für Elektrolumineszenz (EL). Mit diesem lassen sich EL-Folien betreiben, welche sich z. B. beidseitig an der Fahrradgabel befestigen lassen. Die Abbildungen zeigen eine montierte EL-Folie (Abbildung 1) und den Einsatz dieser bei Nacht (Abbildung 2). Die Schaltung ist an eine alte Gesetzeslage angepasst, welches vorgab, dass die Nennspannung von Dynamos bzw. Lichtmaschinen bei 6 V und die Nennleistung bei 3 W liegt [2][3]. Bei hoher Geschwindigkeit und ausgeschalteter Front- und Heckbeleuchtung lassen sich jedoch abhängig vom Dynamo deutlich höhere Spannungswerte messen [2]. Zur Gewährleistung, dass dieses Projekt auch für den Einsatz am Fahrrad geeingt ist, sind verschiedene Tests durchgeführt worden. Diese Tests beruhen auf der Annahme, dass ein Fahrrad unter freiem Himmel im öffentlichen Straßenverkehr eingesetzt wird. Dabei kommt es zu Witterungseinflüssen und Unfällen. Erfolgt ein ordnungsgemäßer Aufbau, so kann dieser eine Schutzklasse von IP54 im gesamten Aufbau und IP 57 für die Platine erreichen. Dies bedeutet, dass Berührungschutz sichergestellt ist und ein Spritzwasserschutz bzw. für die Platine ein Schutz vor kurzzeitgem Untertauchen besteht. Außerdem ist der Aufbau für Temperaturen von minus 20°C bis plus 60°C einsetzbar. Der Aufbau von Platine und Gehäuse besitzt eine Schalgfertigkeitsklasse von IK07, so dass diese mindestens gegen Stütze aus zwei Meteren Höhe abgesichert sind. Grundsätzlich gilt, dass der gesamte Aufbau nach einem Sturz geprüft werden muss. Außerdem sollten nur Materialien verwendet werden, welche UV-beständig sind [4]. 

|<img width="764" height="670" alt="El Montiert" src="https://github.com/user-attachments/assets/f8f17207-35aa-408c-b978-011008270c80" />| <img width="764" height="670" alt="EL bei Nacht" src="https://github.com/user-attachments/assets/206f0627-4fb1-48dc-aa9f-3d9ea2590676" />|
|----------|----------|
| Abbildung 1, Montierte EL-Folie [2]  | Abbildung 2, EL bei Nacht [2] |

  
##  2.1 Schaltplan/Platine

In der Abbildung 3 ist der Schaltplan dargestellt. Die weiteren Abbildungen 4 und 5 zeigen die 3D-Ansicht der dazugehörigen Platine. Die vom Dynamo kommende Wechselspannung wird zunächst mit vier Schottky-Dioden gleichgerichtet (D1 - D4). Um Spannungsstabilität zu gewährleisten, sind zwei Elektrolytkondensatoren verbaut [5]. In der Schaltung ist der Spannungsregler S13V10F5 des Herstellers Pololu verbaut. Dieser gibt eine Spannung von 5 V aus und funktioniert bei einer Eingangsspannung zwischen 2,8 V und maximal 22 V [6]. Die Ausgangsspannung von 5 V ist die Betriebsspannung der Schaltung [5]. Zum Schutz des Spannungsreglers ist ein Überspannungsschutz eingebaut. Bestehend aus Z-Diode, selbstsperrendem P-Kanal MOSFET und Lastwiderstand, greift dieser, sobald die Gesamtspannung die Gate-Soure-Spannung plus die Durchbruchspannung der Z-Diode übersteigt. Dies passiert bei ungefähr 12 V. In Tests zeigte sich, dass die Spannung selbst bei Geschwindigkeiten von bis zu 40 km/h nicht über 12,8 V am Spannungsregler ansteigt [2]. Außerdem sind zwei Schalter vorgesehen. Zum einen SW1, um die Schaltung ein- und auszuschalten und SW2, um die Betriebsart zu steuern. SW2 umfasst die Möglichkeit von einem Dauerlicht in einen Blinkmodus zu wechseln. Für die Lastwiderstände R2 und R3 ist es empfehlenswert, dass diese zusammen die Nennleistung von 3 W verbrauchen können [2]. Weitere Bauteile sind vorhanden, um eine Rückkopplung zu vermeiden und um den Betrieb der ICs zu ermöglichen [1][5]. Eine Verpolung der Schaltung innerhalb der einzelenen Kontaktstellen ist nicht möglich. 

|<img width="2362" height="928" alt="Schaltplan" src="https://github.com/user-attachments/assets/36ca8e86-84f5-4db2-adb6-e945608c33f5" />|
|-------|
|Abbildung 3, Schaltplan, entnommen aus KiCad|

|<img width="1700" height="822" alt="Platine_Front" src="https://github.com/user-attachments/assets/ddc7a8e0-cee0-4e34-94d5-1604ff9ab31e" />|<img width="1700" height="822" alt="Platine_Back" src="https://github.com/user-attachments/assets/369b1aea-7996-43f4-98df-4fc30245c582" />|
|----------|----------|
|Abbildung 4, Platine, Seite Front, entnommen aus Kicad|Abbildung 5, Platine, Seite Back, entnommen aus KiCad |
         
## 2.2 Gehäuse 

Die Abbildungen 6, 7, 8 und 9 zeigen das Gehäuse aus der Vogelperspektive (Abbildung 6), seitlich von unten (Abbildung 7), aufgeschnitten (Abbildung 8) und als Drahtkörper (Abbildung 9). Es besteht aus zwei Teilen. Einem Deckel mit Durchführungen für die Schalter, welche jeweils mit EIN/AUS bzw. BLINKEN beschriftet sind. Außerdem ist der Schritzug ELLI(ght), welcher der Name des Projektes ist, auf dem Deckel mit versehen. Neben dem Deckel gibt es den Hauptkörper. Beide sind mittels einer glatten Ebene, einer Auflagefläche voneinander getrennt. Der Hauptkörper ist so geformt, dass sich dieser an einem Rohr mit 35 mm Durchmesser mittels Kabelbinder befestigen lässt. Bei Bedarf lässt sich der Körper an verschiedene Rohrdurchmesser anpassen. Dazu mehr unter "Gehäusenachbau" in der [Anleitung](Anleitung.md). Der Hauptkörper hat zwei Aussparungen für die Stromversorgung der Platine bzw. der EL-Folien. Diese sind so designt, dass sich Julet-Kabel so einschieben lassen, dass das Kabel durchgeführt wird und das der Stecker vom Kabel im Gehäuse verschwindet. Liegen beide Teile aufeinander, ergibt sich ein Hohlraum für die Platine. Dieser zieht sich durch beide Körper. Um den Hohlraum herum gibt es bei der Auflagefläche der Körper jeweils eine Aussparung für eine Dichtung. Diese Aussparungen ergeben zusammen einen Kreis mit einem Durchmesser von 2 mm. Außerdem sind Löcher für Senkkopfschrauben in dem Hauptkörper und Gewindeaufnahmen im Deckel vorgesehen, sodass sich die beiden Bauteile verschrauben lassen. Das Gehäuse hat eine Länge von 130,5 mm, eine maximale Breite von etwa 40,63 mm und in der für ein 35 mm Rohr vorgesehenen Ausführung eine Höhe von etwa 52,1 mm inklusive der Schrift.  

|<img width="440" height="365" alt="Gehäuse_Vogelperspektive" src="https://github.com/user-attachments/assets/58f1add2-ec18-4360-95ea-9883b81b611f" />|<img width="440" height="365" alt="Gehäuse_seitlich_von_unten" src="https://github.com/user-attachments/assets/71dbaa99-65b8-4763-8d44-71c786eb1204" /> |
|--|--|
|Abbildung 6, Gehäuse, Vogelperspektive|Abbildung 7, Gehäuse, seitlich von unten|                                                                     
|<img width="850" height="390" alt="Gehäuse_Aufschnitt" src="https://github.com/user-attachments/assets/079c48e2-e7c3-4bf0-9080-155e229f1f33" />|<img width="850" height="390" alt="Gehäuse_Drahtkörper" src="https://github.com/user-attachments/assets/60a26a11-0c35-48ae-bec9-15fd38a78378" />|
|Abbildung 8, Gehäuse, aufgeschnitten| Abbildung 9, Gehäuse, Drahtkörper  |      

Abbildungen entnommen aus Autodesk Inventor

# 3 Literaturverzeichnis

[1] M. Schirmer (2025): „Entwicklung eines Fertigungsprozesses und Ansteuerungsoptimierung für elektrolumineszente Lacksysteme am Beispiel einer Fahrradseitenbeleuchtung“, Bachelorarbeit, Hochschule Hannover

[2] A. Hesse (2024): „Realisierung einer elektrolumineszierenden Fahrradseitenbeleuchtung“, Bachelorarbeit, Hochschule Hannover

[3] buzer.de: "Änderung § 67 StVZO vom 01.06.2017", Zugriff am 09.12.2025. [Online.] https://www.buzer.de/gesetz/10146/al61160-0.htm 

[4] Conrad Electronic SE (2025). „IP Schutzklassen und Schutzarten“,  Zugriff am 09.12.2025 [Online.] https://www.conrad.de/de/ratgeber/industrie-40/ip-schutzklassen-und-schutzarten.html 

[5] T. Kollmeier (2024): „Elektrolumineszenz-basierte Seitenbeleuchtung für Fahrräder“, Masterarbeit, Hochschule Hannover

[6] Pololu: "5V, 1A Step-Up/Step-Down Voltage Regulator S13V10F5", Zugriff am 09.12.2025. [Online.] https://www.pololu.com/product-info-merged/4083 


