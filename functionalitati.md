Sigur! Iata textul fara diacritice, fara alte modificari:

---

1. Generarea Aleatorie a Hartii

Crearea automata a peretilor: Jocul nu are harti fixe. La fiecare pornire, codul construieste singur nivelul.
Sistem bazat pe probabilitate: Pentru fiecare patratel de pe harta, calculatorul „arunca zarul” si, cu o sansa de 10%, pune un zid acolo. Acest lucru face ca fiecare runda sa fie diferita.
Protectia jucatorului: Codul verifica special locul unde apare jucatorul pentru a se asigura ca nu este blocat de un perete chiar de la inceput.

2. Controlul si Miscarea

Control de la tastatura: Te poti misca folosind tastele W, A, S si D. Jocul reactioneaza imediat ce ai apasat tasta.
Sistem de coliziuni:Inainte ca jucatorul sa se miste, codul verifica daca in fata este un perete sau marginea hartii. Daca este ocupat, jucatorul ramane pe loc.
Inchiderea jocului: Poti iesi oricand din program apasand tasta ESC.

3. Sistemul de Puncte si Stamina

Colectarea punctelor: Cand treci peste simbolul de bani, scorul tau creste automat.
Bonus de stamina: La fiecare 10 puncte stranse, primesti un bonus de 50 de pasi de stamina.
Consumul de energie: Stamina scade cu fiecare pas pe care il faci, fiind o resursa temporara care trebuie gestionata.

4. Inamicii si Lupta

Miscarea proprie a inamicilor: Inamicii nu stau pe loc; ei se misca singuri pe harta in directii intamplatoare.
Lupta cu stamina: Daca ai stamina activa si te atingi de un inamic, acesta este invins si apare in alta parte a hartii (respawn).
Pierderea vietii: Daca nu mai ai stamina si te loveste un inamic, pierzi un punct de viata din cele trei disponibile.

5. Afisarea Grafica Optimizata

Interfata fara palpait: Scorul, viata si stamina se actualizeaza pe ecran doar atunci cand se schimba valorile. Acest lucru previne palpaitul deranjant al consolei.
Desenare precisa: Folosim coduri speciale pentru a scrie direct la anumite coordonate, fara sa fim nevoiti sa stergem si sa redesenam tot ecranul la fiecare pas.
al.
Reapariția punctelor:De fiecare dată când colectezi un punct, altul apare într-un loc liber pe hartă, astfel încât să ai mereu ce colecta.
