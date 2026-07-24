#ifndef GUARD_REWARD_SPECIES_SELECT_H
#define GUARD_REWARD_SPECIES_SELECT_H

// Opens a numeric species-picker overlay (reusing the debug menu's give-Pokémon
// widget style) so the player can choose any species, including legendaries
// and Pokémon from any generation. Meant to be called from a script via
// `special ChooseSpeciesForEggReward`; writes the chosen species to
// gSpecialVar_0x8004 and resumes the calling script on confirm.
void ChooseSpeciesForEggReward(void);

#endif //GUARD_REWARD_SPECIES_SELECT_H
