#Linked List Template

Program jest rezultatem pracy na zadaniem z przedmiotu Programowanie w języku C++. 

Treść zadania:
Zdefiniuj szablon struktury opisujacej węzły pojedynczo wiązanej listy z metodami:

- arrayToList pobiera tablice elementów typu T i jej wymiar. Zadaniem funkcji
jest utworzenie listy jednokierunkowej obiektów struktury Node, zawierajacej
w kolejnych wezłach kolejne elementy z przekazanej tablicy (w takiej samej
kolejnosci). Funkcja zwraca wskaznik do „głowy” utworzonej listy.
- removeBad pobiera wskaznik do „głowy” listy i predykat i usuwa wszystkie
wezły listy zawierajace dane dla których predykat zwraca true. Wskaznik na
głowe listy przekazany do funkcji jest modyfikowany i staje sie wskaznikiem na
głowe nowej listy.
UWAGA: Funkcja nie powinna tworzyc zadnych nowych wezłów. Jesli wszystkie
wezły zawieraja „złe” dane, wszystkie powinny zostac usuniete, głowa staje
sie wtedy nullptr. Przy kazdym usuwaniu wezła funkcja powinna drukowac
wartosc danej w nim zawartej, abysmy widzieli, ze rzeczywiscie wezły te sa
usuwane.
- showList drukuje zawartosc listy (dane z kolejnych wezłów, w jednej linii, oddzielone
znakami odstepu).
- deleteList usuwa wszystkie wezły listy; wskaznik do „głowy” przesłany jest
przez referencje, aby funkcja mogła zmienic jego oryginał (na nullptr, co odpowiada
liscie pustej). Funkcja wypisuje informacje o usuwanych wezłach.
