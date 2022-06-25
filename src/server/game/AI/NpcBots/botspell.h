#ifndef _BOTSPELL_H
#define _BOTSPELL_H

#include "Define.h"

/*
NpcBot System by Trickerer (onlysuffering@gmail.com)
Original patch from: LordPsyan https://bitbucket.org/lordpsyan/trinitycore-patches/src/3b8b9072280e/Individual/11185-BOTS-NPCBots.patch
*/

enum BotSpells : uint32
{
//COMMON SPELLS
    PVPTRINKET                          = 42292,//PvP Trinket no CD
    BERSERK                             = 46587,//68378,//900%/150%
    MODEL_TRANSITION                    = 24753,//"Trick" cannot cast or attack
    SUMMONING_DISORIENTATION            = 32752,
    ACTIVATE_SPEC                       = 63645,//Activate Primary Spec
    SHOOT_WAND                          = 5019,
///Passives
    DAMAGE_REDUCTION                    = 68066,//Vigilance, Blessing of Sanctuary, etc.
///Passives for Pets
    DAMAGEDONE_PASSIVE                  = 30147,//for custom value, Tamed Pet Passive (DND) physical at 0, magic at 1
    DAMAGETAKEN_PASSIVE                 = 35697,//for custom value, Pet Passive (DND), single effect (aura 87 at 0)
    SPELLDAMAGE_PASSIVE                 = 43922,//for custom value, Increase Spell Dam 473, single effect (aura 13 at 0)
    SPELLPENETRATION_PASSIVE            = 25975,//for custom value, Spell Penetration 10, single effect (aura 123 at 0)
    SPELLHASTE_PASSIVE                  = 44400,//for custom value, Netherwind Presence rank 1, single effect (aura 65 at 0)
    CRITBONUS_PASSIVE                   = 35695,//for custom value, Pet Passive (DND), spell at 0, physical at 1
///Racials
    RACIAL_EVERY_MAN_FOR_HIMSELF        = 59752,//pvp trinket effect, instant, 2 min cd
    RACIAL_BLOOD_FURY_WARLOCK           = 33702,//effect varies, 15 sec, 2 min cd
    RACIAL_BLOOD_FURY_SHAMAN            = 33697,
    RACIAL_BLOOD_FURY_OTHERS            = 20572,
    RACIAL_STONEFORM                    = 20594,//dispell disease, poison, bleed, instant, 2 min cd
    //RACIAL_FIND_TREASURE                = 2481,
    RACIAL_SHADOWMELD                   = 58984,//stealth, -threat, instant, 2 min cd
    RACIAL_WILL_OF_THE_FORSAKEN         = 7744,//dispel charm/fear/sleep, instant, 2 min cd, 45 sec category cd
    RACIAL_WARSTOMP                     = 20549,//2sec stun, casttime 500, 8yd, 2 min cd
    RACIAL_ESCAPE_ARTIST                = 20589,//dispel snare/root, instant, 1 min 45 sec cd
    RACIAL_BERSERKING                   = 26297,//haste all 20%, isntant, 3 min cd
    RACIAL_ARCANE_TORRENT_DEATHKNIGHT   = 50613,//2sec AoE silence + energize, instant, 2 min cd
    RACIAL_ARCANE_TORRENT_ROGUE         = 25046,
    RACIAL_ARCANE_TORRENT_OTHERS        = 28730,
    RACIAL_GIFT_OF_NAARU_WARRIOR        = 28880,//Hot over 15 sec, instant, 2 min cd
    RACIAL_GIFT_OF_NAARU_PALADIN        = 59542,
    RACIAL_GIFT_OF_NAARU_HUNTER         = 59543,
    RACIAL_GIFT_OF_NAARU_PRIEST         = 59544,
    RACIAL_GIFT_OF_NAARU_DEATHKNIGHT    = 59545,
    RACIAL_GIFT_OF_NAARU_SHAMAN         = 59547,
    RACIAL_GIFT_OF_NAARU_MAGE           = 59548,
//COMMON MOUNTS SPELLS
    REINDEER                            = 25859,
    REINDEER_FLY                        = 44827,
//ADVANCED
    //HONORLESS_TARGET                    = 2479,
    COSMETIC_TELEPORT_EFFECT            = 52096,//visual instant cast omni
    COSMETIC_RESURRECTION               = 58854,//visual instant cast self (castable while dead, hidden)
    SUMMON_DEMON_VISUAL                 = 6657,//SUMMON_SERPENT_MESSENGER
    CALL_PET_VISUAL                     = 30416,//QUEST_WOOD_CLEANSE_EFFECT
    SPELL_VERTEX_COLOR_BLACK            = 39662,//black color model full
    SPELL_VERTEX_COLOR_GREY             = 43355,//grey color model full
////CUSTOM SPELLS - UNUSED IN CODE AND DB
  //common
  //modify
    SPELL_TRIGGERED_HEAL                = 25155,//hidden
  //unmodify
    SPELL_ATTACK_MELEE_1H               = 42880,
    SPELL_TRIGGERED_ENERGIZE            = 60628,//hidden
//BLADEMASTER
  //SPELLS
  //unmodify
    //SPELL_DEATH_GRIP_JUMP               = 49575,
/**/SPELL_CRITICAL_STRIKE               = 1132,
    SPELL_BURNING_BLADE_BLADEMASTER     = 32281,//horde flag visual
    SPELL_STUN_FREEZE_ANIM              = 59123,//stun forever, full stop
  //modify
    SPELL_TRANSPARENCY_50               = 44816,
/**/SPELL_NETHERWALK                    = 31599,
/**/SPELL_MIRROR_IMAGE_BM               = 69936,//blank spell
    SPELL_COMBAT_SPECIAL_2H_ATTACK      = 44079,//animation only
//SPHYNX
  //modify
    SPELL_SHADOW_BOLT1                  = 16408,
    SPELL_SHADOW_BLAST                  = 38085,
    //SPELL_SHADOW_BLAST_SPLASH           = 38205,
    SPELL_ATTACK_MELEE_RANDOM           = 42902,
    SHADOWFURY_VISUAL                   = 47444,//59912,
    SPELL_DEVOUR_MAGIC                  = 17012,//used by Spellmaw but no matter (this spell does not work as intended)
    SPELL_DRAIN_MANA                    = 25755,
    SPELL_REPLENISH_MANA                = 33394,//5406,
    SPELL_REPLENISH_HEALTH              = 34756,//regenerating aura
  //unmodify
    SPELL_DEVOUR_MAGIC_CASTER_IMPACT    = 50527,
    SPELL_DEVOUR_MAGIC_BEAM             = 54393,
//ARCHMAGE
  //modify
    SPELL_BRILLIANCE_AURA               = 1234,
    SPELL_FIREBALL                      = 9488,
    SPELL_BLIZZARD                      = 15783,
    SPELL_SUMMON_WATER_ELEMENTAL        = 35593,
    SPELL_WATERBOLT                     = 72898,
  //unmodify
//DREADLORD
  //modify
    SPELL_VAMPIRIC_AURA                 = 20810,
    SPELL_SLEEP                         = 20663,
    SPELL_CARRION_SWARM                 = 34240,
    SPELL_INFERNO                       = 12740, //summon infernal servant
    SPELL_INFERNO_METEOR_VISUAL         = 5739, //meteor strike infernal
  //unmodify
    SPELL_INFERNO_EFFECT                = 22703, //stun, damage (warlock spell)
    //SPELL_INFERNO_IMPACT_EXPLOSION      = 00000, //visual
//SPELLBREAKER
  //modify
    SPELL_STEAL_MAGIC                   = 30036, //used by Ethereal Spellfilcher
    SPELL_FEEDBACK                      = 32897,
  //unmodify
//DARK RANGER
  //modify
    SPELL_BLACK_ARROW                   = 20733, //supposed to be used by Dark Ranger Clea
    SPELL_DRAIN_LIFE                    = 17238, //used by Maleki the Palid, supposed to be by Shadow Adept (31145)
    SPELL_SILENCE                       = 29943,
    //SPELL_CHARM                         = 11111, //
  //unmodify
//NECROMANCER
  //modify
    SPELL_SHADOW_BOLT2                  = 17509,
    SPELL_RAISE_DEAD                    = 34011,
    SPELL_UNHOLY_FRENZY                 = 52499,
    SPELL_CRIPPLE                       = 50379,
    SPELL_CORPSE_EXPLOSION              = 61614,
    //SPELL_BONE_SHIELD                   = 0,//27688, //NIY //NO VIABLE SPELLS
    //for Attract faction reaction must be adjusted at Object.cpp::GetFactionReactionTo(L2831)
    //SPELL_BLOOD_CURSE                   = 29933, //NIY for Attract //NO VIABLE SPELLS
  //unmodify
    CORPSE_EXPLOSION_VISUAL             = 60081, //explosion
//NAGA SEA WITCH
  //modify
    SPELL_FORKED_LIGHTNING              = 63541,
    SPELL_FORKED_LIGHTNING_EFFECT       = 50900, // "Lightning Shock"
    SPELL_FROST_ARROW                   = 38942,
    SPELL_FROST_ARROW_EFFECT            = 56095,
    SPELL_MANA_SHIELD                   = 35064,
    SPELL_TORNADO                       = 34695,
    SPELL_TORNADO_EFFECT                = 21990, // stun, -resistances
    SPELL_TORNADO_EFFECT2               = 34683, // aoe damage
    //SPELL_TORNADO_EFFECT3               = 61572, // used by Frostworg 29358 (Sons of Hodir)
    SPELL_TORNADO_EFFECT3               = 39261,
    SPELL_SHOOT_BOW                     = 30221,
  //unmodify
    SPELL_TORNADO_LIGHTNING_VISUAL      = 45869, //periodic, 1 sec
};

#endif //_BOTSPELL_H
