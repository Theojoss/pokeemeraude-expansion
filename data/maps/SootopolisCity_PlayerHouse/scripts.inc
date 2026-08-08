SootopolisCity_PlayerHouse_MapScripts::
	.byte 0

House1_EventScript_TV::
	switch VAR_HOUSE_1_TV_INDEX
	case 0, House1_EventScript_TVText1
	case 1, House1_EventScript_TVText2
	case 2, House1_EventScript_TVText3
	case 3, House1_EventScript_TVText4
	case 4, House1_EventScript_TVText5
	case 5, House1_EventScript_TVText6
	end

House1_EventScript_TVText1::
	msgbox SootopolisCity_PlayerHouse_Text_TV1, MSGBOX_SIGN
	goto House1_EventScript_TVAdvance

House1_EventScript_TVText2::
	msgbox SootopolisCity_PlayerHouse_Text_TV2, MSGBOX_SIGN
	goto House1_EventScript_TVAdvance

House1_EventScript_TVText3::
	msgbox SootopolisCity_PlayerHouse_Text_TV3, MSGBOX_SIGN
	goto House1_EventScript_TVAdvance

House1_EventScript_TVText4::
	msgbox SootopolisCity_PlayerHouse_Text_TV4, MSGBOX_SIGN
	goto House1_EventScript_TVAdvance

House1_EventScript_TVText5::
	msgbox SootopolisCity_PlayerHouse_Text_TV5, MSGBOX_SIGN
	goto House1_EventScript_TVAdvance

House1_EventScript_TVText6::
	msgbox SootopolisCity_PlayerHouse_Text_TV6, MSGBOX_SIGN
	goto House1_EventScript_TVAdvance

House1_EventScript_TVAdvance::
	addvar VAR_HOUSE_1_TV_INDEX, 1
	goto_if_ge VAR_HOUSE_1_TV_INDEX, 6, House1_EventScript_TVResetIndex
	end

House1_EventScript_TVResetIndex::
	setvar VAR_HOUSE_1_TV_INDEX, 0
	end

House1_EventScript_Wardrobe::
	special OpenHouseOutfitMenu
	end

SootopolisCity_PlayerHouse_Text_TV1:
	.string "Un feuilleton raconte le quotidien\n"
	.string "agité des habitants d'un quartier\p"
	.string "ensoleillé de Kalos.$"

SootopolisCity_PlayerHouse_Text_TV2:
	.string "Des aventuriers s'affrontent sur\n"
	.string "une île déserte pour un sac de riz\p"
	.string "et l'immunité.$"

SootopolisCity_PlayerHouse_Text_TV3:
	.string "Des candidats cherchent des clés\n"
	.string "dans une forteresse en mer, entre\p"
	.string "énigmes et fauves redoutables.$"

SootopolisCity_PlayerHouse_Text_TV4:
	.string "Un candidat tente de remporter une\n"
	.string "fortune en répondant à des questions,\p"
	.string "aidé par le public.$"

SootopolisCity_PlayerHouse_Text_TV5:
	.string "Deux animateurs expliquent des\n"
	.string "phénomènes scientifiques à bord\p"
	.string "de leur fourgon jaune.$"

SootopolisCity_PlayerHouse_Text_TV6:
	.string "Quatre candidats s'affrontent au\n"
	.string "buzzer pour répondre à des questions\p"
	.string "de culture générale.$"
