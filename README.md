# 🔄 ADS Praktikum 1.1 – Ringstruktur (Zirkuläre verkettete Liste)

Implementierung einer **zirkulären verketteten Liste** (Ring) in C++ im Rahmen des Moduls *Algorithmen und Datenstrukturen* an der FH Aachen.

## Thema

Eine Ringstruktur ist eine verkettete Liste, bei der der letzte Knoten wieder auf den ersten zeigt — kein Anfang, kein Ende. Klassischer Anwendungsfall: Backup-Verwaltung, Round-Robin-Scheduling.

## Funktionalitäten

- Neuen Knoten mit Beschreibung und Daten hinzufügen
- Ringstruktur nach einem Datensatz durchsuchen
- Alle Knoten des Rings ausgeben
- Unit-Tests mit dem Catch2-Framework

## Technologien & Konzepte

- C++17
- OOP (Klassen, Header/Source Trennung)
- Zeiger & dynamische Speicherverwaltung
- Zirkuläre verkettete Liste
- Unit-Testing mit Catch2

## Projektstruktur

```
ADS-Praktikum1-Ring/
├── Ring.h          → Klassen-Definition der Ringstruktur
├── Ring.cpp        → Implementierung der Ring-Methoden
├── RingNode.h      → Definition eines Ringknotens
├── RingNode.cpp    → Implementierung des Knotens
├── RingTest.cpp    → Unit-Tests (Catch2)
├── main.cpp        → Hauptprogramm mit Benutzermenü
└── catch.h         → Catch2 Test-Framework
```

## Kompilieren & Ausführen

```bash
g++ -std=c++17 -o ring main.cpp Ring.cpp RingNode.cpp RingTest.cpp
./ring
```

##  Modul

**Algorithmen und Datenstrukturen (ADS)**  
Fachhochschule Aachen – Wirtschaftsinformatik

##  Autor

**Landry Channel Kamgang Fogang**
