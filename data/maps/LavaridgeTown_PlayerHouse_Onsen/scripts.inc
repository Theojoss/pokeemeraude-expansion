LavaridgeTown_PlayerHouse_Onsen_MapScripts::
	.byte 0

EventScript_HotSpringsHeal::
	lockall
	msgbox LavaridgeTown_PlayerHouse_Onsen_Text_HotSpringsHeal, MSGBOX_DEFAULT
	special HealPlayerParty
	releaseall
	end

LavaridgeTown_PlayerHouse_Onsen_Text_HotSpringsHeal:
	.string "Vous vous détendez un instant dans\n"
	.string "l'eau chaude...\p"
	.string "Votre équipe est en pleine forme!$"
