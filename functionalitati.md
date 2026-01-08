1. Generarea Aleatorie a Hartii

Crearea automata a peretilor: Jocul nu are hărți fixe. La fiecare pornire, codul construiește singur nivelul.
Sistem bazat pe probabilitate: Pentru fiecare pătrățel de pe hartă, calculatorul „aruncă zarul” și, cu o șansă de 10%, pune un zid acolo. Acest lucru face ca fiecare rundă să fie diferită.
Protecția jucătorului: Codul verifică special locul unde apare jucătorul pentru a se asigura că nu este blocat de un perete chiar de la început.

2. Controlul si Miscarea

Control de la tastatură: Te poți mișca folosind tastele W, A, S și D. Jocul reacționează imediat ce ai apăsat tasta.
Sistem de coliziuni:Înainte ca jucătorul să se miște, codul verifică dacă în față este un perete sau marginea hărții. Dacă este ocupat, jucătorul rămâne pe loc.
Închiderea jocului: Poți ieși oricând din program apăsând tasta ESC.

3. Sistemul de Puncte si Stamina

Colectarea punctelor: Când treci peste simbolul de bani, scorul tău crește automat.
Bonus de stamina: La fiecare 10 puncte strânse, primești un bonus de 50 de pași de stamina.
Consumul de energie: Stamina scade cu fiecare pas pe care îl faci, fiind o resursă temporară care trebuie gestionată.

4. Inamicii si Lupta

Moscarea proprie a inamicilor: Inamicii nu stau pe loc; ei se mișcă singuri pe hartă în direcții întâmplătoare.
Lupta cu stamina: Dacă ai stamina activă și te atingi de un inamic, acesta este învins și apare în altă parte a hărții (respawn).
Pierderea vieții: Dacă nu mai ai stamina și te lovește un inamic, pierzi un punct de viață din cele trei disponibile.

5. Afișarea Grafică Optimizată

Interfață fără pâlpâit: Scorul, viața și stamina se actualizează pe ecran doar atunci când se schimbă valorile. Acest lucru previne pâlpâitul deranjant al consolei.
Desenare precisă: Folosim coduri speciale pentru a scrie direct la anumite coordonate, fără să fim nevoiți să ștergem și să redesenăm tot ecranul la fiecare pas.

6. Condiții de Final

Victorie:Jocul se termină și ești declarat câștigător dacă reușești să strângi 50 de puncte.
Înfrângere: Dacă rămâi fără puncte de viață, jocul se oprește și îți afișează scorul final.
Reapariția punctelor:De fiecare dată când colectezi un punct, altul apare într-un loc liber pe hartă, astfel încât să ai mereu ce colecta.
