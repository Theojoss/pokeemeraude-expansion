const struct AbilityInfo gAbilitiesInfo[ABILITIES_COUNT] =
{
    [ABILITY_NONE] =
    {
        .name = _("-------"),
        .description = COMPOUND_STRING("Pas de capacité spéciale."),
        .aiRating = 0,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_STENCH] =
    {
        .name = _("Puanteur"),
        .description = COMPOUND_STRING("Le Pokémon émet une odeur si nauséabonde\n"
            "qu'il peut effrayer sa cible en\n"
            "l'attaquant."),
        .aiRating = 1,
    },

    [ABILITY_DRIZZLE] =
    {
        .name = _("Crachin"),
        .description = COMPOUND_STRING("Le Pokémon invoque la pluie quand il\n"
            "entre au combat."),
        .aiRating = 9,
    },

    [ABILITY_SPEED_BOOST] =
    {
        .name = _("Turbo"),
        .description = COMPOUND_STRING("La Vitesse du Pokémon augmente à chaque\n"
            "tour."),
        .aiRating = 9,
    },

    [ABILITY_BATTLE_ARMOR] =
    {
        .name = _("Armurbaston"),
        .description = COMPOUND_STRING("Le Pokémon est protégé des coups\n"
            "critiques par une solide carapace."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_STURDY] =
    {
        .name = _("Fermeté"),
        .description = COMPOUND_STRING("Le Pokémon encaisse toujours au moins\n"
            "une attaque s'il a tous ses PV. Il est\n"
            "également immunisé contre les capacités\n"
            "pouvant mettre K.O. en un coup."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_DAMP] =
    {
        .name = _("Moiteur"),
        .description = COMPOUND_STRING("Le Pokémon augmente l'humidité de l'air,\n"
            "ce qui empêche tous les Pokémon\n"
            "d'utiliser des capacités explosives\n"
            "telles que Destruction."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_LIMBER] =
    {
        .name = _("Échauffement"),
        .description = COMPOUND_STRING("Le Pokémon s'est suffisamment échauffé,\n"
            "ce qui l'immunise contre la paralysie."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_SAND_VEIL] =
    {
        .name = _("Voile Sable"),
        .description = COMPOUND_STRING("Augmente l'Esquive du Pokémon lors des\n"
            "tempêtes de sable."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_STATIC] =
    {
        .name = _("Statik"),
        .description = COMPOUND_STRING("Le Pokémon charge son corps en\n"
            "électricité statique, et tout contact\n"
            "avec lui peut paralyser."),
        .aiRating = 4,
    },

    [ABILITY_VOLT_ABSORB] =
    {
        .name = _("Absorbe-Volt"),
        .description = COMPOUND_STRING("Si le Pokémon est touché par une\n"
            "capacité Électrik, il ne subit aucun\n"
            "dégât et regagne des PV à la place."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_WATER_ABSORB] =
    {
        .name = _("Absorbe-Eau"),
        .description = COMPOUND_STRING("Si le Pokémon est touché par une\n"
            "capacité Eau, il ne subit aucun dégât et\n"
            "regagne des PV à la place."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_OBLIVIOUS] =
    {
        .name = _("Benêt"),
        .description = COMPOUND_STRING("Le Pokémon est un grand benêt, ce qui\n"
            "l'immunise contre l'attraction, la\n"
            "provocation ou l'intimidation."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_CLOUD_NINE] =
    {
        .name = _("Ciel Gris"),
        .description = COMPOUND_STRING("Annule tous les effets liés à la météo."),
        .aiRating = 5,
    },

    [ABILITY_COMPOUND_EYES] =
    {
        .name = _("Œil Composé"),
        .description = COMPOUND_STRING("Les yeux à facettes du Pokémon\n"
            "augmentent la Précision de ses\n"
            "capacités."),
        .aiRating = 7,
    },

    [ABILITY_INSOMNIA] =
    {
        .name = _("Insomnia"),
        .description = COMPOUND_STRING("Le Pokémon est incapable de dormir."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_COLOR_CHANGE] =
    {
        .name = _("Homochromie"),
        .description = COMPOUND_STRING("Lorsque le Pokémon est touché par une\n"
            "capacité, il prend le type de celle-ci."),
        .aiRating = 2,
    },

    [ABILITY_IMMUNITY] =
    {
        .name = _("Vaccin"),
        .description = COMPOUND_STRING("Le Pokémon est naturellement immunisé\n"
            "contre toute forme de poison."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_FLASH_FIRE] =
    {
        .name = _("Torche"),
        .description = COMPOUND_STRING("Lorsque le Pokémon est touché par une\n"
            "capacité de type Feu, il absorbe la\n"
            "chaleur pour renforcer ses propres\n"
            "capacités Feu."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_SHIELD_DUST] =
    {
        .name = _("Écran Poudre"),
        .description = COMPOUND_STRING("Le Pokémon dispose d'un écran naturel\n"
            "qui le protège des effets additionnels\n"
            "des attaques ennemies."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_OWN_TEMPO] =
    {
        .name = _("Tempo Perso"),
        .description = COMPOUND_STRING("Le Pokémon vit sa vie à son propre\n"
            "rythme, ce qui l'immunise contre la\n"
            "confusion et l'intimidation."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_SUCTION_CUPS] =
    {
        .name = _("Ventouse"),
        .description = COMPOUND_STRING("Le Pokémon est solidement fixé au sol\n"
            "par des ventouses, ce qui le protège des\n"
            "capacités ou objets qui font changer de\n"
            "Pokémon."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_INTIMIDATE] =
    {
        .name = _("Intimidation"),
        .description = COMPOUND_STRING("Le Pokémon rugit lorsqu'il arrive au\n"
            "combat, ce qui intimide l'ennemi et\n"
            "baisse son Attaque."),
        .aiRating = 7,
    },

    [ABILITY_SHADOW_TAG] =
    {
        .name = _("Marque Ombre"),
        .description = COMPOUND_STRING("Empêche les Pokémon ennemis de quitter\n"
            "le terrain."),
        .aiRating = 10,
    },

    [ABILITY_ROUGH_SKIN] =
    {
        .name = _("Peau Dure"),
        .description = COMPOUND_STRING("Blesse l'attaquant lorsque le Pokémon\n"
            "subit une attaque directe."),
        .aiRating = 6,
    },

    [ABILITY_WONDER_GUARD] =
    {
        .name = _("Garde Mystik"),
        .description = COMPOUND_STRING("Une puissance mystérieuse protège le\n"
            "Pokémon contre toutes les capacités,\n"
            "sauf celles qui sont super efficaces."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .breakable = TRUE,
    },

    [ABILITY_LEVITATE] =
    {
        .name = _("Lévitation"),
        .description = COMPOUND_STRING("Le Pokémon flotte, ce qui l'immunise\n"
            "contre les capacités de type Sol."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_EFFECT_SPORE] =
    {
        .name = _("Pose Spore"),
        .description = COMPOUND_STRING("Peut paralyser, empoisonner ou endormir\n"
            "l'attaquant lorsque le Pokémon subit une\n"
            "attaque directe."),
        .aiRating = 4,
    },

    [ABILITY_SYNCHRONIZE] =
    {
        .name = _("Synchro"),
        .description = COMPOUND_STRING("Quand le Pokémon est brûlé, paralysé ou\n"
            "empoisonné par un autre Pokémon, il\n"
            "partage ce statut avec celui-ci."),
        .aiRating = 4,
    },

    [ABILITY_CLEAR_BODY] =
    {
        .name = _("Corps Sain"),
        .description = COMPOUND_STRING("Empêche les stats du Pokémon de baisser\n"
            "à cause du talent ou d'une capacité de\n"
            "l'adversaire."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_NATURAL_CURE] =
    {
        .name = _("Médic Nature"),
        .description = COMPOUND_STRING("Le Pokémon soigne ses altérations de\n"
            "statut en quittant le combat."),
        .aiRating = 7,
    },

    [ABILITY_LIGHTNING_ROD] =
    {
        .name = _("Paratonnerre"),
        .description = COMPOUND_STRING("Le Pokémon détourne sur lui les\n"
            "capacités de type Électrik et les\n"
            "neutralise, tout en augmentant son\n"
            "Attaque Spéciale."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_SERENE_GRACE] =
    {
        .name = _("Sérénité"),
        .description = COMPOUND_STRING("Augmente les chances d'infliger des\n"
            "effets additionnels."),
        .aiRating = 8,
    },

    [ABILITY_SWIFT_SWIM] =
    {
        .name = _("Glissade"),
        .description = COMPOUND_STRING("Augmente la Vitesse du Pokémon s'il\n"
            "pleut."),
        .aiRating = 6,
    },

    [ABILITY_CHLOROPHYLL] =
    {
        .name = _("Chlorophylle"),
        .description = COMPOUND_STRING("Augmente la Vitesse du Pokémon s'il y a\n"
            "du soleil."),
        .aiRating = 6,
    },

    [ABILITY_ILLUMINATE] =
    {
        .name = _("Lumiattirance"),
        .description = COMPOUND_STRING("Le Pokémon illumine les alentours, ce\n"
            "qui empêche sa Précision de baisser."),
        .aiRating = 0,
        .breakable = TRUE,
    },

    [ABILITY_TRACE] =
    {
        .name = _("Calque"),
        .description = COMPOUND_STRING("Lorsque le Pokémon entre au combat, il\n"
            "calque le talent d'un ennemi pour\n"
            "remplacer le sien."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeTraced = TRUE, //B_UPDATED_ABILITY_DATA >= GEN_4
    },

    [ABILITY_HUGE_POWER] =
    {
        .name = _("Coloforce"),
        .description = COMPOUND_STRING("Double la puissance des attaques\n"
            "physiques."),
        .aiRating = 10,
    },

    [ABILITY_POISON_POINT] =
    {
        .name = _("Point Poison"),
        .description = COMPOUND_STRING("Peut empoisonner l'attaquant lorsque le\n"
            "Pokémon subit une attaque directe."),
        .aiRating = 4,
    },

    [ABILITY_INNER_FOCUS] =
    {
        .name = _("Attention"),
        .description = COMPOUND_STRING("Le Pokémon a un mental à toute épreuve\n"
            "qui empêche les attaques ennemies de lui\n"
            "faire peur. Il est aussi immunisé contre\n"
            "le talent Intimidation."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_MAGMA_ARMOR] =
    {
        .name = _("Armumagma"),
        .description = COMPOUND_STRING("Le magma qui recouvre le corps du\n"
            "Pokémon le protège contre le gel."),
        .aiRating = 1,
        .breakable = TRUE,
    },

    [ABILITY_WATER_VEIL] =
    {
        .name = _("Ignifu-Voile"),
        .description = COMPOUND_STRING("Le voile qui recouvre le Pokémon le\n"
            "protège des brûlures."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_MAGNET_PULL] =
    {
        .name = _("Magnépiège"),
        .description = COMPOUND_STRING("Attire les Pokémon Acier grâce à un\n"
            "champ magnétique, ce qui les empêche de\n"
            "quitter le terrain."),
        .aiRating = 9,
    },

    [ABILITY_SOUNDPROOF] =
    {
        .name = _("Anti-Bruit"),
        .description = COMPOUND_STRING("Protège le Pokémon de toutes les\n"
            "capacités sonores."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_RAIN_DISH] =
    {
        .name = _("Cuvette"),
        .description = COMPOUND_STRING("Le Pokémon récupère progressivement des\n"
            "PV lorsqu'il pleut."),
        .aiRating = 3,
    },

    [ABILITY_SAND_STREAM] =
    {
        .name = _("Sable Volant"),
        .description = COMPOUND_STRING("Le Pokémon invoque une tempête de sable\n"
            "quand il entre au combat."),
        .aiRating = 9,
    },

    [ABILITY_PRESSURE] =
    {
        .name = _("Pression"),
        .description = COMPOUND_STRING("Met la pression à l'adversaire pour le\n"
            "forcer à dépenser plus de PP."),
        .aiRating = 5,
    },

    [ABILITY_THICK_FAT] =
    {
        .name = _("Isograisse"),
        .description = COMPOUND_STRING("Le Pokémon est protégé par une épaisse\n"
            "couche de graisse qui diminue de moitié\n"
            "les dégâts qu'il subit des capacités de\n"
            "types Feu et Glace."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_EARLY_BIRD] =
    {
        .name = _("Matinal"),
        .description = COMPOUND_STRING("Le Pokémon se réveille deux fois plus\n"
            "rapidement que les autres."),
        .aiRating = 4,
    },

    [ABILITY_FLAME_BODY] =
    {
        .name = _("Corps Ardent"),
        .description = COMPOUND_STRING("Peut brûler l'attaquant lorsque le\n"
            "Pokémon subit une attaque directe."),
        .aiRating = 4,
    },

    [ABILITY_RUN_AWAY] =
    {
        .name = _("Fuite"),
        .description = COMPOUND_STRING("Permet de fuir n'importe quel Pokémon\n"
            "sauvage."),
        .aiRating = 0,
    },

    [ABILITY_KEEN_EYE] =
    {
        .name = _("Regard Vif"),
        .description = COMPOUND_STRING("Les yeux perçants du Pokémon empêchent\n"
            "sa Précision de baisser."),
        .aiRating = 1,
        .breakable = TRUE,
    },

    [ABILITY_HYPER_CUTTER] =
    {
        .name = _("Hyper Cutter"),
        .description = COMPOUND_STRING("Le Pokémon est armé de puissantes pinces\n"
            "qui font sa fierté et empêchent son\n"
            "Attaque d'être baissée par l'adversaire."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_PICKUP] =
    {
        .name = _("Ramassage"),
        .description = COMPOUND_STRING("Permet parfois au Pokémon de ramasser\n"
            "les objets que d'autres Pokémon ont\n"
            "utilisés. Il lui arrive aussi d'en\n"
            "trouver hors des combats."),
        .aiRating = 1,
    },

    [ABILITY_TRUANT] =
    {
        .name = _("Absentéisme"),
        .description = COMPOUND_STRING("Lorsque le Pokémon utilise une capacité,\n"
            "il passe le tour suivant à paresser."),
        .aiRating = -2,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_HUSTLE] =
    {
        .name = _("Agitation"),
        .description = COMPOUND_STRING("Améliore l'Attaque du Pokémon, mais\n"
            "diminue la Précision."),
        .aiRating = 7,
    },

    [ABILITY_CUTE_CHARM] =
    {
        .name = _("Joli Sourire"),
        .description = COMPOUND_STRING("Peut séduire l'attaquant lorsque le\n"
            "Pokémon subit une attaque directe."),
        .aiRating = 2,
    },

    [ABILITY_PLUS] =
    {
        .name = _("Plus"),
        .description = COMPOUND_STRING("L'Attaque Spéciale du Pokémon augmente\n"
            "si un Pokémon allié a le talent Moins ou\n"
            "Plus."),
        .aiRating = 0,
    },

    [ABILITY_MINUS] =
    {
        .name = _("Moins"),
        .description = COMPOUND_STRING("L'Attaque Spéciale du Pokémon augmente\n"
            "si un Pokémon allié a le talent Moins ou\n"
            "Plus."),
        .aiRating = 0,
    },

    [ABILITY_FORECAST] =
    {
        .name = _("Météo"),
        .description = COMPOUND_STRING("Le Pokémon prend le type Eau, Feu ou\n"
            "Glace en fonction de la météo."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeTraced = B_UPDATED_ABILITY_DATA >= GEN_4,
        .failsOnImposter = B_UPDATED_ABILITY_DATA >= GEN_5,
    },

    [ABILITY_STICKY_HOLD] =
    {
        .name = _("Glu"),
        .description = COMPOUND_STRING("Les objets sont collés au corps gluant\n"
            "du Pokémon, ce qui empêche ses\n"
            "adversaires de les dérober."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_SHED_SKIN] =
    {
        .name = _("Mue"),
        .description = COMPOUND_STRING("Le Pokémon soigne parfois ses\n"
            "altérations de statut en muant."),
        .aiRating = 7,
    },

    [ABILITY_GUTS] =
    {
        .name = _("Cran"),
        .description = COMPOUND_STRING("Augmente l'Attaque du Pokémon s'il est\n"
            "affecté par une altération de statut."),
        .aiRating = 6,
    },

    [ABILITY_MARVEL_SCALE] =
    {
        .name = _("Écaille Spéciale"),
        .description = COMPOUND_STRING("Les écailles mystérieuses du Pokémon\n"
            "réagissent aux altérations de statut en\n"
            "augmentant sa Défense."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_LIQUID_OOZE] =
    {
        .name = _("Suintement"),
        .description = COMPOUND_STRING("Le Pokémon suinte un liquide toxique\n"
            "nauséabond qui blesse tous ceux qui\n"
            "tentent de voler ses PV."),
        .aiRating = 3,
    },

    [ABILITY_OVERGROW] =
    {
        .name = _("Engrais"),
        .description = COMPOUND_STRING("Augmente la puissance des capacités de\n"
            "type Plante du Pokémon quand il a perdu\n"
            "une certaine quantité de PV."),
        .aiRating = 5,
    },

    [ABILITY_BLAZE] =
    {
        .name = _("Brasier"),
        .description = COMPOUND_STRING("Augmente la puissance des capacités de\n"
            "type Feu du Pokémon quand il a perdu une\n"
            "certaine quantité de PV."),
        .aiRating = 5,
    },

    [ABILITY_TORRENT] =
    {
        .name = _("Torrent"),
        .description = COMPOUND_STRING("Augmente la puissance des capacités de\n"
            "type Eau du Pokémon quand il a perdu une\n"
            "certaine quantité de PV."),
        .aiRating = 5,
    },

    [ABILITY_SWARM] =
    {
        .name = _("Essaim"),
        .description = COMPOUND_STRING("Augmente la puissance des capacités de\n"
            "type Insecte du Pokémon quand il a perdu\n"
            "une certaine quantité de PV."),
        .aiRating = 5,
    },

    [ABILITY_ROCK_HEAD] =
    {
        .name = _("Tête de Roc"),
        .description = COMPOUND_STRING("Le Pokémon peut utiliser des capacités\n"
            "occasionnant un contrecoup sans perdre\n"
            "de PV."),
        .aiRating = 5,
    },

    [ABILITY_DROUGHT] =
    {
        .name = _("Sécheresse"),
        .description = COMPOUND_STRING("Le Pokémon invoque le soleil quand il\n"
            "entre au combat."),
        .aiRating = 9,
    },

    [ABILITY_ARENA_TRAP] =
    {
        .name = _("Piège Sable"),
        .description = COMPOUND_STRING("Empêche l'adversaire de quitter le\n"
            "terrain."),
        .aiRating = 9,
    },

    [ABILITY_VITAL_SPIRIT] =
    {
        .name = _("Esprit Vital"),
        .description = COMPOUND_STRING("Empêche le Pokémon de s'endormir."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_WHITE_SMOKE] =
    {
        .name = _("Écran Fumée"),
        .description = COMPOUND_STRING("Un écran de fumée empêche l'adversaire\n"
            "de baisser les stats du Pokémon."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_PURE_POWER] =
    {
        .name = _("Force Pure"),
        .description = COMPOUND_STRING("Le Pokémon utilise sa maîtrise du yoga\n"
            "pour doubler la puissance de ses\n"
            "attaques physiques."),
        .aiRating = 10,
    },

    [ABILITY_SHELL_ARMOR] =
    {
        .name = _("Coque Armure"),
        .description = COMPOUND_STRING("Le Pokémon est protégé des coups\n"
            "critiques par sa carapace."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_AIR_LOCK] =
    {
        .name = _("Air Lock"),
        .description = COMPOUND_STRING("Annule tous les effets de la météo."),
        .aiRating = 5,
    },

    [ABILITY_TANGLED_FEET] =
    {
        .name = _("Pieds Confus"),
        .description = COMPOUND_STRING("Augmente l'Esquive du Pokémon s'il est\n"
            "confus."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_MOTOR_DRIVE] =
    {
        .name = _("Motorisé"),
        .description = COMPOUND_STRING("Si le Pokémon est touché par une\n"
            "capacité de type Électrik, il ne subit\n"
            "aucun dégât et sa Vitesse augmente."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_RIVALRY] =
    {
        .name = _("Rivalité"),
        .description = COMPOUND_STRING("Le Pokémon déteste la concurrence et\n"
            "inflige plus de dégâts si sa cible est\n"
            "du même sexe. Par contre, il en inflige\n"
            "moins si sa cible est du sexe opposé."),
        .aiRating = 1,
    },

    [ABILITY_STEADFAST] =
    {
        .name = _("Impassible"),
        .description = COMPOUND_STRING("Augmente la Vitesse du Pokémon quand il\n"
            "a peur."),
        .aiRating = 2,
    },

    [ABILITY_SNOW_CLOAK] =
    {
        .name = _("Rideau Neige"),
        .description = COMPOUND_STRING("Augmente l'Esquive du Pokémon quand il\n"
            "neige."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_GLUTTONY] =
    {
        .name = _("Gloutonnerie"),
        .description = COMPOUND_STRING("Si le Pokémon tient une Baie à manger en\n"
            "cas de PV bas, il la mange dès qu'il a\n"
            "perdu la moitié de ses PV."),
        .aiRating = 3,
    },

    [ABILITY_ANGER_POINT] =
    {
        .name = _("Colérique"),
        .description = COMPOUND_STRING("Si le Pokémon subit un coup critique, il\n"
            "entre dans une colère noire qui augmente\n"
            "son Attaque au maximum."),
        .aiRating = 4,
    },

    [ABILITY_UNBURDEN] =
    {
        .name = _("Délestage"),
        .description = COMPOUND_STRING("Augmente la Vitesse du Pokémon s'il perd\n"
            "ou utilise l'objet qu'il tenait au début\n"
            "du combat."),
        .aiRating = 7,
    },

    [ABILITY_HEATPROOF] =
    {
        .name = _("Ignifugé"),
        .description = COMPOUND_STRING("Diminue de moitié les dégâts infligés au\n"
            "Pokémon par les capacités de type Feu."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_SIMPLE] =
    {
        .name = _("Simple"),
        .description = COMPOUND_STRING("Les changements de stats sont deux fois\n"
            "plus importants pour le Pokémon."),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_DRY_SKIN] =
    {
        .name = _("Peau Sèche"),
        .description = COMPOUND_STRING("Quand le soleil brille, le Pokémon perd\n"
            "des PV et subit plus de dégâts des\n"
            "capacités Feu, mais il regagne des PV\n"
            "lorsqu'il pleut ou s'il est touché par\n"
            "une capacité Eau."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_DOWNLOAD] =
    {
        .name = _("Télécharge"),
        .description = COMPOUND_STRING("Le Pokémon compare la Défense et la\n"
            "Défense Spéciale de l'adversaire et, en\n"
            "fonction de la stat la plus basse, il\n"
            "augmente sa propre Attaque ou Attaque\n"
            "Spéciale."),
        .aiRating = 7,
    },

    [ABILITY_IRON_FIST] =
    {
        .name = _("Poing de Fer"),
        .description = COMPOUND_STRING("Augmente la puissance des capacités\n"
            "coups de poing."),
        .aiRating = 6,
    },

    [ABILITY_POISON_HEAL] =
    {
        .name = _("Soin Poison"),
        .description = COMPOUND_STRING("Quand le Pokémon est empoisonné, il\n"
            "regagne des PV au lieu d'en perdre."),
        .aiRating = 8,
    },

    [ABILITY_ADAPTABILITY] =
    {
        .name = _("Adaptabilité"),
        .description = COMPOUND_STRING("Quand le Pokémon utilise une capacité du\n"
            "même type que lui, le bonus de puissance\n"
            "qu'elle reçoit est encore plus important\n"
            "que normalement."),
        .aiRating = 8,
    },

    [ABILITY_SKILL_LINK] =
    {
        .name = _("Multi-Coups"),
        .description = COMPOUND_STRING("Les capacités pouvant frapper plusieurs\n"
            "fois frappent toujours le nombre maximal\n"
            "de coups."),
        .aiRating = 7,
    },

    [ABILITY_HYDRATION] =
    {
        .name = _("Hydratation"),
        .description = COMPOUND_STRING("Soigne les altérations de statut du\n"
            "Pokémon quand il pleut."),
        .aiRating = 4,
    },

    [ABILITY_SOLAR_POWER] =
    {
        .name = _("Force Soleil"),
        .description = COMPOUND_STRING("Quand le soleil brille, l'Attaque\n"
            "Spéciale du Pokémon augmente mais il\n"
            "perd des PV à chaque tour."),
        .aiRating = 3,
    },

    [ABILITY_QUICK_FEET] =
    {
        .name = _("Pied Véloce"),
        .description = COMPOUND_STRING("Augmente la Vitesse du Pokémon en cas\n"
            "d'altération de statut."),
        .aiRating = 5,
    },

    [ABILITY_NORMALIZE] =
    {
        .name = _("Normalise"),
        .description = COMPOUND_STRING("Toutes les capacités du Pokémon\n"
            "deviennent de type Normal, quel que soit\n"
            "leur type original. Leur puissance\n"
            "augmente légèrement."),
        .aiRating = -1,
    },

    [ABILITY_SNIPER] =
    {
        .name = _("Sniper"),
        .description = COMPOUND_STRING("Lorsque le Pokémon porte un coup\n"
            "critique, les dégâts infligés augmentent\n"
            "encore plus que d'habitude."),
        .aiRating = 3,
    },

    [ABILITY_MAGIC_GUARD] =
    {
        .name = _("Garde Magik"),
        .description = COMPOUND_STRING("Seules les attaques peuvent blesser le\n"
            "Pokémon."),
        .aiRating = 9,
    },

    [ABILITY_NO_GUARD] =
    {
        .name = _("Annule Garde"),
        .description = COMPOUND_STRING("Les capacités du Pokémon touchent leur\n"
            "cible à coup sûr, mais les capacités de\n"
            "l'ennemi le touchent aussi à coup sûr."),
        .aiRating = 8,
    },

    [ABILITY_STALL] =
    {
        .name = _("Frein"),
        .description = COMPOUND_STRING("Le Pokémon utilise toujours sa capacité\n"
            "en dernier."),
        .aiRating = -1,
    },

    [ABILITY_TECHNICIAN] =
    {
        .name = _("Technicien"),
        .description = COMPOUND_STRING("Augmente la puissance des capacités les\n"
            "plus faibles."),
        .aiRating = 8,
    },

    [ABILITY_LEAF_GUARD] =
    {
        .name = _("Feuille Garde"),
        .description = COMPOUND_STRING("Protège le Pokémon contre les\n"
            "altérations de statut quand le soleil\n"
            "brille."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_KLUTZ] =
    {
        .name = _("Maladresse"),
        .description = COMPOUND_STRING("Le Pokémon ne peut utiliser aucun objet\n"
            "tenu."),
        .aiRating = -1,
    },

    [ABILITY_MOLD_BREAKER] =
    {
        .name = _("Brise Moule"),
        .description = COMPOUND_STRING("Le Pokémon ignore les talents adverses\n"
            "qui auraient un effet sur ses capacités."),
        .aiRating = 7,
    },

    [ABILITY_SUPER_LUCK] =
    {
        .name = _("Chanceux"),
        .description = COMPOUND_STRING("Le Pokémon est tellement chanceux qu'il\n"
            "inflige plus fréquemment des coups\n"
            "critiques."),
        .aiRating = 3,
    },

    [ABILITY_AFTERMATH] =
    {
        .name = _("Boom Final"),
        .description = COMPOUND_STRING("Si le Pokémon est mis K.O. par une\n"
            "attaque directe, il inflige des dégâts à\n"
            "l'attaquant avant de s'évanouir."),
        .aiRating = 5,
    },

    [ABILITY_ANTICIPATION] =
    {
        .name = _("Anticipation"),
        .description = COMPOUND_STRING("Le Pokémon devine si l'adversaire\n"
            "connaît une capacité dangereuse pour\n"
            "lui."),
        .aiRating = 2,
    },

    [ABILITY_FOREWARN] =
    {
        .name = _("Prédiction"),
        .description = COMPOUND_STRING("Révèle l'une des capacités de\n"
            "l'adversaire quand le combat commence."),
        .aiRating = 2,
    },

    [ABILITY_UNAWARE] =
    {
        .name = _("Inconscient"),
        .description = COMPOUND_STRING("Le Pokémon ignore les changements de\n"
            "stats des autres Pokémon, qu'il attaque\n"
            "ou soit attaqué."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_TINTED_LENS] =
    {
        .name = _("Lentiteintée"),
        .description = COMPOUND_STRING("Permet à une capacité qui n'est pas très\n"
            "efficace d'infliger des dégâts comme si\n"
            "elle était efficace normalement."),
        .aiRating = 7,
    },

    [ABILITY_FILTER] =
    {
        .name = _("Filtre"),
        .description = COMPOUND_STRING("Diminue la puissance des attaques super\n"
            "efficaces subies."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_SLOW_START] =
    {
        .name = _("Début Calme"),
        .description = COMPOUND_STRING("Divise la Vitesse et l'Attaque du\n"
            "Pokémon par deux pendant les cinq\n"
            "premiers tours du combat."),
        .aiRating = -2,
    },

    [ABILITY_SCRAPPY] =
    {
        .name = _("Querelleur"),
        .description = COMPOUND_STRING("Permet aux capacités de type Normal ou\n"
            "Combat du Pokémon de toucher les Pokémon\n"
            "de type Spectre. Immunise aussi contre\n"
            "le talent Intimidation."),
        .aiRating = 6,
    },

    [ABILITY_STORM_DRAIN] =
    {
        .name = _("Lavabo"),
        .description = COMPOUND_STRING("Le Pokémon détourne sur lui les\n"
            "capacités de type Eau et les neutralise,\n"
            "tout en augmentant son Attaque Spéciale."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_ICE_BODY] =
    {
        .name = _("Corps Gel"),
        .description = COMPOUND_STRING("Régénère peu à peu les PV du Pokémon\n"
            "quand il neige."),
        .aiRating = 3,
    },

    [ABILITY_SOLID_ROCK] =
    {
        .name = _("Solide Roc"),
        .description = COMPOUND_STRING("Diminue la puissance des attaques super\n"
            "efficaces subies."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_SNOW_WARNING] =
    {
        .name = _("Alerte Neige"),
    #if B_SNOW_WARNING >= GEN_9
        .description = COMPOUND_STRING("Le Pokémon invoque la neige quand il\n"
            "entre au combat."),
    #else
        .description = COMPOUND_STRING("Le Pokémon invoque la neige quand il\n"
            "entre au combat."),
    #endif
        .aiRating = 8,
    },

    [ABILITY_HONEY_GATHER] =
    {
        .name = _("Cherche Miel"),
        .description = COMPOUND_STRING("Le Pokémon peut parfois trouver du Miel\n"
            "après un combat."),
        .aiRating = 0,
    },

    [ABILITY_FRISK] =
    {
        .name = _("Fouille"),
        .description = COMPOUND_STRING("Permet de connaître l'objet tenu par\n"
            "l'ennemi quand le combat commence."),
        .aiRating = 3,
    },

    [ABILITY_RECKLESS] =
    {
        .name = _("Téméraire"),
        .description = COMPOUND_STRING("Augmente la puissance des capacités\n"
            "occasionnant un contrecoup."),
        .aiRating = 6,
    },

    [ABILITY_MULTITYPE] =
    {
        .name = _("Multi-Type"),
        .description = COMPOUND_STRING("Modifie le type du Pokémon en fonction\n"
            "de la plaque qu'il tient."),
        .aiRating = 8,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = B_UPDATED_ABILITY_DATA >= GEN_5,
    },

    [ABILITY_FLOWER_GIFT] =
    {
        .name = _("Don Floral"),
        .description = COMPOUND_STRING("Augmente l'Attaque et la Défense\n"
            "Spéciale du Pokémon et de ses alliés\n"
            "lorsque le soleil brille."),
        .aiRating = 4,
        .cantBeCopied = TRUE,
        .cantBeTraced = B_UPDATED_ABILITY_DATA >= GEN_5,
        .breakable = TRUE,
    },

    [ABILITY_BAD_DREAMS] =
    {
        .name = _("Mauvais Rêve"),
        .description = COMPOUND_STRING("Inflige des dégâts aux ennemis endormis."),
        .aiRating = 4,
    },

    [ABILITY_PICKPOCKET] =
    {
        .name = _("Pickpocket"),
        .description = COMPOUND_STRING("Vole l'objet que tient l'attaquant quand\n"
            "le Pokémon subit une attaque directe."),
        .aiRating = 3,
    },

    [ABILITY_SHEER_FORCE] =
    {
        .name = _("Sans Limite"),
        .description = COMPOUND_STRING("Les capacités ayant un effet additionnel\n"
            "le perdent, mais leur puissance\n"
            "augmente."),
        .aiRating = 8,
    },

    [ABILITY_CONTRARY] =
    {
        .name = _("Contestation"),
        .description = COMPOUND_STRING("Inverse les changements de stats : les\n"
            "augmentations de stats se transforment\n"
            "en baisses, et vice-versa."),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_UNNERVE] =
    {
        .name = _("Tension"),
        .description = COMPOUND_STRING("Fait stresser l'adversaire, ce qui\n"
            "l'empêche de manger des Baies."),
        .aiRating = 3,
    },

    [ABILITY_DEFIANT] =
    {
        .name = _("Acharné"),
        .description = COMPOUND_STRING("Augmente beaucoup l'Attaque du Pokémon\n"
            "quand ses stats sont baissées par\n"
            "l'adversaire."),
        .aiRating = 5,
    },

    [ABILITY_DEFEATIST] =
    {
        .name = _("Défaitiste"),
        .description = COMPOUND_STRING("Le Pokémon devient défaitiste quand ses\n"
            "PV tombent à la moitié, et son Attaque\n"
            "et son Attaque Spéciale sont divisées\n"
            "par deux."),
        .aiRating = -1,
    },

    [ABILITY_CURSED_BODY] =
    {
        .name = _("Corps Maudit"),
        .description = COMPOUND_STRING("Quand le Pokémon est touché par une\n"
            "capacité adverse, il inflige parfois\n"
            "Entrave sur celle-ci."),
        .aiRating = 4,
    },

    [ABILITY_HEALER] =
    {
        .name = _("Cœur Soin"),
        .description = COMPOUND_STRING("Soigne parfois une altération de statut\n"
            "d'un allié proche."),
        .aiRating = 0,
    },

    [ABILITY_FRIEND_GUARD] =
    {
        .name = _("Garde-Ami"),
        .description = COMPOUND_STRING("Diminue les dégâts subis par les alliés."),
        .aiRating = 0,
        .breakable = TRUE,
    },

    [ABILITY_WEAK_ARMOR] =
    {
        .name = _("Armurouillée"),
        .description = COMPOUND_STRING("Quand le Pokémon est touché par une\n"
            "capacité physique, sa Défense baisse\n"
            "mais sa Vitesse augmente beaucoup."),
        .aiRating = 2,
    },

    [ABILITY_HEAVY_METAL] =
    {
        .name = _("Heavy Metal"),
        .description = COMPOUND_STRING("Double le poids du Pokémon."),
        .aiRating = -1,
        .breakable = TRUE,
    },

    [ABILITY_LIGHT_METAL] =
    {
        .name = _("Light Metal"),
        .description = COMPOUND_STRING("Divise par deux le poids du Pokémon."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_MULTISCALE] =
    {
        .name = _("Multiécaille"),
        .description = COMPOUND_STRING("Le Pokémon subit moins de dégâts quand\n"
            "ses PV sont au maximum."),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_TOXIC_BOOST] =
    {
        .name = _("Rage Poison"),
        .description = COMPOUND_STRING("Augmente la puissance des capacités\n"
            "physiques quand le Pokémon est\n"
            "empoisonné."),
        .aiRating = 6,
    },

    [ABILITY_FLARE_BOOST] =
    {
        .name = _("Rage Brûlure"),
        .description = COMPOUND_STRING("Augmente la puissance des capacités\n"
            "spéciales quand le Pokémon est brûlé."),
        .aiRating = 5,
    },

    [ABILITY_HARVEST] =
    {
        .name = _("Récolte"),
        .description = COMPOUND_STRING("Permet de réutiliser une même Baie\n"
            "plusieurs fois."),
        .aiRating = 5,
    },

    [ABILITY_TELEPATHY] =
    {
        .name = _("Télépathe"),
        .description = COMPOUND_STRING("Le Pokémon anticipe et évite les\n"
            "attaques de ses alliés."),
        .aiRating = 0,
        .breakable = TRUE,
    },

    [ABILITY_MOODY] =
    {
        .name = _("Lunatique"),
        .description = COMPOUND_STRING("Augmente beaucoup une stat du Pokémon et\n"
            "en baisse une autre au hasard à chaque\n"
            "tour."),
        .aiRating = 10,
    },

    [ABILITY_OVERCOAT] =
    {
        .name = _("Envelocape"),
        .description = COMPOUND_STRING("Protège des dégâts occasionnés par les\n"
            "tempêtes de sable, ainsi que des effets\n"
            "des capacités qui libèrent de la poudre\n"
            "et des spores."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_POISON_TOUCH] =
    {
        .name = _("Toxitouche"),
        .description = COMPOUND_STRING("Peut empoisonner l'ennemi par simple\n"
            "contact."),
        .aiRating = 4,
    },

    [ABILITY_REGENERATOR] =
    {
        .name = _("Régé-Force"),
        .description = COMPOUND_STRING("Restaure un peu de PV si le Pokémon est\n"
            "retiré du combat."),
        .aiRating = 8,
    },

    [ABILITY_BIG_PECKS] =
    {
        .name = _("Cœur de Coq"),
        .description = COMPOUND_STRING("Protège des effets qui baissent la\n"
            "Défense."),
        .aiRating = 1,
        .breakable = TRUE,
    },

    [ABILITY_SAND_RUSH] =
    {
        .name = _("Baigne Sable"),
        .description = COMPOUND_STRING("Augmente la Vitesse lors des tempêtes de\n"
            "sable."),
        .aiRating = 6,
    },

    [ABILITY_WONDER_SKIN] =
    {
        .name = _("Peau Miracle"),
        .description = COMPOUND_STRING("Le Pokémon résiste mieux aux capacités\n"
            "de statut."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_ANALYTIC] =
    {
        .name = _("Analyste"),
        .description = COMPOUND_STRING("Augmente la puissance des capacités du\n"
            "Pokémon s'il attaque en dernier."),
        .aiRating = 5,
    },

    [ABILITY_ILLUSION] =
    {
        .name = _("Illusion"),
        .description = COMPOUND_STRING("Le Pokémon prend l'apparence du dernier\n"
            "membre de l'équipe pour tromper\n"
            "l'adversaire."),
        .aiRating = 8,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_IMPOSTER] =
    {
        .name = _("Imposteur"),
        .description = COMPOUND_STRING("Le Pokémon prend l'apparence du Pokémon\n"
            "adverse."),
        .aiRating = 9,
        .cantBeCopied = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_INFILTRATOR] =
    {
        .name = _("Infiltration"),
        .description = COMPOUND_STRING("Traverse les barrières et les clones\n"
            "adverses pour attaquer directement."),
        .aiRating = 6,
    },

    [ABILITY_MUMMY] =
    {
        .name = _("Momie"),
        .description = COMPOUND_STRING("Lorsque le Pokémon subit une attaque\n"
            "directe, le talent de l'attaquant est\n"
            "remplacé par Momie."),
        .aiRating = 5,
    },

    [ABILITY_MOXIE] =
    {
        .name = _("Impudence"),
        .description = COMPOUND_STRING("Quand le Pokémon met un ennemi K.O., sa\n"
            "confiance en lui ne connaît plus de\n"
            "limite et son Attaque augmente."),
        .aiRating = 7,
    },

    [ABILITY_JUSTIFIED] =
    {
        .name = _("Cœur Noble"),
        .description = COMPOUND_STRING("Réveille la noblesse du Pokémon\n"
            "lorsqu'il subit une attaque de type\n"
            "Ténèbres, ce qui augmente son Attaque."),
        .aiRating = 4,
    },

    [ABILITY_RATTLED] =
    {
        .name = _("Phobique"),
        .description = COMPOUND_STRING("Si le Pokémon est touché par le talent\n"
            "Intimidation ou une attaque de type\n"
            "Ténèbres, Spectre ou Insecte, sa phobie\n"
            "se révèle et sa Vitesse augmente."),
        .aiRating = 3,
    },

    [ABILITY_MAGIC_BOUNCE] =
    {
        .name = _("Miroir Magik"),
        .description = COMPOUND_STRING("Annule les effets des capacités de\n"
            "statut subies par le Pokémon et les\n"
            "retourne à l'envoyeur."),
        .aiRating = 9,
        .breakable = TRUE,
    },

    [ABILITY_SAP_SIPPER] =
    {
        .name = _("Herbivore"),
        .description = COMPOUND_STRING("Annule les attaques de type Plante\n"
            "subies par le Pokémon et augmente son\n"
            "Attaque."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_PRANKSTER] =
    {
        .name = _("Farceur"),
        .description = COMPOUND_STRING("Rend les capacités de statut du Pokémon\n"
            "prioritaires."),
        .aiRating = 8,
    },

    [ABILITY_SAND_FORCE] =
    {
        .name = _("Force Sable"),
        .description = COMPOUND_STRING("Augmente la puissance des capacités de\n"
            "types Roche, Sol et Acier en cas de\n"
            "tempête de sable."),
        .aiRating = 4,
    },

    [ABILITY_IRON_BARBS] =
    {
        .name = _("Épine de Fer"),
        .description = COMPOUND_STRING("Inflige des dégâts à l'attaquant lorsque\n"
            "le Pokémon subit une attaque directe."),
        .aiRating = 6,
    },

    [ABILITY_ZEN_MODE] =
    {
        .name = _("Mode Transe"),
        .description = COMPOUND_STRING("Le Pokémon change de forme quand il lui\n"
            "reste moins de la moitié de ses PV."),
        .aiRating = -1,
        .cantBeCopied = TRUE,
        .cantBeSwapped = B_UPDATED_ABILITY_DATA >= GEN_7,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = B_UPDATED_ABILITY_DATA >= GEN_7,
        .cantBeOverwritten = B_UPDATED_ABILITY_DATA >= GEN_7,
        .failsOnImposter = TRUE,
    },

    [ABILITY_VICTORY_STAR] =
    {
        .name = _("Victorieux"),
        .description = COMPOUND_STRING("Augmente la Précision du Pokémon et de\n"
            "ses alliés."),
        .aiRating = 6,
    },

    [ABILITY_TURBOBLAZE] =
    {
        .name = _("Turbo Brasier"),
        .description = COMPOUND_STRING("Le Pokémon ignore les talents adverses\n"
            "qui auraient un effet sur ses capacités."),
        .aiRating = 7,
    },

    [ABILITY_TERAVOLT] =
    {
        .name = _("Téra-Voltage"),
        .description = COMPOUND_STRING("Le Pokémon ignore les talents adverses\n"
            "qui auraient un effet sur ses capacités."),
        .aiRating = 7,
    },

    [ABILITY_AROMA_VEIL] =
    {
        .name = _("Aroma-Voile"),
        .description = COMPOUND_STRING("Protège le Pokémon et ses alliés des\n"
            "effets limitant le libre arbitre."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_FLOWER_VEIL] =
    {
        .name = _("Flora-Voile"),
        .description = COMPOUND_STRING("Empêche les alliés de type Plante de\n"
            "subir des baisses de stats et des\n"
            "altérations de statut."),
        .aiRating = 0,
        .breakable = TRUE,
    },

    [ABILITY_CHEEK_POUCH] =
    {
        .name = _("Bajoues"),
        .description = COMPOUND_STRING("Le Pokémon récupère des PV lorsqu'il\n"
            "consomme n'importe quelle Baie en plus\n"
            "de bénéficier de ses effets habituels."),
        .aiRating = 4,
    },

    [ABILITY_PROTEAN] =
    {
        .name = _("Protéen"),
        .description = COMPOUND_STRING("Le Pokémon prend le type de la capacité\n"
            "qu'il utilise. Ce talent ne peut se\n"
            "déclencher qu'une fois par entrée au\n"
            "combat du Pokémon."),
        .aiRating = 8,
    },

    [ABILITY_FUR_COAT] =
    {
        .name = _("Toison Épaisse"),
        .description = COMPOUND_STRING("Divise par deux les dégâts des capacités\n"
            "physiques subies par le Pokémon."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_MAGICIAN] =
    {
        .name = _("Magicien"),
        .description = COMPOUND_STRING("Les capacités volent aussi l'objet tenu\n"
            "par la cible."),
        .aiRating = 3,
    },

    [ABILITY_BULLETPROOF] =
    {
        .name = _("Pare-Balles"),
        .description = COMPOUND_STRING("Protège de certaines capacités lançant\n"
            "des projectiles comme des bombes et des\n"
            "balles."),
        .breakable = TRUE,
        .aiRating = 7,
    },

    [ABILITY_COMPETITIVE] =
    {
        .name = _("Battant"),
        .description = COMPOUND_STRING("Augmente beaucoup l'Attaque Spéciale du\n"
            "Pokémon quand ses stats ont été baissées\n"
            "par l'adversaire."),
        .aiRating = 5,
    },

    [ABILITY_STRONG_JAW] =
    {
        .name = _("Prognathe"),
        .description = COMPOUND_STRING("Le Pokémon a une mâchoire robuste qui\n"
            "augmente la puissance de ses capacités\n"
            "de morsure."),
        .aiRating = 6,
    },

    [ABILITY_REFRIGERATE] =
    {
        .name = _("Peau Gelée"),
        .description = COMPOUND_STRING("Les capacités de type Normal deviennent\n"
            "de type Glace. Leur puissance augmente\n"
            "légèrement."),
        .aiRating = 8,
    },

    [ABILITY_SWEET_VEIL] =
    {
        .name = _("Gluco-Voile"),
        .description = COMPOUND_STRING("Le Pokémon et ses alliés ne peuvent pas\n"
            "s'endormir."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_STANCE_CHANGE] =
    {
        .name = _("Déclic Tactique"),
        .description = COMPOUND_STRING("Le Pokémon prend la Forme Assaut\n"
            "lorsqu'il utilise une capacité\n"
            "offensive, et la Forme Parade lorsqu'il\n"
            "utilise Bouclier Royal."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_GALE_WINGS] =
    {
        .name = _("Ailes Bourrasque"),
        .description = COMPOUND_STRING("Quand les PV du Pokémon sont au maximum,\n"
            "ses capacités de type Vol sont\n"
            "prioritaires."),
        .aiRating = 6,
    },

    [ABILITY_MEGA_LAUNCHER] =
    {
        .name = _("Méga Blaster"),
        .description = COMPOUND_STRING("Augmente la puissance des capacités qui\n"
            "projettent une aura."),
        .aiRating = 7,
    },

    [ABILITY_GRASS_PELT] =
    {
        .name = _("Toison Herbue"),
        .description = COMPOUND_STRING("Augmente la Défense du Pokémon si un\n"
            "champ herbu est actif."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_SYMBIOSIS] =
    {
        .name = _("Symbiose"),
        .description = COMPOUND_STRING("Quand les alliés utilisent l'objet\n"
            "qu'ils tiennent, le Pokémon leur donne\n"
            "l'objet qu'il tient en remplacement."),
        .aiRating = 0,
    },

    [ABILITY_TOUGH_CLAWS] =
    {
        .name = _("Griffe Dure"),
        .description = COMPOUND_STRING("Augmente la puissance des attaques\n"
            "directes du Pokémon."),
        .aiRating = 7,
    },

    [ABILITY_PIXILATE] =
    {
        .name = _("Peau Féérique"),
        .description = COMPOUND_STRING("Les capacités de type Normal deviennent\n"
            "de type Fée. Leur puissance augmente\n"
            "légèrement."),
        .aiRating = 8,
    },

    [ABILITY_GOOEY] =
    {
        .name = _("Poisseux"),
        .description = COMPOUND_STRING("Baisse la Vitesse de l'attaquant lorsque\n"
            "le Pokémon subit une attaque directe."),
        .aiRating = 5,
    },

    [ABILITY_AERILATE] =
    {
        .name = _("Peau Céleste"),
        .description = COMPOUND_STRING("Les capacités de type Normal deviennent\n"
            "de type Vol. Leur puissance augmente\n"
            "légèrement."),
        .aiRating = 8,
    },

    [ABILITY_PARENTAL_BOND] =
    {
        .name = _("Amour Filial"),
        .description = COMPOUND_STRING("La mère et son petit unissent leurs\n"
            "forces pour attaquer deux fois\n"
            "d'affilée."),
        .aiRating = 10,
    },

    [ABILITY_DARK_AURA] =
    {
        .name = _("Aura Ténébreuse"),
        .description = COMPOUND_STRING("Augmente la puissance des capacités de\n"
            "type Ténèbres de tous les Pokémon."),
        .aiRating = 6,
        .breakable = B_UPDATED_ABILITY_DATA < GEN_8,
    },

    [ABILITY_FAIRY_AURA] =
    {
        .name = _("Aura Féérique"),
        .description = COMPOUND_STRING("Augmente la puissance des capacités de\n"
            "type Fée de tous les Pokémon."),
        .aiRating = 6,
        .breakable = B_UPDATED_ABILITY_DATA < GEN_8,
    },

    [ABILITY_AURA_BREAK] =
    {
        .name = _("Aura Inversée"),
        .description = COMPOUND_STRING("Inverse l'effet des talents “Aura”\n"
            "afin que ceux-ci baissent la puissance\n"
            "des capacités affectées au lieu de\n"
            "l'augmenter."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_PRIMORDIAL_SEA] =
    {
        .name = _("Mer Primaire"),
        .description = COMPOUND_STRING("Altère les conditions météo pour\n"
            "neutraliser les attaques de type Feu."),
        .aiRating = 10,
    },

    [ABILITY_DESOLATE_LAND] =
    {
        .name = _("Terre Finale"),
        .description = COMPOUND_STRING("Altère les conditions météo pour\n"
            "neutraliser les attaques de type Eau."),
        .aiRating = 10,
    },

    [ABILITY_DELTA_STREAM] =
    {
        .name = _("Souffle Delta"),
        .description = COMPOUND_STRING("Altère les conditions météo pour annuler\n"
            "les faiblesses du type Vol."),
        .aiRating = 10,
    },

    [ABILITY_STAMINA] =
    {
        .name = _("Endurance"),
        .description = COMPOUND_STRING("Augmente la Défense du Pokémon lorsqu'il\n"
            "subit une attaque."),
        .aiRating = 6,
    },

    [ABILITY_WIMP_OUT] =
    {
        .name = _("Escampette"),
        .description = COMPOUND_STRING("Le Pokémon perd confiance quand ses PV\n"
            "tombent à la moitié et s'enfuit dans sa\n"
            "Poké Ball."),
        .aiRating = 3,
    },

    [ABILITY_EMERGENCY_EXIT] =
    {
        .name = _("Repli Tactique"),
        .description = COMPOUND_STRING("Le Pokémon évite les situations\n"
            "inutilement dangereuses. Quand ses PV\n"
            "tombent à la moitié, il se réfugie dans\n"
            "sa Poké Ball."),
        .aiRating = 3,
    },

    [ABILITY_WATER_COMPACTION] =
    {
        .name = _("Sable Humide"),
        .description = COMPOUND_STRING("Augmente beaucoup la Défense du Pokémon\n"
            "quand il subit une capacité de type Eau."),
        .aiRating = 4,
    },

    [ABILITY_MERCILESS] =
    {
        .name = _("Cruauté"),
        .description = COMPOUND_STRING("Lorsque le Pokémon attaque un adversaire\n"
            "empoisonné, le coup est forcément\n"
            "critique."),
        .aiRating = 4,
    },

    [ABILITY_SHIELDS_DOWN] =
    {
        .name = _("Bouclier-Carcan"),
        .description = COMPOUND_STRING("Lorsque le Pokémon perd la moitié de ses\n"
            "PV, son enveloppe se brise et il adopte\n"
            "une posture offensive."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_STAKEOUT] =
    {
        .name = _("Filature"),
        .description = COMPOUND_STRING("Lorsque le Pokémon attaque une cible qui\n"
            "vient d'entrer sur le terrain en\n"
            "remplacement d'un autre Pokémon, les\n"
            "dégâts infligés sont doublés."),
        .aiRating = 6,
    },

    [ABILITY_WATER_BUBBLE] =
    {
        .name = _("Aquabulle"),
        .description = COMPOUND_STRING("Réduit la puissance des capacités de\n"
            "type Feu subies par le Pokémon. Il est\n"
            "également immunisé contre les brûlures."),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_STEELWORKER] =
    {
        .name = _("Expert Acier"),
        .description = COMPOUND_STRING("Augmente la puissance des attaques de\n"
            "type Acier."),
        .aiRating = 6,
    },

    [ABILITY_BERSERK] =
    {
        .name = _("Folle Furie"),
        .description = COMPOUND_STRING("Augmente l'Attaque Spéciale du Pokémon\n"
            "lorsque ses PV tombent à la moitié à\n"
            "cause d'une attaque de l'adversaire."),
        .aiRating = 5,
    },

    [ABILITY_SLUSH_RUSH] =
    {
        .name = _("Chasse-Neige"),
        .description = COMPOUND_STRING("Augmente la Vitesse du Pokémon quand il\n"
            "neige."),
        .aiRating = 5,
    },

    [ABILITY_LONG_REACH] =
    {
        .name = _("Longue Portée"),
        .description = COMPOUND_STRING("Le Pokémon est capable d'utiliser toutes\n"
            "ses capacités sans entrer en contact\n"
            "direct avec sa cible."),
        .aiRating = 3,
    },

    [ABILITY_LIQUID_VOICE] =
    {
        .name = _("Hydrata-Son"),
        .description = COMPOUND_STRING("Toutes les attaques sonores du Pokémon\n"
            "prennent le type Eau."),
        .aiRating = 5,
    },

    [ABILITY_TRIAGE] =
    {
        .name = _("Prioguérison"),
        .description = COMPOUND_STRING("Rend les capacités de soin prioritaires."),
        .aiRating = 7,
    },

    [ABILITY_GALVANIZE] =
    {
        .name = _("Peau Électrique"),
        .description = COMPOUND_STRING("Les capacités de type Normal deviennent\n"
            "de type Électrik. Leur puissance\n"
            "augmente légèrement."),
        .aiRating = 8,
    },

    [ABILITY_SURGE_SURFER] =
    {
        .name = _("Surf Caudal"),
        .description = COMPOUND_STRING("La Vitesse du Pokémon est doublée sur un\n"
            "champ électrifié."),
        .aiRating = 4,
    },

    [ABILITY_SCHOOLING] =
    {
        .name = _("Banc"),
        .description = COMPOUND_STRING("Le Pokémon se rassemble avec ses\n"
            "congénères quand ses PV sont élevés.\n"
            "Quand il ne lui reste plus beaucoup de\n"
            "PV, le banc se disperse."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_DISGUISE] =
    {
        .name = _("Fantômasque"),
        .description = COMPOUND_STRING("Le déguisement qui recouvre le corps du\n"
            "Pokémon est capable de le protéger d'une\n"
            "attaque."),
        .aiRating = 8,
        .breakable = TRUE,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_BATTLE_BOND] =
    {
        .name = _("Synergie"),
        .description = COMPOUND_STRING("En battant un ennemi, ce Pokémon\n"
            "renforce ses liens avec son Dresseur, ce\n"
            "qui augmente son Attaque, son Attaque\n"
            "Spéciale et sa Vitesse."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_POWER_CONSTRUCT] =
    {
        .name = _("Rassemblement"),
        .description = COMPOUND_STRING("Lorsque le Pokémon perd la moitié de ses\n"
            "PV, ses Cellules se rassemblent pour\n"
            "l'encourager, ce qui lui permet de\n"
            "prendre sa Forme Parfaite."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_CORROSION] =
    {
        .name = _("Corrosion"),
        .description = COMPOUND_STRING("Permet d'empoisonner les Pokémon de type\n"
            "Acier ou Poison."),
        .aiRating = 5,
    },

    [ABILITY_COMATOSE] =
    {
        .name = _("Hypersommeil"),
        .description = COMPOUND_STRING("Le Pokémon rêve en permanence et ne se\n"
            "réveille jamais. Il est capable\n"
            "d'attaquer normalement tout en dormant."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_QUEENLY_MAJESTY] =
    {
        .name = _("Prestance Royale"),
        .description = COMPOUND_STRING("L'adversaire est impressionné par la\n"
            "majesté du Pokémon, ce qui l'empêche de\n"
            "viser ce dernier et ses alliés avec une\n"
            "capacité prioritaire."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_INNARDS_OUT] =
    {
        .name = _("Expuls'Organes"),
        .description = COMPOUND_STRING("Le Pokémon inflige à l'adversaire\n"
            "l'ayant mis K.O. des dégâts égaux au\n"
            "nombre de PV qu'il lui restait avant le\n"
            "coup de grâce."),
        .aiRating = 5,
    },

    [ABILITY_DANCER] =
    {
        .name = _("Danseuse"),
        .description = COMPOUND_STRING("Si n'importe quel Pokémon utilise une\n"
            "capacité dansante, le Pokémon utilise\n"
            "immédiatement cette danse lui aussi."),
        .aiRating = 5,
    },

    [ABILITY_BATTERY] =
    {
        .name = _("Batterie"),
        .description = COMPOUND_STRING("Augmente la puissance des capacités\n"
            "spéciales des alliés."),
        .aiRating = 0,
    },

    [ABILITY_FLUFFY] =
    {
        .name = _("Boule de Poils"),
        .description = COMPOUND_STRING("Divise par deux les dégâts des attaques\n"
            "directes subies par le Pokémon, mais\n"
            "double les dégâts des capacités de type\n"
            "Feu."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_DAZZLING] =
    {
        .name = _("Corps Coloré"),
        .description = COMPOUND_STRING("L'adversaire est abasourdi par le\n"
            "Pokémon, ce qui l'empêche de viser ce\n"
            "dernier et ses alliés avec une capacité\n"
            "prioritaire."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_SOUL_HEART] =
    {
        .name = _("Animacœur"),
        .description = COMPOUND_STRING("Augmente l'Attaque Spéciale du Pokémon\n"
            "lorsqu'un autre Pokémon est mis K.O."),
        .aiRating = 7,
    },

    [ABILITY_TANGLING_HAIR] =
    {
        .name = _("Mèche Rebelle"),
        .description = COMPOUND_STRING("Baisse la Vitesse de l'attaquant lorsque\n"
            "le Pokémon subit une attaque directe."),
        .aiRating = 5,
    },

    [ABILITY_RECEIVER] =
    {
        .name = _("Receveur"),
        .description = COMPOUND_STRING("Le Pokémon reçoit le talent d'un allié\n"
            "mis K.O."),
        .aiRating = 0,
        .cantBeCopied = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_POWER_OF_ALCHEMY] =
    {
        .name = _("Osmose"),
        .description = COMPOUND_STRING("Le Pokémon acquiert le talent d'un allié\n"
            "mis K.O."),
        .aiRating = 0,
        .cantBeCopied = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_BEAST_BOOST] =
    {
        .name = _("Boost Chimère"),
        .description = COMPOUND_STRING("Augmente la stat la plus élevée du\n"
            "Pokémon quand il met K.O. un autre\n"
            "Pokémon."),
        .aiRating = 7,
    },

    [ABILITY_RKS_SYSTEM] =
    {
        .name = _("Système Alpha"),
        .description = COMPOUND_STRING("Change le type du Pokémon en fonction de\n"
            "la ROM équipée."),
        .aiRating = 8,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_ELECTRIC_SURGE] =
    {
        .name = _("Créa-Élec"),
        .description = COMPOUND_STRING("Le Pokémon crée un champ électrifié au\n"
            "moment où il entre au combat."),
        .aiRating = 8,
    },

    [ABILITY_PSYCHIC_SURGE] =
    {
        .name = _("Créa-Psy"),
        .description = COMPOUND_STRING("Le Pokémon crée un champ psychique au\n"
            "moment où il entre au combat."),
        .aiRating = 8,
    },

    [ABILITY_MISTY_SURGE] =
    {
        .name = _("Créa-Brume"),
        .description = COMPOUND_STRING("Le Pokémon crée un champ brumeux au\n"
            "moment où il entre au combat."),
        .aiRating = 8,
    },

    [ABILITY_GRASSY_SURGE] =
    {
        .name = _("Créa-Herbe"),
        .description = COMPOUND_STRING("Le Pokémon crée un champ herbu au moment\n"
            "où il entre au combat."),
        .aiRating = 8,
    },

    [ABILITY_FULL_METAL_BODY] =
    {
        .name = _("Métallo-Garde"),
        .description = COMPOUND_STRING("Empêche les stats du Pokémon de baisser\n"
            "à cause du talent ou d'une capacité de\n"
            "l'adversaire."),
        .aiRating = 4,
    },

    [ABILITY_SHADOW_SHIELD] =
    {
        .name = _("Spectro-Bouclier"),
        .description = COMPOUND_STRING("Le Pokémon subit moins de dégâts quand\n"
            "ses PV sont au maximum."),
        .aiRating = 8,
    },

    [ABILITY_PRISM_ARMOR] =
    {
        .name = _("Prisme-Armure"),
        .description = COMPOUND_STRING("Diminue la puissance des attaques super\n"
            "efficaces subies."),
        .aiRating = 6,
    },

    [ABILITY_NEUROFORCE] =
    {
        .name = _("Cérébro-Force"),
        .description = COMPOUND_STRING("Augmente encore plus la puissance des\n"
            "attaques super efficaces."),
        .aiRating = 6,
    },

    [ABILITY_INTREPID_SWORD] =
    {
        .name = _("Lame Indomptable"),
        .description = COMPOUND_STRING("Augmente l'Attaque du Pokémon la\n"
            "première fois qu'il entre au combat."),
        .aiRating = 3,
    },

    [ABILITY_DAUNTLESS_SHIELD] =
    {
        .name = _("Égide Inflexible"),
        .description = COMPOUND_STRING("Augmente la Défense du Pokémon la\n"
            "première fois qu'il entre au combat."),
        .aiRating = 3,
    },

    [ABILITY_LIBERO] =
    {
        .name = _("Libéro"),
        .description = COMPOUND_STRING("Le Pokémon prend le type de la capacité\n"
            "qu'il utilise. Ce talent ne peut se\n"
            "déclencher qu'une fois par entrée au\n"
            "combat du Pokémon."),
    },

    [ABILITY_BALL_FETCH] =
    {
        .name = _("Ramasse Ball"),
        .description = COMPOUND_STRING("Si le Pokémon ne tient aucun objet, il\n"
            "ramassera la Poké Ball lors du premier\n"
            "lancer raté du combat."),
        .aiRating = 0,
    },

    [ABILITY_COTTON_DOWN] =
    {
        .name = _("Effilochage"),
        .description = COMPOUND_STRING("Quand le Pokémon est touché par une\n"
            "attaque, il dissémine des aigrettes qui\n"
            "diminuent la Vitesse de tout le monde,\n"
            "sauf la sienne."),
        .aiRating = 3,
    },

    [ABILITY_PROPELLER_TAIL] =
    {
        .name = _("Propulseur"),
        .description = COMPOUND_STRING("Permet d'ignorer l'effet des capacités\n"
            "ou des talents qui attirent les\n"
            "capacités."),
        .aiRating = 2,
    },

    [ABILITY_MIRROR_ARMOR] =
    {
        .name = _("Armure Miroir"),
        .description = COMPOUND_STRING("Le Pokémon renvoie les effets réducteurs\n"
            "de stats qu'il reçoit."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_GULP_MISSILE] =
    {
        .name = _("Dégobage"),
        .description = COMPOUND_STRING("Quand le Pokémon utilise Surf ou\n"
            "Plongée, il revient avec une proie.\n"
            "Lorsqu'il subit des dégâts par la suite,\n"
            "il attaque en recrachant sa proie."),
        .aiRating = 3,
        .cantBeSwapped = B_UPDATED_ABILITY_DATA < GEN_9,
        .cantBeCopied = B_UPDATED_ABILITY_DATA < GEN_9,
        .cantBeTraced = B_UPDATED_ABILITY_DATA < GEN_9,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_STALWART] =
    {
        .name = _("Nerfs d'Acier"),
        .description = COMPOUND_STRING("Permet d'ignorer l'effet des capacités\n"
            "ou des talents qui attirent les\n"
            "capacités."),
        .aiRating = 2,
    },

    [ABILITY_STEAM_ENGINE] =
    {
        .name = _("Turbine"),
        .description = COMPOUND_STRING("Lorsque le Pokémon est touché par des\n"
            "capacités de type Eau ou Feu, sa Vitesse\n"
            "augmente énormément."),
        .aiRating = 3,
    },

    [ABILITY_PUNK_ROCK] =
    {
        .name = _("Punk Rock"),
        .description = COMPOUND_STRING("Augmente la puissance des capacités\n"
            "basées sur le son. Le Pokémon ne subit\n"
            "que la moitié des dégâts quand il est\n"
            "touché par ce genre de capacités."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_SAND_SPIT] =
    {
        .name = _("Expul'Sable"),
        .description = COMPOUND_STRING("Le Pokémon déclenche une tempête de\n"
            "sable quand il subit une attaque."),
        .aiRating = 5,
    },

    [ABILITY_ICE_SCALES] =
    {
        .name = _("Écailles Glacées"),
        .description = COMPOUND_STRING("Le Pokémon est protégé par des écailles\n"
            "de glace. Les dégâts qu'il subit par des\n"
            "capacités spéciales sont divisés par\n"
            "deux."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_RIPEN] =
    {
        .name = _("Mûrissement"),
        .description = COMPOUND_STRING("Le Pokémon fait mûrir la Baie qu'il\n"
            "tient et double ainsi son effet."),
        .aiRating = 4,
    },

    [ABILITY_ICE_FACE] =
    {
        .name = _("Tête de Gel"),
        .description = COMPOUND_STRING("Le glaçon sur sa tête encaisse les\n"
            "attaques physiques à la place du\n"
            "Pokémon, mais sa destruction modifie son\n"
            "apparence. Le glaçon se reforme quand il\n"
            "neige."),
        .aiRating = 4,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .breakable = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_POWER_SPOT] =
    {
        .name = _("Cercle d'Énergie"),
        .description = COMPOUND_STRING("Augmente la puissance des capacités des\n"
            "Pokémon qui se trouvent à proximité."),
        .aiRating = 2,
    },

    [ABILITY_MIMICRY] =
    {
        .name = _("Mimétisme"),
        .description = COMPOUND_STRING("Le Pokémon adopte le même type que le\n"
            "terrain lorsqu'un champ est actif."),
        .aiRating = 2,
    },

    [ABILITY_SCREEN_CLEANER] =
    {
        .name = _("Brise-Barrière"),
        .description = COMPOUND_STRING("Quand le Pokémon entre au combat, les\n"
            "effets de Mur Lumière, Protection et\n"
            "Voile Aurore disparaissent pour les\n"
            "alliés comme pour les adversaires."),
        .aiRating = 3,
    },

    [ABILITY_STEELY_SPIRIT] =
    {
        .name = _("Boost Acier"),
        .description = COMPOUND_STRING("Augmente la puissance des attaques de\n"
            "type Acier du Pokémon et de ses alliés."),
        .aiRating = 2,
    },

    [ABILITY_PERISH_BODY] =
    {
        .name = _("Corps Condamné"),
        .description = COMPOUND_STRING("Lorsque le Pokémon est directement\n"
            "touché par une capacité, l'assaillant et\n"
            "lui tomberont K.O. dans trois tours, à\n"
            "moins qu'ils ne soient remplacés entre\n"
            "temps."),
        .aiRating = -1,
    },

    [ABILITY_WANDERING_SPIRIT] =
    {
        .name = _("Âme Vagabonde"),
        .description = COMPOUND_STRING("Lorsque le Pokémon est directement\n"
            "touché par une capacité, il échange son\n"
            "talent avec celui de l'assaillant."),
        .aiRating = 2,
    },

    [ABILITY_GORILLA_TACTICS] =
    {
        .name = _("Entêtement"),
        .description = COMPOUND_STRING("Augmente l'Attaque, mais empêche\n"
            "d'utiliser toute autre capacité que\n"
            "celle utilisée en premier par le\n"
            "Pokémon."),
        .aiRating = 4,
    },

    [ABILITY_NEUTRALIZING_GAS] =
    {
        .name = _("Gaz Inhibiteur"),
        .description = COMPOUND_STRING("Si un Pokémon avec Gaz Inhibiteur est\n"
            "sur le terrain, les effets des talents\n"
            "de tous les autres Pokémon ne s'activent\n"
            "pas ou sont neutralisés."),
        .aiRating = 5,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_PASTEL_VEIL] =
    {
        .name = _("Voile Pastel"),
        .description = COMPOUND_STRING("Protège le Pokémon et ses alliés contre\n"
            "toutes les altérations de statut liées à\n"
            "l'empoisonnement."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_HUNGER_SWITCH] =
    {
        .name = _("Déclic Fringale"),
        .description = COMPOUND_STRING("À la fin de chaque tour, le Pokémon\n"
            "alterne entre ses formes Mode Rassasié\n"
            "et Mode Affamé."),
        .aiRating = 2,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_QUICK_DRAW] =
    {
        .name = _("Tir Vif"),
        .description = COMPOUND_STRING("Permet parfois au Pokémon d'agir en\n"
            "premier."),
        .aiRating = 4,
    },

    [ABILITY_UNSEEN_FIST] =
    {
        .name = _("Poing Invisible"),
        .description = COMPOUND_STRING("Si le Pokémon utilise une attaque\n"
            "directe, celle-ci pourra toucher la\n"
            "cible même si elle se protège."),
        .aiRating = 6,
    },

    [ABILITY_CURIOUS_MEDICINE] =
    {
        .name = _("Breuvage Suspect"),
        .description = COMPOUND_STRING("Quand il entre au combat, le Pokémon\n"
            "répand une substance qui annule les\n"
            "changements de stats de ses alliés."),
        .aiRating = 3,
    },

    [ABILITY_TRANSISTOR] =
    {
        .name = _("Transistor"),
        .description = COMPOUND_STRING("Augmente la puissance des capacités de\n"
            "type Électrik."),
        .aiRating = 6,
    },

    [ABILITY_DRAGONS_MAW] =
    {
        .name = _("Dent de Dragon"),
        .description = COMPOUND_STRING("Augmente la puissance des capacités de\n"
            "type Dragon."),
        .aiRating = 6,
    },

    [ABILITY_CHILLING_NEIGH] =
    {
        .name = _("Blanche Ruade"),
        .description = COMPOUND_STRING("Quand le Pokémon met un ennemi K.O., il\n"
            "émet un hennissement glaçant, ce qui\n"
            "augmente son Attaque."),
        .aiRating = 7,
    },

    [ABILITY_GRIM_NEIGH] =
    {
        .name = _("Sombre Ruade"),
        .description = COMPOUND_STRING("Quand le Pokémon met un ennemi K.O., il\n"
            "émet un hennissement terrifiant qui\n"
            "augmente son Attaque Spéciale."),
        .aiRating = 7,
    },

    [ABILITY_AS_ONE_ICE_RIDER] =
    {
        .name = _("Osmose Équine"),
        .description = COMPOUND_STRING("Les talents Tension de Sylveroy et\n"
            "Blanche Ruade de Blizzeval sont cumulés."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_AS_ONE_SHADOW_RIDER] =
    {
        .name = _("Osmose Équine"),
        .description = COMPOUND_STRING("Les talents Tension de Sylveroy et\n"
            "Sombre Ruade de Spectreval sont cumulés."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_LINGERING_AROMA] =
    {
        .name = _("Odeur Tenace"),
        .description = COMPOUND_STRING("Lorsque le Pokémon subit une attaque\n"
            "directe, le talent de l'attaquant est\n"
            "remplacé par Odeur Tenace."),
        .aiRating = 5,
    },

    [ABILITY_SEED_SOWER] =
    {
        .name = _("Semencier"),
        .description = COMPOUND_STRING("Le Pokémon crée un champ herbu quand il\n"
            "subit une attaque."),
        .aiRating = 5,
    },

    [ABILITY_THERMAL_EXCHANGE] =
    {
        .name = _("Thermodynamique"),
        .description = COMPOUND_STRING("Lorsque le Pokémon est touché par une\n"
            "capacité de type Feu, son Attaque\n"
            "augmente. Il ne peut pas être brûlé."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_ANGER_SHELL] =
    {
        .name = _("Courroupace"),
        .description = COMPOUND_STRING("Le Pokémon enrage s'il a moins de la\n"
            "moitié de ses PV après avoir subi une\n"
            "attaque. Sa Déf. et sa Déf. Spé.\n"
            "baissent, et son Atq., son Atq. Spé. et\n"
            "sa Vit. augmentent."),
        .aiRating = 3,
    },

    [ABILITY_PURIFYING_SALT] =
    {
        .name = _("Sel Purificateur"),
        .description = COMPOUND_STRING("Le sel pur immunise le Pokémon contre\n"
            "les altérations de statut, et diminue de\n"
            "moitié les dégâts des capacités de type\n"
            "Spectre."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_WELL_BAKED_BODY] =
    {
        .name = _("Bien Cuit"),
        .description = COMPOUND_STRING("Si le Pokémon est touché par une\n"
            "capacité de type Feu, il ne subit aucun\n"
            "dégât et sa Défense augmente beaucoup."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_WIND_RIDER] =
    {
        .name = _("Aéroporté"),
        .description = COMPOUND_STRING("L'Attaque du Pokémon augmente si un vent\n"
            "arrière souffle ou s'il est touché par\n"
            "une capacité faisant appel au vent. Dans\n"
            "ce dernier cas, il ne subit aucun dégât."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_GUARD_DOG] =
    {
        .name = _("Chien de Garde"),
        .description = COMPOUND_STRING("L'Attaque du Pokémon augmente s'il subit\n"
            "l'effet du talent Intimidation. Les\n"
            "capacités ou objets qui font changer de\n"
            "Pokémon n'ont aucun effet sur lui."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_ROCKY_PAYLOAD] =
    {
        .name = _("Porte-Roche"),
        .description = COMPOUND_STRING("Augmente la puissance des capacités de\n"
            "type Roche."),
        .aiRating = 6,
    },

    [ABILITY_WIND_POWER] =
    {
        .name = _("Turbine Éolienne"),
        .description = COMPOUND_STRING("Si le Pokémon est touché par une\n"
            "capacité faisant appel au vent, il se\n"
            "charge en électricité."),
        .aiRating = 4,
    },

    [ABILITY_ZERO_TO_HERO] =
    {
        .name = _("Supermutation"),
        .description = COMPOUND_STRING("Le Pokémon prend sa Forme Super en\n"
            "quittant le combat."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_COMMANDER] =
    {
        .name = _("Commandant"),
        .description = COMPOUND_STRING("Si un Oyacata allié est sur le terrain\n"
            "quand ce Pokémon rejoint le combat, ce\n"
            "dernier entre dans sa bouche et devient\n"
            "son commandant."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_ELECTROMORPHOSIS] =
    {
        .name = _("Grecharge"),
        .description = COMPOUND_STRING("Si le Pokémon subit des dégâts, il se\n"
            "charge en électricité."),
        .aiRating = 5,
    },

    [ABILITY_PROTOSYNTHESIS] =
    {
        .name = _("Paléosynthèse"),
        .description = COMPOUND_STRING("Quand le soleil brille ou que le Pokémon\n"
            "tient une capsule d'Énergie Booster, sa\n"
            "stat la plus élevée augmente."),
        .aiRating = 7,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_QUARK_DRIVE] =
    {
        .name = _("Charge Quantique"),
        .description = COMPOUND_STRING("Quand un champ électrifié est actif ou\n"
            "que le Pokémon tient une capsule\n"
            "d'Énergie Booster, sa stat la plus\n"
            "élevée augmente."),
        .aiRating = 7,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_GOOD_AS_GOLD] =
    {
        .name = _("Corps en Or"),
        .description = COMPOUND_STRING("Le corps en or pur et robuste du Pokémon\n"
            "l'immunise contre les capacités de\n"
            "statut des autres Pokémon."),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_VESSEL_OF_RUIN] =
    {
        .name = _("Urne du Fléau"),
        .description = COMPOUND_STRING("Le pouvoir de l'urne qui appelle le\n"
            "fléau affaiblit l'Attaque Spéciale de\n"
            "tous les autres Pokémon."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_SWORD_OF_RUIN] =
    {
        .name = _("Épée du Fléau"),
        .description = COMPOUND_STRING("Le pouvoir de l'épée qui appelle le\n"
            "fléau affaiblit la Défense de tous les\n"
            "autres Pokémon."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_TABLETS_OF_RUIN] =
    {
        .name = _("Bois du Fléau"),
        .description = COMPOUND_STRING("Le pouvoir du bois qui appelle le fléau\n"
            "affaiblit l'Attaque de tous les autres\n"
            "Pokémon."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_BEADS_OF_RUIN] =
    {
        .name = _("Perles du Fléau"),
        .description = COMPOUND_STRING("Le pouvoir des perles qui appellent le\n"
            "fléau affaiblit la Défense Spéciale de\n"
            "tous les autres Pokémon."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_ORICHALCUM_PULSE] =
    {
        .name = _("Pouls Orichalque"),
        .description = COMPOUND_STRING("Le Pokémon invoque le soleil quand il\n"
            "rejoint le combat. Quand le soleil\n"
            "brille, une pulsation primitive augmente\n"
            "son Attaque."),
        .aiRating = 8,
        .cantBeSwapped = TRUE,
        .cantBeCopied = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_HADRON_ENGINE] =
    {
        .name = _("Moteur à Hadrons"),
        .description = COMPOUND_STRING("Le Pokémon crée un champ électrifié\n"
            "quand il rejoint le combat. Une machine\n"
            "du futur fait monter son Attaque\n"
            "Spéciale si un champ électrifié est\n"
            "actif."),
        .aiRating = 8,
        .cantBeSwapped = TRUE,
        .cantBeCopied = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_OPPORTUNIST] =
    {
        .name = _("Opportuniste"),
        .description = COMPOUND_STRING("Quand les stats de l'ennemi augmentent,\n"
            "le Pokémon en profite pour augmenter ses\n"
            "stats de la même manière."),
        .aiRating = 5,
    },

    [ABILITY_CUD_CHEW] =
    {
        .name = _("Ruminant"),
        .description = COMPOUND_STRING("Quand le Pokémon mange une Baie, il la\n"
            "régurgite à la fin du tour suivant et la\n"
            "mange une nouvelle fois."),
        .aiRating = 4,
    },

    [ABILITY_SHARPNESS] =
    {
        .name = _("Incisif"),
        .description = COMPOUND_STRING("Augmente la puissance des capacités\n"
            "tranchantes."),
        .aiRating = 7,
    },

    [ABILITY_SUPREME_OVERLORD] =
    {
        .name = _("Général Suprême"),
        .description = COMPOUND_STRING("Quand le Pokémon entre sur le terrain,\n"
            "son Attaque et son Attaque Spéciale\n"
            "augmentent légèrement pour chaque allié\n"
            "mis K.O. auparavant."),
        .aiRating = 6,
    },

    [ABILITY_COSTAR] =
    {
        .name = _("Collab"),
        .description = COMPOUND_STRING("Quand le Pokémon entre sur le terrain,\n"
            "il copie les changements de stats de son\n"
            "allié."),
        .aiRating = 5,
    },

    [ABILITY_TOXIC_DEBRIS] =
    {
        .name = _("Dépôt Toxique"),
        .description = COMPOUND_STRING("Quand le Pokémon est touché par une\n"
            "capacité physique, il répand des pics\n"
            "toxiques dans le camp adverse."),
        .aiRating = 4,
    },

    [ABILITY_ARMOR_TAIL] =
    {
        .name = _("Armure Caudale"),
        .description = COMPOUND_STRING("Une étrange queue recouvre la tête du\n"
            "Pokémon, ce qui empêche ce dernier et\n"
            "ses alliés d'être visés par une capacité\n"
            "prioritaire."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_EARTH_EATER] =
    {
        .name = _("Absorbe-Terre"),
        .description = COMPOUND_STRING("Si le Pokémon est touché par une\n"
            "capacité de type Sol, il regagne des PV\n"
            "au lieu de subir des dégâts."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_MYCELIUM_MIGHT] =
    {
        .name = _("Force Fongique"),
        .description = COMPOUND_STRING("Le Pokémon agit toujours plus lentement\n"
            "quand il utilise une capacité de statut,\n"
            "mais il ignore les talents adverses."),
        .aiRating = 2,
    },

    [ABILITY_HOSPITALITY] =
    {
        .name = _("Aux Petits Soins"),
        .description = COMPOUND_STRING("Quand il rejoint le combat, ce Pokémon\n"
            "est aux petits soins avec son allié et\n"
            "restaure quelques PV."),
        .aiRating = 5,
    },

    [ABILITY_MINDS_EYE] =
    {
        .name = _("Œil Révélateur"),
        .description = COMPOUND_STRING("Le Pokémon ignore les changements\n"
            "d'Esquive des cibles et peut toucher les\n"
            "Pokémon Spectre avec des capacités\n"
            "Normal ou Combat. Sa Précision ne peut\n"
            "pas baisser."),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_EMBODY_ASPECT_TEAL_MASK] =
    {
        .name = _("Force Mémorielle"),
        .description = COMPOUND_STRING("Le Pokémon fait briller le Masque en\n"
            "puisant dans ses souvenirs, ce qui\n"
            "augmente ses stats."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_EMBODY_ASPECT_HEARTHFLAME_MASK] =
    {
        .name = _("Force Mémorielle"),
        .description = COMPOUND_STRING("Le Pokémon fait briller le Masque en\n"
            "puisant dans ses souvenirs, ce qui\n"
            "augmente ses stats."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_EMBODY_ASPECT_WELLSPRING_MASK] =
    {
        .name = _("Force Mémorielle"),
        .description = COMPOUND_STRING("Le Pokémon fait briller le Masque en\n"
            "puisant dans ses souvenirs, ce qui\n"
            "augmente ses stats."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_EMBODY_ASPECT_CORNERSTONE_MASK] =
    {
        .name = _("Force Mémorielle"),
        .description = COMPOUND_STRING("Le Pokémon fait briller le Masque en\n"
            "puisant dans ses souvenirs, ce qui\n"
            "augmente ses stats."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_TOXIC_CHAIN] =
    {
        .name = _("Chaîne Toxique"),
        .description = COMPOUND_STRING("Grâce aux pouvoirs de sa chaîne\n"
            "imprégnée de toxines, le Pokémon peut\n"
            "empoisonner gravement sa cible en la\n"
            "touchant avec une capacité."),
        .aiRating = 8,
    },

    [ABILITY_SUPERSWEET_SYRUP] =
    {
        .name = _("Nectar Mielleux"),
        .description = COMPOUND_STRING("La première fois que le Pokémon entre au\n"
            "combat, une odeur de nectar sucré se\n"
            "répand sur le terrain, ce qui baisse\n"
            "l'Esquive de l'adversaire."),
        .aiRating = 5,
    },

    [ABILITY_TERA_SHIFT] =
    {
        .name = _("Téramorphose"),
        .description = COMPOUND_STRING("Quand le Pokémon rejoint le combat, il\n"
            "absorbe l'énergie alentour et prend sa\n"
            "Forme Téracristal."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_TERA_SHELL] =
    {
        .name = _("Téra-Carapace"),
        .description = COMPOUND_STRING("Grâce à sa carapace qui renferme\n"
            "l'énergie de tous les types, les\n"
            "capacités subies par ce Pokémon quand\n"
            "ses PV sont au maximum ne sont pas très\n"
            "efficaces."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .breakable = TRUE,
    },

    [ABILITY_TERAFORM_ZERO] =
    {
        .name = _("Téraformation 0"),
        .description = COMPOUND_STRING("Lorsque Terapagos prend sa Forme\n"
            "Stellaire, il utilise son pouvoir enfoui\n"
            "pour annuler les effets de la météo et\n"
            "des champs actifs."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_POISON_PUPPETEER] =
    {
        .name = _("Emprise Toxique"),
        .description = COMPOUND_STRING("Lorsque Pêchaminus empoisonne un Pokémon\n"
            "grâce à l'une de ses capacités, ce\n"
            "dernier devient également confus."),
        .aiRating = 8,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
    },
};
