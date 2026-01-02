In joc sunt obstacole (,,#’’),spatii goale (,, . “),jucatorul(,,@”),inamici(,,E”)  si puncte (,,$”).
Harta generata random: Jocul nu foloseste o harta fixa. La fiecare pornire, un algoritm populeaza interiorul nivelului cu obstacole (ziduri) in mod aleatoriu, cu o probabilitate de 10%, oferind o experienta diferita la fiecare rulare.
Caracterul jucat de utilizator asemmenea inamicilor se misca in sus,jos ,stanga si dreapta ;in cazul jucatorului se folosesc tastele W S A D pentru deplasarea caracterului.
Sistem de Power-up (Stamina): Am implementat o mecanica de progresie: cand aduni 10 puncte, primesti automat un bonus de 50 de pasi de stamina, care iti ofera un avantaj tactic.
Combat si Respawn: Interactiunea dintre jucator si inamici depinde de stamina. Daca ai stamina, "mananci" inamicul (acesta primeste respawn intr-un loc random pe harta). Daca nu ai stamina, pierzi din punctele de viata (HP).
UI fara flicker: Pentru a evita palpairile deranjante ale ecranului in consola, am creat un sistem care actualizeaza interfata (Scor, HP, Stamina) doar atunci cand valorile se modifica efectiv, nu la fiecare cadru de joc.
Coliziuni si Limite: Miscarea este verificata in timp real. Jucatorul nu poate trece prin pereti sau iesi in afara hartii, gratie unei clase "nested" care se ocupa strict de validarea limitelor.
Conditii de final: Jocul se termina cu un mesaj de victorie daca atingi pragul de 50 de puncte sau apasand tasta Esc sau cu "Game Over" daca ramai fara HP,in oricare caz aratand scorul final .
Memoria este eliberata la iesirea din joc.
