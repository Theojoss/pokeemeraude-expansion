SootopolisCity_PlayerHouse_2F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SootopolisCity_PlayerHouse_2F_OnTransition
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SootopolisCity_PlayerHouse_2F_OnWarp
	.byte 0

SootopolisCity_PlayerHouse_2F_OnTransition:
	setflag FLAG_HOUSE_1_PET_HIDDEN
	setvar VAR_HOUSE_1_INITIALIZED, 0
	end

SootopolisCity_PlayerHouse_2F_OnWarp:
	map_script_2 VAR_HOUSE_1_INITIALIZED, 0, SootopolisCity_PlayerHouse_2F_EventScript_InitPet
	.2byte 0

SootopolisCity_PlayerHouse_2F_EventScript_InitPet::
	special InitHouse1PetSprite
	setvar VAR_HOUSE_1_INITIALIZED, 1
	end

House1_EventScript_Terminal::
	lockall
	goto_if_set FLAG_HOUSE_1_HAS_PET, House1_EventScript_AskRemoveResidentMon
	goto House1_EventScript_AskSetResidentMon
	end

House1_EventScript_AskSetResidentMon::
	msgbox SootopolisCity_PlayerHouse_2F_Text_ChooseResidentMon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, House1_EventScript_TerminalDone
	special ChooseMonForHouse1Pet
	goto_if_ge VAR_0x8004, PARTY_SIZE, House1_EventScript_TerminalDone
	removeobject LOCALID_HOUSE1_2F_PET
	special SetHouse1ResidentMon
	msgbox SootopolisCity_PlayerHouse_2F_Text_ResidentMonSet, MSGBOX_DEFAULT
	goto House1_EventScript_TerminalDone

House1_EventScript_AskRemoveResidentMon::
	msgbox SootopolisCity_PlayerHouse_2F_Text_RemoveResidentMon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, House1_EventScript_TerminalDone
	removeobject LOCALID_HOUSE1_2F_PET
	special RemoveHouse1ResidentMon
	goto House1_EventScript_TerminalDone

House1_EventScript_TerminalDone::
	releaseall
	end

House1_EventScript_Bed::
	lockall
	msgbox SootopolisCity_PlayerHouse_2F_Text_Bed, MSGBOX_DEFAULT
	special HealPlayerParty
	releaseall
	end

House1_EventScript_Painting::
	msgbox SootopolisCity_PlayerHouse_2F_Text_Painting, MSGBOX_SIGN
	end

House1_EventScript_PetGift::
	lock
	faceplayer
	dotimebasedevents
	goto_if_set FLAG_DAILY_HOUSE_1_RECEIVED_GIFT, House1_EventScript_PetGiftAlready
	msgbox SootopolisCity_PlayerHouse_2F_Text_PetGiftFound, MSGBOX_DEFAULT
	giverandomberry BERRY_ID_CHERI, BERRY_ID_SITRUS
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_DAILY_HOUSE_1_RECEIVED_GIFT
	msgbox SootopolisCity_PlayerHouse_2F_Text_PetGiftGiven, MSGBOX_DEFAULT
	release
	end

House1_EventScript_PetGiftAlready::
	msgbox SootopolisCity_PlayerHouse_2F_Text_PetGiftAlready, MSGBOX_DEFAULT
	release
	end

House1_EventScript_MoveReminderBook::
	lockall
	msgbox SootopolisCity_PlayerHouse_2F_Text_MoveReminderIntro, MSGBOX_DEFAULT
	goto House1_EventScript_MoveReminderChooseMon

House1_EventScript_MoveReminderChooseMon::
	msgbox SootopolisCity_PlayerHouse_2F_Text_MoveReminderWhichMon, MSGBOX_DEFAULT
	setmoverelearnerstate MOVE_RELEARNER_LEVEL_UP_MOVES
	chooseboxmon SELECT_PC_MON_MOVE_RELEARNER
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, House1_EventScript_MoveReminderDone
	special IsSelectedMonEgg
	goto_if_eq VAR_RESULT, TRUE, House1_EventScript_MoveReminderCantTeachEgg
	special Special_HasMoveToRelearn
	goto_if_eq VAR_RESULT, FALSE, House1_EventScript_MoveReminderNoMove
	goto House1_EventScript_MoveReminderChooseMove

House1_EventScript_MoveReminderChooseMove::
	msgbox SootopolisCity_PlayerHouse_2F_Text_MoveReminderWhichMove, MSGBOX_DEFAULT
	special TeachMoveRelearnerMove
	goto_if_eq VAR_RESULT, FALSE, House1_EventScript_MoveReminderChooseMon
	msgbox SootopolisCity_PlayerHouse_2F_Text_MoveReminderTaught, MSGBOX_DEFAULT
	goto House1_EventScript_MoveReminderChooseMon

House1_EventScript_MoveReminderNoMove::
	msgbox SootopolisCity_PlayerHouse_2F_Text_MoveReminderNoMove, MSGBOX_DEFAULT
	goto House1_EventScript_MoveReminderChooseMon

House1_EventScript_MoveReminderCantTeachEgg::
	msgbox SootopolisCity_PlayerHouse_2F_Text_MoveReminderCantTeachEgg, MSGBOX_DEFAULT
	goto House1_EventScript_MoveReminderChooseMon

House1_EventScript_MoveReminderDone::
	releaseall
	end

SootopolisCity_PlayerHouse_2F_Text_PetGiftFound:
	.string "Votre POKéMON semble avoir trouvé\n"
	.string "quelque chose pour vous!$"

SootopolisCity_PlayerHouse_2F_Text_PetGiftGiven:
	.string "{PLAYER} a reçu une BAIE!$"

SootopolisCity_PlayerHouse_2F_Text_PetGiftAlready:
	.string "Votre POKéMON vous a déjà offert\n"
	.string "quelque chose aujourd'hui.$"

SootopolisCity_PlayerHouse_2F_Text_MoveReminderIntro:
	.string "Ce livre contient toutes les\n"
	.string "attaques que vos POKéMON peuvent\l"
	.string "se rappeler avoir apprises.$"

SootopolisCity_PlayerHouse_2F_Text_MoveReminderWhichMon:
	.string "A quel POKéMON voulez-vous\n"
	.string "rappeler une attaque?$"

SootopolisCity_PlayerHouse_2F_Text_MoveReminderWhichMove:
	.string "Quelle attaque voulez-vous\n"
	.string "lui rappeler?$"

SootopolisCity_PlayerHouse_2F_Text_MoveReminderTaught:
	.string "Votre POKéMON se souvient de\n"
	.string "son attaque!$"

SootopolisCity_PlayerHouse_2F_Text_MoveReminderNoMove:
	.string "Ce POKéMON n'a aucune attaque\n"
	.string "à se rappeler pour l'instant.$"

SootopolisCity_PlayerHouse_2F_Text_MoveReminderCantTeachEgg:
	.string "Un OEUF ne peut pas se rappeler\n"
	.string "d'attaque.$"

SootopolisCity_PlayerHouse_2F_Text_Painting:
	.string "Ce tableau évoque une région\n"
	.string "lointaine et ensoleillée.\p"
	.string "Peut-être est-ce le lieu d'une\n"
	.string "prochaine aventure comme celle-ci ?$"

SootopolisCity_PlayerHouse_2F_Text_Bed:
	.string "Vous vous reposez un instant...\p"
	.string "Votre équipe est en pleine forme!$"

SootopolisCity_PlayerHouse_2F_Text_ChooseResidentMon:
	.string "Voulez-vous choisir un POKéMON pour\n"
	.string "qu'il vive dans cette maison?$"

SootopolisCity_PlayerHouse_2F_Text_ResidentMonSet:
	.string "Votre POKéMON s'installe dans la\n"
	.string "maison!$"

SootopolisCity_PlayerHouse_2F_Text_RemoveResidentMon:
	.string "Voulez-vous que ce POKéMON quitte\n"
	.string "la maison?$"
