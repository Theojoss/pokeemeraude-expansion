# Évolutions non-standards — Générations 1 à 3

Ce document recense toutes les évolutions des Pokémon des générations 1 à 3 (formes originales uniquement — les formes régionales Alola/Galar/Hisui/Paldea sont traitées à part) dont la condition n'est **pas** une simple montée de niveau.

Ne sont donc pas listés ici les centaines d'évolutions classiques du type « évolue au niveau X » sans condition supplémentaire.

## Sommaire

1. [Objets d'évolution (pierres et assimilés)](#1-objets-dévolution-pierres-et-assimilés)
2. [Échange](#2-échange)
3. [Amitié](#3-amitié)
4. [Beauté](#4-beauté)
5. [Lieu](#5-lieu)
6. [Heure (jour/nuit)](#6-heure-journuit)
7. [Genre](#7-genre)
8. [Capacité connue ou utilisée](#8-capacité-connue-ou-utilisée)
9. [Valeur aléatoire du Pokémon (PID)](#9-valeur-aléatoire-du-pokémon-pid)
10. [Cas particuliers](#10-cas-particuliers)
11. [Notes techniques](#11-notes-techniques)

---

## 1. Objets d'évolution (pierres et assimilés)

| Pokémon de base | Évolution | Objet requis |
|---|---|---|
| Nidorina | Nidoqueen | Pierre Lune |
| Nidorino | Nidoking | Pierre Lune |
| Mélofée | Mélodelfe | Pierre Lune |
| Goupix | Feunard | Pierre Feu |
| Rondoudou | Grodoudou | Pierre Lune |
| Ortide | Rafflesia | Pierre Feuille |
| Ortide | Joliflor | Pierre Soleil |
| Caninos | Arcanin | Pierre Feu |
| Têtarte | Tartard | Pierre Eau |
| Boustiflor | Empiflor | Pierre Feuille |
| Kokiyas | Crustabri | Pierre Eau |
| Noeunoeuf | Noadkoko | Pierre Feuille |
| Stari | Staross | Pierre Eau |
| Évoli | Voltali | Pierre Foudre |
| Évoli | Aquali | Pierre Eau |
| Évoli | Pyroli | Pierre Feu |
| Évoli | Phyllali (Leafeon) | Pierre Plante *(alternative au lieu, voir §5)* |
| Évoli | Givrali (Glaceon) | Pierre Glace *(alternative au lieu, voir §5)* |
| Magnéton | Magnézone | Pierre Foudre *(alternative au lieu, voir §5)* |
| Tarinor | Tarinorme (Probopass) | Pierre Foudre *(alternative au lieu, voir §5)* |
| Togepi → Togetic | Togekiss | Pierre Éclat |
| Tournegrin | Héliatronc | Pierre Soleil |
| Cornèbre | Corboss (Honchkrow) | Pierre Nuit |
| Feuforêve | Magirêve (Mismagius) | Pierre Nuit |
| Rosélia | Roserade | Pierre Éclat |
| Lombre | Ludicolo | Pierre Eau |
| Pifeuil | Tengalice (Shiftry) | Pierre Feuille |
| Skitty | Delcatty | Pierre Lune |
| Kirlia | Gallame (Gallade) | Pierre Aube *(mâle uniquement, voir §7)* |
| Stalgamin | Momartik (Froslass) | Pierre Aube *(femelle uniquement, voir §7)* |
| Rhinoféros | Rhinastoc (Rhyperior) | Protecteur *(objet à faire tenir + échange, ou usage direct — voir §2)* |
| Élektek | Élekable (Electivire) | Électriseur *(idem)* |
| Magmar | Maganon (Magmortar) | Magmariseur *(idem)* |
| Téraclope | Noctunoir (Dusknoir) | Tissu Fauche *(idem)* |
| Porygon2 | Porygon-Z | CD Douteux *(idem)* |
| Scorplane | Scorvol (Gliscor) | Croc Rasoir *(+ nuit, voir §6)* |
| Farfuret | Dimoret (Weavile) | Griffe Rasoir *(+ nuit, voir §6)* |
| Ursaring | Ursaking (Ursaluna) | Bloc de Tourbe *(+ nuit, voir §6)* |
| Insécateur | Hachécateur (Kleavor) | Obsidienne |

---

## 2. Échange

Toutes les évolutions par échange de ce hack disposent d'une **alternative sans échange réel** : soit un objet générique, le **Fil de Liaison**, soit l'objet tenu lui-même utilisé directement depuis le sac. Concrètement, aucune évolution du jeu n'est bloquée par l'absence de second joueur.

| Pokémon de base | Évolution | Condition d'échange | Alternative sans échange |
|---|---|---|---|
| Kadabra | Alakazam | Échange simple | Utiliser un Fil de Liaison |
| Machopeur | Mackogneur | Échange simple | Utiliser un Fil de Liaison |
| Gravalanch | Grolem | Échange simple | Utiliser un Fil de Liaison |
| Spectrum | Ectoplasma | Échange simple | Utiliser un Fil de Liaison |
| Ramoloss | Roigada | Échange en tenant une Roche Royale | Utiliser directement la Roche Royale |
| Onix | Steelix | Échange en tenant une Peau Métal | Utiliser directement la Peau Métal |
| Rhinoféros | Rhinastoc | Échange en tenant un Protecteur | Utiliser directement le Protecteur |
| Hypocéan | Hyporoi (Kingdra) | Échange en tenant une Écaille Draco | Utiliser directement l'Écaille Draco |
| Insécateur | Cizayox (Scizor) | Échange en tenant une Peau Métal | Utiliser directement la Peau Métal |
| Élektek | Élekable | Échange en tenant un Électriseur | Utiliser directement l'Électriseur |
| Magmar | Maganon | Échange en tenant un Magmariseur | Utiliser directement le Magmariseur |
| Porygon | Porygon2 | Échange en tenant un Améliorator | Utiliser directement l'Améliorator |
| Porygon2 | Porygon-Z | Échange en tenant un CD Douteux | Utiliser directement le CD Douteux |
| Téraclope | Noctunoir | Échange en tenant un Tissu Fauche | Utiliser directement le Tissu Fauche |
| Barpau | Milobellus | Échange en tenant une Bel'Écaille *(ou Beauté ≥ 170, voir §4)* | Utiliser directement la Bel'Écaille |
| Coquiperl | Rosabyss (Gorebyss) | Échange en tenant une Dent Océan | Utiliser directement la Dent Océan |
| Coquiperl | Serpang (Huntail) | Échange en tenant une Écaille Océan | Utiliser directement l'Écaille Océan |

---

## 3. Amitié

Seuil d'amitié requis : **160** (comportement Génération 8+).

| Pokémon de base | Évolution | Condition |
|---|---|---|
| Pichu | Pikachu | Niveau + amitié |
| Mélo | Mélofée | Niveau + amitié |
| Toudoudou | Rondoudou | Niveau + amitié |
| Nosferalto | Nostenfer (Crobat) | Niveau + amitié |
| Leveinard | Leuphorie (Blissey) | Niveau + amitié |
| Goinfrex (Munchlax) | Ronflex (Snorlax) | Amitié seule |
| Togepi | Togetic | Niveau + amitié |
| Azurill | Marill | Niveau + amitié |
| Rozbouton (Budew) | Rosélia | Amitié, *hors de la nuit* (voir §6) |
| Korillon (Chingling) | Éoko (Chimecho) | Amitié, *la nuit* (voir §6) |
| Ptiravi (Happiny) | Leveinard | Amitié + Pierre Ovale, *hors de la nuit* (voir §6) |

---

## 4. Beauté

| Pokémon de base | Évolution | Condition |
|---|---|---|
| Barpau | Milobellus (Milotic) | Beauté ≥ 170 *(ou échange avec Bel'Écaille, voir §2)* |

---

## 5. Lieu

| Pokémon de base | Évolution | Lieu requis |
|---|---|---|
| Magnéton | Magnézone | Nouvel Auguerre (New Mauville) |
| Tarinor | Tarinorme | Nouvel Auguerre (New Mauville) |
| Évoli | Phyllali (Leafeon) | Bois Rosé (Petalburg Woods) |
| Évoli | Givrali (Glaceon) | Grotte Perlée, salle de glace à marée basse (Shoal Cave) |

Chacune de ces quatre évolutions dispose aussi d'une alternative par objet (Pierre Foudre, Pierre Foudre, Pierre Plante, Pierre Glace respectivement — voir §1).

---

## 6. Heure (jour/nuit)

| Pokémon de base | Évolution | Condition |
|---|---|---|
| Évoli | Noctali (Umbreon) | Amitié + la nuit |
| Évoli | Mentali (Espeon) | Amitié + hors de la nuit |
| Scorplane | Scorvol | Croc Rasoir tenu + la nuit |
| Farfuret | Dimoret | Griffe Rasoir tenu + la nuit |
| Ursaring | Ursaking | Bloc de Tourbe + la nuit |
| Rozbouton | Rosélia | Amitié + hors de la nuit |
| Korillon | Éoko | Amitié + la nuit |
| Ptiravi | Leveinard | Pierre Ovale + hors de la nuit |

---

## 7. Genre

| Pokémon de base | Évolution | Condition |
|---|---|---|
| Kirlia | Gallame (Gallade) | Pierre Aube, seulement si mâle |
| Stalgamin | Momartik (Froslass) | Pierre Aube, seulement si femelle |

---

## 8. Capacité connue ou utilisée

| Pokémon de base | Évolution | Condition |
|---|---|---|
| Colossinge (Primeape) | Courrousinge (Annihilape) | Avoir utilisé Poing Rage 20 fois en combat |
| Excelangue (Lickitung) | Coudlangue (Lickilicky) | Connaître Roulade |
| Saquedeneu (Tangela) | Bouldeneu (Tangrowth) | Connaître Force Antique |
| Mime Jr. | M. Mime | Connaître Mimique |
| Évoli | Nymphali (Sylveon) | Amitié + connaître une capacité de type Fée |
| Manzaï (Bonsly) | Simularbre (Sudowoodo) | Connaître Mimique |
| Capumain (Aipom) | Capidextre (Ambipom) | Connaître Coup Double |
| Yanma | Yanmega | Connaître Force Antique |
| Girafarig | Farigiraf | Connaître Rayon Bicéphale |
| Insolourdo (Dunsparce) | Deusolourdo (Dudunsparce) | Connaître Foreuse Suprême *(+ répartition aléatoire, voir §9)* |
| Cochignon (Piloswine) | Mammochon (Mamoswine) | Connaître Force Antique |
| Cerfrousse (Stantler) | Cerbyllin (Wyrdeer) | Avoir utilisé Frappe Psybouclier 20 fois en combat |

---

## 9. Valeur aléatoire du Pokémon (PID)

Deux évolutions se répartissent en fonction d'une valeur interne et cachée du Pokémon (sa PID), fixée à la capture ou à l'éclosion et invisible pour le joueur.

| Pokémon de base | Évolutions possibles | Condition |
|---|---|---|
| Chenipotte (Wurmple) | Armulys (Silcoon) **ou** Blindalys (Cascoon) | Niveau 7 ; répartition ~50/50 selon la PID |
| Insolourdo (Dunsparce) | Deusolourdo à deux segments **ou** à trois segments | En plus de connaître Foreuse Suprême ; répartition ~99 %/1 % selon la PID (la forme à trois segments est la variante rare) |

---

## 10. Cas particuliers

| Pokémon de base | Évolution(s) | Condition |
|---|---|---|
| Debugant (Tyrogue) | Kicklee (si Attaque > Défense), Tygnon (si Attaque < Défense), ou Kapoera (si Attaque = Défense) | Niveau 20, comparaison Attaque/Défense au moment de l'évolution |
| Babimanta (Mantyke) | Démanta (Mantine) | Avoir un Rémoraid dans l'équipe |
| Ningale (Nincada) | Ninjask (niveau 20) **et**, simultanément, Munja (Shedinja) | Avoir un emplacement libre pour une Poké Ball dans le sac (elle est alors consommée) |
| Smogo (Koffing) | Smogogo (Weezing) | Niveau 35 |
| Osselait (Cubone) | Ossatueur (Marowak) | Niveau 28 |

*(Koffing et Cubone ont chacun une branche alternative menant à une forme régionale de Galar/Alola — non atteignable dans ce hack basé sur Kanto/Hoenn, voir §11.)*

---

## 11. Notes techniques

- **Aucune évolution par échange n'est réellement bloquante** en solo : chaque cas du §2 dispose d'une méthode alternative (objet à utiliser directement, ou Fil de Liaison).
- **Formes régionales exclues de ce document** : plusieurs évolutions data-minées existent dans le jeu mais partent d'une forme régionale (Alola/Galar/Hisui/Paldea) du Pokémon de pré-évolution, qui n'est elle-même pas obtenable dans ce hack (basé uniquement sur les régions Kanto et Hoenn). C'est le cas notamment de Miaouss-Galar→Berserkatt, Canarticho-Galar→Palarticho, Ramoloss-Galar→Flagadoss/Roigada-Galar, Farfuret-Hisui→Farfurex, Qwilfish-Hisui→Qwilpik, Corayon (Corsola-Galar)→Corayôme, Zigzaton/Linéon-Galar→Ixon, Axoloto (Wooper-Paldea)→Terraiste. Ces Pokémon ne sont donc pas listés ci-dessus, conformément au périmètre « formes originales uniquement » de ce document.
- **Branches région-dépendantes sur une forme de base** : Pikachu, Noeunoeuf, Koffing, Mime Jr. et Osselait ont, dans le code, une branche d'évolution alternative menant à une forme exclusive à Alola ou Galar (Raichu-Alola, Noadkoko-Alola, Smogogo-Galar, M. Mime-Galar, Ossatueur-Alola). Ces branches ne peuvent jamais se déclencher dans ce hack (le jeu ne reconnaît que les régions Kanto et Hoenn) — seule la branche « standard » listée dans ce document est donc réellement accessible.
- **Seuil d'amitié** : 160 (comportement Génération 8+, au lieu de 220 dans les jeux plus anciens).
