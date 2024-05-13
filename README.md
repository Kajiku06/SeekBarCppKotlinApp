# SeekBarCppKotlinApp

SeekBarCppKotlinApp to prosty projekt Android, który demonstruje użycie komponentu SeekBar w języku Kotlin z wykorzystaniem kodu natywnego w języku C++ za pomocą Java Native Interface (JNI).

## Opis

Projekt zawiera prostą aplikację Android, która składa się z jednego ekranu (Activity). Na ekranie znajdują się komponenty SeekBar i TextView. Gdy użytkownik przesuwa suwak (SeekBar), tekst w TextView aktualizuje się na bieżąco, pokazując wartość postępu.

## Struktura projektu

Projekt zawiera następujące pliki i katalogi:

- `MainActivity.kt`: Klasa główna aplikacji, która zawiera logikę działania aplikacji oraz obsługę zdarzeń dla komponentów interfejsu użytkownika.
- `activity_main.xml`: Plik XML definiujący układ interfejsu użytkownika.
- `native-lib.cpp`: Plik źródłowy C++, który zawiera funkcję JNI do obsługi zdarzenia zmiany postępu SeekBar.
- `CMakeLists.txt`: Plik konfiguracyjny CMake do budowania kodu natywnego.
- `README.md`: Plik README zawierający dokumentację projektu.

## Wymagania

- Android Studio: W celu edycji, kompilacji i uruchomienia projektu.

## Uruchamianie projektu

1. Sklonuj lub pobierz repozytorium z projektem SeekBarCppKotlinApp.
2. Otwórz projekt w Android Studio.
3. Uruchom aplikację na emulatorze lub fizycznym urządzeniu.

## Autor

Autor: [Kazimierz Kiper][https://github.com/Kajiku06/)(https://github.com/Kajiku06))
