PacifidlogTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PacifidlogTown_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, PacifidlogTown_OnResume
	.byte 0

PacifidlogTown_OnTransition:
	setflag FLAG_VISITED_PACIFIDLOG_TOWN
	end

PacifidlogTown_OnResume:
	setstepcallback STEP_CB_PACIFIDLOG_BRIDGE
	end

PacifidlogTown_EventScript_NinjaBoy::
	msgbox PacifidlogTown_Text_NeatHousesOnWater, MSGBOX_NPC
	end

PacifidlogTown_EventScript_Girl::
	msgbox PacifidlogTown_Text_FastRunningCurrent, MSGBOX_NPC
	end

PacifidlogTown_EventScript_Fisherman::
	msgbox PacifidlogTown_Text_SkyPillarTooScary, MSGBOX_NPC
	end

PacifidlogTown_EventScript_TownSign::
	msgbox PacifidlogTown_Text_TownSign, MSGBOX_SIGN
	end

PacifidlogTown_EventScript_Sailor::
	goto_if_set FLAG_SYS_GAME_CLEAR, PacifidlogTown_EventScript_SailorPostLeague
	msgbox PacifidlogTown_Text_SailorRumorIsland, MSGBOX_NPC
	end

PacifidlogTown_EventScript_SailorPostLeague::
	lock
	faceplayer
	msgbox PacifidlogTown_Text_SailorFoundIsland, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, PacifidlogTown_EventScript_SailorDecline
	msgbox PacifidlogTown_Text_SailorSetSail, MSGBOX_DEFAULT
	playse SE_M_SURF
	warpsilent MAP_CREATOR_ISLAND, 15, 24
	waitstate
	release
	end

PacifidlogTown_EventScript_SailorDecline::
	closemessage
	release
	end

PacifidlogTown_Text_FastRunningCurrent:
	.string "Le courant de la mer entre PACIFIVILLE\n"
	.string "et POIVRESSEL est très fort.\p"
	.string "Si tu décidais de faire du SURF,\n"
	.string "tu pourrais te faire emporter et\l"
	.string "te retrouver très loin d'ici.$"

PacifidlogTown_Text_NeatHousesOnWater:
	.string "Regarde comme c'est chouette!\n"
	.string "Ces maisons sont construites sur l'eau.\p"
	.string "Je suis né ici!$"

PacifidlogTown_Text_SailorRumorIsland:
	.string "Hé! T'as déjà entendu\n"
	.string "cette rumeur qui circule entre\l"
	.string "marins?\p"
	.string "On raconte qu'il existerait une île,\n"
	.string "quelque part au large, loin de\l"
	.string "toutes les cartes…\p"
	.string "Une île qui abriterait le créateur\n"
	.string "de ce monde en personne.\p"
	.string "Mais attention: seul le CHAMPION\n"
	.string "de la Ligue POKéMON serait autorisé\l"
	.string "à y poser le pied.\p"
	.string "Qui sait si cette histoire est\n"
	.string "vraie… Mais moi, en tant que marin,\l"
	.string "j'aime y croire.$"

PacifidlogTown_Text_SailorFoundIsland:
	.string "Eh bien, eh bien… Regarde qui\n"
	.string "voilà!\p"
	.string "Le nouveau CHAMPION de la Ligue\n"
	.string "POKéMON, en personne!\p"
	.string "Tu te souviens de cette rumeur dont\n"
	.string "je te parlais? Figure-toi que j'ai\l"
	.string "fini par localiser cette fameuse\l"
	.string "île!\p"
	.string "Maintenant que tu portes ce titre,\n"
	.string "tu es le seul autorisé à t'y rendre.\p"
	.string "Alors, qu'en dis-tu? Je peux t'y\n"
	.string "emmener quand tu le souhaites.$"

PacifidlogTown_Text_SailorSetSail:
	.string "En route, alors! Accroche-toi\n"
	.string "bien.$"

PacifidlogTown_Text_SkyPillarTooScary:
	.string "LE PILIER CELESTE?\p"
	.string "Oh, tu veux sûrement parler de cette\n"
	.string "très très grande tour un peu plus loin.\p"
	.string "Si tu veux mon avis, il faut être fou\n"
	.string "pour vouloir monter si haut!\p"
	.string "Vivre au niveau de la mer, ici à\n"
	.string "PACIFIVILLE, voilà ce qui me va!$"

PacifidlogTown_Text_TownSign:
	.string "PACIFIVILLE\p"
	.string "“Là où le soleil du matin se reflète\n"
	.string "sur les eaux.”$"

