# Veridion_Problema_4

Datele problemei:

You are part of an engineering team designing an autonomous aircraft that will operate on Mars. One of the critical scenarios your team needs to solve is the following:
The aircraft is mid-flight when a dust storm is detected approximately 12 minutes ahead on the current route. Communication with Earth has a 14-minute round-trip delay. 
The aircraft must decide autonomously what to do.
Your task is to produce a design document for how this scenario should be handled. You have full authority to propose changes to the aircraft’s design or any other aspect of the system if you believe it’s 
relevant to solving this problem.

Partea I — Problem Analysis. Before proposing any solution, write down everything you think needs to be understood about this scenario. What questions would you ask? What assumptions are you making? 
What do you think makes this problem hard? If you use AI tools during your exploration, feel free to include conversation logs if you feel they reflect your thought process.
Avand in vedere datele problemei o voi aborda asa cum am fost invatat la facultate la o materie legata de conducere a robotilor. Voi avea in vedere anumite aspecte de care trebuie sa am grija precum: 
1.	Definirea spatiului de lucru:
Suntem situati pe marte unde nu am informatii despre suprafata solului (presupun ca este neregulata – stanci, cratere, pietre , sau pot fi si zone cu suprafete ok de aterizat, nu am de unde sa stiu unde este
aircraft ul sau cat timp face pana la o zona de teren ok)
3.	Problema intampinata:
Suntem la 12 minute distanta fata de o furtuna de nisip care se indreapta spre ruta mea iar, comunicatia cu Pamantul dureaza 14 minute ( 7-dus, 7-intors).
4.	Definirea si datele despre aircraft:
Tot la fel nu am informatii despre cum arata nava si nici despre ce senzori sunt existenti pe aceasta care ma pot ajuta in a gasi o solutie potrivita pentru a putea rezolva problema.


Intrebari posibile la care nu am raspuns:
-	Ce senzori am pe aircraft?
-	Cata energie am in momentul actual?
-	Imi permite energia sa pot face o anumita miscare?
-	Rezista aircraft ul la contactul cu furtuna? 
Practic in asemenea circumstanta intrebarile pot fi nelimitate. 
Datorita acestor informatii voi aborda problema in diferite ipostaze, deoarece nu am informatii in problema legate de ce este deja existent/inexistent pe aircraft.
In toate ipostazele voi considera ca timpul de 14 minute de a comunica cu Pamantul este prea mult 7 min trimitere mesaj – 7 min receptie mesaj, ceea ce face ca trimiterea unui mesaj sa fie total inutila cu
riscuri de a pierde energie sau timp si contactul cu furtuna este deja inevitabil. Voi presupune ca din cele 12 minute pana la furtuna cel putin 8-10 minute for fi nevoie pentru a gandi ce este functional
si nu si 2-4 minute pentru a pune in practica o metoda de rezolvare.

Scenariul I – Rerutare
Sa presupunem ca echipa imi comunica ca avem toti senzorii si toate echipamentele functionale (radar meteo, camere de vedere, senzor de a estima inaltimea la care se afla, etc) 
si energie suficienta pentru a putea face o manevra de ocolire. In acest caz, problema este care ar fi calcularea unei rute eficiente de evitare. Daca am informatiile necesare de la senzori, precum:
Cu ce viteza se misca furtuna? 
Dimensiunea furtunii?
Directia de deplasare a furtunii?
Cu echipamentul functional si destula energie sper ca in cele 12 minute imi va fi generata o noua ruta care sa ocoleasca furtuna ( daca nu dureaza prea mult sa mi faca rerouting  asa cum am mai zis pot fi o gramada de intrebari si scenarii posibile ).

Scenariul II – Aterizare daca este posibil
Aici voi presupune ca energia aircraft-ului este tot ok, si ne permite sa facem o manevra, doar ca de data aceasta rerouting ul ar dura mai mult de 12 minute sau senzorii nu functioneaza cum ar trebui 
sau chiar sunt inexistenti.  In aceasta situatie o buna alegere ar fi aceea de aterizare. Daca am senzori orientati in jos si camere pentru a scana terenul de sub aeronava voi putea ateriza intr o zona decenta.
Din nou daca zona este decenta si nu sunt alte obstacole care ar ingreuna aterizarea. Daca nu este zona ok, macar stiu deja ruta pe care este aeronava si nu o voi pierde, cu speranta ca aircraft ul va rezista in
urma contactului cu furtuna sau are echipamente de curatare dupa impact.

Alte scenarii posibile ar fi sa nu am energie suficienta in aeronava, n am nici un senzor functional.
