LavaridgeTown_PlayerHouse_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, LavaridgeTown_PlayerHouse_OnLoad
	map_script MAP_SCRIPT_ON_TRANSITION, LavaridgeTown_PlayerHouse_OnTransition
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LavaridgeTown_PlayerHouse_OnWarp
	.byte 0

LavaridgeTown_PlayerHouse_OnLoad:
	setflag FLAG_HOUSE_2_ENTERED_ONCE
	end

LavaridgeTown_PlayerHouse_OnTransition:
	setflag FLAG_HOUSE_2_ENTERED_ONCE
	setflag FLAG_HOUSE_2_PET_HIDDEN
	setvar VAR_HOUSE_2_INITIALIZED, 0
	end

LavaridgeTown_PlayerHouse_OnWarp:
	map_script_2 VAR_HOUSE_2_INITIALIZED, 0, LavaridgeTown_PlayerHouse_EventScript_InitPet
	.2byte 0

LavaridgeTown_PlayerHouse_EventScript_InitPet::
	special InitHouse2PetSprite
	setvar VAR_HOUSE_2_INITIALIZED, 1
	end

House2_EventScript_Wardrobe::
	special OpenHouseOutfitMenu
	end

House2_EventScript_TV::
	switch VAR_HOUSE_2_TV_INDEX
	case 0, House2_EventScript_TVText1
	case 1, House2_EventScript_TVText2
	case 2, House2_EventScript_TVText3
	case 3, House2_EventScript_TVText4
	case 4, House2_EventScript_TVText5
	case 5, House2_EventScript_TVText6
	end

House2_EventScript_TVText1::
	msgbox LavaridgeTown_PlayerHouse_Text_TV1, MSGBOX_SIGN
	goto House2_EventScript_TVAdvance

House2_EventScript_TVText2::
	msgbox LavaridgeTown_PlayerHouse_Text_TV2, MSGBOX_SIGN
	goto House2_EventScript_TVAdvance

House2_EventScript_TVText3::
	msgbox LavaridgeTown_PlayerHouse_Text_TV3, MSGBOX_SIGN
	goto House2_EventScript_TVAdvance

House2_EventScript_TVText4::
	msgbox LavaridgeTown_PlayerHouse_Text_TV4, MSGBOX_SIGN
	goto House2_EventScript_TVAdvance

House2_EventScript_TVText5::
	msgbox LavaridgeTown_PlayerHouse_Text_TV5, MSGBOX_SIGN
	goto House2_EventScript_TVAdvance

House2_EventScript_TVText6::
	msgbox LavaridgeTown_PlayerHouse_Text_TV6, MSGBOX_SIGN
	goto House2_EventScript_TVAdvance

House2_EventScript_TVAdvance::
	addvar VAR_HOUSE_2_TV_INDEX, 1
	goto_if_ge VAR_HOUSE_2_TV_INDEX, 6, House2_EventScript_TVResetIndex
	end

House2_EventScript_TVResetIndex::
	setvar VAR_HOUSE_2_TV_INDEX, 0
	end

House2_EventScript_Terminal::
	lockall
	goto_if_set FLAG_HOUSE_2_HAS_PET, House2_EventScript_AskRemoveResidentMon
	goto House2_EventScript_AskSetResidentMon
	end

House2_EventScript_AskSetResidentMon::
	msgbox LavaridgeTown_PlayerHouse_Text_ChooseResidentMon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, House2_EventScript_TerminalDone
	special ChooseMonForHouse2Pet
	goto_if_ge VAR_0x8004, PARTY_SIZE, House2_EventScript_TerminalDone
	removeobject LOCALID_HOUSE2_PET
	special SetHouse2ResidentMon
	msgbox LavaridgeTown_PlayerHouse_Text_ResidentMonSet, MSGBOX_DEFAULT
	goto House2_EventScript_TerminalDone

House2_EventScript_AskRemoveResidentMon::
	msgbox LavaridgeTown_PlayerHouse_Text_RemoveResidentMon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, House2_EventScript_TerminalDone
	removeobject LOCALID_HOUSE2_PET
	special RemoveHouse2ResidentMon
	goto House2_EventScript_TerminalDone

House2_EventScript_TerminalDone::
	releaseall
	end

House2_EventScript_PetGift::
	lock
	faceplayer
	dotimebasedevents
	goto_if_set FLAG_DAILY_HOUSE_2_RECEIVED_GIFT, House2_EventScript_PetGiftAlready
	msgbox LavaridgeTown_PlayerHouse_Text_PetGiftFound, MSGBOX_DEFAULT
	giverandomberry BERRY_ID_CHERI, BERRY_ID_SITRUS
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_DAILY_HOUSE_2_RECEIVED_GIFT
	msgbox LavaridgeTown_PlayerHouse_Text_PetGiftGiven, MSGBOX_DEFAULT
	release
	end

House2_EventScript_PetGiftAlready::
	msgbox LavaridgeTown_PlayerHouse_Text_PetGiftAlready, MSGBOX_DEFAULT
	release
	end

LavaridgeTown_PlayerHouse_Text_TV1:
	.string "Un feuilleton raconte le quotidien\n"
	.string "agité des habitants d'un quartier\p"
	.string "ensoleillé de Kalos.$"

LavaridgeTown_PlayerHouse_Text_TV2:
	.string "Des aventuriers s'affrontent sur\n"
	.string "une île déserte pour un sac de riz\p"
	.string "et l'immunité.$"

LavaridgeTown_PlayerHouse_Text_TV3:
	.string "Des candidats cherchent des clés\n"
	.string "dans une forteresse en mer, entre\p"
	.string "énigmes et fauves redoutables.$"

LavaridgeTown_PlayerHouse_Text_TV4:
	.string "Un candidat tente de remporter une\n"
	.string "fortune en répondant à des questions,\p"
	.string "aidé par le public.$"

LavaridgeTown_PlayerHouse_Text_TV5:
	.string "Deux animateurs expliquent des\n"
	.string "phénomènes scientifiques à bord\p"
	.string "de leur fourgon jaune.$"

LavaridgeTown_PlayerHouse_Text_TV6:
	.string "Quatre candidats s'affrontent au\n"
	.string "buzzer pour répondre à des questions\p"
	.string "de culture générale.$"

LavaridgeTown_PlayerHouse_Text_PetGiftFound:
	.string "Votre POKéMON semble avoir trouvé\n"
	.string "quelque chose pour vous!$"

LavaridgeTown_PlayerHouse_Text_PetGiftGiven:
	.string "{PLAYER} a reçu une BAIE!$"

LavaridgeTown_PlayerHouse_Text_PetGiftAlready:
	.string "Votre POKéMON vous a déjà offert\n"
	.string "quelque chose aujourd'hui.$"

LavaridgeTown_PlayerHouse_Text_ChooseResidentMon:
	.string "Voulez-vous choisir un POKéMON pour\n"
	.string "qu'il vive dans cette maison?$"

LavaridgeTown_PlayerHouse_Text_ResidentMonSet:
	.string "Votre POKéMON s'installe dans la\n"
	.string "maison!$"

LavaridgeTown_PlayerHouse_Text_RemoveResidentMon:
	.string "Voulez-vous que ce POKéMON quitte\n"
	.string "la maison?$"
