#include "defines.h"
#include "../include/pokedex.h"
#include "../include/text.h"

const struct PokedexEntry gPokedexEntries[NATIONAL_DEX_COUNT] =
{
	[NATIONAL_DEX_NONE] =
	{
		.categoryName = {_U, _n, _k, _n, _o, _w, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 0,
		.weight = 0,
		.description = (const u8*) 0x8444c35,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_BULBASAUR] =
	{
		.categoryName = {_S, _e, _e, _d, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 7,
		.weight = 69,
		.description = (const u8*) 0x8444cb2,
		.unusedDescription = (const u8*) 0x8444d11,
		.pokemonScale = 356,
		.pokemonOffset = 16,
		.trainerScale = 256,
		.trainerOffset = 65534,
	},
	[NATIONAL_DEX_IVYSAUR] =
	{
		.categoryName = {_S, _e, _e, _d, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 10,
		.weight = 130,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8444d1c,
		.unused = 19830,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 332,
		.trainerOffset = 11,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8444d12,
		.unusedDescription = (const u8*) 0x8444d76,
		.pokemonScale = 332,
		.pokemonOffset = 11,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_VENUSAUR] =
	{
		.categoryName = {_S, _e, _e, _d, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 20,
		.weight = 1000,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8444d8c,
		.unused = 19934,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 1,
		.unknown1 = 375,
		.unknown2 = 6,
=======
		.description = (const u8*) 0x8444d77,
		.unusedDescription = (const u8*) 0x8444dde,
		.pokemonScale = 256,
		.pokemonOffset = 1,
		.trainerScale = 375,
		.trainerOffset = 6,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_CHARMANDER] =
	{
		.categoryName = {_L, _i, _z, _a, _r, _d, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 6,
		.weight = 85,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8444de8,
		.unused = 20039,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 410,
		.trainerOffset = 16,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8444ddf,
		.unusedDescription = (const u8*) 0x8444e47,
		.pokemonScale = 410,
		.pokemonOffset = 16,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_CHARMELEON] =
	{
		.categoryName = {_F, _l, _a, _m, _e, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 11,
		.weight = 190,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8444e59,
		.unused = 20140,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 294,
		.trainerOffset = 8,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8444e48,
		.unusedDescription = (const u8*) 0x8444eac,
		.pokemonScale = 294,
		.pokemonOffset = 8,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_CHARIZARD] =
	{
		.categoryName = {_F, _l, _a, _m, _e, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 17,
		.weight = 905,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8444ec6,
		.unused = 20247,
		.pokemonScale = 2116,
=======
		.description = (const u8*) 0x8444ead,
		.unusedDescription = (const u8*) 0x8444f17,
		.pokemonScale = 271,
>>>>>>> Stashed changes
		.pokemonOffset = 0,
		.trainerScale = 317,
		.trainerOffset = 3,
	},
	[NATIONAL_DEX_SQUIRTLE] =
	{
		.categoryName = {_T, _i, _n, _y, _SPACE, _T, _u, _r, _t, _l, _e, _END},
		.height = 5,
		.weight = 90,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8444f39,
		.unused = 20351,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 412,
		.trainerOffset = 16,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8444f18,
		.unusedDescription = (const u8*) 0x8444f7f,
		.pokemonScale = 412,
		.pokemonOffset = 16,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_WARTORTLE] =
	{
		.categoryName = {_T, _u, _r, _t, _l, _e, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 10,
		.weight = 225,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8444f93,
		.unused = 20454,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 334,
		.trainerOffset = 9,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8444f80,
		.unusedDescription = (const u8*) 0x8444fe6,
		.pokemonScale = 334,
		.pokemonOffset = 9,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_BLASTOISE] =
	{
		.categoryName = {_S, _h, _e, _l, _l, _f, _i, _s, _h, _END, _SPACE, _SPACE},
		.height = 16,
		.weight = 855,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8444fee,
		.unused = 20553,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 1,
		.unknown1 = 329,
		.unknown2 = 3,
=======
		.description = (const u8*) 0x8444fe7,
		.unusedDescription = (const u8*) 0x8445049,
		.pokemonScale = 256,
		.pokemonOffset = 1,
		.trainerScale = 329,
		.trainerOffset = 3,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_CATERPIE] =
	{
		.categoryName = {_W, _o, _r, _m, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 3,
		.weight = 29,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8445059,
		.unused = 20654,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 549,
		.trainerOffset = 20,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844504a,
		.unusedDescription = (const u8*) 0x84450ae,
		.pokemonScale = 549,
		.pokemonOffset = 20,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_METAPOD] =
	{
		.categoryName = {_C, _o, _c, _o, _o, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 7,
		.weight = 99,
<<<<<<< Updated upstream
		.description = (const u8*) 0x84450cc,
		.unused = 20750,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 350,
		.trainerOffset = 18,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x84450af,
		.unusedDescription = (const u8*) 0x844510e,
		.pokemonScale = 350,
		.pokemonOffset = 18,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_BUTTERFREE] =
	{
		.categoryName = {_B, _u, _t, _t, _e, _r, _f, _l, _y, _END, _SPACE, _SPACE},
		.height = 11,
		.weight = 320,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8445138,
		.unused = 20847,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 312,
		.trainerOffset = 2,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844510f,
		.unusedDescription = (const u8*) 0x844516f,
		.pokemonScale = 312,
		.pokemonOffset = 2,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_WEEDLE] =
	{
		.categoryName = {_H, _a, _i, _r, _y, _SPACE, _B, _u, _g, _END, _SPACE, _SPACE},
		.height = 3,
		.weight = 32,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844519f,
		.unused = 20946,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 455,
		.trainerOffset = 19,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8445170,
		.unusedDescription = (const u8*) 0x84451d2,
		.pokemonScale = 455,
		.pokemonOffset = 19,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_KAKUNA] =
	{
		.categoryName = {_C, _o, _c, _o, _o, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 6,
		.weight = 100,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844520b,
		.unused = 21043,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 424,
		.trainerOffset = 14,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x84451d3,
		.unusedDescription = (const u8*) 0x8445233,
		.pokemonScale = 424,
		.pokemonOffset = 14,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_BEEDRILL] =
	{
		.categoryName = {_P, _o, _i, _s, _o, _n, _SPACE, _B, _e, _e, _END, _SPACE},
		.height = 10,
		.weight = 295,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844527b,
		.unused = 21141,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 366,
		.trainerOffset = 2,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8445234,
		.unusedDescription = (const u8*) 0x8445295,
		.pokemonScale = 366,
		.pokemonOffset = 2,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_PIDGEY] =
	{
		.categoryName = {_T, _i, _n, _y, _SPACE, _B, _i, _r, _d, _END, _SPACE, _SPACE},
		.height = 3,
		.weight = 18,
<<<<<<< Updated upstream
		.description = (const u8*) 0x84452e7,
		.unused = 21244,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 492,
		.trainerOffset = 18,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8445296,
		.unusedDescription = (const u8*) 0x84452fc,
		.pokemonScale = 492,
		.pokemonOffset = 18,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_PIDGEOTTO] =
	{
		.categoryName = {_B, _i, _r, _d, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 11,
		.weight = 300,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8445348,
		.unused = 21341,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 334,
		.trainerOffset = 11,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x84452fd,
		.unusedDescription = (const u8*) 0x844535d,
		.pokemonScale = 334,
		.pokemonOffset = 11,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_PIDGEOT] =
	{
		.categoryName = {_B, _i, _r, _d, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 15,
		.weight = 395,
<<<<<<< Updated upstream
		.description = (const u8*) 0x84453ba,
		.unused = 21447,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 269,
=======
		.description = (const u8*) 0x844535e,
		.unusedDescription = (const u8*) 0x84453c7,
		.pokemonScale = 269,
		.pokemonOffset = 65534,
		.trainerScale = 256,
>>>>>>> Stashed changes
		.trainerOffset = 65534,
	},
	[NATIONAL_DEX_RATTATA] =
	{
		.categoryName = {_R, _a, _t, _END, _E, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 3,
		.weight = 35,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8445423,
		.unused = 21542,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 481,
		.trainerOffset = 18,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x84453c8,
		.unusedDescription = (const u8*) 0x8445426,
		.pokemonScale = 481,
		.pokemonOffset = 18,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_RATICATE] =
	{
		.categoryName = {_R, _a, _t, _END, _E, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 7,
		.weight = 185,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8445490,
		.unused = 21631,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 401,
		.trainerOffset = 14,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8445427,
		.unusedDescription = (const u8*) 0x844547f,
		.pokemonScale = 401,
		.pokemonOffset = 14,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_SPEAROW] =
	{
		.categoryName = {_T, _i, _n, _y, _SPACE, _B, _i, _r, _d, _END, _SPACE, _SPACE},
		.height = 3,
		.weight = 20,
<<<<<<< Updated upstream
		.description = (const u8*) 0x84454e9,
		.unused = 21737,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 571,
		.trainerOffset = 19,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8445480,
		.unusedDescription = (const u8*) 0x84454e9,
		.pokemonScale = 571,
		.pokemonOffset = 19,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_FEAROW] =
	{
		.categoryName = {_B, _e, _a, _k, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 12,
		.weight = 380,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8445553,
		.unused = 21840,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 282,
		.trainerOffset = 65535,
		.unknown1 = 272,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x84454ea,
		.unusedDescription = (const u8*) 0x8445550,
		.pokemonScale = 282,
		.pokemonOffset = 65535,
		.trainerScale = 272,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_EKANS] =
	{
		.categoryName = {_S, _n, _a, _k, _e, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 20,
		.weight = 69,
<<<<<<< Updated upstream
		.description = (const u8*) 0x84455c3,
		.unused = 21941,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 298,
		.trainerOffset = 13,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8445551,
		.unusedDescription = (const u8*) 0x84455b5,
		.pokemonScale = 298,
		.pokemonOffset = 13,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_ARBOK] =
	{
		.categoryName = {_C, _o, _b, _r, _a, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 35,
		.weight = 650,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8445630,
		.unused = 22044,
		.pokemonScale = 2116,
=======
		.description = (const u8*) 0x84455b6,
		.unusedDescription = (const u8*) 0x844561c,
		.pokemonScale = 256,
>>>>>>> Stashed changes
		.pokemonOffset = 0,
		.trainerScale = 296,
		.trainerOffset = 1,
	},
	[NATIONAL_DEX_PIKACHU] =
	{
		.categoryName = {_M, _o, _u, _s, _e, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 4,
		.weight = 60,
<<<<<<< Updated upstream
		.description = (const u8*) 0x84456a2,
		.unused = 22149,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 479,
		.trainerOffset = 16,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844561d,
		.unusedDescription = (const u8*) 0x8445685,
		.pokemonScale = 479,
		.pokemonOffset = 16,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_RAICHU] =
	{
		.categoryName = {_M, _o, _u, _s, _e, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 8,
		.weight = 300,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844570b,
		.unused = 22250,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 426,
		.trainerOffset = 10,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8445686,
		.unusedDescription = (const u8*) 0x84456ea,
		.pokemonScale = 426,
		.pokemonOffset = 10,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_SANDSHREW] =
	{
		.categoryName = {_M, _o, _u, _s, _e, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 6,
		.weight = 120,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844577c,
		.unused = 22347,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 370,
		.trainerOffset = 15,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x84456eb,
		.unusedDescription = (const u8*) 0x844574b,
		.pokemonScale = 370,
		.pokemonOffset = 15,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_SANDSLASH] =
	{
		.categoryName = {_M, _o, _u, _s, _e, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 10,
		.weight = 295,
<<<<<<< Updated upstream
		.description = (const u8*) 0x84457dd,
		.unused = 22452,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 341,
		.trainerOffset = 10,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844574c,
		.unusedDescription = (const u8*) 0x84457b4,
		.pokemonScale = 341,
		.pokemonOffset = 10,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_NIDORAN_F] =
	{
		.categoryName = {_P, _o, _i, _s, _o, _n, _SPACE, _P, _i, _n, _END, _SPACE},
		.height = 4,
		.weight = 70,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8445846,
		.unused = 22554,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 488,
		.trainerOffset = 19,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x84457b5,
		.unusedDescription = (const u8*) 0x844581a,
		.pokemonScale = 488,
		.pokemonOffset = 19,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_NIDORINA] =
	{
		.categoryName = {_P, _o, _i, _s, _o, _n, _SPACE, _P, _i, _n, _END, _SPACE},
		.height = 8,
		.weight = 200,
<<<<<<< Updated upstream
		.description = (const u8*) 0x84458ba,
		.unused = 22644,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 381,
		.trainerOffset = 13,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844581b,
		.unusedDescription = (const u8*) 0x8445874,
		.pokemonScale = 381,
		.pokemonOffset = 13,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_NIDOQUEEN] =
	{
		.categoryName = {_D, _r, _i, _l, _l, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 13,
		.weight = 600,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8445920,
		.unused = 22746,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 283,
		.trainerOffset = 2,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8445875,
		.unusedDescription = (const u8*) 0x84458da,
		.pokemonScale = 283,
		.pokemonOffset = 2,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_NIDORAN_M] =
	{
		.categoryName = {_P, _o, _i, _s, _o, _n, _SPACE, _P, _i, _n, _END, _SPACE},
		.height = 5,
		.weight = 90,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8445989,
		.unused = 22857,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 480,
		.trainerOffset = 17,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x84458db,
		.unusedDescription = (const u8*) 0x8445949,
		.pokemonScale = 480,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_NIDORINO] =
	{
		.categoryName = {_P, _o, _i, _s, _o, _n, _SPACE, _P, _i, _n, _END, _SPACE},
		.height = 9,
		.weight = 195,
<<<<<<< Updated upstream
		.description = (const u8*) 0x84459fd,
		.unused = 22959,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 408,
		.trainerOffset = 13,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844594a,
		.unusedDescription = (const u8*) 0x84459af,
		.pokemonScale = 408,
		.pokemonOffset = 13,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_NIDOKING] =
	{
		.categoryName = {_D, _r, _i, _l, _l, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 14,
		.weight = 620,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8445a64,
		.unused = 23063,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 304,
		.trainerOffset = 3,
		.unknown1 = 323,
		.unknown2 = 2,
=======
		.description = (const u8*) 0x84459b0,
		.unusedDescription = (const u8*) 0x8445a17,
		.pokemonScale = 304,
		.pokemonOffset = 3,
		.trainerScale = 323,
		.trainerOffset = 2,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_CLEFAIRY] =
	{
		.categoryName = {_F, _a, _i, _r, _y, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 6,
		.weight = 75,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8445ad2,
		.unused = 23162,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 425,
		.trainerOffset = 18,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8445a18,
		.unusedDescription = (const u8*) 0x8445a7a,
		.pokemonScale = 425,
		.pokemonOffset = 18,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_CLEFABLE] =
	{
		.categoryName = {_F, _a, _i, _r, _y, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 13,
		.weight = 400,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8445b31,
		.unused = 23258,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 3,
		.unknown1 = 272,
		.unknown2 = 65535,
=======
		.description = (const u8*) 0x8445a7b,
		.unusedDescription = (const u8*) 0x8445ada,
		.pokemonScale = 256,
		.pokemonOffset = 3,
		.trainerScale = 272,
		.trainerOffset = 65535,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_VULPIX] =
	{
		.categoryName = {_F, _o, _x, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 6,
		.weight = 99,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8445b94,
		.unused = 23346,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 497,
		.trainerOffset = 18,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8445adb,
		.unusedDescription = (const u8*) 0x8445b32,
		.pokemonScale = 497,
		.pokemonOffset = 18,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_NINETALES] =
	{
		.categoryName = {_F, _o, _x, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 11,
		.weight = 199,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8445bec,
		.unused = 23443,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 339,
		.trainerOffset = 6,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8445b33,
		.unusedDescription = (const u8*) 0x8445b93,
		.pokemonScale = 339,
		.pokemonOffset = 6,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_JIGGLYPUFF] =
	{
		.categoryName = {_B, _a, _l, _l, _o, _o, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 5,
		.weight = 55,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8445c44,
		.unused = 23545,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 419,
		.trainerOffset = 19,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8445b94,
		.unusedDescription = (const u8*) 0x8445bf9,
		.pokemonScale = 419,
		.pokemonOffset = 19,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_WIGGLYTUFF] =
	{
		.categoryName = {_B, _a, _l, _l, _o, _o, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 10,
		.weight = 120,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8445caa,
		.unused = 23649,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 328,
		.trainerOffset = 9,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8445bfa,
		.unusedDescription = (const u8*) 0x8445c61,
		.pokemonScale = 328,
		.pokemonOffset = 9,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_ZUBAT] =
	{
		.categoryName = {_B, _a, _t, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 8,
		.weight = 75,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8445d12,
		.unused = 23754,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 355,
		.trainerOffset = 65532,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8445c62,
		.unusedDescription = (const u8*) 0x8445cca,
		.pokemonScale = 355,
		.pokemonOffset = 65532,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_GOLBAT] =
	{
		.categoryName = {_B, _a, _t, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 16,
		.weight = 550,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8445d7b,
		.unused = 23860,
		.pokemonScale = 2116,
=======
		.description = (const u8*) 0x8445ccb,
		.unusedDescription = (const u8*) 0x8445d34,
		.pokemonScale = 291,
>>>>>>> Stashed changes
		.pokemonOffset = 0,
		.trainerScale = 296,
		.trainerOffset = 2,
	},
	[NATIONAL_DEX_ODDISH] =
	{
		.categoryName = {_W, _e, _e, _d, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 5,
		.weight = 54,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8445de0,
		.unused = 23968,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 423,
		.trainerOffset = 15,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8445d35,
		.unusedDescription = (const u8*) 0x8445da0,
		.pokemonScale = 423,
		.pokemonOffset = 15,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_GLOOM] =
	{
		.categoryName = {_W, _e, _e, _d, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 8,
		.weight = 86,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8445e4c,
		.unused = 24071,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 329,
		.trainerOffset = 10,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8445da1,
		.unusedDescription = (const u8*) 0x8445e07,
		.pokemonScale = 329,
		.pokemonOffset = 10,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_VILEPLUME] =
	{
		.categoryName = {_F, _l, _o, _w, _e, _r, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 12,
		.weight = 186,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8445eba,
		.unused = 24175,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 4,
		.unknown1 = 272,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8445e08,
		.unusedDescription = (const u8*) 0x8445e6f,
		.pokemonScale = 256,
		.pokemonOffset = 4,
		.trainerScale = 272,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_PARAS] =
	{
		.categoryName = {_M, _u, _s, _h, _r, _o, _o, _m, _END, _SPACE, _SPACE, _SPACE},
		.height = 3,
		.weight = 54,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8445f23,
		.unused = 24278,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 546,
		.trainerOffset = 21,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8445e70,
		.unusedDescription = (const u8*) 0x8445ed6,
		.pokemonScale = 546,
		.pokemonOffset = 21,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_PARASECT] =
	{
		.categoryName = {_M, _u, _s, _h, _r, _o, _o, _m, _END, _SPACE, _SPACE, _SPACE},
		.height = 10,
		.weight = 295,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8445f88,
		.unused = 24386,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 307,
		.trainerOffset = 8,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8445ed7,
		.unusedDescription = (const u8*) 0x8445f42,
		.pokemonScale = 307,
		.pokemonOffset = 8,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_VENONAT] =
	{
		.categoryName = {_I, _n, _s, _e, _c, _t, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 10,
		.weight = 300,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8445feb,
		.unused = 24480,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 360,
		.trainerOffset = 14,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8445f43,
		.unusedDescription = (const u8*) 0x8445fa0,
		.pokemonScale = 360,
		.pokemonOffset = 14,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_VENOMOTH] =
	{
		.categoryName = {_P, _o, _i, _s, _o, _n, _SPACE, _M, _o, _t, _h, _END},
		.height = 15,
		.weight = 125,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8446051,
		.unused = 24585,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 3,
		.unknown1 = 293,
		.unknown2 = 1,
=======
		.description = (const u8*) 0x8445fa1,
		.unusedDescription = (const u8*) 0x8446009,
		.pokemonScale = 256,
		.pokemonOffset = 3,
		.trainerScale = 293,
		.trainerOffset = 1,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_DIGLETT] =
	{
		.categoryName = {_M, _o, _l, _e, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 2,
		.weight = 8,
<<<<<<< Updated upstream
		.description = (const u8*) 0x84460ba,
		.unused = 24696,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 706,
		.trainerOffset = 22,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844600a,
		.unusedDescription = (const u8*) 0x8446078,
		.pokemonScale = 706,
		.pokemonOffset = 22,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_DUGTRIO] =
	{
		.categoryName = {_M, _o, _l, _e, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 7,
		.weight = 333,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8446129,
		.unused = 24802,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 384,
		.trainerOffset = 14,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8446079,
		.unusedDescription = (const u8*) 0x84460e2,
		.pokemonScale = 384,
		.pokemonOffset = 14,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_MEOWTH] =
	{
		.categoryName = {_S, _c, _r, _a, _t, _c, _h, _SPACE, _C, _a, _t, _END},
		.height = 4,
		.weight = 42,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844618f,
		.unused = 24899,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 480,
		.trainerOffset = 17,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x84460e3,
		.unusedDescription = (const u8*) 0x8446143,
		.pokemonScale = 480,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_PERSIAN] =
	{
		.categoryName = {_C, _l, _a, _s, _s, _y, _SPACE, _C, _a, _t, _END, _SPACE},
		.height = 10,
		.weight = 320,
<<<<<<< Updated upstream
		.description = (const u8*) 0x84461f1,
		.unused = 24998,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 320,
		.trainerOffset = 10,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8446144,
		.unusedDescription = (const u8*) 0x84461a6,
		.pokemonScale = 320,
		.pokemonOffset = 10,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_PSYDUCK] =
	{
		.categoryName = {_D, _u, _c, _k, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 8,
		.weight = 196,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844626b,
		.unused = 25107,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 347,
		.trainerOffset = 11,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x84461a7,
		.unusedDescription = (const u8*) 0x8446213,
		.pokemonScale = 347,
		.pokemonOffset = 11,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_GOLDUCK] =
	{
		.categoryName = {_D, _u, _c, _k, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 17,
		.weight = 766,
<<<<<<< Updated upstream
		.description = (const u8*) 0x84462d8,
		.unused = 25203,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 272,
		.trainerOffset = 4,
		.unknown1 = 287,
		.unknown2 = 1,
=======
		.description = (const u8*) 0x8446214,
		.unusedDescription = (const u8*) 0x8446273,
		.pokemonScale = 272,
		.pokemonOffset = 4,
		.trainerScale = 287,
		.trainerOffset = 1,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_MANKEY] =
	{
		.categoryName = {_P, _i, _g, _SPACE, _M, _o, _n, _k, _e, _y, _END, _SPACE},
		.height = 5,
		.weight = 280,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8446348,
		.unused = 25317,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 388,
		.trainerOffset = 16,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8446274,
		.unusedDescription = (const u8*) 0x84462e5,
		.pokemonScale = 388,
		.pokemonOffset = 16,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_PRIMEAPE] =
	{
		.categoryName = {_P, _i, _g, _SPACE, _M, _o, _n, _k, _e, _y, _END, _SPACE},
		.height = 10,
		.weight = 320,
<<<<<<< Updated upstream
		.description = (const u8*) 0x84463ba,
		.unused = 25419,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 326,
		.trainerOffset = 8,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x84462e6,
		.unusedDescription = (const u8*) 0x844634b,
		.pokemonScale = 326,
		.pokemonOffset = 8,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_GROWLITHE] =
	{
		.categoryName = {_P, _u, _p, _p, _y, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 7,
		.weight = 190,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8446429,
		.unused = 25521,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 346,
		.trainerOffset = 14,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844634c,
		.unusedDescription = (const u8*) 0x84463b1,
		.pokemonScale = 346,
		.pokemonOffset = 14,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_ARCANINE] =
	{
		.categoryName = {_L, _e, _g, _e, _n, _d, _a, _r, _y, _END, _SPACE, _SPACE},
		.height = 19,
		.weight = 1550,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8446484,
		.unused = 25622,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 65535,
		.unknown1 = 312,
		.unknown2 = 2,
=======
		.description = (const u8*) 0x84463b2,
		.unusedDescription = (const u8*) 0x8446416,
		.pokemonScale = 256,
		.pokemonOffset = 65535,
		.trainerScale = 312,
		.trainerOffset = 2,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_POLIWAG] =
	{
		.categoryName = {_T, _a, _d, _p, _o, _l, _e, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 6,
		.weight = 124,
<<<<<<< Updated upstream
		.description = (const u8*) 0x84464e2,
		.unused = 25725,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 353,
		.trainerOffset = 17,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8446417,
		.unusedDescription = (const u8*) 0x844647d,
		.pokemonScale = 353,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_POLIWHIRL] =
	{
		.categoryName = {_T, _a, _d, _p, _o, _l, _e, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 10,
		.weight = 200,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844655a,
		.unused = 25819,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 288,
		.trainerOffset = 10,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844647e,
		.unusedDescription = (const u8*) 0x84464db,
		.pokemonScale = 288,
		.pokemonOffset = 10,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_POLIWRATH] =
	{
		.categoryName = {_T, _a, _d, _p, _o, _l, _e, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 13,
		.weight = 540,
<<<<<<< Updated upstream
		.description = (const u8*) 0x84465bf,
		.unused = 25919,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
=======
		.description = (const u8*) 0x84464dc,
		.unusedDescription = (const u8*) 0x844653f,
		.pokemonScale = 256,
		.pokemonOffset = 5,
>>>>>>> Stashed changes
		.trainerScale = 256,
		.trainerOffset = 65534,
	},
	[NATIONAL_DEX_ABRA] =
	{
		.categoryName = {_P, _s, _i, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 9,
		.weight = 195,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844662c,
		.unused = 26010,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 374,
		.trainerOffset = 14,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8446540,
		.unusedDescription = (const u8*) 0x844659a,
		.pokemonScale = 374,
		.pokemonOffset = 14,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_KADABRA] =
	{
		.categoryName = {_P, _s, _i, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 13,
		.weight = 565,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8446687,
		.unused = 26102,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 272,
		.trainerOffset = 2,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844659b,
		.unusedDescription = (const u8*) 0x84465f6,
		.pokemonScale = 272,
		.pokemonOffset = 2,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_ALAKAZAM] =
	{
		.categoryName = {_P, _s, _i, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 15,
		.weight = 480,
<<<<<<< Updated upstream
		.description = (const u8*) 0x84466e8,
		.unused = 26211,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 272,
=======
		.description = (const u8*) 0x84465f7,
		.unusedDescription = (const u8*) 0x8446663,
		.pokemonScale = 272,
		.pokemonOffset = 65535,
		.trainerScale = 271,
>>>>>>> Stashed changes
		.trainerOffset = 65535,
	},
	[NATIONAL_DEX_MACHOP] =
	{
		.categoryName = {_S, _u, _p, _e, _r, _p, _o, _w, _e, _r, _END, _SPACE},
		.height = 8,
		.weight = 195,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8446755,
		.unused = 26313,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 320,
		.trainerOffset = 12,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8446664,
		.unusedDescription = (const u8*) 0x84466c9,
		.pokemonScale = 320,
		.pokemonOffset = 12,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_MACHOKE] =
	{
		.categoryName = {_S, _u, _p, _e, _r, _p, _o, _w, _e, _r, _END, _SPACE},
		.height = 15,
		.weight = 705,
<<<<<<< Updated upstream
		.description = (const u8*) 0x84467c4,
		.unused = 26417,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 304,
		.trainerOffset = 6,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x84466ca,
		.unusedDescription = (const u8*) 0x8446731,
		.pokemonScale = 304,
		.pokemonOffset = 6,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_MACHAMP] =
	{
		.categoryName = {_S, _u, _p, _e, _r, _p, _o, _w, _e, _r, _END, _SPACE},
		.height = 16,
		.weight = 1300,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844682c,
		.unused = 26522,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 278,
		.trainerOffset = 2,
		.unknown1 = 283,
		.unknown2 = 0,
=======
		.description = (const u8*) 0x8446732,
		.unusedDescription = (const u8*) 0x844679a,
		.pokemonScale = 278,
		.pokemonOffset = 2,
		.trainerScale = 283,
		.trainerOffset = 0,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_BELLSPROUT] =
	{
		.categoryName = {_F, _l, _o, _w, _e, _r, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 7,
		.weight = 40,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8446888,
		.unused = 26626,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 354,
		.trainerOffset = 16,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844679b,
		.unusedDescription = (const u8*) 0x8446802,
		.pokemonScale = 354,
		.pokemonOffset = 16,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_WEEPINBELL] =
	{
		.categoryName = {_F, _l, _y, _c, _a, _t, _c, _h, _e, _r, _END, _SPACE},
		.height = 10,
		.weight = 64,
<<<<<<< Updated upstream
		.description = (const u8*) 0x84468f6,
		.unused = 26721,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
=======
		.description = (const u8*) 0x8446803,
		.unusedDescription = (const u8*) 0x8446861,
		.pokemonScale = 256,
		.pokemonOffset = 65535,
>>>>>>> Stashed changes
		.trainerScale = 256,
		.trainerOffset = 65534,
	},
	[NATIONAL_DEX_VICTREEBEL] =
	{
		.categoryName = {_F, _l, _y, _c, _a, _t, _c, _h, _e, _r, _END, _SPACE},
		.height = 17,
		.weight = 155,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8446955,
		.unused = 26823,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 256,
=======
		.description = (const u8*) 0x8446862,
		.unusedDescription = (const u8*) 0x84468c7,
		.pokemonScale = 256,
		.pokemonOffset = 2,
		.trainerScale = 302,
>>>>>>> Stashed changes
		.trainerOffset = 2,
	},
	[NATIONAL_DEX_TENTACOOL] =
	{
		.categoryName = {_J, _e, _l, _l, _y, _f, _i, _s, _h, _END, _SPACE, _SPACE},
		.height = 9,
		.weight = 455,
<<<<<<< Updated upstream
		.description = (const u8*) 0x84469bd,
		.unused = 26935,
		.pokemonScale = 2116,
=======
		.description = (const u8*) 0x84468c8,
		.unusedDescription = (const u8*) 0x8446937,
		.pokemonScale = 256,
>>>>>>> Stashed changes
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 65534,
	},
	[NATIONAL_DEX_TENTACRUEL] =
	{
		.categoryName = {_J, _e, _l, _l, _y, _f, _i, _s, _h, _END, _SPACE, _SPACE},
		.height = 16,
		.weight = 550,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8446a17,
		.unused = 27040,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 272,
		.trainerOffset = 65535,
		.unknown1 = 312,
		.unknown2 = 0,
=======
		.description = (const u8*) 0x8446938,
		.unusedDescription = (const u8*) 0x84469a0,
		.pokemonScale = 272,
		.pokemonOffset = 65535,
		.trainerScale = 312,
		.trainerOffset = 0,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_GEODUDE] =
	{
		.categoryName = {_R, _o, _c, _k, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 4,
		.weight = 200,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8446a80,
		.unused = 27141,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 330,
		.trainerOffset = 17,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x84469a1,
		.unusedDescription = (const u8*) 0x8446a05,
		.pokemonScale = 330,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_GRAVELER] =
	{
		.categoryName = {_R, _o, _c, _k, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 10,
		.weight = 1050,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8446af0,
		.unused = 27243,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 272,
		.trainerOffset = 8,
		.unknown1 = 305,
		.unknown2 = 1,
=======
		.description = (const u8*) 0x8446a06,
		.unusedDescription = (const u8*) 0x8446a6b,
		.pokemonScale = 272,
		.pokemonOffset = 8,
		.trainerScale = 305,
		.trainerOffset = 1,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_GOLEM] =
	{
		.categoryName = {_M, _e, _g, _a, _t, _o, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 14,
		.weight = 3000,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8446b56,
		.unused = 27353,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 266,
		.trainerOffset = 3,
		.unknown1 = 298,
		.unknown2 = 1,
=======
		.description = (const u8*) 0x8446a6c,
		.unusedDescription = (const u8*) 0x8446ad9,
		.pokemonScale = 266,
		.pokemonOffset = 3,
		.trainerScale = 298,
		.trainerOffset = 1,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_PONYTA] =
	{
		.categoryName = {_F, _i, _r, _e, _SPACE, _H, _o, _r, _s, _e, _END, _SPACE},
		.height = 10,
		.weight = 300,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8446bc4,
		.unused = 27457,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 288,
		.trainerOffset = 7,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8446ada,
		.unusedDescription = (const u8*) 0x8446b41,
		.pokemonScale = 288,
		.pokemonOffset = 7,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_RAPIDASH] =
	{
		.categoryName = {_F, _i, _r, _e, _SPACE, _H, _o, _r, _s, _e, _END, _SPACE},
		.height = 17,
		.weight = 950,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8446c23,
		.unused = 27551,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 282,
		.trainerOffset = 65535,
		.unknown1 = 312,
		.unknown2 = 1,
=======
		.description = (const u8*) 0x8446b42,
		.unusedDescription = (const u8*) 0x8446b9f,
		.pokemonScale = 282,
		.pokemonOffset = 65535,
		.trainerScale = 312,
		.trainerOffset = 1,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_SLOWPOKE] =
	{
		.categoryName = {_D, _o, _p, _e, _y, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 12,
		.weight = 360,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8446c8c,
		.unused = 27649,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 271,
		.trainerOffset = 10,
		.unknown1 = 272,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8446ba0,
		.unusedDescription = (const u8*) 0x8446c01,
		.pokemonScale = 271,
		.pokemonOffset = 10,
		.trainerScale = 272,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_SLOWBRO] =
	{
		.categoryName = {_H, _e, _r, _m, _i, _t, _SPACE, _C, _r, _a, _b, _END},
		.height = 16,
		.weight = 785,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8446d05,
		.unused = 27745,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 257,
		.trainerOffset = 65534,
		.unknown1 = 312,
		.unknown2 = 0,
=======
		.description = (const u8*) 0x8446c02,
		.unusedDescription = (const u8*) 0x8446c61,
		.pokemonScale = 257,
		.pokemonOffset = 65534,
		.trainerScale = 312,
		.trainerOffset = 0,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_MAGNEMITE] =
	{
		.categoryName = {_M, _a, _g, _n, _e, _t, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 3,
		.weight = 60,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8446d74,
		.unused = 27848,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 294,
		.trainerOffset = 65528,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8446c62,
		.unusedDescription = (const u8*) 0x8446cc8,
		.pokemonScale = 294,
		.pokemonOffset = 65528,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_MAGNETON] =
	{
		.categoryName = {_M, _a, _g, _n, _e, _t, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 10,
		.weight = 600,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8446ddb,
		.unused = 27950,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 293,
		.trainerOffset = 65532,
		.unknown1 = 273,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8446cc9,
		.unusedDescription = (const u8*) 0x8446d2e,
		.pokemonScale = 293,
		.pokemonOffset = 65532,
		.trainerScale = 273,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_FARFETCHD] =
	{
		.categoryName = {_W, _i, _l, _d, _SPACE, _D, _u, _c, _k, _END, _SPACE, _SPACE},
		.height = 8,
		.weight = 150,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8446e41,
		.unused = 28054,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 317,
		.trainerOffset = 65534,
		.unknown1 = 256,
		.unknown2 = 65533,
=======
		.description = (const u8*) 0x8446d2f,
		.unusedDescription = (const u8*) 0x8446d96,
		.pokemonScale = 317,
		.pokemonOffset = 65534,
		.trainerScale = 256,
		.trainerOffset = 65533,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_DODUO] =
	{
		.categoryName = {_T, _w, _i, _n, _SPACE, _B, _i, _r, _d, _END, _SPACE, _SPACE},
		.height = 14,
		.weight = 392,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8446ea9,
		.unused = 28158,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 3,
		.unknown1 = 287,
		.unknown2 = 0,
=======
		.description = (const u8*) 0x8446d97,
		.unusedDescription = (const u8*) 0x8446dfe,
		.pokemonScale = 256,
		.pokemonOffset = 3,
		.trainerScale = 287,
		.trainerOffset = 0,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_DODRIO] =
	{
		.categoryName = {_T, _r, _i, _p, _l, _e, _SPACE, _B, _i, _r, _d, _END},
		.height = 18,
		.weight = 852,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8446f16,
		.unused = 28258,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 272,
		.trainerOffset = 65534,
		.unknown1 = 296,
		.unknown2 = 1,
=======
		.description = (const u8*) 0x8446dff,
		.unusedDescription = (const u8*) 0x8446e62,
		.pokemonScale = 272,
		.pokemonOffset = 65534,
		.trainerScale = 296,
		.trainerOffset = 1,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_SEEL] =
	{
		.categoryName = {_S, _e, _a, _SPACE, _L, _i, _o, _n, _END, _SPACE, _SPACE, _SPACE},
		.height = 11,
		.weight = 900,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8446f7c,
		.unused = 28380,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 298,
		.trainerOffset = 8,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8446e63,
		.unusedDescription = (const u8*) 0x8446edc,
		.pokemonScale = 298,
		.pokemonOffset = 8,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_DEWGONG] =
	{
		.categoryName = {_S, _e, _a, _SPACE, _L, _i, _o, _n, _END, _SPACE, _SPACE, _SPACE},
		.height = 17,
		.weight = 1200,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8446ff3,
		.unused = 28478,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 288,
		.trainerOffset = 1,
		.unknown1 = 306,
		.unknown2 = 65535,
=======
		.description = (const u8*) 0x8446edd,
		.unusedDescription = (const u8*) 0x8446f3e,
		.pokemonScale = 288,
		.pokemonOffset = 1,
		.trainerScale = 306,
		.trainerOffset = 65535,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_GRIMER] =
	{
		.categoryName = {_S, _l, _u, _d, _g, _e, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 9,
		.weight = 300,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8447053,
		.unused = 28583,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 258,
		.trainerOffset = 8,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8446f3f,
		.unusedDescription = (const u8*) 0x8446fa7,
		.pokemonScale = 258,
		.pokemonOffset = 8,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_MUK] =
	{
		.categoryName = {_S, _l, _u, _d, _g, _e, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 12,
		.weight = 300,
<<<<<<< Updated upstream
		.description = (const u8*) 0x84470b7,
		.unused = 28691,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
=======
		.description = (const u8*) 0x8446fa8,
		.unusedDescription = (const u8*) 0x8447013,
		.pokemonScale = 288,
		.pokemonOffset = 7,
>>>>>>> Stashed changes
		.trainerScale = 288,
		.trainerOffset = 65535,
	},
	[NATIONAL_DEX_SHELLDER] =
	{
		.categoryName = {_B, _i, _v, _a, _l, _v, _e, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 3,
		.weight = 40,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8447123,
		.unused = 28790,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 643,
		.trainerOffset = 21,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8447014,
		.unusedDescription = (const u8*) 0x8447076,
		.pokemonScale = 643,
		.pokemonOffset = 21,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_CLOYSTER] =
	{
		.categoryName = {_B, _i, _v, _a, _l, _v, _e, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 15,
		.weight = 1325,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8447186,
		.unused = 28905,
		.pokemonScale = 2116,
=======
		.description = (const u8*) 0x8447077,
		.unusedDescription = (const u8*) 0x84470e9,
		.pokemonScale = 264,
>>>>>>> Stashed changes
		.pokemonOffset = 0,
		.trainerScale = 288,
		.trainerOffset = 65535,
	},
	[NATIONAL_DEX_GASTLY] =
	{
		.categoryName = {_G, _a, _s, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 13,
		.weight = 1,
<<<<<<< Updated upstream
		.description = (const u8*) 0x84471f9,
		.unused = 29009,
		.pokemonScale = 2116,
=======
		.description = (const u8*) 0x84470ea,
		.unusedDescription = (const u8*) 0x8447151,
		.pokemonScale = 256,
>>>>>>> Stashed changes
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 65534,
	},
	[NATIONAL_DEX_HAUNTER] =
	{
		.categoryName = {_G, _a, _s, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 16,
		.weight = 1,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8447265,
		.unused = 29105,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 269,
		.trainerOffset = 2,
		.unknown1 = 308,
		.unknown2 = 1,
=======
		.description = (const u8*) 0x8447152,
		.unusedDescription = (const u8*) 0x84471b1,
		.pokemonScale = 269,
		.pokemonOffset = 2,
		.trainerScale = 308,
		.trainerOffset = 1,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_GENGAR] =
	{
		.categoryName = {_S, _h, _a, _d, _o, _w, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 15,
		.weight = 405,
<<<<<<< Updated upstream
		.description = (const u8*) 0x84472c3,
		.unused = 29214,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 4,
		.unknown1 = 317,
		.unknown2 = 1,
=======
		.description = (const u8*) 0x84471b2,
		.unusedDescription = (const u8*) 0x844721e,
		.pokemonScale = 256,
		.pokemonOffset = 4,
		.trainerScale = 317,
		.trainerOffset = 1,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_ONIX] =
	{
		.categoryName = {_R, _o, _c, _k, _SPACE, _S, _n, _a, _k, _e, _END, _SPACE},
		.height = 88,
		.weight = 2100,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8447321,
		.unused = 29313,
		.pokemonScale = 2116,
=======
		.description = (const u8*) 0x844721f,
		.unusedDescription = (const u8*) 0x8447281,
		.pokemonScale = 257,
>>>>>>> Stashed changes
		.pokemonOffset = 0,
		.trainerScale = 515,
		.trainerOffset = 12,
	},
	[NATIONAL_DEX_DROWZEE] =
	{
		.categoryName = {_H, _y, _p, _n, _o, _s, _i, _s, _END, _SPACE, _SPACE, _SPACE},
		.height = 10,
		.weight = 324,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8447393,
		.unused = 29421,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 274,
		.trainerOffset = 7,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8447282,
		.unusedDescription = (const u8*) 0x84472ed,
		.pokemonScale = 274,
		.pokemonOffset = 7,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_HYPNO] =
	{
		.categoryName = {_H, _y, _p, _n, _o, _s, _i, _s, _END, _SPACE, _SPACE, _SPACE},
		.height = 16,
		.weight = 756,
<<<<<<< Updated upstream
		.description = (const u8*) 0x84473f8,
		.unused = 29522,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 298,
		.trainerOffset = 3,
		.unknown1 = 310,
		.unknown2 = 2,
=======
		.description = (const u8*) 0x84472ee,
		.unusedDescription = (const u8*) 0x8447352,
		.pokemonScale = 298,
		.pokemonOffset = 3,
		.trainerScale = 310,
		.trainerOffset = 2,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_KRABBY] =
	{
		.categoryName = {_R, _i, _v, _e, _r, _SPACE, _C, _r, _a, _b, _END, _SPACE},
		.height = 4,
		.weight = 65,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8447465,
		.unused = 29620,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 469,
		.trainerOffset = 18,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8447353,
		.unusedDescription = (const u8*) 0x84473b4,
		.pokemonScale = 469,
		.pokemonOffset = 18,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_KINGLER] =
	{
		.categoryName = {_P, _i, _n, _c, _e, _r, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 13,
		.weight = 600,
<<<<<<< Updated upstream
		.description = (const u8*) 0x84474c7,
		.unused = 29725,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 287,
		.trainerOffset = 3,
		.unknown1 = 308,
		.unknown2 = 1,
=======
		.description = (const u8*) 0x84473b5,
		.unusedDescription = (const u8*) 0x844741d,
		.pokemonScale = 287,
		.pokemonOffset = 3,
		.trainerScale = 308,
		.trainerOffset = 1,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_VOLTORB] =
	{
		.categoryName = {_B, _a, _l, _l, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 5,
		.weight = 104,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8447532,
		.unused = 29813,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 364,
		.trainerOffset = 65528,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844741e,
		.unusedDescription = (const u8*) 0x8447475,
		.pokemonScale = 364,
		.pokemonOffset = 65528,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_ELECTRODE] =
	{
		.categoryName = {_B, _a, _l, _l, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 12,
		.weight = 666,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844758a,
		.unused = 29913,
		.pokemonScale = 2116,
=======
		.description = (const u8*) 0x8447476,
		.unusedDescription = (const u8*) 0x84474d9,
		.pokemonScale = 256,
>>>>>>> Stashed changes
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 65534,
	},
	[NATIONAL_DEX_EXEGGCUTE] =
	{
		.categoryName = {_E, _g, _g, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 4,
		.weight = 25,
<<<<<<< Updated upstream
		.description = (const u8*) 0x84475ee,
		.unused = 30022,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 495,
		.trainerOffset = 65532,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x84474da,
		.unusedDescription = (const u8*) 0x8447546,
		.pokemonScale = 495,
		.pokemonOffset = 65532,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_EXEGGUTOR] =
	{
		.categoryName = {_C, _o, _c, _o, _n, _u, _t, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 20,
		.weight = 1200,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844765b,
		.unused = 30117,
		.pokemonScale = 2116,
=======
		.description = (const u8*) 0x8447547,
		.unusedDescription = (const u8*) 0x84475a5,
		.pokemonScale = 283,
>>>>>>> Stashed changes
		.pokemonOffset = 0,
		.trainerScale = 376,
		.trainerOffset = 7,
	},
	[NATIONAL_DEX_CUBONE] =
	{
		.categoryName = {_L, _o, _n, _e, _l, _y, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 4,
		.weight = 65,
<<<<<<< Updated upstream
		.description = (const u8*) 0x84476bf,
		.unused = 30214,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 545,
		.trainerOffset = 19,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x84475a6,
		.unusedDescription = (const u8*) 0x8447606,
		.pokemonScale = 545,
		.pokemonOffset = 19,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_MAROWAK] =
	{
		.categoryName = {_B, _o, _n, _e, _SPACE, _K, _e, _e, _p, _e, _r, _END},
		.height = 10,
		.weight = 450,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8447727,
		.unused = 30325,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 293,
		.trainerOffset = 12,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8447607,
		.unusedDescription = (const u8*) 0x8447675,
		.pokemonScale = 293,
		.pokemonOffset = 12,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_HITMONLEE] =
	{
		.categoryName = {_K, _i, _c, _k, _i, _n, _g, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 15,
		.weight = 498,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844778e,
		.unused = 30419,
		.pokemonScale = 2116,
=======
		.description = (const u8*) 0x8447676,
		.unusedDescription = (const u8*) 0x84476d3,
		.pokemonScale = 256,
>>>>>>> Stashed changes
		.pokemonOffset = 0,
		.trainerScale = 273,
		.trainerOffset = 65534,
	},
	[NATIONAL_DEX_HITMONCHAN] =
	{
		.categoryName = {_P, _u, _n, _c, _h, _i, _n, _g, _END, _SPACE, _SPACE, _SPACE},
		.height = 14,
		.weight = 502,
<<<<<<< Updated upstream
		.description = (const u8*) 0x84477f9,
		.unused = 30515,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 1,
		.unknown1 = 264,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x84476d4,
		.unusedDescription = (const u8*) 0x8447733,
		.pokemonScale = 256,
		.pokemonOffset = 1,
		.trainerScale = 264,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_LICKITUNG] =
	{
		.categoryName = {_L, _i, _c, _k, _i, _n, _g, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 12,
		.weight = 655,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8447865,
		.unused = 30621,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
=======
		.description = (const u8*) 0x8447734,
		.unusedDescription = (const u8*) 0x844779d,
		.pokemonScale = 272,
		.pokemonOffset = 3,
>>>>>>> Stashed changes
		.trainerScale = 272,
		.trainerOffset = 65533,
	},
	[NATIONAL_DEX_KOFFING] =
	{
		.categoryName = {_P, _o, _i, _s, _o, _n, _SPACE, _G, _a, _s, _END, _SPACE},
		.height = 6,
		.weight = 10,
<<<<<<< Updated upstream
		.description = (const u8*) 0x84478cf,
		.unused = 30719,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 369,
		.trainerOffset = 65535,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844779e,
		.unusedDescription = (const u8*) 0x84477ff,
		.pokemonScale = 369,
		.pokemonOffset = 65535,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_WEEZING] =
	{
		.categoryName = {_P, _o, _i, _s, _o, _n, _SPACE, _G, _a, _s, _END, _SPACE},
		.height = 12,
		.weight = 95,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844792d,
		.unused = 30822,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 321,
=======
		.description = (const u8*) 0x8447800,
		.unusedDescription = (const u8*) 0x8447866,
		.pokemonScale = 321,
		.pokemonOffset = 65535,
		.trainerScale = 276,
>>>>>>> Stashed changes
		.trainerOffset = 65535,
	},
	[NATIONAL_DEX_RHYHORN] =
	{
		.categoryName = {_S, _p, _i, _k, _e, _s, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 10,
		.weight = 1150,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8447994,
		.unused = 30923,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 291,
		.trainerOffset = 7,
		.unknown1 = 276,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8447867,
		.unusedDescription = (const u8*) 0x84478cb,
		.pokemonScale = 291,
		.pokemonOffset = 7,
		.trainerScale = 276,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_RHYDON] =
	{
		.categoryName = {_D, _r, _i, _l, _l, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 19,
		.weight = 1200,
<<<<<<< Updated upstream
		.description = (const u8*) 0x84479f7,
		.unused = 31022,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 272,
		.trainerOffset = 65535,
		.unknown1 = 344,
		.unknown2 = 3,
=======
		.description = (const u8*) 0x84478cc,
		.unusedDescription = (const u8*) 0x844792e,
		.pokemonScale = 272,
		.pokemonOffset = 65535,
		.trainerScale = 344,
		.trainerOffset = 3,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_CHANSEY] =
	{
		.categoryName = {_E, _g, _g, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 11,
		.weight = 346,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8447a5f,
		.unused = 31121,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 257,
		.trainerOffset = 6,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844792f,
		.unusedDescription = (const u8*) 0x8447991,
		.pokemonScale = 257,
		.pokemonOffset = 6,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_TANGELA] =
	{
		.categoryName = {_V, _i, _n, _e, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 10,
		.weight = 350,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8447abf,
		.unused = 31215,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 320,
		.trainerOffset = 9,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8447992,
		.unusedDescription = (const u8*) 0x84479ef,
		.pokemonScale = 320,
		.pokemonOffset = 9,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_KANGASKHAN] =
	{
		.categoryName = {_P, _a, _r, _e, _n, _t, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 22,
		.weight = 800,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8447b28,
		.unused = 31324,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 257,
		.trainerOffset = 65533,
		.unknown1 = 349,
		.unknown2 = 5,
=======
		.description = (const u8*) 0x84479f0,
		.unusedDescription = (const u8*) 0x8447a5c,
		.pokemonScale = 257,
		.pokemonOffset = 65533,
		.trainerScale = 349,
		.trainerOffset = 5,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_HORSEA] =
	{
		.categoryName = {_D, _r, _a, _g, _o, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 4,
		.weight = 80,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8447b90,
		.unused = 31426,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 399,
		.trainerOffset = 65535,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8447a5d,
		.unusedDescription = (const u8*) 0x8447ac2,
		.pokemonScale = 399,
		.pokemonOffset = 65535,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_SEADRA] =
	{
		.categoryName = {_D, _r, _a, _g, _o, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 12,
		.weight = 250,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8447bf6,
		.unused = 31531,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 296,
		.trainerOffset = 3,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8447ac3,
		.unusedDescription = (const u8*) 0x8447b2b,
		.pokemonScale = 296,
		.pokemonOffset = 3,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_GOLDEEN] =
	{
		.categoryName = {_G, _o, _l, _d, _f, _i, _s, _h, _END, _SPACE, _SPACE, _SPACE},
		.height = 6,
		.weight = 150,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8447c60,
		.unused = 31625,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 379,
		.trainerOffset = 4,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8447b2c,
		.unusedDescription = (const u8*) 0x8447b89,
		.pokemonScale = 379,
		.pokemonOffset = 4,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_SEAKING] =
	{
		.categoryName = {_G, _o, _l, _d, _f, _i, _s, _h, _END, _SPACE, _SPACE, _SPACE},
		.height = 13,
		.weight = 390,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8447cc9,
		.unused = 31717,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 304,
		.trainerOffset = 1,
		.unknown1 = 288,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8447b8a,
		.unusedDescription = (const u8*) 0x8447be5,
		.pokemonScale = 304,
		.pokemonOffset = 1,
		.trainerScale = 288,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_STARYU] =
	{
		.categoryName = {_S, _t, _a, _r, _SPACE, _S, _h, _a, _p, _e, _END, _SPACE},
		.height = 8,
		.weight = 345,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8447d25,
		.unused = 31810,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 326,
		.trainerOffset = 1,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8447be6,
		.unusedDescription = (const u8*) 0x8447c42,
		.pokemonScale = 326,
		.pokemonOffset = 1,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_STARMIE] =
	{
		.categoryName = {_M, _y, _s, _t, _e, _r, _i, _o, _u, _s, _END, _SPACE},
		.height = 11,
		.weight = 800,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8447d85,
		.unused = 31916,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 301,
		.trainerOffset = 3,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8447c43,
		.unusedDescription = (const u8*) 0x8447cac,
		.pokemonScale = 301,
		.pokemonOffset = 3,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_MR_MIME] =
	{
		.categoryName = {_B, _a, _r, _r, _i, _e, _r, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 13,
		.weight = 545,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8447def,
		.unused = 32008,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 258,
		.trainerOffset = 4,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8447cad,
		.unusedDescription = (const u8*) 0x8447d08,
		.pokemonScale = 258,
		.pokemonOffset = 4,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_SCYTHER] =
	{
		.categoryName = {_M, _a, _n, _t, _i, _s, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 15,
		.weight = 560,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8447e50,
		.unused = 32115,
		.pokemonScale = 2116,
=======
		.description = (const u8*) 0x8447d09,
		.unusedDescription = (const u8*) 0x8447d73,
		.pokemonScale = 272,
>>>>>>> Stashed changes
		.pokemonOffset = 0,
		.trainerScale = 293,
		.trainerOffset = 1,
	},
	[NATIONAL_DEX_JYNX] =
	{
		.categoryName = {_H, _u, _m, _a, _n, _SPACE, _S, _h, _a, _p, _e, _END},
		.height = 14,
		.weight = 406,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8447eb4,
		.unused = 32213,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 3,
		.unknown1 = 300,
		.unknown2 = 1,
=======
		.description = (const u8*) 0x8447d74,
		.unusedDescription = (const u8*) 0x8447dd5,
		.pokemonScale = 256,
		.pokemonOffset = 3,
		.trainerScale = 300,
		.trainerOffset = 1,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_ELECTABUZZ] =
	{
		.categoryName = {_E, _l, _e, _c, _t, _r, _i, _c, _END, _SPACE, _SPACE, _SPACE},
		.height = 11,
		.weight = 300,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8447f1a,
		.unused = 32315,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 330,
		.trainerOffset = 7,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8447dd6,
		.unusedDescription = (const u8*) 0x8447e3b,
		.pokemonScale = 330,
		.pokemonOffset = 7,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_MAGMAR] =
	{
		.categoryName = {_S, _p, _i, _t, _f, _i, _r, _e, _END, _SPACE, _SPACE, _SPACE},
		.height = 13,
		.weight = 445,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8447f80,
		.unused = 32430,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 293,
		.trainerOffset = 4,
		.unknown1 = 272,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8447e3c,
		.unusedDescription = (const u8*) 0x8447eae,
		.pokemonScale = 293,
		.pokemonOffset = 4,
		.trainerScale = 272,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_PINSIR] =
	{
		.categoryName = {_S, _t, _a, _g, _SPACE, _B, _e, _e, _t, _l, _e, _END},
		.height = 15,
		.weight = 550,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8447fee,
		.unused = 32528,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 1,
		.unknown1 = 257,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8447eaf,
		.unusedDescription = (const u8*) 0x8447f10,
		.pokemonScale = 256,
		.pokemonOffset = 1,
		.trainerScale = 257,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_TAUROS] =
	{
		.categoryName = {_W, _i, _l, _d, _SPACE, _B, _u, _l, _l, _END, _SPACE, _SPACE},
		.height = 14,
		.weight = 884,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844805a,
		.unused = 32633,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 2,
		.unknown1 = 312,
		.unknown2 = 3,
=======
		.description = (const u8*) 0x8447f11,
		.unusedDescription = (const u8*) 0x8447f79,
		.pokemonScale = 256,
		.pokemonOffset = 2,
		.trainerScale = 312,
		.trainerOffset = 3,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_MAGIKARP] =
	{
		.categoryName = {_F, _i, _s, _h, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 9,
		.weight = 100,
<<<<<<< Updated upstream
		.description = (const u8*) 0x84480af,
		.unused = 32729,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 317,
		.trainerOffset = 4,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8447f7a,
		.unusedDescription = (const u8*) 0x8447fd9,
		.pokemonScale = 317,
		.pokemonOffset = 4,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_GYARADOS] =
	{
		.categoryName = {_A, _t, _r, _o, _c, _i, _o, _u, _s, _END, _SPACE, _SPACE},
		.height = 65,
		.weight = 2350,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8448123,
		.unused = 32818,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 288,
		.trainerOffset = 65535,
		.unknown1 = 512,
		.unknown2 = 11,
=======
		.description = (const u8*) 0x8447fda,
		.unusedDescription = (const u8*) 0x8448032,
		.pokemonScale = 288,
		.pokemonOffset = 65535,
		.trainerScale = 512,
		.trainerOffset = 11,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_LAPRAS] =
	{
		.categoryName = {_T, _r, _a, _n, _s, _p, _o, _r, _t, _END, _SPACE, _SPACE},
		.height = 25,
		.weight = 2200,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8448194,
		.unused = 32920,
		.pokemonScale = 2116,
=======
		.description = (const u8*) 0x8448033,
		.unusedDescription = (const u8*) 0x8448098,
		.pokemonScale = 256,
>>>>>>> Stashed changes
		.pokemonOffset = 0,
		.trainerScale = 425,
		.trainerOffset = 8,
	},
	[NATIONAL_DEX_DITTO] =
	{
		.categoryName = {_T, _r, _a, _n, _s, _f, _o, _r, _m, _END, _SPACE, _SPACE},
		.height = 3,
		.weight = 40,
<<<<<<< Updated upstream
		.description = (const u8*) 0x84481f8,
		.unused = 33019,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 602,
		.trainerOffset = 21,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8448099,
		.unusedDescription = (const u8*) 0x84480fb,
		.pokemonScale = 602,
		.pokemonOffset = 21,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_EEVEE] =
	{
		.categoryName = {_E, _v, _o, _l, _u, _t, _i, _o, _n, _END, _SPACE, _SPACE},
		.height = 3,
		.weight = 65,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8448251,
		.unused = 33114,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 476,
		.trainerOffset = 17,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x84480fc,
		.unusedDescription = (const u8*) 0x844815a,
		.pokemonScale = 476,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_VAPOREON] =
	{
		.categoryName = {_B, _u, _b, _b, _l, _e, _SPACE, _J, _e, _t, _END, _SPACE},
		.height = 10,
		.weight = 290,
<<<<<<< Updated upstream
		.description = (const u8*) 0x84482b0,
		.unused = 33228,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 316,
		.trainerOffset = 7,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844815b,
		.unusedDescription = (const u8*) 0x84481cc,
		.pokemonScale = 316,
		.pokemonOffset = 7,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_JOLTEON] =
	{
		.categoryName = {_L, _i, _g, _h, _t, _n, _i, _n, _g, _END, _SPACE, _SPACE},
		.height = 8,
		.weight = 245,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8448321,
		.unused = 33323,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 283,
		.trainerOffset = 8,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x84481cd,
		.unusedDescription = (const u8*) 0x844822b,
		.pokemonScale = 283,
		.pokemonOffset = 8,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_FLAREON] =
	{
		.categoryName = {_F, _l, _a, _m, _e, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 9,
		.weight = 250,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8448388,
		.unused = 33439,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 302,
		.trainerOffset = 11,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844822c,
		.unusedDescription = (const u8*) 0x844829f,
		.pokemonScale = 302,
		.pokemonOffset = 11,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_PORYGON] =
	{
		.categoryName = {_V, _i, _r, _t, _u, _a, _l, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 8,
		.weight = 365,
<<<<<<< Updated upstream
		.description = (const u8*) 0x84483fc,
		.unused = 33547,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 328,
		.trainerOffset = 7,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x84482a0,
		.unusedDescription = (const u8*) 0x844830b,
		.pokemonScale = 328,
		.pokemonOffset = 7,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_OMANYTE] =
	{
		.categoryName = {_S, _p, _i, _r, _a, _l, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 4,
		.weight = 75,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8448468,
		.unused = 33646,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 521,
		.trainerOffset = 20,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844830c,
		.unusedDescription = (const u8*) 0x844836e,
		.pokemonScale = 521,
		.pokemonOffset = 20,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_OMASTAR] =
	{
		.categoryName = {_S, _p, _i, _r, _a, _l, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 10,
		.weight = 350,
<<<<<<< Updated upstream
		.description = (const u8*) 0x84484ce,
		.unused = 33757,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 307,
		.trainerOffset = 5,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844836f,
		.unusedDescription = (const u8*) 0x84483dd,
		.pokemonScale = 307,
		.pokemonOffset = 5,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_KABUTO] =
	{
		.categoryName = {_S, _h, _e, _l, _l, _f, _i, _s, _h, _END, _SPACE, _SPACE},
		.height = 5,
		.weight = 115,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8448538,
		.unused = 33860,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 438,
		.trainerOffset = 21,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x84483de,
		.unusedDescription = (const u8*) 0x8448444,
		.pokemonScale = 438,
		.pokemonOffset = 21,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_KABUTOPS] =
	{
		.categoryName = {_S, _h, _e, _l, _l, _f, _i, _s, _h, _END, _SPACE, _SPACE},
		.height = 13,
		.weight = 405,
<<<<<<< Updated upstream
		.description = (const u8*) 0x84485a4,
		.unused = 33961,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 271,
		.trainerOffset = 1,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8448445,
		.unusedDescription = (const u8*) 0x84484a9,
		.pokemonScale = 271,
		.pokemonOffset = 1,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_AERODACTYL] =
	{
		.categoryName = {_F, _o, _s, _s, _i, _l, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 18,
		.weight = 590,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844860e,
		.unused = 34064,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 275,
		.trainerOffset = 65535,
		.unknown1 = 317,
		.unknown2 = 2,
=======
		.description = (const u8*) 0x84484aa,
		.unusedDescription = (const u8*) 0x8448510,
		.pokemonScale = 275,
		.pokemonOffset = 65535,
		.trainerScale = 317,
		.trainerOffset = 2,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_SNORLAX] =
	{
		.categoryName = {_S, _l, _e, _e, _p, _i, _n, _g, _END, _SPACE, _SPACE, _SPACE},
		.height = 21,
		.weight = 4600,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844867e,
		.unused = 34175,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 275,
		.trainerOffset = 1,
		.unknown1 = 408,
		.unknown2 = 7,
=======
		.description = (const u8*) 0x8448511,
		.unusedDescription = (const u8*) 0x844857f,
		.pokemonScale = 275,
		.pokemonOffset = 1,
		.trainerScale = 408,
		.trainerOffset = 7,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_ARTICUNO] =
	{
		.categoryName = {_F, _r, _e, _e, _z, _e, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 17,
		.weight = 554,
<<<<<<< Updated upstream
		.description = (const u8*) 0x84486f8,
		.unused = 34279,
		.pokemonScale = 2116,
=======
		.description = (const u8*) 0x8448580,
		.unusedDescription = (const u8*) 0x84485e7,
		.pokemonScale = 278,
>>>>>>> Stashed changes
		.pokemonOffset = 0,
		.trainerScale = 308,
		.trainerOffset = 1,
	},
	[NATIONAL_DEX_ZAPDOS] =
	{
		.categoryName = {_E, _l, _e, _c, _t, _r, _i, _c, _END, _SPACE, _SPACE, _SPACE},
		.height = 16,
		.weight = 526,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8448760,
		.unused = 34370,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 275,
		.trainerOffset = 1,
		.unknown1 = 330,
		.unknown2 = 3,
=======
		.description = (const u8*) 0x84485e8,
		.unusedDescription = (const u8*) 0x8448642,
		.pokemonScale = 275,
		.pokemonOffset = 1,
		.trainerScale = 330,
		.trainerOffset = 3,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_MOLTRES] =
	{
		.categoryName = {_F, _l, _a, _m, _e, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 20,
		.weight = 600,
<<<<<<< Updated upstream
		.description = (const u8*) 0x84487c0,
		.unused = 34475,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 270,
		.trainerOffset = 1,
		.unknown1 = 379,
		.unknown2 = 6,
=======
		.description = (const u8*) 0x8448643,
		.unusedDescription = (const u8*) 0x84486ab,
		.pokemonScale = 270,
		.pokemonOffset = 1,
		.trainerScale = 379,
		.trainerOffset = 6,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_DRATINI] =
	{
		.categoryName = {_D, _r, _a, _g, _o, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 18,
		.weight = 33,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8448831,
		.unused = 34570,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 8,
		.unknown1 = 386,
		.unknown2 = 6,
=======
		.description = (const u8*) 0x84486ac,
		.unusedDescription = (const u8*) 0x844870a,
		.pokemonScale = 256,
		.pokemonOffset = 8,
		.trainerScale = 386,
		.trainerOffset = 6,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_DRAGONAIR] =
	{
		.categoryName = {_D, _r, _a, _g, _o, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 40,
		.weight = 165,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844888d,
		.unused = 34670,
		.pokemonScale = 2116,
=======
		.description = (const u8*) 0x844870b,
		.unusedDescription = (const u8*) 0x844876e,
		.pokemonScale = 274,
>>>>>>> Stashed changes
		.pokemonOffset = 0,
		.trainerScale = 423,
		.trainerOffset = 6,
	},
	[NATIONAL_DEX_DRAGONITE] =
	{
		.categoryName = {_D, _r, _a, _g, _o, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 22,
		.weight = 2100,
<<<<<<< Updated upstream
		.description = (const u8*) 0x84488f7,
		.unused = 34773,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 283,
		.trainerOffset = 65535,
		.unknown1 = 342,
		.unknown2 = 4,
=======
		.description = (const u8*) 0x844876f,
		.unusedDescription = (const u8*) 0x84487d5,
		.pokemonScale = 283,
		.pokemonOffset = 65535,
		.trainerScale = 342,
		.trainerOffset = 4,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_MEWTWO] =
	{
		.categoryName = {_G, _e, _n, _e, _t, _i, _c, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 20,
		.weight = 1220,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8448952,
		.unused = 34874,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 276,
		.trainerOffset = 65535,
		.unknown1 = 342,
		.unknown2 = 5,
=======
		.description = (const u8*) 0x84487d6,
		.unusedDescription = (const u8*) 0x844883a,
		.pokemonScale = 276,
		.pokemonOffset = 65535,
		.trainerScale = 342,
		.trainerOffset = 5,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_MEW] =
	{
		.categoryName = {_N, _e, _w, _SPACE, _S, _p, _e, _c, _i, _e, _s, _END},
		.height = 4,
		.weight = 40,
<<<<<<< Updated upstream
		.description = (const u8*) 0x84489b7,
		.unused = 34973,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 460,
=======
		.description = (const u8*) 0x844883b,
		.unusedDescription = (const u8*) 0x844889d,
		.pokemonScale = 460,
		.pokemonOffset = 65534,
		.trainerScale = 256,
>>>>>>> Stashed changes
		.trainerOffset = 65534,
	},
	[NATIONAL_DEX_CHIKORITA] =
	{
		.categoryName = {_L, _e, _a, _f, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 9,
		.weight = 64,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8448a26,
		.unused = 35078,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 512,
		.trainerOffset = 18,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844889e,
		.unusedDescription = (const u8*) 0x8448906,
		.pokemonScale = 512,
		.pokemonOffset = 18,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_BAYLEEF] =
	{
		.categoryName = {_L, _e, _a, _f, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 12,
		.weight = 158,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8448a7e,
		.unused = 35173,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 296,
		.trainerOffset = 4,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8448907,
		.unusedDescription = (const u8*) 0x8448965,
		.pokemonScale = 296,
		.pokemonOffset = 4,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_MEGANIUM] =
	{
		.categoryName = {_H, _e, _r, _b, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 18,
		.weight = 1005,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8448add,
		.unused = 35271,
		.pokemonScale = 2116,
=======
		.description = (const u8*) 0x8448966,
		.unusedDescription = (const u8*) 0x84489c7,
		.pokemonScale = 286,
>>>>>>> Stashed changes
		.pokemonOffset = 0,
		.trainerScale = 317,
		.trainerOffset = 2,
	},
	[NATIONAL_DEX_CYNDAQUIL] =
	{
		.categoryName = {_F, _i, _r, _e, _SPACE, _M, _o, _u, _s, _e, _END, _SPACE},
		.height = 5,
		.weight = 79,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8448b3f,
		.unused = 35374,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 539,
		.trainerOffset = 19,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x84489c8,
		.unusedDescription = (const u8*) 0x8448a2e,
		.pokemonScale = 539,
		.pokemonOffset = 19,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_QUILAVA] =
	{
		.categoryName = {_V, _o, _l, _c, _a, _n, _o, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 9,
		.weight = 190,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8448b9e,
		.unused = 35472,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 329,
		.trainerOffset = 10,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8448a2f,
		.unusedDescription = (const u8*) 0x8448a90,
		.pokemonScale = 329,
		.pokemonOffset = 10,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_TYPHLOSION] =
	{
		.categoryName = {_V, _o, _l, _c, _a, _n, _o, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 17,
		.weight = 795,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8448bfc,
		.unused = 35572,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 284,
		.trainerOffset = 65535,
		.unknown1 = 287,
		.unknown2 = 0,
=======
		.description = (const u8*) 0x8448a91,
		.unusedDescription = (const u8*) 0x8448af4,
		.pokemonScale = 284,
		.pokemonOffset = 65535,
		.trainerScale = 287,
		.trainerOffset = 0,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_TOTODILE] =
	{
		.categoryName = {_B, _i, _g, _SPACE, _J, _a, _w, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 6,
		.weight = 95,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8448c5b,
		.unused = 35673,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 487,
		.trainerOffset = 20,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8448af5,
		.unusedDescription = (const u8*) 0x8448b59,
		.pokemonScale = 487,
		.pokemonOffset = 20,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_CROCONAW] =
	{
		.categoryName = {_B, _i, _g, _SPACE, _J, _a, _w, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 11,
		.weight = 250,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8448cba,
		.unused = 35773,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 378,
		.trainerOffset = 11,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8448b5a,
		.unusedDescription = (const u8*) 0x8448bbd,
		.pokemonScale = 378,
		.pokemonOffset = 11,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_FERALIGATR] =
	{
		.categoryName = {_B, _i, _g, _SPACE, _J, _a, _w, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 23,
		.weight = 888,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8448d1e,
		.unused = 35876,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 282,
		.trainerOffset = 65535,
		.unknown1 = 375,
		.unknown2 = 6,
=======
		.description = (const u8*) 0x8448bbe,
		.unusedDescription = (const u8*) 0x8448c24,
		.pokemonScale = 282,
		.pokemonOffset = 65535,
		.trainerScale = 375,
		.trainerOffset = 6,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_SENTRET] =
	{
		.categoryName = {_S, _c, _o, _u, _t, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 8,
		.weight = 60,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8448d8a,
		.unused = 35981,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 439,
		.trainerOffset = 12,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8448c25,
		.unusedDescription = (const u8*) 0x8448c8d,
		.pokemonScale = 439,
		.pokemonOffset = 12,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_FURRET] =
	{
		.categoryName = {_L, _o, _n, _g, _SPACE, _B, _o, _d, _y, _END, _SPACE, _SPACE},
		.height = 18,
		.weight = 325,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8448df3,
		.unused = 36090,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 346,
		.trainerOffset = 10,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8448c8e,
		.unusedDescription = (const u8*) 0x8448cfa,
		.pokemonScale = 346,
		.pokemonOffset = 10,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_HOOTHOOT] =
	{
		.categoryName = {_O, _w, _l, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 7,
		.weight = 212,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8448e57,
		.unused = 36196,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 380,
		.trainerOffset = 15,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8448cfb,
		.unusedDescription = (const u8*) 0x8448d64,
		.pokemonScale = 380,
		.pokemonOffset = 15,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_NOCTOWL] =
	{
		.categoryName = {_O, _w, _l, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 16,
		.weight = 408,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8448ec1,
		.unused = 36288,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 278,
		.trainerOffset = 2,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8448d65,
		.unusedDescription = (const u8*) 0x8448dc0,
		.pokemonScale = 278,
		.pokemonOffset = 2,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_LEDYBA] =
	{
		.categoryName = {_F, _i, _v, _e, _SPACE, _S, _t, _a, _r, _END, _SPACE, _SPACE},
		.height = 10,
		.weight = 108,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8448f1d,
		.unused = 36391,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
=======
		.description = (const u8*) 0x8448dc1,
		.unusedDescription = (const u8*) 0x8448e27,
		.pokemonScale = 256,
		.pokemonOffset = 4,
>>>>>>> Stashed changes
		.trainerScale = 256,
		.trainerOffset = 65534,
	},
	[NATIONAL_DEX_LEDIAN] =
	{
		.categoryName = {_F, _i, _v, _e, _SPACE, _S, _t, _a, _r, _END, _SPACE, _SPACE},
		.height = 14,
		.weight = 356,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8448f87,
		.unused = 36492,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
=======
		.description = (const u8*) 0x8448e28,
		.unusedDescription = (const u8*) 0x8448e8c,
		.pokemonScale = 256,
		.pokemonOffset = 1,
>>>>>>> Stashed changes
		.trainerScale = 256,
		.trainerOffset = 65534,
	},
	[NATIONAL_DEX_SPINARAK] =
	{
		.categoryName = {_S, _t, _r, _i, _n, _g, _SPACE, _S, _p, _i, _t, _END},
		.height = 5,
		.weight = 85,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8448ff0,
		.unused = 36596,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 414,
		.trainerOffset = 20,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8448e8d,
		.unusedDescription = (const u8*) 0x8448ef4,
		.pokemonScale = 414,
		.pokemonOffset = 20,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_ARIADOS] =
	{
		.categoryName = {_L, _o, _n, _g, _SPACE, _L, _e, _g, _END, _SPACE, _SPACE, _SPACE},
		.height = 11,
		.weight = 335,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8449052,
		.unused = 36700,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 316,
		.trainerOffset = 7,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8448ef5,
		.unusedDescription = (const u8*) 0x8448f5c,
		.pokemonScale = 316,
		.pokemonOffset = 7,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_CROBAT] =
	{
		.categoryName = {_B, _a, _t, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 18,
		.weight = 750,
<<<<<<< Updated upstream
		.description = (const u8*) 0x84490bd,
		.unused = 36810,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 279,
		.trainerOffset = 65535,
		.unknown1 = 313,
		.unknown2 = 2,
=======
		.description = (const u8*) 0x8448f5d,
		.unusedDescription = (const u8*) 0x8448fca,
		.pokemonScale = 279,
		.pokemonOffset = 65535,
		.trainerScale = 313,
		.trainerOffset = 2,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_CHINCHOU] =
	{
		.categoryName = {_A, _n, _g, _l, _e, _r, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 5,
		.weight = 120,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8449124,
		.unused = 36914,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 424,
=======
		.description = (const u8*) 0x8448fcb,
		.unusedDescription = (const u8*) 0x8449032,
		.pokemonScale = 424,
		.pokemonOffset = 65534,
		.trainerScale = 256,
>>>>>>> Stashed changes
		.trainerOffset = 65534,
	},
	[NATIONAL_DEX_LANTURN] =
	{
		.categoryName = {_L, _i, _g, _h, _t, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 12,
		.weight = 225,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8449181,
		.unused = 37015,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 269,
		.trainerOffset = 6,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8449033,
		.unusedDescription = (const u8*) 0x8449097,
		.pokemonScale = 269,
		.pokemonOffset = 6,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_PICHU] =
	{
		.categoryName = {_T, _i, _n, _y, _SPACE, _M, _o, _u, _s, _e, _END, _SPACE},
		.height = 3,
		.weight = 20,
<<<<<<< Updated upstream
		.description = (const u8*) 0x84491e6,
		.unused = 37120,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 508,
		.trainerOffset = 17,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8449098,
		.unusedDescription = (const u8*) 0x8449100,
		.pokemonScale = 508,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_CLEFFA] =
	{
		.categoryName = {_S, _t, _a, _r, _SPACE, _S, _h, _a, _p, _e, _END, _SPACE},
		.height = 3,
		.weight = 30,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844924f,
		.unused = 37209,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 462,
		.trainerOffset = 22,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8449101,
		.unusedDescription = (const u8*) 0x8449159,
		.pokemonScale = 462,
		.pokemonOffset = 22,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_IGGLYBUFF] =
	{
		.categoryName = {_B, _a, _l, _l, _o, _o, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 3,
		.weight = 10,
<<<<<<< Updated upstream
		.description = (const u8*) 0x84492a8,
		.unused = 37299,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 457,
		.trainerOffset = 65535,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844915a,
		.unusedDescription = (const u8*) 0x84491b3,
		.pokemonScale = 457,
		.pokemonOffset = 65535,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_TOGEPI] =
	{
		.categoryName = {_S, _p, _i, _k, _e, _SPACE, _B, _a, _l, _l, _END, _SPACE},
		.height = 3,
		.weight = 15,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8449302,
		.unused = 37393,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 507,
		.trainerOffset = 21,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x84491b4,
		.unusedDescription = (const u8*) 0x8449211,
		.pokemonScale = 507,
		.pokemonOffset = 21,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_TOGETIC] =
	{
		.categoryName = {_H, _a, _p, _p, _i, _n, _e, _s, _s, _END, _SPACE, _SPACE},
		.height = 6,
		.weight = 32,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8449360,
		.unused = 37494,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 424,
		.trainerOffset = 15,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8449212,
		.unusedDescription = (const u8*) 0x8449276,
		.pokemonScale = 424,
		.pokemonOffset = 15,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_NATU] =
	{
		.categoryName = {_T, _i, _n, _y, _SPACE, _B, _i, _r, _d, _END, _SPACE, _SPACE},
		.height = 2,
		.weight = 20,
<<<<<<< Updated upstream
		.description = (const u8*) 0x84493c5,
		.unused = 37601,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 610,
		.trainerOffset = 23,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8449277,
		.unusedDescription = (const u8*) 0x84492e1,
		.pokemonScale = 610,
		.pokemonOffset = 23,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_XATU] =
	{
		.categoryName = {_M, _y, _s, _t, _i, _c, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 15,
		.weight = 150,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8449431,
		.unused = 37705,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 258,
		.trainerOffset = 4,
		.unknown1 = 317,
		.unknown2 = 3,
=======
		.description = (const u8*) 0x84492e2,
		.unusedDescription = (const u8*) 0x8449349,
		.pokemonScale = 258,
		.pokemonOffset = 4,
		.trainerScale = 317,
		.trainerOffset = 3,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_MAREEP] =
	{
		.categoryName = {_W, _o, _o, _l, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 6,
		.weight = 78,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8449493,
		.unused = 37806,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 379,
		.trainerOffset = 18,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844934a,
		.unusedDescription = (const u8*) 0x84493ae,
		.pokemonScale = 379,
		.pokemonOffset = 18,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_FLAAFFY] =
	{
		.categoryName = {_W, _o, _o, _l, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 8,
		.weight = 133,
<<<<<<< Updated upstream
		.description = (const u8*) 0x84494f8,
		.unused = 37914,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 372,
		.trainerOffset = 13,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x84493af,
		.unusedDescription = (const u8*) 0x844941a,
		.pokemonScale = 372,
		.pokemonOffset = 13,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_AMPHAROS] =
	{
		.categoryName = {_L, _i, _g, _h, _t, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 14,
		.weight = 1000,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8449559,
		.unused = 38022,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 275,
		.trainerOffset = 2,
		.unknown1 = 283,
		.unknown2 = 65535,
=======
		.description = (const u8*) 0x844941b,
		.unusedDescription = (const u8*) 0x8449486,
		.pokemonScale = 275,
		.pokemonOffset = 2,
		.trainerScale = 283,
		.trainerOffset = 65535,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_BELLOSSOM] =
	{
		.categoryName = {_F, _l, _o, _w, _e, _r, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 4,
		.weight = 58,
<<<<<<< Updated upstream
		.description = (const u8*) 0x84495c4,
		.unused = 38135,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 472,
		.trainerOffset = 19,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8449487,
		.unusedDescription = (const u8*) 0x84494f7,
		.pokemonScale = 472,
		.pokemonOffset = 19,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_MARILL] =
	{
		.categoryName = {_A, _q, _u, _a, _SPACE, _M, _o, _u, _s, _e, _END, _SPACE},
		.height = 4,
		.weight = 85,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844962a,
		.unused = 38230,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 476,
		.trainerOffset = 19,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x84494f8,
		.unusedDescription = (const u8*) 0x8449556,
		.pokemonScale = 476,
		.pokemonOffset = 19,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_AZUMARILL] =
	{
		.categoryName = {_A, _q, _u, _a, _SPACE, _R, _a, _b, _b, _i, _t, _END},
		.height = 8,
		.weight = 285,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8449688,
		.unused = 38329,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 448,
		.trainerOffset = 15,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8449557,
		.unusedDescription = (const u8*) 0x84495b9,
		.pokemonScale = 448,
		.pokemonOffset = 15,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_SUDOWOODO] =
	{
		.categoryName = {_I, _m, _i, _t, _a, _t, _i, _o, _n, _END, _SPACE, _SPACE},
		.height = 12,
		.weight = 380,
<<<<<<< Updated upstream
		.description = (const u8*) 0x84496eb,
		.unused = 38436,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 305,
		.trainerOffset = 7,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x84495ba,
		.unusedDescription = (const u8*) 0x8449624,
		.pokemonScale = 305,
		.pokemonOffset = 7,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_POLITOED] =
	{
		.categoryName = {_F, _r, _o, _g, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 11,
		.weight = 339,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8449756,
		.unused = 38529,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 289,
		.trainerOffset = 5,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8449625,
		.unusedDescription = (const u8*) 0x8449681,
		.pokemonScale = 289,
		.pokemonOffset = 5,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_HOPPIP] =
	{
		.categoryName = {_C, _o, _t, _t, _o, _n, _w, _e, _e, _d, _END, _SPACE},
		.height = 4,
		.weight = 5,
<<<<<<< Updated upstream
		.description = (const u8*) 0x84497bb,
		.unused = 38628,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 562,
		.trainerOffset = 65529,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8449682,
		.unusedDescription = (const u8*) 0x84496e4,
		.pokemonScale = 562,
		.pokemonOffset = 65529,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_SKIPLOOM] =
	{
		.categoryName = {_C, _o, _t, _t, _o, _n, _w, _e, _e, _d, _END, _SPACE},
		.height = 6,
		.weight = 10,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844981e,
		.unused = 38725,
		.pokemonScale = 2116,
=======
		.description = (const u8*) 0x84496e5,
		.unusedDescription = (const u8*) 0x8449745,
		.pokemonScale = 387,
>>>>>>> Stashed changes
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 65534,
	},
	[NATIONAL_DEX_JUMPLUFF] =
	{
		.categoryName = {_C, _o, _t, _t, _o, _n, _w, _e, _e, _d, _END, _SPACE},
		.height = 8,
		.weight = 30,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844987d,
		.unused = 38833,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 418,
		.trainerOffset = 65532,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8449746,
		.unusedDescription = (const u8*) 0x84497b1,
		.pokemonScale = 418,
		.pokemonOffset = 65532,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_AIPOM] =
	{
		.categoryName = {_L, _o, _n, _g, _SPACE, _T, _a, _i, _l, _END, _SPACE, _SPACE},
		.height = 8,
		.weight = 115,
<<<<<<< Updated upstream
		.description = (const u8*) 0x84498e9,
		.unused = 38934,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 363,
		.trainerOffset = 8,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x84497b2,
		.unusedDescription = (const u8*) 0x8449816,
		.pokemonScale = 363,
		.pokemonOffset = 8,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_SUNKERN] =
	{
		.categoryName = {_S, _e, _e, _d, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 3,
		.weight = 18,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844994d,
		.unused = 39041,
		.pokemonScale = 2116,
=======
		.description = (const u8*) 0x8449817,
		.unusedDescription = (const u8*) 0x8449881,
		.pokemonScale = 541,
>>>>>>> Stashed changes
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 65534,
	},
	[NATIONAL_DEX_SUNFLORA] =
	{
		.categoryName = {_S, _u, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 8,
		.weight = 85,
<<<<<<< Updated upstream
		.description = (const u8*) 0x84499b8,
		.unused = 39145,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 374,
		.trainerOffset = 12,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8449882,
		.unusedDescription = (const u8*) 0x84498e9,
		.pokemonScale = 374,
		.pokemonOffset = 12,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_YANMA] =
	{
		.categoryName = {_C, _l, _e, _a, _r, _SPACE, _W, _i, _n, _g, _END, _SPACE},
		.height = 12,
		.weight = 380,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8449a20,
		.unused = 39252,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 274,
		.trainerOffset = 65532,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x84498ea,
		.unusedDescription = (const u8*) 0x8449954,
		.pokemonScale = 274,
		.pokemonOffset = 65532,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_WOOPER] =
	{
		.categoryName = {_W, _a, _t, _e, _r, _SPACE, _F, _i, _s, _h, _END, _SPACE},
		.height = 4,
		.weight = 85,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8449a82,
		.unused = 39357,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 479,
		.trainerOffset = 20,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8449955,
		.unusedDescription = (const u8*) 0x84499bd,
		.pokemonScale = 479,
		.pokemonOffset = 20,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_QUAGSIRE] =
	{
		.categoryName = {_W, _a, _t, _e, _r, _SPACE, _F, _i, _s, _h, _END, _SPACE},
		.height = 14,
		.weight = 750,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8449ad7,
		.unused = 39463,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
=======
		.description = (const u8*) 0x84499be,
		.unusedDescription = (const u8*) 0x8449a27,
		.pokemonScale = 273,
		.pokemonOffset = 4,
>>>>>>> Stashed changes
		.trainerScale = 273,
		.trainerOffset = 65534,
	},
	[NATIONAL_DEX_ESPEON] =
	{
		.categoryName = {_S, _u, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 9,
		.weight = 265,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8449b42,
		.unused = 39562,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 363,
		.trainerOffset = 12,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8449a28,
		.unusedDescription = (const u8*) 0x8449a8a,
		.pokemonScale = 363,
		.pokemonOffset = 12,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_UMBREON] =
	{
		.categoryName = {_M, _o, _o, _n, _l, _i, _g, _h, _t, _END, _SPACE, _SPACE},
		.height = 10,
		.weight = 270,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8449b9e,
		.unused = 39660,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 317,
		.trainerOffset = 9,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8449a8b,
		.unusedDescription = (const u8*) 0x8449aec,
		.pokemonScale = 317,
		.pokemonOffset = 9,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_MURKROW] =
	{
		.categoryName = {_D, _a, _r, _k, _n, _e, _s, _s, _END, _SPACE, _SPACE, _SPACE},
		.height = 5,
		.weight = 21,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8449c07,
		.unused = 39758,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 401,
		.trainerOffset = 65528,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8449aed,
		.unusedDescription = (const u8*) 0x8449b4e,
		.pokemonScale = 401,
		.pokemonOffset = 65528,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_SLOWKING] =
	{
		.categoryName = {_R, _o, _y, _a, _l, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 20,
		.weight = 795,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8449c72,
		.unused = 39853,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 265,
		.trainerOffset = 65535,
		.unknown1 = 330,
		.unknown2 = 4,
=======
		.description = (const u8*) 0x8449b4f,
		.unusedDescription = (const u8*) 0x8449bad,
		.pokemonScale = 265,
		.pokemonOffset = 65535,
		.trainerScale = 330,
		.trainerOffset = 4,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_MISDREAVUS] =
	{
		.categoryName = {_S, _c, _r, _e, _e, _c, _h, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 7,
		.weight = 10,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8449cd1,
		.unused = 39960,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 407,
		.trainerOffset = 65528,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8449bae,
		.unusedDescription = (const u8*) 0x8449c18,
		.pokemonScale = 407,
		.pokemonOffset = 65528,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_UNOWN] =
	{
		.categoryName = {_S, _y, _m, _b, _o, _l, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 5,
		.weight = 50,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8449d3c,
		.unused = 40047,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 411,
		.trainerOffset = 2,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8449c19,
		.unusedDescription = (const u8*) 0x8449c6f,
		.pokemonScale = 411,
		.pokemonOffset = 2,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_WOBBUFFET] =
	{
		.categoryName = {_P, _a, _t, _i, _e, _n, _t, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 13,
		.weight = 285,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8449d93,
		.unused = 40148,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 274,
		.trainerOffset = 4,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8449c70,
		.unusedDescription = (const u8*) 0x8449cd4,
		.pokemonScale = 274,
		.pokemonOffset = 4,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_GIRAFARIG] =
	{
		.categoryName = {_L, _o, _n, _g, _SPACE, _N, _e, _c, _k, _END, _SPACE, _SPACE},
		.height = 15,
		.weight = 415,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8449df8,
		.unused = 40247,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 281,
		.trainerOffset = 2,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8449cd5,
		.unusedDescription = (const u8*) 0x8449d37,
		.pokemonScale = 281,
		.pokemonOffset = 2,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_PINECO] =
	{
		.categoryName = {_B, _a, _g, _w, _o, _r, _m, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 6,
		.weight = 72,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8449e5b,
		.unused = 40344,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 445,
		.trainerOffset = 2,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8449d38,
		.unusedDescription = (const u8*) 0x8449d98,
		.pokemonScale = 445,
		.pokemonOffset = 2,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_FORRETRESS] =
	{
		.categoryName = {_B, _a, _g, _w, _o, _r, _m, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 12,
		.weight = 1258,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8449ebc,
		.unused = 40450,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 293,
		.trainerOffset = 5,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8449d99,
		.unusedDescription = (const u8*) 0x8449e02,
		.pokemonScale = 293,
		.pokemonOffset = 5,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_DUNSPARCE] =
	{
		.categoryName = {_L, _a, _n, _d, _SPACE, _S, _n, _a, _k, _e, _END, _SPACE},
		.height = 15,
		.weight = 140,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8449f26,
		.unused = 40546,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 284,
		.trainerOffset = 15,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8449e03,
		.unusedDescription = (const u8*) 0x8449e62,
		.pokemonScale = 284,
		.pokemonOffset = 15,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_GLIGAR] =
	{
		.categoryName = {_F, _l, _y, _s, _c, _o, _r, _p, _i, _o, _n, _END},
		.height = 11,
		.weight = 648,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8449f86,
		.unused = 40648,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 350,
		.trainerOffset = 65535,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8449e63,
		.unusedDescription = (const u8*) 0x8449ec8,
		.pokemonScale = 350,
		.pokemonOffset = 65535,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_STEELIX] =
	{
		.categoryName = {_I, _r, _o, _n, _SPACE, _S, _n, _a, _k, _e, _END, _SPACE},
		.height = 92,
		.weight = 4000,
<<<<<<< Updated upstream
		.description = (const u8*) 0x8449fec,
		.unused = 40748,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 278,
		.trainerOffset = 65535,
		.unknown1 = 557,
		.unknown2 = 13,
=======
		.description = (const u8*) 0x8449ec9,
		.unusedDescription = (const u8*) 0x8449f2c,
		.pokemonScale = 278,
		.pokemonOffset = 65535,
		.trainerScale = 557,
		.trainerOffset = 13,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_SNUBBULL] =
	{
		.categoryName = {_F, _a, _i, _r, _y, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 6,
		.weight = 78,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844a052,
		.unused = 40850,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 465,
		.trainerOffset = 18,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x8449f2d,
		.unusedDescription = (const u8*) 0x8449f92,
		.pokemonScale = 465,
		.pokemonOffset = 18,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_GRANBULL] =
	{
		.categoryName = {_F, _a, _i, _r, _y, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 14,
		.weight = 487,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844a0b9,
		.unused = 40947,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
=======
		.description = (const u8*) 0x8449f93,
		.unusedDescription = (const u8*) 0x8449ff3,
		.pokemonScale = 256,
		.pokemonOffset = 3,
>>>>>>> Stashed changes
		.trainerScale = 256,
		.trainerOffset = 65534,
	},
	[NATIONAL_DEX_QWILFISH] =
	{
		.categoryName = {_B, _a, _l, _l, _o, _o, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 5,
		.weight = 39,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844a120,
		.unused = 41049,
		.pokemonScale = 2116,
=======
		.description = (const u8*) 0x8449ff4,
		.unusedDescription = (const u8*) 0x844a059,
		.pokemonScale = 430,
>>>>>>> Stashed changes
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 65534,
	},
	[NATIONAL_DEX_SCIZOR] =
	{
		.categoryName = {_S, _c, _i, _s, _s, _o, _r, _s, _END, _SPACE, _SPACE, _SPACE},
		.height = 18,
		.weight = 1180,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844a185,
		.unused = 41152,
		.pokemonScale = 2116,
=======
		.description = (const u8*) 0x844a05a,
		.unusedDescription = (const u8*) 0x844a0c0,
		.pokemonScale = 282,
>>>>>>> Stashed changes
		.pokemonOffset = 0,
		.trainerScale = 282,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_SHUCKLE] =
	{
		.categoryName = {_M, _o, _l, _d, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 6,
		.weight = 205,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844a1e8,
		.unused = 41248,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 485,
		.trainerOffset = 16,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844a0c1,
		.unusedDescription = (const u8*) 0x844a120,
		.pokemonScale = 485,
		.pokemonOffset = 16,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_HERACROSS] =
	{
		.categoryName = {_S, _i, _n, _g, _l, _e, _SPACE, _H, _o, _r, _n, _END},
		.height = 15,
		.weight = 540,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844a254,
		.unused = 41347,
		.pokemonScale = 2116,
=======
		.description = (const u8*) 0x844a121,
		.unusedDescription = (const u8*) 0x844a183,
		.pokemonScale = 285,
>>>>>>> Stashed changes
		.pokemonOffset = 0,
		.trainerScale = 283,
		.trainerOffset = 65534,
	},
	[NATIONAL_DEX_SNEASEL] =
	{
		.categoryName = {_S, _h, _a, _r, _p, _SPACE, _C, _l, _a, _w, _END, _SPACE},
		.height = 9,
		.weight = 280,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844a2b5,
		.unused = 41445,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 413,
		.trainerOffset = 65533,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844a184,
		.unusedDescription = (const u8*) 0x844a1e5,
		.pokemonScale = 413,
		.pokemonOffset = 65533,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_TEDDIURSA] =
	{
		.categoryName = {_L, _i, _t, _t, _l, _e, _SPACE, _B, _e, _a, _r, _END},
		.height = 6,
		.weight = 88,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844a318,
		.unused = 41546,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 455,
		.trainerOffset = 17,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844a1e6,
		.unusedDescription = (const u8*) 0x844a24a,
		.pokemonScale = 455,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_URSARING] =
	{
		.categoryName = {_H, _i, _b, _e, _r, _n, _a, _t, _o, _r, _END, _SPACE},
		.height = 18,
		.weight = 1258,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844a378,
		.unused = 41645,
		.pokemonScale = 2116,
=======
		.description = (const u8*) 0x844a24b,
		.unusedDescription = (const u8*) 0x844a2ad,
		.pokemonScale = 275,
>>>>>>> Stashed changes
		.pokemonOffset = 0,
		.trainerScale = 280,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_SLUGMA] =
	{
		.categoryName = {_L, _a, _v, _a, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 7,
		.weight = 350,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844a3db,
		.unused = 41746,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 329,
		.trainerOffset = 14,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844a2ae,
		.unusedDescription = (const u8*) 0x844a312,
		.pokemonScale = 329,
		.pokemonOffset = 14,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_MAGCARGO] =
	{
		.categoryName = {_L, _a, _v, _a, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 8,
		.weight = 550,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844a43e,
		.unused = 41850,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 332,
		.trainerOffset = 14,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844a313,
		.unusedDescription = (const u8*) 0x844a37a,
		.pokemonScale = 332,
		.pokemonOffset = 14,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_SWINUB] =
	{
		.categoryName = {_P, _i, _g, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 4,
		.weight = 65,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844a498,
		.unused = 41940,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 324,
		.trainerOffset = 19,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844a37b,
		.unusedDescription = (const u8*) 0x844a3d4,
		.pokemonScale = 324,
		.pokemonOffset = 19,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_PILOSWINE] =
	{
		.categoryName = {_S, _w, _i, _n, _e, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 11,
		.weight = 558,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844a4f2,
		.unused = 42040,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 306,
		.trainerOffset = 8,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844a3d5,
		.unusedDescription = (const u8*) 0x844a438,
		.pokemonScale = 306,
		.pokemonOffset = 8,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_CORSOLA] =
	{
		.categoryName = {_C, _o, _r, _a, _l, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 6,
		.weight = 50,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844a556,
		.unused = 42138,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 410,
		.trainerOffset = 15,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844a439,
		.unusedDescription = (const u8*) 0x844a49a,
		.pokemonScale = 410,
		.pokemonOffset = 15,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_REMORAID] =
	{
		.categoryName = {_J, _e, _t, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 6,
		.weight = 120,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844a5b8,
		.unused = 42240,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 316,
		.trainerOffset = 4,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844a49b,
		.unusedDescription = (const u8*) 0x844a500,
		.pokemonScale = 316,
		.pokemonOffset = 4,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_OCTILLERY] =
	{
		.categoryName = {_J, _e, _t, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 9,
		.weight = 285,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844a61e,
		.unused = 42344,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 296,
		.trainerOffset = 9,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844a501,
		.unusedDescription = (const u8*) 0x844a568,
		.pokemonScale = 296,
		.pokemonOffset = 9,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_DELIBIRD] =
	{
		.categoryName = {_D, _e, _l, _i, _v, _e, _r, _y, _END, _SPACE, _SPACE, _SPACE},
		.height = 9,
		.weight = 160,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844a686,
		.unused = 42448,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 293,
		.trainerOffset = 8,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844a569,
		.unusedDescription = (const u8*) 0x844a5d0,
		.pokemonScale = 293,
		.pokemonOffset = 8,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_MANTINE] =
	{
		.categoryName = {_K, _i, _t, _e, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 21,
		.weight = 2200,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844a6e5,
		.unused = 42556,
		.pokemonScale = 2116,
=======
		.description = (const u8*) 0x844a5d1,
		.unusedDescription = (const u8*) 0x844a63c,
		.pokemonScale = 275,
>>>>>>> Stashed changes
		.pokemonOffset = 0,
		.trainerScale = 360,
		.trainerOffset = 6,
	},
	[NATIONAL_DEX_SKARMORY] =
	{
		.categoryName = {_A, _r, _m, _o, _r, _SPACE, _B, _i, _r, _d, _END, _SPACE},
		.height = 17,
		.weight = 505,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844a751,
		.unused = 42664,
		.pokemonScale = 2116,
=======
		.description = (const u8*) 0x844a63d,
		.unusedDescription = (const u8*) 0x844a6a8,
		.pokemonScale = 285,
>>>>>>> Stashed changes
		.pokemonOffset = 0,
		.trainerScale = 276,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_HOUNDOUR] =
	{
		.categoryName = {_D, _a, _r, _k, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 6,
		.weight = 108,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844a7af,
		.unused = 42757,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 393,
		.trainerOffset = 15,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844a6a9,
		.unusedDescription = (const u8*) 0x844a705,
		.pokemonScale = 393,
		.pokemonOffset = 15,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_HOUNDOOM] =
	{
		.categoryName = {_D, _a, _r, _k, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 14,
		.weight = 350,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844a80c,
		.unused = 42852,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
=======
		.description = (const u8*) 0x844a706,
		.unusedDescription = (const u8*) 0x844a764,
		.pokemonScale = 256,
		.pokemonOffset = 2,
>>>>>>> Stashed changes
		.trainerScale = 256,
		.trainerOffset = 65534,
	},
	[NATIONAL_DEX_KINGDRA] =
	{
		.categoryName = {_D, _r, _a, _g, _o, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 18,
		.weight = 1520,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844a870,
		.unused = 42951,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 257,
=======
		.description = (const u8*) 0x844a765,
		.unusedDescription = (const u8*) 0x844a7c7,
		.pokemonScale = 257,
		.pokemonOffset = 1,
		.trainerScale = 293,
>>>>>>> Stashed changes
		.trainerOffset = 1,
	},
	[NATIONAL_DEX_PHANPY] =
	{
		.categoryName = {_L, _o, _n, _g, _SPACE, _N, _o, _s, _e, _END, _SPACE, _SPACE},
		.height = 5,
		.weight = 335,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844a8d3,
		.unused = 43051,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 465,
		.trainerOffset = 20,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844a7c8,
		.unusedDescription = (const u8*) 0x844a82b,
		.pokemonScale = 465,
		.pokemonOffset = 20,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_DONPHAN] =
	{
		.categoryName = {_A, _r, _m, _o, _r, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 11,
		.weight = 1200,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844a937,
		.unused = 43152,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 313,
		.trainerOffset = 9,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844a82c,
		.unusedDescription = (const u8*) 0x844a890,
		.pokemonScale = 313,
		.pokemonOffset = 9,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_PORYGON2] =
	{
		.categoryName = {_V, _i, _r, _t, _u, _a, _l, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 6,
		.weight = 325,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844a99e,
		.unused = 43246,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 320,
		.trainerOffset = 15,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844a891,
		.unusedDescription = (const u8*) 0x844a8ee,
		.pokemonScale = 320,
		.pokemonOffset = 15,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_STANTLER] =
	{
		.categoryName = {_B, _i, _g, _SPACE, _H, _o, _r, _n, _END, _SPACE, _SPACE, _SPACE},
		.height = 14,
		.weight = 712,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844aa04,
		.unused = 43346,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
=======
		.description = (const u8*) 0x844a8ef,
		.unusedDescription = (const u8*) 0x844a952,
		.pokemonScale = 277,
		.pokemonOffset = 65535,
>>>>>>> Stashed changes
		.trainerScale = 277,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_SMEARGLE] =
	{
		.categoryName = {_P, _a, _i, _n, _t, _e, _r, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 12,
		.weight = 580,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844aa68,
		.unused = 43441,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 287,
		.trainerOffset = 5,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844a953,
		.unusedDescription = (const u8*) 0x844a9b1,
		.pokemonScale = 287,
		.pokemonOffset = 5,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_TYROGUE] =
	{
		.categoryName = {_S, _c, _u, _f, _f, _l, _e, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 7,
		.weight = 210,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844aac7,
		.unused = 43542,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 292,
		.trainerOffset = 8,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844a9b2,
		.unusedDescription = (const u8*) 0x844aa16,
		.pokemonScale = 292,
		.pokemonOffset = 8,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_HITMONTOP] =
	{
		.categoryName = {_H, _a, _n, _d, _s, _t, _a, _n, _d, _END, _SPACE, _SPACE},
		.height = 14,
		.weight = 480,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844ab2c,
		.unused = 43641,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 2,
		.unknown1 = 257,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844aa17,
		.unusedDescription = (const u8*) 0x844aa79,
		.pokemonScale = 256,
		.pokemonOffset = 2,
		.trainerScale = 257,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_SMOOCHUM] =
	{
		.categoryName = {_K, _i, _s, _s, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 4,
		.weight = 60,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844ab8f,
		.unused = 43733,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 440,
		.trainerOffset = 19,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844aa7a,
		.unusedDescription = (const u8*) 0x844aad5,
		.pokemonScale = 440,
		.pokemonOffset = 19,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_ELEKID] =
	{
		.categoryName = {_E, _l, _e, _c, _t, _r, _i, _c, _END, _SPACE, _SPACE, _SPACE},
		.height = 6,
		.weight = 235,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844abeb,
		.unused = 43824,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 363,
		.trainerOffset = 13,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844aad6,
		.unusedDescription = (const u8*) 0x844ab30,
		.pokemonScale = 363,
		.pokemonOffset = 13,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_MAGBY] =
	{
		.categoryName = {_L, _i, _v, _e, _SPACE, _C, _o, _a, _l, _END, _SPACE, _SPACE},
		.height = 7,
		.weight = 214,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844ac46,
		.unused = 43919,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 284,
		.trainerOffset = 11,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844ab31,
		.unusedDescription = (const u8*) 0x844ab8f,
		.pokemonScale = 284,
		.pokemonOffset = 11,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_MILTANK] =
	{
		.categoryName = {_M, _i, _l, _k, _SPACE, _C, _o, _w, _END, _SPACE, _SPACE, _SPACE},
		.height = 12,
		.weight = 755,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844acb3,
		.unused = 44009,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 280,
		.trainerOffset = 3,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844ab90,
		.unusedDescription = (const u8*) 0x844abe9,
		.pokemonScale = 280,
		.pokemonOffset = 3,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_BLISSEY] =
	{
		.categoryName = {_H, _a, _p, _p, _i, _n, _e, _s, _s, _END, _SPACE, _SPACE},
		.height = 15,
		.weight = 468,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844ad0d,
		.unused = 44116,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 256,
=======
		.description = (const u8*) 0x844abea,
		.unusedDescription = (const u8*) 0x844ac54,
		.pokemonScale = 256,
		.pokemonOffset = 3,
		.trainerScale = 310,
>>>>>>> Stashed changes
		.trainerOffset = 3,
	},
	[NATIONAL_DEX_RAIKOU] =
	{
		.categoryName = {_T, _h, _u, _n, _d, _e, _r, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 19,
		.weight = 1780,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844ad78,
		.unused = 44207,
		.pokemonScale = 2116,
=======
		.description = (const u8*) 0x844ac55,
		.unusedDescription = (const u8*) 0x844acaf,
		.pokemonScale = 283,
>>>>>>> Stashed changes
		.pokemonOffset = 0,
		.trainerScale = 359,
		.trainerOffset = 6,
	},
	[NATIONAL_DEX_ENTEI] =
	{
		.categoryName = {_V, _o, _l, _c, _a, _n, _o, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 21,
		.weight = 1980,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844add3,
		.unused = 44308,
		.pokemonScale = 2116,
=======
		.description = (const u8*) 0x844acb0,
		.unusedDescription = (const u8*) 0x844ad14,
		.pokemonScale = 283,
>>>>>>> Stashed changes
		.pokemonOffset = 0,
		.trainerScale = 370,
		.trainerOffset = 7,
	},
	[NATIONAL_DEX_SUICUNE] =
	{
		.categoryName = {_A, _u, _r, _o, _r, _a, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 20,
		.weight = 1870,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844ae38,
		.unused = 44412,
		.pokemonScale = 2116,
=======
		.description = (const u8*) 0x844ad15,
		.unusedDescription = (const u8*) 0x844ad7c,
		.pokemonScale = 286,
>>>>>>> Stashed changes
		.pokemonOffset = 0,
		.trainerScale = 371,
		.trainerOffset = 7,
	},
	[NATIONAL_DEX_LARVITAR] =
	{
		.categoryName = {_R, _o, _c, _k, _SPACE, _S, _k, _i, _n, _END, _SPACE, _SPACE},
		.height = 6,
		.weight = 720,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844aea0,
		.unused = 44509,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 472,
		.trainerOffset = 16,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844ad7d,
		.unusedDescription = (const u8*) 0x844addd,
		.pokemonScale = 472,
		.pokemonOffset = 16,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_PUPITAR] =
	{
		.categoryName = {_H, _a, _r, _d, _SPACE, _S, _h, _e, _l, _l, _END, _SPACE},
		.height = 12,
		.weight = 1520,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844af01,
		.unused = 44609,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 292,
		.trainerOffset = 8,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844adde,
		.unusedDescription = (const u8*) 0x844ae41,
		.pokemonScale = 292,
		.pokemonOffset = 8,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_TYRANITAR] =
	{
		.categoryName = {_A, _r, _m, _o, _r, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 20,
		.weight = 2020,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844af65,
		.unused = 44714,
		.pokemonScale = 2116,
=======
		.description = (const u8*) 0x844ae42,
		.unusedDescription = (const u8*) 0x844aeaa,
		.pokemonScale = 285,
>>>>>>> Stashed changes
		.pokemonOffset = 0,
		.trainerScale = 383,
		.trainerOffset = 7,
	},
	[NATIONAL_DEX_LUGIA] =
	{
		.categoryName = {_D, _i, _v, _i, _n, _g, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 52,
		.weight = 2160,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844afce,
		.unused = 44815,
		.pokemonScale = 2116,
=======
		.description = (const u8*) 0x844aeab,
		.unusedDescription = (const u8*) 0x844af0f,
		.pokemonScale = 283,
>>>>>>> Stashed changes
		.pokemonOffset = 0,
		.trainerScale = 742,
		.trainerOffset = 18,
	},
	[NATIONAL_DEX_HO_OH] =
	{
		.categoryName = {_R, _a, _i, _n, _b, _o, _w, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 38,
		.weight = 1990,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844b033,
		.unused = 44918,
		.pokemonScale = 2116,
=======
		.description = (const u8*) 0x844af10,
		.unusedDescription = (const u8*) 0x844af76,
		.pokemonScale = 283,
>>>>>>> Stashed changes
		.pokemonOffset = 0,
		.trainerScale = 620,
		.trainerOffset = 16,
	},
	[NATIONAL_DEX_CELEBI] =
	{
		.categoryName = {_T, _i, _m, _e, _SPACE, _T, _r, _a, _v, _e, _l, _END},
		.height = 6,
		.weight = 50,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844b09a,
		.unused = 45022,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 393,
		.trainerOffset = 65526,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844af77,
		.unusedDescription = (const u8*) 0x844afde,
		.pokemonScale = 393,
		.pokemonOffset = 65526,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_TREECKO] =
	{
		.categoryName = {_W, _o, _o, _d, _SPACE, _G, _e, _c, _k, _o, _END, _SPACE},
		.height = 5,
		.weight = 50,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844b102,
		.unused = 45126,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 541,
		.trainerOffset = 17,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844afdf,
		.unusedDescription = (const u8*) 0x844b046,
		.pokemonScale = 541,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_GROVYLE] =
	{
		.categoryName = {_W, _o, _o, _d, _SPACE, _G, _e, _c, _k, _o, _END, _SPACE},
		.height = 9,
		.weight = 216,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844b16e,
		.unused = 45221,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 360,
		.trainerOffset = 5,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844b047,
		.unusedDescription = (const u8*) 0x844b0a5,
		.pokemonScale = 360,
		.pokemonOffset = 5,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_SCEPTILE] =
	{
		.categoryName = {_F, _o, _r, _e, _s, _t, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 17,
		.weight = 522,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844b1c8,
		.unused = 45320,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 282,
		.trainerOffset = 65535,
		.unknown1 = 313,
		.unknown2 = 3,
=======
		.description = (const u8*) 0x844b0a6,
		.unusedDescription = (const u8*) 0x844b108,
		.pokemonScale = 282,
		.pokemonOffset = 65535,
		.trainerScale = 313,
		.trainerOffset = 3,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_TORCHIC] =
	{
		.categoryName = {_C, _h, _i, _c, _k, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 4,
		.weight = 25,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844b234,
		.unused = 45412,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 566,
		.trainerOffset = 18,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844b109,
		.unusedDescription = (const u8*) 0x844b164,
		.pokemonScale = 566,
		.pokemonOffset = 18,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_COMBUSKEN] =
	{
		.categoryName = {_Y, _o, _u, _n, _g, _SPACE, _F, _o, _w, _l, _END, _SPACE},
		.height = 9,
		.weight = 195,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844b290,
		.unused = 45509,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 343,
		.trainerOffset = 5,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844b165,
		.unusedDescription = (const u8*) 0x844b1c5,
		.pokemonScale = 343,
		.pokemonOffset = 5,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_BLAZIKEN] =
	{
		.categoryName = {_B, _l, _a, _z, _e, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 19,
		.weight = 520,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844b2f4,
		.unused = 45618,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 275,
		.trainerOffset = 65535,
		.unknown1 = 314,
		.unknown2 = 3,
=======
		.description = (const u8*) 0x844b1c6,
		.unusedDescription = (const u8*) 0x844b232,
		.pokemonScale = 275,
		.pokemonOffset = 65535,
		.trainerScale = 314,
		.trainerOffset = 3,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_MUDKIP] =
	{
		.categoryName = {_M, _u, _d, _SPACE, _F, _i, _s, _h, _END, _SPACE, _SPACE, _SPACE},
		.height = 4,
		.weight = 76,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844b364,
		.unused = 45726,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 535,
		.trainerOffset = 19,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844b233,
		.unusedDescription = (const u8*) 0x844b29e,
		.pokemonScale = 535,
		.pokemonOffset = 19,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_MARSHTOMP] =
	{
		.categoryName = {_M, _u, _d, _SPACE, _F, _i, _s, _h, _END, _SPACE, _SPACE, _SPACE},
		.height = 7,
		.weight = 280,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844b3d0,
		.unused = 45834,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 340,
		.trainerOffset = 7,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844b29f,
		.unusedDescription = (const u8*) 0x844b30a,
		.pokemonScale = 340,
		.pokemonOffset = 7,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_SWAMPERT] =
	{
		.categoryName = {_M, _u, _d, _SPACE, _F, _i, _s, _h, _END, _SPACE, _SPACE, _SPACE},
		.height = 15,
		.weight = 819,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844b439,
		.unused = 45945,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 276,
		.trainerOffset = 65535,
		.unknown1 = 282,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844b30b,
		.unusedDescription = (const u8*) 0x844b379,
		.pokemonScale = 276,
		.pokemonOffset = 65535,
		.trainerScale = 282,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_POOCHYENA] =
	{
		.categoryName = {_B, _i, _t, _e, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 5,
		.weight = 136,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844b4a8,
		.unused = 46042,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 481,
		.trainerOffset = 18,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844b37a,
		.unusedDescription = (const u8*) 0x844b3da,
		.pokemonScale = 481,
		.pokemonOffset = 18,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_MIGHTYENA] =
	{
		.categoryName = {_B, _i, _t, _e, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 10,
		.weight = 370,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844b519,
		.unused = 46161,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 359,
		.trainerOffset = 9,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844b3db,
		.unusedDescription = (const u8*) 0x844b451,
		.pokemonScale = 359,
		.pokemonOffset = 9,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_ZIGZAGOON] =
	{
		.categoryName = {_T, _i, _n, _y, _r, _a, _c, _c, _o, _o, _n, _END},
		.height = 4,
		.weight = 175,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844b590,
		.unused = 46261,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 560,
		.trainerOffset = 21,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844b452,
		.unusedDescription = (const u8*) 0x844b4b5,
		.pokemonScale = 560,
		.pokemonOffset = 21,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_LINOONE] =
	{
		.categoryName = {_R, _u, _s, _h, _i, _n, _g, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 5,
		.weight = 325,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844b5f4,
		.unused = 46381,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 321,
		.trainerOffset = 5,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844b4b6,
		.unusedDescription = (const u8*) 0x844b52d,
		.pokemonScale = 321,
		.pokemonOffset = 5,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_WURMPLE] =
	{
		.categoryName = {_W, _o, _r, _m, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 3,
		.weight = 36,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844b664,
		.unused = 46495,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 711,
		.trainerOffset = 22,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844b52e,
		.unusedDescription = (const u8*) 0x844b59f,
		.pokemonScale = 711,
		.pokemonOffset = 22,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_SILCOON] =
	{
		.categoryName = {_C, _o, _c, _o, _o, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 6,
		.weight = 100,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844b6d6,
		.unused = 46599,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 431,
		.trainerOffset = 19,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844b5a0,
		.unusedDescription = (const u8*) 0x844b607,
		.pokemonScale = 431,
		.pokemonOffset = 19,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_BEAUTIFLY] =
	{
		.categoryName = {_B, _u, _t, _t, _e, _r, _f, _l, _y, _END, _SPACE, _SPACE},
		.height = 10,
		.weight = 284,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844b74c,
		.unused = 46702,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 298,
		.trainerOffset = 65535,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844b608,
		.unusedDescription = (const u8*) 0x844b66e,
		.pokemonScale = 298,
		.pokemonOffset = 65535,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_CASCOON] =
	{
		.categoryName = {_C, _o, _c, _o, _o, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 7,
		.weight = 115,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844b7b3,
		.unused = 46798,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 391,
		.trainerOffset = 19,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844b66f,
		.unusedDescription = (const u8*) 0x844b6ce,
		.pokemonScale = 391,
		.pokemonOffset = 19,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_DUSTOX] =
	{
		.categoryName = {_P, _o, _i, _s, _o, _n, _SPACE, _M, _o, _t, _h, _END},
		.height = 12,
		.weight = 316,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844b814,
		.unused = 46911,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 269,
		.trainerOffset = 1,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844b6cf,
		.unusedDescription = (const u8*) 0x844b73f,
		.pokemonScale = 269,
		.pokemonOffset = 1,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_LOTAD] =
	{
		.categoryName = {_W, _a, _t, _e, _r, _SPACE, _W, _e, _e, _d, _END, _SPACE},
		.height = 5,
		.weight = 26,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844b885,
		.unused = 47016,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 406,
		.trainerOffset = 17,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844b740,
		.unusedDescription = (const u8*) 0x844b7a8,
		.pokemonScale = 406,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_LOMBRE] =
	{
		.categoryName = {_J, _o, _l, _l, _y, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 12,
		.weight = 325,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844b8ee,
		.unused = 47119,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 277,
		.trainerOffset = 7,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844b7a9,
		.unusedDescription = (const u8*) 0x844b80f,
		.pokemonScale = 277,
		.pokemonOffset = 7,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_LUDICOLO] =
	{
		.categoryName = {_C, _a, _r, _e, _f, _r, _e, _e, _END, _SPACE, _SPACE, _SPACE},
		.height = 15,
		.weight = 550,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844b965,
		.unused = 47222,
		.pokemonScale = 2116,
=======
		.description = (const u8*) 0x844b810,
		.unusedDescription = (const u8*) 0x844b876,
		.pokemonScale = 283,
>>>>>>> Stashed changes
		.pokemonOffset = 0,
		.trainerScale = 282,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_SEEDOT] =
	{
		.categoryName = {_A, _c, _o, _r, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 5,
		.weight = 40,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844b9bf,
		.unused = 47340,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 472,
		.trainerOffset = 20,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844b877,
		.unusedDescription = (const u8*) 0x844b8ec,
		.pokemonScale = 472,
		.pokemonOffset = 20,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_NUZLEAF] =
	{
		.categoryName = {_W, _i, _l, _y, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 10,
		.weight = 280,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844ba35,
		.unused = 47445,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 299,
		.trainerOffset = 8,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844b8ed,
		.unusedDescription = (const u8*) 0x844b955,
		.pokemonScale = 299,
		.pokemonOffset = 8,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_SHIFTRY] =
	{
		.categoryName = {_W, _i, _c, _k, _e, _d, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 13,
		.weight = 596,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844ba9e,
		.unused = 47549,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 290,
		.trainerOffset = 2,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844b956,
		.unusedDescription = (const u8*) 0x844b9bd,
		.pokemonScale = 290,
		.pokemonOffset = 2,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_TAILLOW] =
	{
		.categoryName = {_T, _i, _n, _y, _s, _w, _a, _l, _l, _o, _w, _END},
		.height = 3,
		.weight = 23,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844bb06,
		.unused = 47665,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 465,
		.trainerOffset = 20,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844b9be,
		.unusedDescription = (const u8*) 0x844ba31,
		.pokemonScale = 465,
		.pokemonOffset = 20,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_SWELLOW] =
	{
		.categoryName = {_S, _w, _a, _l, _l, _o, _w, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 7,
		.weight = 198,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844bb6f,
		.unused = 47777,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 428,
		.trainerOffset = 13,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844ba32,
		.unusedDescription = (const u8*) 0x844baa1,
		.pokemonScale = 428,
		.pokemonOffset = 13,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_WINGULL] =
	{
		.categoryName = {_S, _e, _a, _g, _u, _l, _l, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 6,
		.weight = 95,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844bbdf,
		.unused = 47881,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 295,
=======
		.description = (const u8*) 0x844baa2,
		.unusedDescription = (const u8*) 0x844bb09,
		.pokemonScale = 295,
		.pokemonOffset = 65534,
		.trainerScale = 256,
>>>>>>> Stashed changes
		.trainerOffset = 65534,
	},
	[NATIONAL_DEX_PELIPPER] =
	{
		.categoryName = {_W, _a, _t, _e, _r, _SPACE, _B, _i, _r, _d, _END, _SPACE},
		.height = 12,
		.weight = 280,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844bc40,
		.unused = 47989,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 288,
		.trainerOffset = 1,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844bb0a,
		.unusedDescription = (const u8*) 0x844bb75,
		.pokemonScale = 288,
		.pokemonOffset = 1,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_RALTS] =
	{
		.categoryName = {_F, _e, _e, _l, _i, _n, _g, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 4,
		.weight = 66,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844bcac,
		.unused = 48095,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 457,
		.trainerOffset = 18,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844bb76,
		.unusedDescription = (const u8*) 0x844bbdf,
		.pokemonScale = 457,
		.pokemonOffset = 18,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_KIRLIA] =
	{
		.categoryName = {_E, _m, _o, _t, _i, _o, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 8,
		.weight = 202,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844bd0a,
		.unused = 48191,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 354,
		.trainerOffset = 10,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844bbe0,
		.unusedDescription = (const u8*) 0x844bc3f,
		.pokemonScale = 354,
		.pokemonOffset = 10,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_GARDEVOIR] =
	{
		.categoryName = {_E, _m, _b, _r, _a, _c, _e, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 16,
		.weight = 484,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844bd7b,
		.unused = 48294,
		.pokemonScale = 2116,
=======
		.description = (const u8*) 0x844bc40,
		.unusedDescription = (const u8*) 0x844bca6,
		.pokemonScale = 277,
>>>>>>> Stashed changes
		.pokemonOffset = 0,
		.trainerScale = 276,
		.trainerOffset = 65535,
	},
	[NATIONAL_DEX_SURSKIT] =
	{
		.categoryName = {_P, _o, _n, _d, _SPACE, _S, _k, _a, _t, _e, _r, _END},
		.height = 5,
		.weight = 17,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844bdd7,
		.unused = 48389,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 375,
		.trainerOffset = 17,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844bca7,
		.unusedDescription = (const u8*) 0x844bd05,
		.pokemonScale = 375,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_MASQUERAIN] =
	{
		.categoryName = {_E, _y, _e, _b, _a, _l, _l, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 8,
		.weight = 36,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844be36,
		.unused = 48508,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 378,
		.trainerOffset = 65535,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844bd06,
		.unusedDescription = (const u8*) 0x844bd7c,
		.pokemonScale = 378,
		.pokemonOffset = 65535,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_SHROOMISH] =
	{
		.categoryName = {_M, _u, _s, _h, _r, _o, _o, _m, _END, _SPACE, _SPACE, _SPACE},
		.height = 4,
		.weight = 45,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844bead,
		.unused = 48618,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 513,
		.trainerOffset = 20,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844bd7d,
		.unusedDescription = (const u8*) 0x844bdea,
		.pokemonScale = 513,
		.pokemonOffset = 20,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_BRELOOM] =
	{
		.categoryName = {_M, _u, _s, _h, _r, _o, _o, _m, _END, _SPACE, _SPACE, _SPACE},
		.height = 12,
		.weight = 392,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844bf1b,
		.unused = 48727,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 324,
		.trainerOffset = 6,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844bdeb,
		.unusedDescription = (const u8*) 0x844be57,
		.pokemonScale = 324,
		.pokemonOffset = 6,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_SLAKOTH] =
	{
		.categoryName = {_S, _l, _a, _c, _k, _e, _r, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 8,
		.weight = 240,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844bf88,
		.unused = 48831,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 291,
		.trainerOffset = 16,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844be58,
		.unusedDescription = (const u8*) 0x844bebf,
		.pokemonScale = 291,
		.pokemonOffset = 16,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_VIGOROTH] =
	{
		.categoryName = {_W, _i, _l, _d, _SPACE, _M, _o, _n, _k, _e, _y, _END},
		.height = 14,
		.weight = 465,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844bfe4,
		.unused = 48928,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 301,
		.trainerOffset = 1,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844bec0,
		.unusedDescription = (const u8*) 0x844bf20,
		.pokemonScale = 301,
		.pokemonOffset = 1,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_SLAKING] =
	{
		.categoryName = {_L, _a, _z, _y, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 20,
		.weight = 1305,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844c048,
		.unused = 49050,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 277,
		.trainerOffset = 5,
		.unknown1 = 326,
		.unknown2 = 3,
=======
		.description = (const u8*) 0x844bf21,
		.unusedDescription = (const u8*) 0x844bf9a,
		.pokemonScale = 277,
		.pokemonOffset = 5,
		.trainerScale = 326,
		.trainerOffset = 3,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_NINCADA] =
	{
		.categoryName = {_T, _r, _a, _i, _n, _e, _e, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 5,
		.weight = 55,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844c0c2,
		.unused = 49145,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 405,
		.trainerOffset = 20,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844bf9b,
		.unusedDescription = (const u8*) 0x844bff9,
		.pokemonScale = 405,
		.pokemonOffset = 20,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_NINJASK] =
	{
		.categoryName = {_N, _i, _n, _j, _a, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 8,
		.weight = 120,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844c123,
		.unused = 49245,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 383,
		.trainerOffset = 65527,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844bffa,
		.unusedDescription = (const u8*) 0x844c05d,
		.pokemonScale = 383,
		.pokemonOffset = 65527,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_SHEDINJA] =
	{
		.categoryName = {_S, _h, _e, _d, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 8,
		.weight = 12,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844c187,
		.unused = 49330,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 372,
		.trainerOffset = 65528,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844c05e,
		.unusedDescription = (const u8*) 0x844c0b2,
		.pokemonScale = 372,
		.pokemonOffset = 65528,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_WHISMUR] =
	{
		.categoryName = {_W, _h, _i, _s, _p, _e, _r, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 6,
		.weight = 163,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844c1dc,
		.unused = 49436,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 373,
		.trainerOffset = 16,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844c0b3,
		.unusedDescription = (const u8*) 0x844c11c,
		.pokemonScale = 373,
		.pokemonOffset = 16,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_LOUDRED] =
	{
		.categoryName = {_B, _i, _g, _SPACE, _V, _o, _i, _c, _e, _END, _SPACE, _SPACE},
		.height = 10,
		.weight = 405,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844c246,
		.unused = 49533,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 356,
		.trainerOffset = 8,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844c11d,
		.unusedDescription = (const u8*) 0x844c17d,
		.pokemonScale = 356,
		.pokemonOffset = 8,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_EXPLOUD] =
	{
		.categoryName = {_L, _o, _u, _d, _SPACE, _N, _o, _i, _s, _e, _END, _SPACE},
		.height = 15,
		.weight = 840,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844c2a7,
		.unused = 49652,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 284,
		.trainerOffset = 1,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844c17e,
		.unusedDescription = (const u8*) 0x844c1f4,
		.pokemonScale = 284,
		.pokemonOffset = 1,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_MAKUHITA] =
	{
		.categoryName = {_G, _u, _t, _s, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 10,
		.weight = 864,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844c31e,
		.unused = 49757,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
=======
		.description = (const u8*) 0x844c1f5,
		.unusedDescription = (const u8*) 0x844c25d,
		.pokemonScale = 256,
		.pokemonOffset = 9,
>>>>>>> Stashed changes
		.trainerScale = 256,
		.trainerOffset = 65534,
	},
	[NATIONAL_DEX_HARIYAMA] =
	{
		.categoryName = {_A, _r, _m, _SPACE, _T, _h, _r, _u, _s, _t, _END, _SPACE},
		.height = 23,
		.weight = 2538,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844c382,
		.unused = 49857,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 268,
		.trainerOffset = 65535,
		.unknown1 = 375,
		.unknown2 = 6,
=======
		.description = (const u8*) 0x844c25e,
		.unusedDescription = (const u8*) 0x844c2c1,
		.pokemonScale = 268,
		.pokemonOffset = 65535,
		.trainerScale = 375,
		.trainerOffset = 6,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_AZURILL] =
	{
		.categoryName = {_P, _o, _l, _k, _a, _SPACE, _D, _o, _t, _END, _SPACE, _SPACE},
		.height = 2,
		.weight = 20,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844c3e8,
		.unused = 49970,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 603,
		.trainerOffset = 21,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844c2c2,
		.unusedDescription = (const u8*) 0x844c332,
		.pokemonScale = 603,
		.pokemonOffset = 21,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_NOSEPASS] =
	{
		.categoryName = {_C, _o, _m, _p, _a, _s, _s, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 10,
		.weight = 970,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844c459,
		.unused = 50063,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 9,
		.unknown1 = 289,
		.unknown2 = 1,
=======
		.description = (const u8*) 0x844c333,
		.unusedDescription = (const u8*) 0x844c38f,
		.pokemonScale = 256,
		.pokemonOffset = 9,
		.trainerScale = 289,
		.trainerOffset = 1,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_SKITTY] =
	{
		.categoryName = {_K, _i, _t, _t, _e, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 6,
		.weight = 110,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844c4b6,
		.unused = 50176,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 492,
		.trainerOffset = 18,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844c390,
		.unusedDescription = (const u8*) 0x844c400,
		.pokemonScale = 492,
		.pokemonOffset = 18,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_DELCATTY] =
	{
		.categoryName = {_P, _r, _i, _m, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 11,
		.weight = 326,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844c527,
		.unused = 50280,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 322,
		.trainerOffset = 9,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844c401,
		.unusedDescription = (const u8*) 0x844c468,
		.pokemonScale = 322,
		.pokemonOffset = 9,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_SABLEYE] =
	{
		.categoryName = {_D, _a, _r, _k, _n, _e, _s, _s, _END, _SPACE, _SPACE, _SPACE},
		.height = 5,
		.weight = 110,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844c58f,
		.unused = 50375,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 451,
		.trainerOffset = 15,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844c469,
		.unusedDescription = (const u8*) 0x844c4c7,
		.pokemonScale = 451,
		.pokemonOffset = 15,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_MAWILE] =
	{
		.categoryName = {_D, _e, _c, _e, _i, _v, _e, _r, _END, _SPACE, _SPACE, _SPACE},
		.height = 6,
		.weight = 115,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844c5e9,
		.unused = 50482,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 466,
		.trainerOffset = 15,
		.unknown1 = 256,
		.unknown2 = 65533,
=======
		.description = (const u8*) 0x844c4c8,
		.unusedDescription = (const u8*) 0x844c532,
		.pokemonScale = 466,
		.pokemonOffset = 15,
		.trainerScale = 256,
		.trainerOffset = 65533,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_ARON] =
	{
		.categoryName = {_I, _r, _o, _n, _SPACE, _A, _r, _m, _o, _r, _END, _SPACE},
		.height = 4,
		.weight = 600,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844c654,
		.unused = 50581,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 419,
		.trainerOffset = 21,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844c533,
		.unusedDescription = (const u8*) 0x844c595,
		.pokemonScale = 419,
		.pokemonOffset = 21,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_LAIRON] =
	{
		.categoryName = {_I, _r, _o, _n, _SPACE, _A, _r, _m, _o, _r, _END, _SPACE},
		.height = 9,
		.weight = 1200,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844c6c6,
		.unused = 50684,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 275,
		.trainerOffset = 11,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844c596,
		.unusedDescription = (const u8*) 0x844c5fc,
		.pokemonScale = 275,
		.pokemonOffset = 11,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_AGGRON] =
	{
		.categoryName = {_I, _r, _o, _n, _SPACE, _A, _r, _m, _o, _r, _END, _SPACE},
		.height = 21,
		.weight = 3600,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844c738,
		.unused = 50801,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 274,
		.trainerOffset = 65535,
		.unknown1 = 374,
		.unknown2 = 7,
=======
		.description = (const u8*) 0x844c5fd,
		.unusedDescription = (const u8*) 0x844c671,
		.pokemonScale = 274,
		.pokemonOffset = 65535,
		.trainerScale = 374,
		.trainerOffset = 7,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_MEDITITE] =
	{
		.categoryName = {_M, _e, _d, _i, _t, _a, _t, _e, _END, _SPACE, _SPACE, _SPACE},
		.height = 6,
		.weight = 112,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844c7a1,
		.unused = 50902,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 465,
		.trainerOffset = 17,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844c672,
		.unusedDescription = (const u8*) 0x844c6d6,
		.pokemonScale = 465,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_MEDICHAM] =
	{
		.categoryName = {_M, _e, _d, _i, _t, _a, _t, _e, _END, _SPACE, _SPACE, _SPACE},
		.height = 13,
		.weight = 315,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844c7fe,
		.unused = 51008,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 298,
		.trainerOffset = 2,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844c6d7,
		.unusedDescription = (const u8*) 0x844c740,
		.pokemonScale = 298,
		.pokemonOffset = 2,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_ELECTRIKE] =
	{
		.categoryName = {_L, _i, _g, _h, _t, _n, _i, _n, _g, _END, _SPACE, _SPACE},
		.height = 6,
		.weight = 152,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844c868,
		.unused = 51109,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 290,
		.trainerOffset = 16,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844c741,
		.unusedDescription = (const u8*) 0x844c7a5,
		.pokemonScale = 290,
		.pokemonOffset = 16,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_MANECTRIC] =
	{
		.categoryName = {_D, _i, _s, _c, _h, _a, _r, _g, _e, _END, _SPACE, _SPACE},
		.height = 15,
		.weight = 402,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844c8cd,
		.unused = 51211,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 1,
		.unknown1 = 257,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844c7a6,
		.unusedDescription = (const u8*) 0x844c80b,
		.pokemonScale = 256,
		.pokemonOffset = 1,
		.trainerScale = 257,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_PLUSLE] =
	{
		.categoryName = {_C, _h, _e, _e, _r, _i, _n, _g, _END, _SPACE, _SPACE, _SPACE},
		.height = 4,
		.weight = 42,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844c91e,
		.unused = 51314,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 515,
		.trainerOffset = 65527,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844c80c,
		.unusedDescription = (const u8*) 0x844c872,
		.pokemonScale = 515,
		.pokemonOffset = 65527,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_MINUN] =
	{
		.categoryName = {_C, _h, _e, _e, _r, _i, _n, _g, _END, _SPACE, _SPACE, _SPACE},
		.height = 4,
		.weight = 42,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844c98d,
		.unused = 51409,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 512,
		.trainerOffset = 65529,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844c873,
		.unusedDescription = (const u8*) 0x844c8d1,
		.pokemonScale = 512,
		.pokemonOffset = 65529,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_VOLBEAT] =
	{
		.categoryName = {_F, _i, _r, _e, _f, _l, _y, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 7,
		.weight = 177,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844ca0a,
		.unused = 51505,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 442,
		.trainerOffset = 65532,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844c8d2,
		.unusedDescription = (const u8*) 0x844c931,
		.pokemonScale = 442,
		.pokemonOffset = 65532,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_ILLUMISE] =
	{
		.categoryName = {_F, _i, _r, _e, _f, _l, _y, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 6,
		.weight = 177,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844ca76,
		.unused = 51611,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 572,
		.trainerOffset = 65532,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844c932,
		.unusedDescription = (const u8*) 0x844c99b,
		.pokemonScale = 572,
		.pokemonOffset = 65532,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_ROSELIA] =
	{
		.categoryName = {_T, _h, _o, _r, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 3,
		.weight = 20,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844cae0,
		.unused = 51714,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 677,
		.trainerOffset = 20,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844c99c,
		.unusedDescription = (const u8*) 0x844ca02,
		.pokemonScale = 677,
		.pokemonOffset = 20,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_GULPIN] =
	{
		.categoryName = {_S, _t, _o, _m, _a, _c, _h, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 4,
		.weight = 103,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844cb42,
		.unused = 51820,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 593,
		.trainerOffset = 22,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844ca03,
		.unusedDescription = (const u8*) 0x844ca6c,
		.pokemonScale = 593,
		.pokemonOffset = 22,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_SWALOT] =
	{
		.categoryName = {_P, _o, _i, _s, _o, _n, _SPACE, _B, _a, _g, _END, _SPACE},
		.height = 17,
		.weight = 800,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844cbac,
		.unused = 51925,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 5,
		.unknown1 = 345,
		.unknown2 = 4,
=======
		.description = (const u8*) 0x844ca6d,
		.unusedDescription = (const u8*) 0x844cad5,
		.pokemonScale = 256,
		.pokemonOffset = 5,
		.trainerScale = 345,
		.trainerOffset = 4,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_CARVANHA] =
	{
		.categoryName = {_S, _a, _v, _a, _g, _e, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 8,
		.weight = 208,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844cc15,
		.unused = 52018,
		.pokemonScale = 2116,
=======
		.description = (const u8*) 0x844cad6,
		.unusedDescription = (const u8*) 0x844cb32,
		.pokemonScale = 362,
>>>>>>> Stashed changes
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 65534,
	},
	[NATIONAL_DEX_SHARPEDO] =
	{
		.categoryName = {_B, _r, _u, _t, _a, _l, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 18,
		.weight = 888,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844cc77,
		.unused = 52124,
		.pokemonScale = 2116,
=======
		.description = (const u8*) 0x844cb33,
		.unusedDescription = (const u8*) 0x844cb9c,
		.pokemonScale = 265,
>>>>>>> Stashed changes
		.pokemonOffset = 0,
		.trainerScale = 342,
		.trainerOffset = 4,
	},
	[NATIONAL_DEX_WAILMER] =
	{
		.categoryName = {_B, _a, _l, _l, _SPACE, _W, _h, _a, _l, _e, _END, _SPACE},
		.height = 20,
		.weight = 1300,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844cce1,
		.unused = 52223,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 256,
=======
		.description = (const u8*) 0x844cb9d,
		.unusedDescription = (const u8*) 0x844cbff,
		.pokemonScale = 256,
		.pokemonOffset = 10,
		.trainerScale = 493,
>>>>>>> Stashed changes
		.trainerOffset = 10,
	},
	[NATIONAL_DEX_WAILORD] =
	{
		.categoryName = {_F, _l, _o, _a, _t, _SPACE, _W, _h, _a, _l, _e, _END},
		.height = 145,
		.weight = 3980,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844cd50,
		.unused = 52317,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 276,
		.trainerOffset = 65535,
		.unknown1 = 1428,
		.unknown2 = 20,
=======
		.description = (const u8*) 0x844cc00,
		.unusedDescription = (const u8*) 0x844cc5d,
		.pokemonScale = 276,
		.pokemonOffset = 65535,
		.trainerScale = 1428,
		.trainerOffset = 20,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_NUMEL] =
	{
		.categoryName = {_N, _u, _m, _b, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 7,
		.weight = 240,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844cdbc,
		.unused = 52410,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 310,
		.trainerOffset = 14,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844cc5e,
		.unusedDescription = (const u8*) 0x844ccba,
		.pokemonScale = 310,
		.pokemonOffset = 14,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_CAMERUPT] =
	{
		.categoryName = {_E, _r, _u, _p, _t, _i, _o, _n, _END, _SPACE, _SPACE, _SPACE},
		.height = 19,
		.weight = 2200,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844ce34,
		.unused = 52517,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 6,
		.unknown1 = 345,
		.unknown2 = 4,
=======
		.description = (const u8*) 0x844ccbb,
		.unusedDescription = (const u8*) 0x844cd25,
		.pokemonScale = 256,
		.pokemonOffset = 6,
		.trainerScale = 345,
		.trainerOffset = 4,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_TORKOAL] =
	{
		.categoryName = {_C, _o, _a, _l, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 5,
		.weight = 804,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844ce9f,
		.unused = 52620,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 392,
		.trainerOffset = 9,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844cd26,
		.unusedDescription = (const u8*) 0x844cd8c,
		.pokemonScale = 392,
		.pokemonOffset = 9,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_SPOINK] =
	{
		.categoryName = {_B, _o, _u, _n, _c, _e, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 7,
		.weight = 306,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844cefc,
		.unused = 52724,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 423,
		.trainerOffset = 15,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844cd8d,
		.unusedDescription = (const u8*) 0x844cdf4,
		.pokemonScale = 423,
		.pokemonOffset = 15,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_GRUMPIG] =
	{
		.categoryName = {_M, _a, _n, _i, _p, _u, _l, _a, _t, _e, _END, _SPACE},
		.height = 9,
		.weight = 715,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844cf5a,
		.unused = 52833,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 358,
		.trainerOffset = 9,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844cdf5,
		.unusedDescription = (const u8*) 0x844ce61,
		.pokemonScale = 358,
		.pokemonOffset = 9,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_SPINDA] =
	{
		.categoryName = {_S, _p, _o, _t, _SPACE, _P, _a, _n, _d, _a, _END, _SPACE},
		.height = 11,
		.weight = 50,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844cfc7,
		.unused = 52930,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 321,
		.trainerOffset = 9,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844ce62,
		.unusedDescription = (const u8*) 0x844cec2,
		.pokemonScale = 321,
		.pokemonOffset = 9,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_TRAPINCH] =
	{
		.categoryName = {_A, _n, _t, _SPACE, _P, _i, _t, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 7,
		.weight = 150,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844d028,
		.unused = 53030,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 298,
		.trainerOffset = 15,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844cec3,
		.unusedDescription = (const u8*) 0x844cf26,
		.pokemonScale = 298,
		.pokemonOffset = 15,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_VIBRAVA] =
	{
		.categoryName = {_V, _i, _b, _r, _a, _t, _i, _o, _n, _END, _SPACE, _SPACE},
		.height = 11,
		.weight = 153,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844d087,
		.unused = 53123,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 370,
		.trainerOffset = 15,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844cf27,
		.unusedDescription = (const u8*) 0x844cf83,
		.pokemonScale = 370,
		.pokemonOffset = 15,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_FLYGON] =
	{
		.categoryName = {_M, _y, _s, _t, _i, _c, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 20,
		.weight = 820,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844d101,
		.unused = 53220,
		.pokemonScale = 2116,
=======
		.description = (const u8*) 0x844cf84,
		.unusedDescription = (const u8*) 0x844cfe4,
		.pokemonScale = 280,
>>>>>>> Stashed changes
		.pokemonOffset = 0,
		.trainerScale = 299,
		.trainerOffset = 2,
	},
	[NATIONAL_DEX_CACNEA] =
	{
		.categoryName = {_C, _a, _c, _t, _u, _s, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 4,
		.weight = 513,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844d162,
		.unused = 53324,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 455,
		.trainerOffset = 19,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844cfe5,
		.unusedDescription = (const u8*) 0x844d04c,
		.pokemonScale = 455,
		.pokemonOffset = 19,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_CACTURNE] =
	{
		.categoryName = {_S, _c, _a, _r, _e, _c, _r, _o, _w, _END, _SPACE, _SPACE},
		.height = 13,
		.weight = 774,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844d1ca,
		.unused = 53412,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 327,
		.trainerOffset = 3,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844d04d,
		.unusedDescription = (const u8*) 0x844d0a4,
		.pokemonScale = 327,
		.pokemonOffset = 3,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_SWABLU] =
	{
		.categoryName = {_C, _o, _t, _t, _o, _n, _SPACE, _B, _i, _r, _d, _END},
		.height = 4,
		.weight = 12,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844d234,
		.unused = 53497,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 422,
		.trainerOffset = 65528,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844d0a5,
		.unusedDescription = (const u8*) 0x844d0f9,
		.pokemonScale = 422,
		.pokemonOffset = 65528,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_ALTARIA] =
	{
		.categoryName = {_H, _u, _m, _m, _i, _n, _g, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 11,
		.weight = 206,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844d298,
		.unused = 53594,
		.pokemonScale = 2116,
=======
		.description = (const u8*) 0x844d0fa,
		.unusedDescription = (const u8*) 0x844d15a,
		.pokemonScale = 327,
>>>>>>> Stashed changes
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 65534,
	},
	[NATIONAL_DEX_ZANGOOSE] =
	{
		.categoryName = {_C, _a, _t, _SPACE, _F, _e, _r, _r, _e, _t, _END, _SPACE},
		.height = 13,
		.weight = 403,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844d300,
		.unused = 53711,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
=======
		.description = (const u8*) 0x844d15b,
		.unusedDescription = (const u8*) 0x844d1cf,
		.pokemonScale = 256,
		.pokemonOffset = 2,
>>>>>>> Stashed changes
		.trainerScale = 256,
		.trainerOffset = 65534,
	},
	[NATIONAL_DEX_SEVIPER] =
	{
		.categoryName = {_F, _a, _n, _g, _SPACE, _S, _n, _a, _k, _e, _END, _SPACE},
		.height = 27,
		.weight = 525,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844d375,
		.unused = 53815,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 275,
		.trainerOffset = 6,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844d1d0,
		.unusedDescription = (const u8*) 0x844d237,
		.pokemonScale = 275,
		.pokemonOffset = 6,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_LUNATONE] =
	{
		.categoryName = {_M, _e, _t, _e, _o, _r, _i, _t, _e, _END, _SPACE, _SPACE},
		.height = 10,
		.weight = 1680,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844d3e8,
		.unused = 53928,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 300,
		.trainerOffset = 1,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844d238,
		.unusedDescription = (const u8*) 0x844d2a8,
		.pokemonScale = 300,
		.pokemonOffset = 1,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_SOLROCK] =
	{
		.categoryName = {_M, _e, _t, _e, _o, _r, _i, _t, _e, _END, _SPACE, _SPACE},
		.height = 12,
		.weight = 1540,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844d459,
		.unused = 54031,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 328,
		.trainerOffset = 65533,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844d2a9,
		.unusedDescription = (const u8*) 0x844d30f,
		.pokemonScale = 328,
		.pokemonOffset = 65533,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_BARBOACH] =
	{
		.categoryName = {_W, _h, _i, _s, _k, _e, _r, _s, _END, _SPACE, _SPACE, _SPACE},
		.height = 4,
		.weight = 19,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844d4c0,
		.unused = 54119,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 581,
=======
		.description = (const u8*) 0x844d310,
		.unusedDescription = (const u8*) 0x844d367,
		.pokemonScale = 581,
		.pokemonOffset = 65534,
		.trainerScale = 256,
>>>>>>> Stashed changes
		.trainerOffset = 65534,
	},
	[NATIONAL_DEX_WHISCASH] =
	{
		.categoryName = {_W, _h, _i, _s, _k, _e, _r, _s, _END, _SPACE, _SPACE, _SPACE},
		.height = 9,
		.weight = 236,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844d517,
		.unused = 54220,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 317,
		.trainerOffset = 1,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844d368,
		.unusedDescription = (const u8*) 0x844d3cc,
		.pokemonScale = 317,
		.pokemonOffset = 1,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_CORPHISH] =
	{
		.categoryName = {_R, _u, _f, _f, _i, _a, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 6,
		.weight = 115,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844d581,
		.unused = 54324,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 484,
		.trainerOffset = 18,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844d3cd,
		.unusedDescription = (const u8*) 0x844d434,
		.pokemonScale = 484,
		.pokemonOffset = 18,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_CRAWDAUNT] =
	{
		.categoryName = {_R, _o, _g, _u, _e, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 11,
		.weight = 328,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844d5ee,
		.unused = 54439,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 365,
		.trainerOffset = 7,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844d435,
		.unusedDescription = (const u8*) 0x844d4a7,
		.pokemonScale = 365,
		.pokemonOffset = 7,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_BALTOY] =
	{
		.categoryName = {_C, _l, _a, _y, _SPACE, _D, _o, _l, _l, _END, _SPACE, _SPACE},
		.height = 5,
		.weight = 215,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844d64e,
		.unused = 54552,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 384,
		.trainerOffset = 18,
		.unknown1 = 256,
		.unknown2 = 65533,
=======
		.description = (const u8*) 0x844d4a8,
		.unusedDescription = (const u8*) 0x844d518,
		.pokemonScale = 384,
		.pokemonOffset = 18,
		.trainerScale = 256,
		.trainerOffset = 65533,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_CLAYDOL] =
	{
		.categoryName = {_C, _l, _a, _y, _SPACE, _D, _o, _l, _l, _END, _SPACE, _SPACE},
		.height = 15,
		.weight = 1080,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844d6be,
		.unused = 54661,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 3,
		.unknown1 = 280,
		.unknown2 = 0,
=======
		.description = (const u8*) 0x844d519,
		.unusedDescription = (const u8*) 0x844d585,
		.pokemonScale = 256,
		.pokemonOffset = 3,
		.trainerScale = 280,
		.trainerOffset = 0,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_LILEEP] =
	{
		.categoryName = {_S, _e, _a, _SPACE, _L, _i, _l, _y, _END, _SPACE, _SPACE, _SPACE},
		.height = 10,
		.weight = 238,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844d72b,
		.unused = 54771,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 305,
		.trainerOffset = 8,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844d586,
		.unusedDescription = (const u8*) 0x844d5f3,
		.pokemonScale = 305,
		.pokemonOffset = 8,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_CRADILY] =
	{
		.categoryName = {_B, _a, _r, _n, _a, _c, _l, _e, _END, _SPACE, _SPACE, _SPACE},
		.height = 15,
		.weight = 604,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844d799,
		.unused = 54871,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 275,
=======
		.description = (const u8*) 0x844d5f4,
		.unusedDescription = (const u8*) 0x844d657,
		.pokemonScale = 275,
		.pokemonOffset = 65535,
		.trainerScale = 269,
>>>>>>> Stashed changes
		.trainerOffset = 65535,
	},
	[NATIONAL_DEX_ANORITH] =
	{
		.categoryName = {_O, _l, _d, _SPACE, _S, _h, _r, _i, _m, _p, _END, _SPACE},
		.height = 7,
		.weight = 125,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844d7ff,
		.unused = 54968,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 296,
		.trainerOffset = 4,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844d658,
		.unusedDescription = (const u8*) 0x844d6b8,
		.pokemonScale = 296,
		.pokemonOffset = 4,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_ARMALDO] =
	{
		.categoryName = {_P, _l, _a, _t, _e, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 15,
		.weight = 682,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844d872,
		.unused = 55076,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 312,
		.trainerOffset = 2,
		.unknown1 = 271,
		.unknown2 = 65535,
=======
		.description = (const u8*) 0x844d6b9,
		.unusedDescription = (const u8*) 0x844d724,
		.pokemonScale = 312,
		.pokemonOffset = 2,
		.trainerScale = 271,
		.trainerOffset = 65535,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_FEEBAS] =
	{
		.categoryName = {_F, _i, _s, _h, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 6,
		.weight = 74,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844d8cf,
		.unused = 55181,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 423,
		.trainerOffset = 3,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844d725,
		.unusedDescription = (const u8*) 0x844d78d,
		.pokemonScale = 423,
		.pokemonOffset = 3,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_MILOTIC] =
	{
		.categoryName = {_T, _e, _n, _d, _e, _r, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 62,
		.weight = 1620,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844d938,
		.unused = 55282,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 282,
		.trainerOffset = 65535,
		.unknown1 = 382,
		.unknown2 = 7,
=======
		.description = (const u8*) 0x844d78e,
		.unusedDescription = (const u8*) 0x844d7f2,
		.pokemonScale = 282,
		.pokemonOffset = 65535,
		.trainerScale = 382,
		.trainerOffset = 7,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_CASTFORM] =
	{
		.categoryName = {_W, _e, _a, _t, _h, _e, _r, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 3,
		.weight = 8,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844d99c,
		.unused = 55389,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 435,
		.trainerOffset = 65531,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844d7f3,
		.unusedDescription = (const u8*) 0x844d85d,
		.pokemonScale = 435,
		.pokemonOffset = 65531,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_KECLEON] =
	{
		.categoryName = {_C, _o, _l, _o, _r, _SPACE, _S, _w, _a, _p, _END, _SPACE},
		.height = 10,
		.weight = 220,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844da07,
		.unused = 55492,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 316,
		.trainerOffset = 8,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844d85e,
		.unusedDescription = (const u8*) 0x844d8c4,
		.pokemonScale = 316,
		.pokemonOffset = 8,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_SHUPPET] =
	{
		.categoryName = {_P, _u, _p, _p, _e, _t, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 6,
		.weight = 23,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844da6e,
		.unused = 55593,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 440,
		.trainerOffset = 65533,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844d8c5,
		.unusedDescription = (const u8*) 0x844d929,
		.pokemonScale = 440,
		.pokemonOffset = 65533,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_BANETTE] =
	{
		.categoryName = {_M, _a, _r, _i, _o, _n, _e, _t, _t, _e, _END, _SPACE},
		.height = 11,
		.weight = 125,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844dad3,
		.unused = 55697,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 262,
		.trainerOffset = 9,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844d92a,
		.unusedDescription = (const u8*) 0x844d991,
		.pokemonScale = 262,
		.pokemonOffset = 9,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_DUSKULL] =
	{
		.categoryName = {_R, _e, _q, _u, _i, _e, _m, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 8,
		.weight = 150,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844db40,
		.unused = 55798,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 376,
		.trainerOffset = 13,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844d992,
		.unusedDescription = (const u8*) 0x844d9f6,
		.pokemonScale = 376,
		.pokemonOffset = 13,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_DUSCLOPS] =
	{
		.categoryName = {_B, _e, _c, _k, _o, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 16,
		.weight = 306,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844dba9,
		.unused = 55904,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 256,
=======
		.description = (const u8*) 0x844d9f7,
		.unusedDescription = (const u8*) 0x844da60,
		.pokemonScale = 256,
		.pokemonOffset = 2,
		.trainerScale = 299,
>>>>>>> Stashed changes
		.trainerOffset = 2,
	},
	[NATIONAL_DEX_TROPIUS] =
	{
		.categoryName = {_F, _r, _u, _i, _t, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 20,
		.weight = 1000,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844dc13,
		.unused = 56014,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 283,
		.trainerOffset = 65535,
		.unknown1 = 371,
		.unknown2 = 6,
=======
		.description = (const u8*) 0x844da61,
		.unusedDescription = (const u8*) 0x844dace,
		.pokemonScale = 283,
		.pokemonOffset = 65535,
		.trainerScale = 371,
		.trainerOffset = 6,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_CHIMECHO] =
	{
		.categoryName = {_W, _i, _n, _d, _SPACE, _C, _h, _i, _m, _e, _END, _SPACE},
		.height = 6,
		.weight = 10,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844dc81,
		.unused = 56116,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 505,
		.trainerOffset = 65532,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844dacf,
		.unusedDescription = (const u8*) 0x844db34,
		.pokemonScale = 505,
		.pokemonOffset = 65532,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_ABSOL] =
	{
		.categoryName = {_D, _i, _s, _a, _s, _t, _e, _r, _END, _SPACE, _SPACE, _SPACE},
		.height = 12,
		.weight = 470,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844dcf2,
		.unused = 56222,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 301,
		.trainerOffset = 1,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844db35,
		.unusedDescription = (const u8*) 0x844db9e,
		.pokemonScale = 301,
		.pokemonOffset = 1,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_WYNAUT] =
	{
		.categoryName = {_B, _r, _i, _g, _h, _t, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 6,
		.weight = 140,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844dd5c,
		.unused = 56316,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 453,
		.trainerOffset = 17,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844db9f,
		.unusedDescription = (const u8*) 0x844dbfc,
		.pokemonScale = 453,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_SNORUNT] =
	{
		.categoryName = {_S, _n, _o, _w, _SPACE, _H, _a, _t, _END, _SPACE, _SPACE, _SPACE},
		.height = 7,
		.weight = 168,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844ddb7,
		.unused = 56407,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 380,
		.trainerOffset = 14,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844dbfd,
		.unusedDescription = (const u8*) 0x844dc57,
		.pokemonScale = 380,
		.pokemonOffset = 14,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_GLALIE] =
	{
		.categoryName = {_F, _a, _c, _e, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 15,
		.weight = 2565,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844de29,
		.unused = 56514,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 3,
		.unknown1 = 344,
		.unknown2 = 2,
=======
		.description = (const u8*) 0x844dc58,
		.unusedDescription = (const u8*) 0x844dcc2,
		.pokemonScale = 256,
		.pokemonOffset = 3,
		.trainerScale = 344,
		.trainerOffset = 2,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_SPHEAL] =
	{
		.categoryName = {_C, _l, _a, _p, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 8,
		.weight = 395,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844de94,
		.unused = 56615,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 315,
		.trainerOffset = 15,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844dcc3,
		.unusedDescription = (const u8*) 0x844dd27,
		.pokemonScale = 315,
		.pokemonOffset = 15,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_SEALEO] =
	{
		.categoryName = {_B, _a, _l, _l, _SPACE, _R, _o, _l, _l, _END, _SPACE, _SPACE},
		.height = 11,
		.weight = 876,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844def7,
		.unused = 56721,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 338,
		.trainerOffset = 12,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844dd28,
		.unusedDescription = (const u8*) 0x844dd91,
		.pokemonScale = 338,
		.pokemonOffset = 12,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_WALREIN] =
	{
		.categoryName = {_I, _c, _e, _SPACE, _B, _r, _e, _a, _k, _END, _SPACE, _SPACE},
		.height = 14,
		.weight = 1506,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844df61,
		.unused = 56826,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 305,
		.trainerOffset = 2,
		.unknown1 = 277,
		.unknown2 = 0,
=======
		.description = (const u8*) 0x844dd92,
		.unusedDescription = (const u8*) 0x844ddfa,
		.pokemonScale = 305,
		.pokemonOffset = 2,
		.trainerScale = 277,
		.trainerOffset = 0,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_CLAMPERL] =
	{
		.categoryName = {_B, _i, _v, _a, _l, _v, _e, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 4,
		.weight = 525,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844dfd3,
		.unused = 56916,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 691,
		.trainerOffset = 22,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844ddfb,
		.unusedDescription = (const u8*) 0x844de54,
		.pokemonScale = 691,
		.pokemonOffset = 22,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_HUNTAIL] =
	{
		.categoryName = {_D, _e, _e, _p, _SPACE, _S, _e, _a, _END, _SPACE, _SPACE, _SPACE},
		.height = 17,
		.weight = 270,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844e029,
		.unused = 57030,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 307,
		.trainerOffset = 1,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844de55,
		.unusedDescription = (const u8*) 0x844dec6,
		.pokemonScale = 307,
		.pokemonOffset = 1,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_GOREBYSS] =
	{
		.categoryName = {_S, _o, _u, _t, _h, _SPACE, _S, _e, _a, _END, _SPACE, _SPACE},
		.height = 18,
		.weight = 226,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844e09b,
		.unused = 57140,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 278,
		.trainerOffset = 5,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844dec7,
		.unusedDescription = (const u8*) 0x844df34,
		.pokemonScale = 278,
		.pokemonOffset = 5,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_RELICANTH] =
	{
		.categoryName = {_L, _o, _n, _g, _e, _v, _i, _t, _y, _END, _SPACE, _SPACE},
		.height = 10,
		.weight = 234,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844e109,
		.unused = 57244,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 316,
		.trainerOffset = 5,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844df35,
		.unusedDescription = (const u8*) 0x844df9c,
		.pokemonScale = 316,
		.pokemonOffset = 5,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_LUVDISC] =
	{
		.categoryName = {_R, _e, _n, _d, _e, _z, _v, _o, _u, _s, _END, _SPACE},
		.height = 6,
		.weight = 87,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844e16c,
		.unused = 57343,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 371,
		.trainerOffset = 2,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844df9d,
		.unusedDescription = (const u8*) 0x844dfff,
		.pokemonScale = 371,
		.pokemonOffset = 2,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_BAGON] =
	{
		.categoryName = {_R, _o, _c, _k, _SPACE, _H, _e, _a, _d, _END, _SPACE, _SPACE},
		.height = 6,
		.weight = 421,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844e1cf,
		.unused = 57442,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 448,
		.trainerOffset = 17,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844e000,
		.unusedDescription = (const u8*) 0x844e062,
		.pokemonScale = 448,
		.pokemonOffset = 17,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_SHELGON] =
	{
		.categoryName = {_E, _n, _d, _u, _r, _a, _n, _c, _e, _END, _SPACE, _SPACE},
		.height = 11,
		.weight = 1105,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844e22e,
		.unused = 57562,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 311,
		.trainerOffset = 10,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844e063,
		.unusedDescription = (const u8*) 0x844e0da,
		.pokemonScale = 311,
		.pokemonOffset = 10,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_SALAMENCE] =
	{
		.categoryName = {_D, _r, _a, _g, _o, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 15,
		.weight = 1026,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844e2a6,
		.unused = 57661,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 272,
		.trainerOffset = 2,
		.unknown1 = 307,
		.unknown2 = 0,
=======
		.description = (const u8*) 0x844e0db,
		.unusedDescription = (const u8*) 0x844e13d,
		.pokemonScale = 272,
		.pokemonOffset = 2,
		.trainerScale = 307,
		.trainerOffset = 0,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_BELDUM] =
	{
		.categoryName = {_I, _r, _o, _n, _SPACE, _B, _a, _l, _l, _END, _SPACE, _SPACE},
		.height = 6,
		.weight = 952,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844e309,
		.unused = 57752,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 414,
		.trainerOffset = 65535,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844e13e,
		.unusedDescription = (const u8*) 0x844e198,
		.pokemonScale = 414,
		.pokemonOffset = 65535,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_METANG] =
	{
		.categoryName = {_I, _r, _o, _n, _SPACE, _C, _l, _a, _w, _END, _SPACE, _SPACE},
		.height = 12,
		.weight = 2025,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844e364,
		.unused = 57840,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 3,
		.unknown1 = 272,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844e199,
		.unusedDescription = (const u8*) 0x844e1f0,
		.pokemonScale = 256,
		.pokemonOffset = 3,
		.trainerScale = 272,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_METAGROSS] =
	{
		.categoryName = {_I, _r, _o, _n, _SPACE, _L, _e, _g, _END, _SPACE, _SPACE, _SPACE},
		.height = 16,
		.weight = 5500,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844e3d2,
		.unused = 57948,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 272,
		.trainerOffset = 3,
		.unknown1 = 461,
		.unknown2 = 4,
=======
		.description = (const u8*) 0x844e1f1,
		.unusedDescription = (const u8*) 0x844e25c,
		.pokemonScale = 272,
		.pokemonOffset = 3,
		.trainerScale = 461,
		.trainerOffset = 4,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_REGIROCK] =
	{
		.categoryName = {_R, _o, _c, _k, _SPACE, _P, _e, _a, _k, _END, _SPACE, _SPACE},
		.height = 17,
		.weight = 2300,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844e432,
		.unused = 58059,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 256,
=======
		.description = (const u8*) 0x844e25d,
		.unusedDescription = (const u8*) 0x844e2cb,
		.pokemonScale = 256,
		.pokemonOffset = 1,
		.trainerScale = 309,
>>>>>>> Stashed changes
		.trainerOffset = 1,
	},
	[NATIONAL_DEX_REGICE] =
	{
		.categoryName = {_I, _c, _e, _b, _e, _r, _g, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 18,
		.weight = 1750,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844e4a1,
		.unused = 58163,
		.pokemonScale = 2116,
=======
		.description = (const u8*) 0x844e2cc,
		.unusedDescription = (const u8*) 0x844e333,
		.pokemonScale = 265,
>>>>>>> Stashed changes
		.pokemonOffset = 0,
		.trainerScale = 317,
		.trainerOffset = 3,
	},
	[NATIONAL_DEX_REGISTEEL] =
	{
		.categoryName = {_I, _r, _o, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 19,
		.weight = 2050,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844e503,
		.unused = 58276,
		.pokemonScale = 2116,
=======
		.description = (const u8*) 0x844e334,
		.unusedDescription = (const u8*) 0x844e3a4,
		.pokemonScale = 256,
>>>>>>> Stashed changes
		.pokemonOffset = 0,
		.trainerScale = 359,
		.trainerOffset = 6,
	},
	[NATIONAL_DEX_LATIAS] =
	{
		.categoryName = {_E, _o, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 14,
		.weight = 400,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844e574,
		.unused = 58373,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 291,
		.trainerOffset = 2,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844e3a5,
		.unusedDescription = (const u8*) 0x844e405,
		.pokemonScale = 291,
		.pokemonOffset = 2,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_LATIOS] =
	{
		.categoryName = {_E, _o, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 20,
		.weight = 600,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844e5e2,
		.unused = 58486,
		.pokemonScale = 2116,
=======
		.description = (const u8*) 0x844e406,
		.unusedDescription = (const u8*) 0x844e476,
		.pokemonScale = 273,
>>>>>>> Stashed changes
		.pokemonOffset = 0,
		.trainerScale = 313,
		.trainerOffset = 3,
	},
	[NATIONAL_DEX_KYOGRE] =
	{
		.categoryName = {_S, _e, _a, _SPACE, _B, _a, _s, _i, _n, _END, _SPACE, _SPACE},
		.height = 45,
		.weight = 3520,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844e653,
		.unused = 58588,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 272,
		.trainerOffset = 1,
		.unknown1 = 639,
		.unknown2 = 13,
=======
		.description = (const u8*) 0x844e477,
		.unusedDescription = (const u8*) 0x844e4dc,
		.pokemonScale = 272,
		.pokemonOffset = 1,
		.trainerScale = 639,
		.trainerOffset = 13,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_GROUDON] =
	{
		.categoryName = {_C, _o, _n, _t, _i, _n, _e, _n, _t, _END, _SPACE, _SPACE},
		.height = 35,
		.weight = 9500,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844e6be,
		.unused = 58676,
		.pokemonScale = 2116,
=======
		.description = (const u8*) 0x844e4dd,
		.unusedDescription = (const u8*) 0x844e534,
		.pokemonScale = 276,
>>>>>>> Stashed changes
		.pokemonOffset = 0,
		.trainerScale = 530,
		.trainerOffset = 12,
	},
	[NATIONAL_DEX_RAYQUAZA] =
	{
		.categoryName = {_S, _k, _y, _SPACE, _H, _i, _g, _h, _END, _SPACE, _SPACE, _SPACE},
		.height = 70,
		.weight = 2065,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844e71c,
		.unused = 58771,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 286,
		.trainerOffset = 65535,
		.unknown1 = 483,
		.unknown2 = 9,
=======
		.description = (const u8*) 0x844e535,
		.unusedDescription = (const u8*) 0x844e593,
		.pokemonScale = 286,
		.pokemonOffset = 65535,
		.trainerScale = 483,
		.trainerOffset = 9,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_JIRACHI] =
	{
		.categoryName = {_W, _i, _s, _h, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 3,
		.weight = 11,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844e785,
		.unused = 58868,
		.pokemonScale = 2116,
		.pokemonOffset = 0,
		.trainerScale = 608,
		.trainerOffset = 65528,
		.unknown1 = 256,
		.unknown2 = 65534,
=======
		.description = (const u8*) 0x844e594,
		.unusedDescription = (const u8*) 0x844e5f4,
		.pokemonScale = 608,
		.pokemonOffset = 65528,
		.trainerScale = 256,
		.trainerOffset = 65534,
>>>>>>> Stashed changes
	},
	[NATIONAL_DEX_DEOXYS] =
	{
		.categoryName = {_D, _N, _A, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 17,
		.weight = 608,
<<<<<<< Updated upstream
		.description = (const u8*) 0x844e7e6,
		.unused = 58972,
		.pokemonScale = 2116,
=======
		.description = (const u8*) 0x844e5f5,
		.unusedDescription = (const u8*) 0x844e65c,
		.pokemonScale = 293,
>>>>>>> Stashed changes
		.pokemonOffset = 0,
		.trainerScale = 337,
		.trainerOffset = 2,
	},
	[NATIONAL_DEX_TURTWIG] =
	{
		.categoryName = {_T, _i, _n, _y, _SPACE, _L, _e, _a, _f, _END, _SPACE, _SPACE},
		.height = 4,
		.weight = 102,
		.description = DEX_ENTRY_TURTWIG,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_GROTLE] =
	{
		.categoryName = {_G, _r, _o, _v, _e, _END, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 11,
		.weight = 970,
		.description = DEX_ENTRY_GROTLE,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_TORTERRA] =
	{
		.categoryName = {_C, _o, _n, _t, _i, _n, _e, _n, _t, _END, _SPACE, _SPACE},
		.height = 22,
		.weight = 3100,
		.description = DEX_ENTRY_TORTERRA,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_CHIMCHAR] =
	{
		.categoryName = {_C, _h, _i, _m, _p, _END, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 5,
		.weight = 62,
		.description = DEX_ENTRY_CHIMCHAR,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_MONFERNO] =
	{
		.categoryName = {_P, _l, _a, _y, _f, _u, _l, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 9,
		.weight = 220,
		.description = DEX_ENTRY_MONFERNO,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_INFERNAPE] =
	{
		.categoryName = {_F, _l, _a, _m, _e, _END, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 12,
		.weight = 550,
		.description = DEX_ENTRY_INFERNAPE,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_PIPLUP] =
	{
		.categoryName = {_P, _e, _n, _g, _u, _i, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 4,
		.weight = 52,
		.description = DEX_ENTRY_PIPLUP,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_PRINPLUP] =
	{
		.categoryName = {_P, _e, _n, _g, _u, _i, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 8,
		.weight = 230,
		.description = DEX_ENTRY_PRINPLUP,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_EMPOLEON] =
	{
		.categoryName = {_E, _m, _p, _e, _r, _o, _r, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 17,
		.weight = 845,
		.description = DEX_ENTRY_EMPOLEON,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_STARLY] =
	{
		.categoryName = {_S, _t, _a, _r, _l, _i, _n, _g, _END, _SPACE, _SPACE, _SPACE},
		.height = 3,
		.weight = 20,
		.description = DEX_ENTRY_STARLY,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_STARAVIA] =
	{
		.categoryName = {_S, _t, _a, _r, _l, _i, _n, _g, _END, _SPACE, _SPACE, _SPACE},
		.height = 6,
		.weight = 155,
		.description = DEX_ENTRY_STARAVIA,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_STARAPTOR] =
	{
		.categoryName = {_P, _r, _e, _d, _a, _t, _o, _r, _END, _SPACE, _SPACE, _SPACE},
		.height = 12,
		.weight = 249,
		.description = DEX_ENTRY_STARAPTOR,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_BIDOOF] =
	{
		.categoryName = {_P, _l, _u, _m, _p, _SPACE, _M, _o, _u, _s, _e, _END},
		.height = 5,
		.weight = 200,
		.description = DEX_ENTRY_BIDOOF,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_BIBAREL] =
	{
		.categoryName = {_B, _e, _a, _v, _e, _r, _END, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 10,
		.weight = 315,
		.description = DEX_ENTRY_BIBAREL,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_KRICKETOT] =
	{
		.categoryName = {_C, _r, _i, _c, _k, _e, _t, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 3,
		.weight = 22,
		.description = DEX_ENTRY_KRICKETOT,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_KRICKETUNE] =
	{
		.categoryName = {_C, _r, _i, _c, _k, _e, _t, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 10,
		.weight = 255,
		.description = DEX_ENTRY_KRICKETUNE,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_SHINX] =
	{
		.categoryName = {_F, _l, _a, _s, _h, _END, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 5,
		.weight = 95,
		.description = DEX_ENTRY_SHINX,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_LUXIO] =
	{
		.categoryName = {_S, _p, _a, _r, _k, _END, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 9,
		.weight = 305,
		.description = DEX_ENTRY_LUXIO,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_LUXRAY] =
	{
		.categoryName = {_G, _l, _e, _a, _m, _SPACE, _E, _y, _e, _s, _END, _SPACE},
		.height = 14,
		.weight = 420,
		.description = DEX_ENTRY_LUXRAY,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_BUDEW] =
	{
		.categoryName = {_B, _u, _d, _END, _o, _w, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 2,
		.weight = 12,
		.description = DEX_ENTRY_BUDEW,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_ROSERADE] =
	{
		.categoryName = {_B, _o, _u, _q, _e, _t, _END, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 9,
		.weight = 145,
		.description = DEX_ENTRY_ROSERADE,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_CRANIDOS] =
	{
		.categoryName = {_H, _e, _a, _d, _SPACE, _B, _u, _t, _t, _END, _SPACE, _SPACE},
		.height = 9,
		.weight = 315,
		.description = DEX_ENTRY_CRANIDOS,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_RAMPARDOS] =
	{
		.categoryName = {_H, _e, _a, _d, _SPACE, _B, _u, _t, _t, _END, _SPACE, _SPACE},
		.height = 16,
		.weight = 1025,
		.description = DEX_ENTRY_RAMPARDOS,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_SHIELDON] =
	{
		.categoryName = {_S, _h, _i, _e, _l, _d, _END, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 5,
		.weight = 570,
		.description = DEX_ENTRY_SHIELDON,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_BASTIODON] =
	{
		.categoryName = {_S, _h, _i, _e, _l, _d, _END, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 13,
		.weight = 1495,
		.description = DEX_ENTRY_BASTIODON,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_BURMY] =
	{
		.categoryName = {_B, _a, _g, _w, _o, _r, _m, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 2,
		.weight = 34,
		.description = DEX_ENTRY_BURMY,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_WORMADAM] =
	{
		.categoryName = {_B, _a, _g, _w, _o, _r, _m, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 5,
		.weight = 65,
		.description = DEX_ENTRY_WORMADAM,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_MOTHIM] =
	{
		.categoryName = {_M, _o, _t, _h, _END, _w, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 9,
		.weight = 233,
		.description = DEX_ENTRY_MOTHIM,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_COMBEE] =
	{
		.categoryName = {_T, _i, _n, _y, _SPACE, _B, _e, _e, _END, _SPACE, _SPACE, _SPACE},
		.height = 3,
		.weight = 55,
		.description = DEX_ENTRY_COMBEE,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_VESPIQUEN] =
	{
		.categoryName = {_B, _e, _e, _h, _i, _v, _e, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 12,
		.weight = 385,
		.description = DEX_ENTRY_VESPIQUEN,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_PACHIRISU] =
	{
		.categoryName = {_E, _l, _e, _S, _q, _u, _i, _r, _r, _e, _l, _END},
		.height = 4,
		.weight = 39,
		.description = DEX_ENTRY_PACHIRISU,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_BUIZEL] =
	{
		.categoryName = {_S, _e, _a, _SPACE, _W, _e, _a, _s, _e, _l, _END, _SPACE},
		.height = 7,
		.weight = 295,
		.description = DEX_ENTRY_BUIZEL,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_FLOATZEL] =
	{
		.categoryName = {_S, _e, _a, _SPACE, _W, _e, _a, _s, _e, _l, _END, _SPACE},
		.height = 11,
		.weight = 335,
		.description = DEX_ENTRY_FLOATZEL,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_CHERUBI] =
	{
		.categoryName = {_C, _h, _e, _r, _r, _y, _END, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 4,
		.weight = 33,
		.description = DEX_ENTRY_CHERUBI,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_CHERRIM] =
	{
		.categoryName = {_B, _l, _o, _s, _s, _o, _m, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 1,
		.weight = 1,
		.description = DEX_ENTRY_CHERRIM,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_SHELLOS] =
	{
		.categoryName = {_S, _e, _a, _SPACE, _S, _l, _u, _g, _END, _SPACE, _SPACE, _SPACE},
		.height = 3,
		.weight = 63,
		.description = DEX_ENTRY_SHELLOS,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_GASTRODON] =
	{
		.categoryName = {_S, _e, _a, _SPACE, _S, _l, _u, _g, _END, _SPACE, _SPACE, _SPACE},
		.height = 9,
		.weight = 299,
		.description = DEX_ENTRY_GASTRODON,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_AMBIPOM] =
	{
		.categoryName = {_L, _o, _n, _g, _SPACE, _T, _a, _i, _l, _END, _SPACE, _SPACE},
		.height = 12,
		.weight = 203,
		.description = DEX_ENTRY_AMBIPOM,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_DRIFLOON] =
	{
		.categoryName = {_B, _a, _l, _l, _o, _o, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 4,
		.weight = 12,
		.description = DEX_ENTRY_DRIFLOON,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_DRIFBLIM] =
	{
		.categoryName = {_B, _l, _i, _m, _p, _END, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 23,
		.weight = 150,
		.description = DEX_ENTRY_DRIFBLIM,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_BUNEARY] =
	{
		.categoryName = {_R, _a, _b, _b, _i, _t, _END, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 4,
		.weight = 55,
		.description = DEX_ENTRY_BUNEARY,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_LOPUNNY] =
	{
		.categoryName = {_R, _a, _b, _b, _i, _t, _END, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 12,
		.weight = 333,
		.description = DEX_ENTRY_LOPUNNY,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_MISMAGIUS] =
	{
		.categoryName = {_M, _a, _g, _i, _c, _a, _l, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 9,
		.weight = 44,
		.description = DEX_ENTRY_MISMAGIUS,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_HONCHKROW] =
	{
		.categoryName = {_B, _i, _g, _SPACE, _B, _o, _s, _s, _END, _SPACE, _SPACE, _SPACE},
		.height = 9,
		.weight = 273,
		.description = DEX_ENTRY_HONCHKROW,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_GLAMEOW] =
	{
		.categoryName = {_C, _a, _t, _t, _y, _END, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 5,
		.weight = 39,
		.description = DEX_ENTRY_GLAMEOW,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_PURUGLY] =
	{
		.categoryName = {_T, _i, _g, _e, _r, _SPACE, _C, _a, _t, _END, _SPACE, _SPACE},
		.height = 10,
		.weight = 438,
		.description = DEX_ENTRY_PURUGLY,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_CHINGLING] =
	{
		.categoryName = {_B, _e, _l, _l, _END, _w, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 2,
		.weight = 6,
		.description = DEX_ENTRY_CHINGLING,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_STUNKY] =
	{
		.categoryName = {_S, _k, _u, _n, _k, _END, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 4,
		.weight = 192,
		.description = DEX_ENTRY_STUNKY,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_SKUNTANK] =
	{
		.categoryName = {_S, _k, _u, _n, _k, _END, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 10,
		.weight = 380,
		.description = DEX_ENTRY_SKUNTANK,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_BRONZOR] =
	{
		.categoryName = {_B, _r, _o, _n, _z, _e, _END, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 5,
		.weight = 605,
		.description = DEX_ENTRY_BRONZOR,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_BRONZONG] =
	{
		.categoryName = {_B, _r, _o, _n, _z, _e, _SPACE, _B, _e, _l, _l, _END},
		.height = 13,
		.weight = 1870,
		.description = DEX_ENTRY_BRONZONG,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_BONSLY] =
	{
		.categoryName = {_B, _o, _n, _s, _a, _i, _END, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 5,
		.weight = 150,
		.description = DEX_ENTRY_BONSLY,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_MIME_JR] =
	{
		.categoryName = {_M, _i, _m, _e, _END, _w, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 6,
		.weight = 130,
		.description = DEX_ENTRY_MIME_JR,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_HAPPINY] =
	{
		.categoryName = {_P, _l, _a, _y, _h, _o, _u, _s, _e, _END, _SPACE, _SPACE},
		.height = 6,
		.weight = 244,
		.description = DEX_ENTRY_HAPPINY,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_CHATOT] =
	{
		.categoryName = {_M, _u, _s, _i, _c, _SPACE, _N, _o, _t, _e, _END, _SPACE},
		.height = 5,
		.weight = 19,
		.description = DEX_ENTRY_CHATOT,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_SPIRITOMB] =
	{
		.categoryName = {_F, _o, _r, _b, _i, _d, _d, _e, _n, _END, _SPACE, _SPACE},
		.height = 10,
		.weight = 1080,
		.description = DEX_ENTRY_SPIRITOMB,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_GIBLE] =
	{
		.categoryName = {_L, _a, _n, _d, _SPACE, _S, _h, _a, _r, _k, _END, _SPACE},
		.height = 7,
		.weight = 205,
		.description = DEX_ENTRY_GIBLE,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_GABITE] =
	{
		.categoryName = {_C, _a, _v, _e, _END, _w, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 14,
		.weight = 560,
		.description = DEX_ENTRY_GABITE,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_GARCHOMP] =
	{
		.categoryName = {_M, _a, _c, _h, _END, _w, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 19,
		.weight = 950,
		.description = DEX_ENTRY_GARCHOMP,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_MUNCHLAX] =
	{
		.categoryName = {_B, _i, _g, _SPACE, _E, _a, _t, _e, _r, _END, _SPACE, _SPACE},
		.height = 6,
		.weight = 1050,
		.description = DEX_ENTRY_MUNCHLAX,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_RIOLU] =
	{
		.categoryName = {_E, _m, _a, _n, _a, _t, _i, _o, _n, _END, _SPACE, _SPACE},
		.height = 7,
		.weight = 202,
		.description = DEX_ENTRY_RIOLU,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_LUCARIO] =
	{
		.categoryName = {_A, _u, _r, _a, _END, _w, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 12,
		.weight = 540,
		.description = DEX_ENTRY_LUCARIO,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_HIPPOPOTAS] =
	{
		.categoryName = {_H, _i, _p, _p, _o, _END, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 8,
		.weight = 495,
		.description = DEX_ENTRY_HIPPOPOTAS,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_HIPPOWDON] =
	{
		.categoryName = {_H, _e, _a, _v, _y, _w, _e, _i, _g, _h, _t, _END},
		.height = 20,
		.weight = 3000,
		.description = DEX_ENTRY_HIPPOWDON,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_SKORUPI] =
	{
		.categoryName = {_S, _c, _o, _r, _p, _i, _o, _n, _END, _SPACE, _SPACE, _SPACE},
		.height = 8,
		.weight = 120,
		.description = DEX_ENTRY_SKORUPI,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_DRAPION] =
	{
		.categoryName = {_O, _g, _r, _e, _SPACE, _S, _c, _o, _r, _p, _i, _END},
		.height = 13,
		.weight = 615,
		.description = DEX_ENTRY_DRAPION,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_CROAGUNK] =
	{
		.categoryName = {_T, _o, _x, _i, _c, _SPACE, _M, _o, _u, _t, _h, _END},
		.height = 8,
		.weight = 230,
		.description = DEX_ENTRY_CROAGUNK,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_TOXICROAK] =
	{
		.categoryName = {_T, _o, _x, _i, _c, _SPACE, _M, _o, _u, _t, _h, _END},
		.height = 13,
		.weight = 444,
		.description = DEX_ENTRY_TOXICROAK,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_CARNIVINE] =
	{
		.categoryName = {_B, _u, _g, _SPACE, _C, _a, _t, _c, _h, _e, _r, _END},
		.height = 14,
		.weight = 270,
		.description = DEX_ENTRY_CARNIVINE,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_FINNEON] =
	{
		.categoryName = {_W, _i, _n, _g, _SPACE, _F, _i, _s, _h, _END, _SPACE, _SPACE},
		.height = 4,
		.weight = 96,
		.description = DEX_ENTRY_FINNEON,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_LUMINEON] =
	{
		.categoryName = {_N, _e, _o, _n, _END, _w, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 12,
		.weight = 240,
		.description = DEX_ENTRY_LUMINEON,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_MANTYKE] =
	{
		.categoryName = {_K, _i, _t, _e, _END, _w, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 10,
		.weight = 650,
		.description = DEX_ENTRY_MANTYKE,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_SNOVER] =
	{
		.categoryName = {_F, _r, _o, _s, _t, _SPACE, _T, _r, _e, _e, _END, _SPACE},
		.height = 10,
		.weight = 505,
		.description = DEX_ENTRY_SNOVER,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_ABOMASNOW] =
	{
		.categoryName = {_F, _r, _o, _s, _t, _SPACE, _T, _r, _e, _e, _END, _SPACE},
		.height = 22,
		.weight = 1355,
		.description = DEX_ENTRY_ABOMASNOW,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_WEAVILE] =
	{
		.categoryName = {_S, _h, _a, _r, _p, _SPACE, _C, _l, _a, _w, _END, _SPACE},
		.height = 11,
		.weight = 340,
		.description = DEX_ENTRY_WEAVILE,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_MAGNEZONE] =
	{
		.categoryName = {_M, _a, _g, _n, _e, _t, _SPACE, _A, _r, _e, _a, _END},
		.height = 12,
		.weight = 1800,
		.description = DEX_ENTRY_MAGNEZONE,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_LICKILICKY] =
	{
		.categoryName = {_L, _i, _c, _k, _i, _n, _g, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 17,
		.weight = 1400,
		.description = DEX_ENTRY_LICKILICKY,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_RHYPERIOR] =
	{
		.categoryName = {_D, _r, _i, _l, _l, _END, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 24,
		.weight = 2828,
		.description = DEX_ENTRY_RHYPERIOR,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_TANGROWTH] =
	{
		.categoryName = {_V, _i, _n, _e, _END, _w, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 20,
		.weight = 1286,
		.description = DEX_ENTRY_TANGROWTH,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_ELECTIVIRE] =
	{
		.categoryName = {_T, _h, _u, _n, _d, _e, _r, _b, _o, _l, _t, _END},
		.height = 18,
		.weight = 1386,
		.description = DEX_ENTRY_ELECTIVIRE,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_MAGMORTAR] =
	{
		.categoryName = {_B, _l, _a, _s, _t, _END, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 16,
		.weight = 680,
		.description = DEX_ENTRY_MAGMORTAR,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_TOGEKISS] =
	{
		.categoryName = {_J, _u, _b, _i, _l, _e, _e, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 15,
		.weight = 380,
		.description = DEX_ENTRY_TOGEKISS,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_YANMEGA] =
	{
		.categoryName = {_O, _g, _r, _e, _SPACE, _D, _a, _r, _n, _e, _r, _END},
		.height = 19,
		.weight = 515,
		.description = DEX_ENTRY_YANMEGA,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_LEAFEON] =
	{
		.categoryName = {_V, _e, _r, _d, _a, _n, _t, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 10,
		.weight = 255,
		.description = DEX_ENTRY_LEAFEON,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_GLACEON] =
	{
		.categoryName = {_F, _r, _e, _s, _h, _SPACE, _S, _n, _o, _w, _END, _SPACE},
		.height = 8,
		.weight = 259,
		.description = DEX_ENTRY_GLACEON,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_GLISCOR] =
	{
		.categoryName = {_F, _a, _n, _g, _SPACE, _S, _c, _o, _r, _p, _i, _END},
		.height = 20,
		.weight = 425,
		.description = DEX_ENTRY_GLISCOR,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_MAMOSWINE] =
	{
		.categoryName = {_T, _w, _i, _n, _SPACE, _T, _u, _s, _k, _END, _SPACE, _SPACE},
		.height = 25,
		.weight = 2910,
		.description = DEX_ENTRY_MAMOSWINE,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_PORYGON_Z] =
	{
		.categoryName = {_V, _i, _r, _t, _u, _a, _l, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 9,
		.weight = 340,
		.description = DEX_ENTRY_PORYGON_Z,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_GALLADE] =
	{
		.categoryName = {_B, _l, _a, _d, _e, _END, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 16,
		.weight = 520,
		.description = DEX_ENTRY_GALLADE,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_PROBOPASS] =
	{
		.categoryName = {_C, _o, _m, _p, _a, _s, _s, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 14,
		.weight = 3400,
		.description = DEX_ENTRY_PROBOPASS,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_DUSKNOIR] =
	{
		.categoryName = {_G, _r, _i, _p, _p, _e, _r, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 22,
		.weight = 1066,
		.description = DEX_ENTRY_DUSKNOIR,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_FROSLASS] =
	{
		.categoryName = {_S, _n, _o, _w, _SPACE, _L, _a, _n, _d, _END, _SPACE, _SPACE},
		.height = 13,
		.weight = 266,
		.description = DEX_ENTRY_FROSLASS,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_ROTOM] =
	{
		.categoryName = {_P, _l, _a, _s, _m, _a, _END, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 3,
		.weight = 3,
		.description = DEX_ENTRY_ROTOM,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_UXIE] =
	{
		.categoryName = {_K, _n, _o, _w, _l, _e, _d, _g, _e, _END, _SPACE, _SPACE},
		.height = 3,
		.weight = 3,
		.description = DEX_ENTRY_UXIE,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_MESPRIT] =
	{
		.categoryName = {_E, _m, _o, _t, _i, _o, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 3,
		.weight = 3,
		.description = DEX_ENTRY_MESPRIT,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_AZELF] =
	{
		.categoryName = {_W, _i, _l, _l, _p, _o, _w, _e, _r, _END, _SPACE, _SPACE},
		.height = 3,
		.weight = 3,
		.description = DEX_ENTRY_AZELF,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_DIALGA] =
	{
		.categoryName = {_T, _e, _m, _p, _o, _r, _a, _l, _END, _SPACE, _SPACE, _SPACE},
		.height = 54,
		.weight = 6830,
		.description = DEX_ENTRY_DIALGA,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_PALKIA] =
	{
		.categoryName = {_S, _p, _a, _t, _i, _a, _l, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 42,
		.weight = 3360,
		.description = DEX_ENTRY_PALKIA,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_HEATRAN] =
	{
		.categoryName = {_L, _a, _v, _a, _SPACE, _D, _o, _m, _e, _END, _SPACE, _SPACE},
		.height = 17,
		.weight = 4300,
		.description = DEX_ENTRY_HEATRAN,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_REGIGIGAS] =
	{
		.categoryName = {_C, _o, _l, _o, _s, _s, _a, _l, _END, _SPACE, _SPACE, _SPACE},
		.height = 37,
		.weight = 4200,
		.description = DEX_ENTRY_REGIGIGAS,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 512,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_GIRATINA] =
	{
		.categoryName = {_R, _e, _n, _e, _g, _a, _g, _e, _END, _SPACE, _SPACE, _SPACE},
		.height = 45,
		.weight = 7500,
		.description = DEX_ENTRY_GIRATINA,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_CRESSELIA] =
	{
		.categoryName = {_L, _u, _n, _a, _r, _END, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 15,
		.weight = 856,
		.description = DEX_ENTRY_CRESSELIA,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_PHIONE] =
	{
		.categoryName = {_S, _e, _a, _SPACE, _D, _r, _i, _f, _t, _e, _r, _END},
		.height = 4,
		.weight = 31,
		.description = DEX_ENTRY_PHIONE,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_MANAPHY] =
	{
		.categoryName = {_S, _e, _a, _f, _a, _r, _i, _n, _g, _END, _SPACE, _SPACE},
		.height = 3,
		.weight = 14,
		.description = DEX_ENTRY_MANAPHY,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_DARKRAI] =
	{
		.categoryName = {_P, _i, _t, _c, _h, 0xae, _B, _l, _a, _c, _k, _END},
		.height = 15,
		.weight = 505,
		.description = DEX_ENTRY_DARKRAI,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_SHAYMIN] =
	{
		.categoryName = {_G, _r, _a, _t, _i, _t, _u, _d, _e, _END, _SPACE, _SPACE},
		.height = 2,
		.weight = 21,
		.description = DEX_ENTRY_SHAYMIN,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_ARCEUS] =
	{
		.categoryName = {_A, _l, _p, _h, _a, _END, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 32,
		.weight = 3200,
		.description = DEX_ENTRY_ARCEUS,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_VICTINI] =
	{
		.categoryName = {_V, _i, _c, _t, _o, _r, _y, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 4,
		.weight = 40,
		.description = DEX_ENTRY_VICTINI,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_SNIVY] =
	{
		.categoryName = {_G, _r, _a, _s, _s, _SPACE, _S, _n, _a, _k, _e, _END},
		.height = 6,
		.weight = 81,
		.description = DEX_ENTRY_SNIVY,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_SERVINE] =
	{
		.categoryName = {_G, _r, _a, _s, _s, _SPACE, _S, _n, _a, _k, _e, _END},
		.height = 8,
		.weight = 160,
		.description = DEX_ENTRY_SERVINE,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_SERPERIOR] =
	{
		.categoryName = {_R, _e, _g, _a, _l, _END, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 33,
		.weight = 630,
		.description = DEX_ENTRY_SERPERIOR,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_TEPIG] =
	{
		.categoryName = {_F, _i, _r, _e, _SPACE, _P, _i, _g, _END, _SPACE, _SPACE, _SPACE},
		.height = 5,
		.weight = 99,
		.description = DEX_ENTRY_TEPIG,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_PIGNITE] =
	{
		.categoryName = {_F, _i, _r, _e, _SPACE, _P, _i, _g, _END, _SPACE, _SPACE, _SPACE},
		.height = 10,
		.weight = 555,
		.description = DEX_ENTRY_PIGNITE,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_EMBOAR] =
	{
		.categoryName = {_M, 0xad, _SPACE, _F, _i, _r, _e, _SPACE, _P, _i, _g, _END},
		.height = 16,
		.weight = 1500,
		.description = DEX_ENTRY_EMBOAR,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_OSHAWOTT] =
	{
		.categoryName = {_S, _e, _a, _SPACE, _O, _t, _t, _e, _r, _END, _SPACE, _SPACE},
		.height = 5,
		.weight = 59,
		.description = DEX_ENTRY_OSHAWOTT,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_DEWOTT] =
	{
		.categoryName = {_D, _i, _s, _c, _i, _p, _l, _i, _n, _e, _END, _SPACE},
		.height = 8,
		.weight = 245,
		.description = DEX_ENTRY_DEWOTT,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_SAMUROTT] =
	{
		.categoryName = {_F, _o, _r, _m, _i, _d, _a, _b, _l, _e, _END, _SPACE},
		.height = 15,
		.weight = 946,
		.description = DEX_ENTRY_SAMUROTT,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_PATRAT] =
	{
		.categoryName = {_S, _c, _o, _u, _t, _END, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 5,
		.weight = 116,
		.description = DEX_ENTRY_PATRAT,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_WATCHOG] =
	{
		.categoryName = {_L, _o, _o, _k, _o, _u, _t, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 11,
		.weight = 270,
		.description = DEX_ENTRY_WATCHOG,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_LILLIPUP] =
	{
		.categoryName = {_P, _u, _p, _p, _y, _END, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 4,
		.weight = 41,
		.description = DEX_ENTRY_LILLIPUP,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_HERDIER] =
	{
		.categoryName = {_L, _o, _y, _a, _l, _SPACE, _D, _o, _g, _END, _SPACE, _SPACE},
		.height = 9,
		.weight = 147,
		.description = DEX_ENTRY_HERDIER,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_STOUTLAND] =
	{
		.categoryName = {_B, _i, _g, 0xae, _H, _e, _a, _r, _t, _e, _d, _END},
		.height = 12,
		.weight = 610,
		.description = DEX_ENTRY_STOUTLAND,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_PURRLOIN] =
	{
		.categoryName = {_D, _e, _v, _i, _o, _u, _s, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 4,
		.weight = 101,
		.description = DEX_ENTRY_PURRLOIN,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_LIEPARD] =
	{
		.categoryName = {_C, _r, _u, _e, _l, _END, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 11,
		.weight = 375,
		.description = DEX_ENTRY_LIEPARD,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_PANSAGE] =
	{
		.categoryName = {_G, _r, _a, _s, _s, _M, _o, _n, _k, _e, _y, _END},
		.height = 6,
		.weight = 105,
		.description = DEX_ENTRY_PANSAGE,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_SIMISAGE] =
	{
		.categoryName = {_T, _h, _o, _r, _n, _M, _o, _n, _k, _e, _y, _END},
		.height = 11,
		.weight = 305,
		.description = DEX_ENTRY_SIMISAGE,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_PANSEAR] =
	{
		.categoryName = {_H, _i, _g, _h, _SPACE, _T, _e, _m, _p, _END, _SPACE, _SPACE},
		.height = 6,
		.weight = 110,
		.description = DEX_ENTRY_PANSEAR,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_SIMISEAR] =
	{
		.categoryName = {_E, _m, _b, _e, _r, _END, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 10,
		.weight = 280,
		.description = DEX_ENTRY_SIMISEAR,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_PANPOUR] =
	{
		.categoryName = {_S, _p, _r, _a, _y, _END, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 5,
		.weight = 135,
		.description = DEX_ENTRY_PANPOUR,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_SIMIPOUR] =
	{
		.categoryName = {_G, _e, _y, _s, _e, _r, _END, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 10,
		.weight = 290,
		.description = DEX_ENTRY_SIMIPOUR,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_MUNNA] =
	{
		.categoryName = {_D, _r, _e, _a, _m, _SPACE, _E, _a, _t, _e, _r, _END},
		.height = 6,
		.weight = 233,
		.description = DEX_ENTRY_MUNNA,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_MUSHARNA] =
	{
		.categoryName = {_D, _r, _o, _w, _s, _i, _n, _g, _END, _SPACE, _SPACE, _SPACE},
		.height = 11,
		.weight = 605,
		.description = DEX_ENTRY_MUSHARNA,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_PIDOVE] =
	{
		.categoryName = {_T, _i, _n, _y, _SPACE, _P, _i, _g, _e, _o, _n, _END},
		.height = 3,
		.weight = 21,
		.description = DEX_ENTRY_PIDOVE,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_TRANQUILL] =
	{
		.categoryName = {_W, _i, _l, _d, _SPACE, _P, _i, _g, _e, _o, _n, _END},
		.height = 6,
		.weight = 150,
		.description = DEX_ENTRY_TRANQUILL,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_UNFEZANT] =
	{
		.categoryName = {_P, _r, _o, _u, _d, _END, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 12,
		.weight = 290,
		.description = DEX_ENTRY_UNFEZANT,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_BLITZLE] =
	{
		.categoryName = {_E, _l, _e, _c, _t, _r, _i, _f, _i, _e, _d, _END},
		.height = 8,
		.weight = 298,
		.description = DEX_ENTRY_BLITZLE,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_ZEBSTRIKA] =
	{
		.categoryName = {_T, _h, _u, _n, _d, _e, _r, _b, _o, _l, _t, _END},
		.height = 16,
		.weight = 795,
		.description = DEX_ENTRY_ZEBSTRIKA,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_ROGGENROLA] =
	{
		.categoryName = {_M, _a, _n, _t, _l, _e, _END, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 4,
		.weight = 180,
		.description = DEX_ENTRY_ROGGENROLA,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_BOLDORE] =
	{
		.categoryName = {_O, _r, _e, _END, _o, _w, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 9,
		.weight = 1020,
		.description = DEX_ENTRY_BOLDORE,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_GIGALITH] =
	{
		.categoryName = {_C, _o, _m, _p, _r, _e, _s, _s, _e, _d, _END, _SPACE},
		.height = 17,
		.weight = 2600,
		.description = DEX_ENTRY_GIGALITH,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_WOOBAT] =
	{
		.categoryName = {_B, _a, _t, _END, _o, _w, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 4,
		.weight = 21,
		.description = DEX_ENTRY_WOOBAT,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_SWOOBAT] =
	{
		.categoryName = {_C, _o, _u, _r, _t, _i, _n, _g, _END, _SPACE, _SPACE, _SPACE},
		.height = 9,
		.weight = 105,
		.description = DEX_ENTRY_SWOOBAT,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_DRILBUR] =
	{
		.categoryName = {_M, _o, _l, _e, _END, _w, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 3,
		.weight = 187,
		.description = DEX_ENTRY_DRILBUR,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_EXCADRILL] =
	{
		.categoryName = {_S, _u, _b, _t, _e, _r, _r, _e, _n, _e, _END, _SPACE},
		.height = 7,
		.weight = 404,
		.description = DEX_ENTRY_EXCADRILL,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_AUDINO] =
	{
		.categoryName = {_H, _e, _a, _r, _i, _n, _g, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 11,
		.weight = 310,
		.description = DEX_ENTRY_AUDINO,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_TIMBURR] =
	{
		.categoryName = {_M, _u, _s, _c, _u, _l, _a, _r, _END, _SPACE, _SPACE, _SPACE},
		.height = 6,
		.weight = 125,
		.description = DEX_ENTRY_TIMBURR,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_GURDURR] =
	{
		.categoryName = {_M, _u, _s, _c, _u, _l, _a, _r, _END, _SPACE, _SPACE, _SPACE},
		.height = 12,
		.weight = 400,
		.description = DEX_ENTRY_GURDURR,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_CONKELDURR] =
	{
		.categoryName = {_M, _u, _s, _c, _u, _l, _a, _r, _END, _SPACE, _SPACE, _SPACE},
		.height = 14,
		.weight = 870,
		.description = DEX_ENTRY_CONKELDURR,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_TYMPOLE] =
	{
		.categoryName = {_T, _a, _d, _p, _o, _l, _e, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 5,
		.weight = 45,
		.description = DEX_ENTRY_TYMPOLE,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_PALPITOAD] =
	{
		.categoryName = {_V, _i, _b, _r, _a, _t, _i, _o, _n, _END, _SPACE, _SPACE},
		.height = 8,
		.weight = 170,
		.description = DEX_ENTRY_PALPITOAD,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_SEISMITOAD] =
	{
		.categoryName = {_V, _i, _b, _r, _a, _t, _i, _o, _n, _END, _SPACE, _SPACE},
		.height = 15,
		.weight = 620,
		.description = DEX_ENTRY_SEISMITOAD,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_THROH] =
	{
		.categoryName = {_J, _u, _d, _o, _END, _w, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 13,
		.weight = 555,
		.description = DEX_ENTRY_THROH,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_SAWK] =
	{
		.categoryName = {_K, _a, _r, _a, _t, _e, _END, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 14,
		.weight = 510,
		.description = DEX_ENTRY_SAWK,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_SEWADDLE] =
	{
		.categoryName = {_S, _e, _w, _i, _n, _g, _END, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 3,
		.weight = 25,
		.description = DEX_ENTRY_SEWADDLE,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_SWADLOON] =
	{
		.categoryName = {_L, _e, _a, _f, _W, _r, _a, _p, _p, _e, _d, _END},
		.height = 5,
		.weight = 73,
		.description = DEX_ENTRY_SWADLOON,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_LEAVANNY] =
	{
		.categoryName = {_N, _u, _r, _t, _u, _r, _i, _n, _g, _END, _SPACE, _SPACE},
		.height = 12,
		.weight = 205,
		.description = DEX_ENTRY_LEAVANNY,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_VENIPEDE] =
	{
		.categoryName = {_C, _e, _n, _t, _i, _p, _e, _d, _e, _END, _SPACE, _SPACE},
		.height = 4,
		.weight = 53,
		.description = DEX_ENTRY_VENIPEDE,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_WHIRLIPEDE] =
	{
		.categoryName = {_C, _u, _r, _l, _i, _p, _e, _d, _e, _END, _SPACE, _SPACE},
		.height = 12,
		.weight = 585,
		.description = DEX_ENTRY_WHIRLIPEDE,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_SCOLIPEDE] =
	{
		.categoryName = {_M, _e, _g, _a, _p, _e, _d, _e, _END, _SPACE, _SPACE, _SPACE},
		.height = 25,
		.weight = 2005,
		.description = DEX_ENTRY_SCOLIPEDE,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_COTTONEE] =
	{
		.categoryName = {_C, _o, _t, _t, _o, _n, _SPACE, _P, _u, _f, _f, _END},
		.height = 3,
		.weight = 6,
		.description = DEX_ENTRY_COTTONEE,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_WHIMSICOTT] =
	{
		.categoryName = {_W, _i, _n, _d, _v, _e, _i, _l, _e, _d, _END, _SPACE},
		.height = 7,
		.weight = 66,
		.description = DEX_ENTRY_WHIMSICOTT,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_PETILIL] =
	{
		.categoryName = {_B, _u, _l, _b, _END, _w, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 5,
		.weight = 66,
		.description = DEX_ENTRY_PETILIL,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_LILLIGANT] =
	{
		.categoryName = {_F, _l, _o, _w, _e, _r, _i, _n, _g, _END, _SPACE, _SPACE},
		.height = 11,
		.weight = 163,
		.description = DEX_ENTRY_LILLIGANT,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_BASCULIN] =
	{
		.categoryName = {_H, _o, _s, _t, _i, _l, _e, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 10,
		.weight = 180,
		.description = DEX_ENTRY_BASCULIN,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_SANDILE] =
	{
		.categoryName = {_D, _e, _s, _e, _r, _t, _SPACE, _C, _r, _o, _c, _END},
		.height = 7,
		.weight = 152,
		.description = DEX_ENTRY_SANDILE,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_KROKOROK] =
	{
		.categoryName = {_D, _e, _s, _e, _r, _t, _SPACE, _C, _r, _o, _c, _END},
		.height = 10,
		.weight = 334,
		.description = DEX_ENTRY_KROKOROK,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_KROOKODILE] =
	{
		.categoryName = {_I, _n, _t, _i, _m, _i, _d, _a, _t, _e, _END, _END},
		.height = 15,
		.weight = 963,
		.description = DEX_ENTRY_KROOKODILE,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_DARUMAKA] =
	{
		.categoryName = {_Z, _e, _n, _SPACE, _C, _h, _a, _r, _m, _END, _SPACE, _SPACE},
		.height = 6,
		.weight = 375,
		.description = DEX_ENTRY_DARUMAKA,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_DARMANITAN] =
	{
		.categoryName = {_B, _l, _a, _z, _i, _n, _g, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 13,
		.weight = 929,
		.description = DEX_ENTRY_DARMANITAN,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_MARACTUS] =
	{
		.categoryName = {_C, _a, _c, _t, _u, _s, _END, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 10,
		.weight = 1720,
		.description = DEX_ENTRY_MARACTUS,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_DWEBBLE] =
	{
		.categoryName = {_R, _o, _c, _k, _SPACE, _I, _n, _n, _END, _SPACE, _SPACE, _SPACE},
		.height = 3,
		.weight = 145,
		.description = DEX_ENTRY_DWEBBLE,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_CRUSTLE] =
	{
		.categoryName = {_S, _t, _o, _n, _e, _SPACE, _H, _o, _m, _e, _END, _SPACE},
		.height = 14,
		.weight = 1720,
		.description = DEX_ENTRY_CRUSTLE,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_SCRAGGY] =
	{
		.categoryName = {_S, _h, _e, _d, _d, _i, _n, _g, _END, _SPACE, _SPACE, _SPACE},
		.height = 6,
		.weight = 118,
		.description = DEX_ENTRY_SCRAGGY,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_SCRAFTY] =
	{
		.categoryName = {_H, _o, _o, _d, _l, _u, _m, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 11,
		.weight = 300,
		.description = DEX_ENTRY_SCRAFTY,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_SIGILYPH] =
	{
		.categoryName = {_A, _v, _i, _a, _n, _o, _i, _d, _END, _SPACE, _SPACE, _SPACE},
		.height = 14,
		.weight = 140,
		.description = DEX_ENTRY_SIGILYPH,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_YAMASK] =
	{
		.categoryName = {_S, _p, _i, _r, _i, _t, _END, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 5,
		.weight = 15,
		.description = DEX_ENTRY_YAMASK,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_COFAGRIGUS] =
	{
		.categoryName = {_C, _o, _f, _f, _i, _n, _END, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 17,
		.weight = 765,
		.description = DEX_ENTRY_COFAGRIGUS,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_TIRTOUGA] =
	{
		.categoryName = {_P, _r, _o, _t, _o, _t, _u, _r, _t, _l, _e, _END},
		.height = 7,
		.weight = 165,
		.description = DEX_ENTRY_TIRTOUGA,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_CARRACOSTA] =
	{
		.categoryName = {_P, _r, _o, _t, _o, _t, _u, _r, _t, _l, _e, _END},
		.height = 12,
		.weight = 810,
		.description = DEX_ENTRY_CARRACOSTA,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_ARCHEN] =
	{
		.categoryName = {_F, _i, _r, _s, _t, _SPACE, _B, _i, _r, _d, _END, _SPACE},
		.height = 5,
		.weight = 95,
		.description = DEX_ENTRY_ARCHEN,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_ARCHEOPS] =
	{
		.categoryName = {_F, _i, _r, _s, _t, _SPACE, _B, _i, _r, _d, _END, _SPACE},
		.height = 14,
		.weight = 320,
		.description = DEX_ENTRY_ARCHEOPS,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_TRUBBISH] =
	{
		.categoryName = {_T, _r, _a, _s, _h, _SPACE, _B, _a, _g, _END, _SPACE, _SPACE},
		.height = 6,
		.weight = 310,
		.description = DEX_ENTRY_TRUBBISH,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_GARBODOR] =
	{
		.categoryName = {_T, _r, _a, _s, _h, _SPACE, _H, _e, _a, _p, _END, _SPACE},
		.height = 19,
		.weight = 1073,
		.description = DEX_ENTRY_GARBODOR,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_ZORUA] =
	{
		.categoryName = {_T, _r, _i, _c, _k, _y, _SPACE, _F, _o, _x, _END, _SPACE},
		.height = 7,
		.weight = 125,
		.description = DEX_ENTRY_ZORUA,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_ZOROARK] =
	{
		.categoryName = {_I, _l, _l, _u, _s, _i, _o, _n, _F, _o, _x, _END},
		.height = 16,
		.weight = 811,
		.description = DEX_ENTRY_ZOROARK,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_MINCCINO] =
	{
		.categoryName = {_C, _h, _i, _n, _c, _h, _i, _l, _l, _a, _END, _SPACE},
		.height = 4,
		.weight = 58,
		.description = DEX_ENTRY_MINCCINO,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_CINCCINO] =
	{
		.categoryName = {_S, _c, _a, _r, _f, _END, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 5,
		.weight = 75,
		.description = DEX_ENTRY_CINCCINO,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_GOTHITA] =
	{
		.categoryName = {_F, _i, _x, _a, _t, _i, _o, _n, _END, _SPACE, _SPACE, _SPACE},
		.height = 4,
		.weight = 58,
		.description = DEX_ENTRY_GOTHITA,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_GOTHORITA] =
	{
		.categoryName = {_M, _a, _n, _i, _p, _u, _l, _a, _t, _e, _END, _SPACE},
		.height = 7,
		.weight = 180,
		.description = DEX_ENTRY_GOTHORITA,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_GOTHITELLE] =
	{
		.categoryName = {_A, _s, _t, _r, _a, _l, _SPACE, _B, _o, _d, _y, _END},
		.height = 15,
		.weight = 440,
		.description = DEX_ENTRY_GOTHITELLE,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_SOLOSIS] =
	{
		.categoryName = {_C, _e, _l, _l, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 3,
		.weight = 10,
		.description = DEX_ENTRY_SOLOSIS,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_DUOSION] =
	{
		.categoryName = {_M, _i, _t, _o, _s, _i, _s, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 6,
		.weight = 80,
		.description = DEX_ENTRY_DUOSION,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_REUNICLUS] =
	{
		.categoryName = {_M, _u, _l, _t, _i, _p, _l, _y, _i, _n, _g, _END},
		.height = 10,
		.weight = 201,
		.description = DEX_ENTRY_REUNICLUS,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_DUCKLETT] =
	{
		.categoryName = {_W, _a, _t, _e, _r, _SPACE, _B, _i, _r, _d, _END, _SPACE},
		.height = 5,
		.weight = 55,
		.description = DEX_ENTRY_DUCKLETT,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_SWANNA] =
	{
		.categoryName = {_W, _h, _i, _t, _e, _SPACE, _B, _i, _r, _d, _END, _SPACE},
		.height = 13,
		.weight = 242,
		.description = DEX_ENTRY_SWANNA,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_VANILLITE] =
	{
		.categoryName = {_F, _r, _e, _s, _h, _SPACE, _S, _n, _o, _w, _END, _SPACE},
		.height = 4,
		.weight = 1720,
		.description = DEX_ENTRY_VANILLITE,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_VANILLISH] =
	{
		.categoryName = {_I, _c, _y, _SPACE, _S, _n, _o, _w, _END, _SPACE, _SPACE, _SPACE},
		.height = 11,
		.weight = 410,
		.description = DEX_ENTRY_VANILLISH,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_VANILLUXE] =
	{
		.categoryName = {_S, _n, _o, _w, _s, _t, _o, _r, _m, _END, _SPACE, _SPACE},
		.height = 13,
		.weight = 575,
		.description = DEX_ENTRY_VANILLUXE,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_DEERLING] =
	{
		.categoryName = {_S, _e, _a, _s, _o, _n, _END, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 6,
		.weight = 195,
		.description = DEX_ENTRY_DEERLING,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_SAWSBUCK] =
	{
		.categoryName = {_S, _e, _a, _s, _o, _n, _END, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 19,
		.weight = 925,
		.description = DEX_ENTRY_SAWSBUCK,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_EMOLGA] =
	{
		.categoryName = {_S, _k, _y, _S, _q, _u, _i, _r, _r, _e, _l, _END},
		.height = 4,
		.weight = 50,
		.description = DEX_ENTRY_EMOLGA,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_KARRABLAST] =
	{
		.categoryName = {_C, _l, _a, _m, _p, _i, _n, _g, _END, _SPACE, _SPACE, _SPACE},
		.height = 5,
		.weight = 59,
		.description = DEX_ENTRY_KARRABLAST,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_ESCAVALIER] =
	{
		.categoryName = {_C, _a, _v, _a, _l, _r, _y, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 10,
		.weight = 330,
		.description = DEX_ENTRY_ESCAVALIER,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_FOONGUS] =
	{
		.categoryName = {_M, _u, _s, _h, _r, _o, _o, _m, _END, _SPACE, _SPACE, _SPACE},
		.height = 2,
		.weight = 10,
		.description = DEX_ENTRY_FOONGUS,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_AMOONGUSS] =
	{
		.categoryName = {_M, _u, _s, _h, _r, _o, _o, _m, _END, _SPACE, _SPACE, _SPACE},
		.height = 6,
		.weight = 105,
		.description = DEX_ENTRY_AMOONGUSS,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_FRILLISH] =
	{
		.categoryName = {_F, _l, _o, _a, _t, _i, _n, _g, _END, _SPACE, _SPACE, _SPACE},
		.height = 12,
		.weight = 330,
		.description = DEX_ENTRY_FRILLISH,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_JELLICENT] =
	{
		.categoryName = {_F, _l, _o, _a, _t, _i, _n, _g, _END, _SPACE, _SPACE, _SPACE},
		.height = 22,
		.weight = 1350,
		.description = DEX_ENTRY_JELLICENT,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_ALOMOMOLA] =
	{
		.categoryName = {_C, _a, _r, _i, _n, _g, _END, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 12,
		.weight = 316,
		.description = DEX_ENTRY_ALOMOMOLA,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_JOLTIK] =
	{
		.categoryName = {_A, _t, _t, _a, _c, _h, _i, _n, _g, _END, _SPACE, _SPACE},
		.height = 1,
		.weight = 6,
		.description = DEX_ENTRY_JOLTIK,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 800,
		.pokemonOffset = 23,
		.trainerScale = 256,
		.trainerOffset = 65534,
	},
	[NATIONAL_DEX_GALVANTULA] =
	{
		.categoryName = {_E, _l, _e, _S, _p, _i, _d, _e, _r, _END, _SPACE, _SPACE},
		.height = 8,
		.weight = 143,
		.description = DEX_ENTRY_GALVANTULA,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_FERROSEED] =
	{
		.categoryName = {_T, _h, _o, _r, _n, _SPACE, _S, _e, _e, _d, _END, _SPACE},
		.height = 6,
		.weight = 188,
		.description = DEX_ENTRY_FERROSEED,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_FERROTHORN] =
	{
		.categoryName = {_T, _h, _o, _r, _n, _SPACE, _P, _o, _d, _END, _SPACE, _SPACE},
		.height = 10,
		.weight = 1100,
		.description = DEX_ENTRY_FERROTHORN,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_KLINK] =
	{
		.categoryName = {_G, _e, _a, _r, _END, _w, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 3,
		.weight = 210,
		.description = DEX_ENTRY_KLINK,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_KLANG] =
	{
		.categoryName = {_G, _e, _a, _r, _END, _w, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 6,
		.weight = 560,
		.description = DEX_ENTRY_KLANG,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_KLINKLANG] =
	{
		.categoryName = {_G, _e, _a, _r, _END, _w, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 6,
		.weight = 810,
		.description = DEX_ENTRY_KLINKLANG,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_TYNAMO] =
	{
		.categoryName = {_E, _l, _e, _F, _i, _s, _h, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 2,
		.weight = 3,
		.description = DEX_ENTRY_TYNAMO,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_EELEKTRIK] =
	{
		.categoryName = {_E, _l, _e, _F, _i, _s, _h, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 12,
		.weight = 220,
		.description = DEX_ENTRY_EELEKTRIK,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_EELEKTROSS] =
	{
		.categoryName = {_E, _l, _e, _F, _i, _s, _h, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 21,
		.weight = 805,
		.description = DEX_ENTRY_EELEKTROSS,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_ELGYEM] =
	{
		.categoryName = {_C, _e, _r, _e, _b, _r, _a, _l, _END, _SPACE, _SPACE, _SPACE},
		.height = 5,
		.weight = 90,
		.description = DEX_ENTRY_ELGYEM,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_BEHEEYEM] =
	{
		.categoryName = {_C, _e, _r, _e, _b, _r, _a, _l, _END, _SPACE, _SPACE, _SPACE},
		.height = 10,
		.weight = 345,
		.description = DEX_ENTRY_BEHEEYEM,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_LITWICK] =
	{
		.categoryName = {_C, _a, _n, _d, _l, _e, _END, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 3,
		.weight = 31,
		.description = DEX_ENTRY_LITWICK,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_LAMPENT] =
	{
		.categoryName = {_L, _a, _m, _p, _END, _w, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 6,
		.weight = 130,
		.description = DEX_ENTRY_LAMPENT,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_CHANDELURE] =
	{
		.categoryName = {_L, _u, _r, _i, _n, _g, _END, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 10,
		.weight = 343,
		.description = DEX_ENTRY_CHANDELURE,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_AXEW] =
	{
		.categoryName = {_T, _u, _s, _k, _END, _w, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 6,
		.weight = 180,
		.description = DEX_ENTRY_AXEW,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_FRAXURE] =
	{
		.categoryName = {_A, _x, _e, _SPACE, _J, _a, _w, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 0,
		.weight = 0,
		.description = DEX_ENTRY_FRAXURE,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_HAXORUS] =
	{
		.categoryName = {_A, _x, _e, _SPACE, _J, _a, _w, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 18,
		.weight = 1055,
		.description = DEX_ENTRY_HAXORUS,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_CUBCHOO] =
	{
		.categoryName = {_C, _h, _i, _l, _l, _END, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 5,
		.weight = 85,
		.description = DEX_ENTRY_CUBCHOO,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_BEARTIC] =
	{
		.categoryName = {_F, _r, _e, _e, _z, _i, _n, _g, _END, _SPACE, _SPACE, _SPACE},
		.height = 26,
		.weight = 2600,
		.description = DEX_ENTRY_BEARTIC,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_CRYOGONAL] =
	{
		.categoryName = {_C, _r, _y, _s, _t, _a, _l, _l, _i, _z, _e, _END},
		.height = 11,
		.weight = 1480,
		.description = DEX_ENTRY_CRYOGONAL,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_SHELMET] =
	{
		.categoryName = {_S, _n, _a, _i, _l, _END, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 4,
		.weight = 77,
		.description = DEX_ENTRY_SHELMET,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_ACCELGOR] =
	{
		.categoryName = {_S, _h, _e, _l, _l, _SPACE, _O, _u, _t, _END, _SPACE, _SPACE},
		.height = 8,
		.weight = 253,
		.description = DEX_ENTRY_ACCELGOR,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_STUNFISK] =
	{
		.categoryName = {_T, _r, _a, _p, _END, _w, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 7,
		.weight = 110,
		.description = DEX_ENTRY_STUNFISK,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_MIENFOO] =
	{
		.categoryName = {_M, _a, _r, _t, _i, _a, _l, _SPACE, _A, _r, _t, _END},
		.height = 9,
		.weight = 200,
		.description = DEX_ENTRY_MIENFOO,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_MIENSHAO] =
	{
		.categoryName = {_M, _a, _r, _t, _i, _a, _l, _SPACE, _A, _r, _t, _END},
		.height = 14,
		.weight = 355,
		.description = DEX_ENTRY_MIENSHAO,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_DRUDDIGON] =
	{
		.categoryName = {_C, _a, _v, _e, _END, _w, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 16,
		.weight = 1390,
		.description = DEX_ENTRY_DRUDDIGON,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_GOLETT] =
	{
		.categoryName = {_A, _u, _t, _o, _m, _a, _t, _o, _n, _END, _SPACE, _SPACE},
		.height = 10,
		.weight = 920,
		.description = DEX_ENTRY_GOLETT,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_GOLURK] =
	{
		.categoryName = {_A, _u, _t, _o, _m, _a, _t, _o, _n, _END, _SPACE, _SPACE},
		.height = 28,
		.weight = 3300,
		.description = DEX_ENTRY_GOLURK,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_PAWNIARD] =
	{
		.categoryName = {_S, _h, _a, _r, _p, _SPACE, _B, _l, _a, _d, _e, _END},
		.height = 5,
		.weight = 102,
		.description = DEX_ENTRY_PAWNIARD,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_BISHARP] =
	{
		.categoryName = {_S, _w, _o, _r, _d, _SPACE, _B, _l, _a, _d, _e, _END},
		.height = 16,
		.weight = 700,
		.description = DEX_ENTRY_BISHARP,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_BOUFFALANT] =
	{
		.categoryName = {_B, _a, _s, _h, _SPACE, _B, _u, _f, _f, _a, _l, _END},
		.height = 16,
		.weight = 946,
		.description = DEX_ENTRY_BOUFFALANT,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_RUFFLET] =
	{
		.categoryName = {_E, _a, _g, _l, _e, _t, _END, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 5,
		.weight = 105,
		.description = DEX_ENTRY_RUFFLET,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_BRAVIARY] =
	{
		.categoryName = {_V, _a, _l, _i, _a, _n, _t, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 15,
		.weight = 410,
		.description = DEX_ENTRY_BRAVIARY,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_VULLABY] =
	{
		.categoryName = {_D, _i, _a, _p, _e, _r, _e, _d, _END, _SPACE, _SPACE, _SPACE},
		.height = 5,
		.weight = 90,
		.description = DEX_ENTRY_VULLABY,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_MANDIBUZZ] =
	{
		.categoryName = {_B, _o, _n, _e, _V, _u, _l, _t, _u, _r, _e, _END},
		.height = 12,
		.weight = 395,
		.description = DEX_ENTRY_MANDIBUZZ,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_HEATMOR] =
	{
		.categoryName = {_A, _n, _t, _e, _a, _t, _e, _r, _END, _SPACE, _SPACE, _SPACE},
		.height = 14,
		.weight = 580,
		.description = DEX_ENTRY_HEATMOR,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_DURANT] =
	{
		.categoryName = {_I, _r, _o, _n, _SPACE, _A, _n, _t, _END, _SPACE, _SPACE, _SPACE},
		.height = 3,
		.weight = 330,
		.description = DEX_ENTRY_DURANT,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_DEINO] =
	{
		.categoryName = {_I, _r, _a, _t, _e, _END, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 8,
		.weight = 173,
		.description = DEX_ENTRY_DEINO,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_ZWEILOUS] =
	{
		.categoryName = {_H, _o, _s, _t, _i, _l, _e, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 14,
		.weight = 500,
		.description = DEX_ENTRY_ZWEILOUS,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_HYDREIGON] =
	{
		.categoryName = {_B, _r, _u, _t, _a, _l, _END, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 18,
		.weight = 1600,
		.description = DEX_ENTRY_HYDREIGON,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_LARVESTA] =
	{
		.categoryName = {_T, _o, _r, _c, _h, _END, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 11,
		.weight = 288,
		.description = DEX_ENTRY_LARVESTA,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_VOLCARONA] =
	{
		.categoryName = {_S, _u, _n, _END, _o, _w, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 16,
		.weight = 460,
		.description = DEX_ENTRY_VOLCARONA,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_COBALION] =
	{
		.categoryName = {_I, _r, _o, _n, _SPACE, _W, _i, _l, _l, _END, _SPACE, _SPACE},
		.height = 21,
		.weight = 2500,
		.description = DEX_ENTRY_COBALION,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_TERRAKION] =
	{
		.categoryName = {_C, _a, _v, _e, _r, _n, _END, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 19,
		.weight = 2600,
		.description = DEX_ENTRY_TERRAKION,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_VIRIZION] =
	{
		.categoryName = {_G, _r, _a, _s, _s, _l, _a, _n, _d, _END, _SPACE, _SPACE},
		.height = 20,
		.weight = 2000,
		.description = DEX_ENTRY_VIRIZION,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_TORNADUS] =
	{
		.categoryName = {_C, _y, _c, _l, _o, _n, _e, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 15,
		.weight = 630,
		.description = DEX_ENTRY_TORNADUS,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_THUNDURUS] =
	{
		.categoryName = {_B, _o, _l, _t, _SPACE, _S, _t, _r, _i, _k, _e, _END},
		.height = 15,
		.weight = 610,
		.description = DEX_ENTRY_THUNDURUS,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_RESHIRAM] =
	{
		.categoryName = {_V, _a, _s, _t, _SPACE, _W, _h, _i, _t, _e, _END, _SPACE},
		.height = 32,
		.weight = 3300,
		.description = DEX_ENTRY_RESHIRAM,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_ZEKROM] =
	{
		.categoryName = {_D, _e, _e, _p, _SPACE, _B, _l, _a, _c, _k, _END, _SPACE},
		.height = 29,
		.weight = 3450,
		.description = DEX_ENTRY_ZEKROM,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_LANDORUS] =
	{
		.categoryName = {_A, _b, _u, _n, _d, _a, _n, _c, _e, _END, _SPACE, _SPACE},
		.height = 15,
		.weight = 680,
		.description = DEX_ENTRY_LANDORUS,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_KYUREM] =
	{
		.categoryName = {_B, _o, _u, _n, _d, _a, _r, _y, _END, _SPACE, _SPACE, _SPACE},
		.height = 30,
		.weight = 3250,
		.description = DEX_ENTRY_KYUREM,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_KELDEO] =
	{
		.categoryName = {_C, _o, _l, _t, _END, _w, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 14,
		.weight = 485,
		.description = DEX_ENTRY_KELDEO,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_MELOETTA] =
	{
		.categoryName = {_M, _e, _l, _o, _d, _y, _END, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 6,
		.weight = 65,
		.description = DEX_ENTRY_MELOETTA,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_GENESECT] =
	{
		.categoryName = {_P, _a, _l, _e, _o, _z, _o, _i, _c, _END, _SPACE, _SPACE},
		.height = 15,
		.weight = 825,
		.description = DEX_ENTRY_GENESECT,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_CHESPIN] =
	{
		.categoryName = {_S, _p, _i, _n, _y, _SPACE, _N, _u, _t, _END, _SPACE, _SPACE},
		.height = 4,
		.weight = 90,
		.description = DEX_ENTRY_CHESPIN,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_QUILLADIN] =
	{
		.categoryName = {_S, _p, _i, _n, _y, _SPACE, _A, _r, _m, _o, _r, _END},
		.height = 7,
		.weight = 290,
		.description = DEX_ENTRY_QUILLADIN,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_CHESNAUGHT] =
	{
		.categoryName = {_S, _p, _i, _n, _y, _SPACE, _A, _r, _m, _o, _r, _END},
		.height = 16,
		.weight = 900,
		.description = DEX_ENTRY_CHESNAUGHT,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_FENNEKIN] =
	{
		.categoryName = {_F, _o, _x, _END, _o, _w, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 4,
		.weight = 94,
		.description = DEX_ENTRY_FENNEKIN,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_BRAIXEN] =
	{
		.categoryName = {_F, _o, _x, _END, _o, _w, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 10,
		.weight = 145,
		.description = DEX_ENTRY_BRAIXEN,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_DELPHOX] =
	{
		.categoryName = {_F, _o, _x, _END, _o, _w, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 15,
		.weight = 390,
		.description = DEX_ENTRY_DELPHOX,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_FROAKIE] =
	{
		.categoryName = {_B, _u, _b, _b, _l, _e, _SPACE, _F, _r, _o, _g, _END},
		.height = 3,
		.weight = 70,
		.description = DEX_ENTRY_FROAKIE,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_FROGADIER] =
	{
		.categoryName = {_B, _u, _b, _b, _l, _e, _SPACE, _F, _r, _o, _g, _END},
		.height = 6,
		.weight = 109,
		.description = DEX_ENTRY_FROGADIER,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_GRENINJA] =
	{
		.categoryName = {_N, _i, _n, _j, _a, _END, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 15,
		.weight = 400,
		.description = DEX_ENTRY_GRENINJA,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_BUNNELBY] =
	{
		.categoryName = {_D, _i, _g, _g, _i, _n, _g, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 4,
		.weight = 50,
		.description = DEX_ENTRY_BUNNELBY,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_DIGGERSBY] =
	{
		.categoryName = {_D, _i, _g, _g, _i, _n, _g, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 10,
		.weight = 424,
		.description = DEX_ENTRY_DIGGERSBY,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_FLETCHLING] =
	{
		.categoryName = {_T, _i, _n, _y, _SPACE, _R, _o, _b, _i, _n, _END, _SPACE},
		.height = 3,
		.weight = 17,
		.description = DEX_ENTRY_FLETCHLING,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_FLETCHINDER] =
	{
		.categoryName = {_E, _m, _b, _e, _r, _END, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 7,
		.weight = 160,
		.description = DEX_ENTRY_FLETCHINDER,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_TALONFLAME] =
	{
		.categoryName = {_S, _c, _o, _r, _c, _h, _i, _n, _g, _END, _SPACE, _SPACE},
		.height = 12,
		.weight = 245,
		.description = DEX_ENTRY_TALONFLAME,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_SCATTERBUG] =
	{
		.categoryName = {_S, _c, _a, _t, _t, _e, _r, _d, _u, _s, _t, _END},
		.height = 3,
		.weight = 25,
		.description = DEX_ENTRY_SCATTERBUG,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_SPEWPA] =
	{
		.categoryName = {_S, _c, _a, _t, _t, _e, _r, _d, _u, _s, _t, _END},
		.height = 3,
		.weight = 84,
		.description = DEX_ENTRY_SPEWPA,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_VIVILLON] =
	{
		.categoryName = {_S, _c, _a, _l, _e, _END, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 12,
		.weight = 170,
		.description = DEX_ENTRY_VIVILLON,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_LITLEO] =
	{
		.categoryName = {_L, _i, _o, _n, _SPACE, _C, _u, _b, _END, _SPACE, _SPACE, _SPACE},
		.height = 6,
		.weight = 135,
		.description = DEX_ENTRY_LITLEO,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_PYROAR] =
	{
		.categoryName = {_R, _o, _y, _a, _l, _END, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 15,
		.weight = 815,
		.description = DEX_ENTRY_PYROAR,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_FLABEBE] =
	{
		.categoryName = {_S, _i, _n, _g, _l, _e, _B, _l, _o, _o, _m, _END},
		.height = 1,
		.weight = 1,
		.description = DEX_ENTRY_FLABEBE,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_FLOETTE] =
	{
		.categoryName = {_S, _i, _n, _g, _l, _e, _B, _l, _o, _o, _m, _END},
		.height = 2,
		.weight = 9,
		.description = DEX_ENTRY_FLOETTE,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_FLORGES] =
	{
		.categoryName = {_G, _a, _r, _d, _e, _n, _END, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 11,
		.weight = 100,
		.description = DEX_ENTRY_FLORGES,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_SKIDDO] =
	{
		.categoryName = {_M, _o, _u, _n, _t, _END, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 9,
		.weight = 310,
		.description = DEX_ENTRY_SKIDDO,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_GOGOAT] =
	{
		.categoryName = {_M, _o, _u, _n, _t, _END, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 17,
		.weight = 910,
		.description = DEX_ENTRY_GOGOAT,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_PANCHAM] =
	{
		.categoryName = {_P, _l, _a, _y, _f, _u, _l, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 6,
		.weight = 80,
		.description = DEX_ENTRY_PANCHAM,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_PANGORO] =
	{
		.categoryName = {_D, _a, _u, _n, _t, _i, _n, _g, _END, _SPACE, _SPACE, _SPACE},
		.height = 21,
		.weight = 1360,
		.description = DEX_ENTRY_PANGORO,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_FURFROU] =
	{
		.categoryName = {_P, _o, _o, _d, _l, _e, _END, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 12,
		.weight = 280,
		.description = DEX_ENTRY_FURFROU,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_ESPURR] =
	{
		.categoryName = {_R, _e, _s, _t, _r, _a, _i, _n, _t, _END, _SPACE, _SPACE},
		.height = 3,
		.weight = 35,
		.description = DEX_ENTRY_ESPURR,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_MEOWSTIC] =
	{
		.categoryName = {_C, _o, _n, _s, _t, _r, _a, _i, _n, _t, _END, _SPACE},
		.height = 6,
		.weight = 85,
		.description = DEX_ENTRY_MEOWSTIC,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_HONEDGE] =
	{
		.categoryName = {_S, _w, _o, _r, _d, _END, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 8,
		.weight = 20,
		.description = DEX_ENTRY_HONEDGE,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_DOUBLADE] =
	{
		.categoryName = {_S, _w, _o, _r, _d, _END, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 8,
		.weight = 45,
		.description = DEX_ENTRY_DOUBLADE,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_AEGISLASH] =
	{
		.categoryName = {_R, _o, _y, _a, _l, _SPACE, _S, _w, _o, _r, _d, _END},
		.height = 17,
		.weight = 530,
		.description = DEX_ENTRY_AEGISLASH,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_SPRITZEE] =
	{
		.categoryName = {_P, _e, _r, _f, _u, _m, _e, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 2,
		.weight = 5,
		.description = DEX_ENTRY_SPRITZEE,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_AROMATISSE] =
	{
		.categoryName = {_F, _r, _a, _g, _r, _a, _n, _c, _e, _END, _SPACE, _SPACE},
		.height = 8,
		.weight = 155,
		.description = DEX_ENTRY_AROMATISSE,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_SWIRLIX] =
	{
		.categoryName = {_C, _o, _t, _t, _o, _n, _C, _a, _n, _d, _y, _END},
		.height = 4,
		.weight = 35,
		.description = DEX_ENTRY_SWIRLIX,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_SLURPUFF] =
	{
		.categoryName = {_M, _e, _r, _i, _n, _g, _u, _e, _END, _SPACE, _SPACE, _SPACE},
		.height = 8,
		.weight = 50,
		.description = DEX_ENTRY_SLURPUFF,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_INKAY] =
	{
		.categoryName = {_R, _e, _v, _o, _l, _v, _i, _n, _g, _END, _SPACE, _SPACE},
		.height = 4,
		.weight = 35,
		.description = DEX_ENTRY_INKAY,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_MALAMAR] =
	{
		.categoryName = {_O, _v, _e, _r, _t, _u, _r, _n, _i, _n, _g, _END},
		.height = 15,
		.weight = 470,
		.description = DEX_ENTRY_MALAMAR,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_BINACLE] =
	{
		.categoryName = {_T, _w, _o, 0xae, _H, _a, _n, _d, _e, _d, _END, _SPACE},
		.height = 5,
		.weight = 310,
		.description = DEX_ENTRY_BINACLE,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_BARBARACLE] =
	{
		.categoryName = {_C, _o, _l, _l, _e, _c, _t, _i, _v, _e, _END, _SPACE},
		.height = 13,
		.weight = 960,
		.description = DEX_ENTRY_BARBARACLE,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_SKRELP] =
	{
		.categoryName = {_M, _o, _c, _k, _SPACE, _K, _e, _l, _p, _END, _SPACE, _SPACE},
		.height = 5,
		.weight = 73,
		.description = DEX_ENTRY_SKRELP,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_DRAGALGE] =
	{
		.categoryName = {_M, _o, _c, _k, _SPACE, _K, _e, _l, _p, _END, _SPACE, _SPACE},
		.height = 18,
		.weight = 815,
		.description = DEX_ENTRY_DRAGALGE,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_CLAUNCHER] =
	{
		.categoryName = {_W, _a, _t, _e, _r, _SPACE, _G, _u, _n, _END, _SPACE, _SPACE},
		.height = 5,
		.weight = 83,
		.description = DEX_ENTRY_CLAUNCHER,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_CLAWITZER] =
	{
		.categoryName = {_H, _o, _w, _i, _t, _z, _e, _r, _END, _SPACE, _SPACE, _SPACE},
		.height = 13,
		.weight = 353,
		.description = DEX_ENTRY_CLAWITZER,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_HELIOPTILE] =
	{
		.categoryName = {_G, _e, _n, _e, _r, _a, _t, _o, _r, _END, _SPACE, _SPACE},
		.height = 5,
		.weight = 60,
		.description = DEX_ENTRY_HELIOPTILE,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_HELIOLISK] =
	{
		.categoryName = {_G, _e, _n, _e, _r, _a, _t, _o, _r, _END, _SPACE, _SPACE},
		.height = 10,
		.weight = 210,
		.description = DEX_ENTRY_HELIOLISK,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_TYRUNT] =
	{
		.categoryName = {_R, _o, _y, _a, _l, _SPACE, _H, _e, _i, _r, _END, _SPACE},
		.height = 8,
		.weight = 260,
		.description = DEX_ENTRY_TYRUNT,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_TYRANTRUM] =
	{
		.categoryName = {_D, _e, _s, _p, _o, _t, _END, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 25,
		.weight = 2700,
		.description = DEX_ENTRY_TYRANTRUM,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_AMAURA] =
	{
		.categoryName = {_T, _u, _n, _d, _r, _a, _END, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 13,
		.weight = 252,
		.description = DEX_ENTRY_AMAURA,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_AURORUS] =
	{
		.categoryName = {_T, _u, _n, _d, _r, _a, _END, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 27,
		.weight = 2250,
		.description = DEX_ENTRY_AURORUS,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_SYLVEON] =
	{
		.categoryName = {_I, _n, _t, _e, _r, _t, _w, _i, _n, _e, _END, _END},
		.height = 10,
		.weight = 235,
		.description = DEX_ENTRY_SYLVEON,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_HAWLUCHA] =
	{
		.categoryName = {_W, _r, _e, _s, _t, _l, _i, _n, _g, _END, _SPACE, _SPACE},
		.height = 8,
		.weight = 215,
		.description = DEX_ENTRY_HAWLUCHA,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_DEDENNE] =
	{
		.categoryName = {_A, _n, _t, _e, _n, _n, _a, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 2,
		.weight = 22,
		.description = DEX_ENTRY_DEDENNE,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_CARBINK] =
	{
		.categoryName = {_J, _e, _w, _e, _l, _END, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 3,
		.weight = 57,
		.description = DEX_ENTRY_CARBINK,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_GOOMY] =
	{
		.categoryName = {_S, _o, _f, _t, _SPACE, _T, _i, _s, _s, _u, _e, _END},
		.height = 3,
		.weight = 28,
		.description = DEX_ENTRY_GOOMY,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_SLIGGOO] =
	{
		.categoryName = {_S, _o, _f, _t, _SPACE, _T, _i, _s, _s, _u, _e, _END},
		.height = 8,
		.weight = 175,
		.description = DEX_ENTRY_SLIGGOO,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_GOODRA] =
	{
		.categoryName = {_D, _r, _a, _g, _o, _n, _END, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 20,
		.weight = 1505,
		.description = DEX_ENTRY_GOODRA,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_KLEFKI] =
	{
		.categoryName = {_K, _e, _y, _SPACE, _R, _i, _n, _g, _END, _SPACE, _SPACE, _SPACE},
		.height = 2,
		.weight = 30,
		.description = DEX_ENTRY_KLEFKI,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_PHANTUMP] =
	{
		.categoryName = {_S, _t, _u, _m, _p, _END, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 4,
		.weight = 70,
		.description = DEX_ENTRY_PHANTUMP,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_TREVENANT] =
	{
		.categoryName = {_E, _l, _d, _e, _r, _SPACE, _T, _r, _e, _e, _END, _SPACE},
		.height = 15,
		.weight = 710,
		.description = DEX_ENTRY_TREVENANT,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_PUMPKABOO] =
	{
		.categoryName = {_P, _u, _m, _p, _k, _i, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 4,
		.weight = 50,
		.description = DEX_ENTRY_PUMPKABOO,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_GOURGEIST] =
	{
		.categoryName = {_P, _u, _m, _p, _k, _i, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 9,
		.weight = 125,
		.description = DEX_ENTRY_GOURGEIST,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_BERGMITE] =
	{
		.categoryName = {_I, _c, _e, _SPACE, _C, _h, _u, _n, _k, _END, _SPACE, _SPACE},
		.height = 10,
		.weight = 995,
		.description = DEX_ENTRY_BERGMITE,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_AVALUGG] =
	{
		.categoryName = {_I, _c, _e, _b, _e, _r, _g, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 20,
		.weight = 5050,
		.description = DEX_ENTRY_AVALUGG,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_NOIBAT] =
	{
		.categoryName = {_S, _o, _u, _n, _d, _SPACE, _W, _a, _v, _e, _END, _SPACE},
		.height = 5,
		.weight = 80,
		.description = DEX_ENTRY_NOIBAT,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_NOIVERN] =
	{
		.categoryName = {_S, _o, _u, _n, _d, _SPACE, _W, _a, _v, _e, _END, _SPACE},
		.height = 15,
		.weight = 850,
		.description = DEX_ENTRY_NOIVERN,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_XERNEAS] =
	{
		.categoryName = {_L, _i, _f, _e, _END, _w, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 30,
		.weight = 2150,
		.description = DEX_ENTRY_XERNEAS,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_YVELTAL] =
	{
		.categoryName = {_D, _e, _s, _t, _r, _u, _c, _t, _i, _o, _n, _END},
		.height = 58,
		.weight = 2030,
		.description = DEX_ENTRY_YVELTAL,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_ZYGARDE] =
	{
		.categoryName = {_O, _r, _d, _e, _r, _END, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 50,
		.weight = 3050,
		.description = DEX_ENTRY_ZYGARDE,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_DIANCIE] =
	{
		.categoryName = {_J, _e, _w, _e, _l, _END, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 7,
		.weight = 88,
		.description = DEX_ENTRY_DIANCIE,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_HOOPA] =
	{
		.categoryName = {_M, _i, _s, _c, _h, _i, _e, _f, _END, _SPACE, _SPACE, _SPACE},
		.height = 5,
		.weight = 90,
		.description = DEX_ENTRY_HOOPA,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_VOLCANION] =
	{
		.categoryName = {_S, _t, _e, _a, _m, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 0,
		.weight = 0,
		.description = DEX_ENTRY_VOLCANION,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_ROWLET] =
	{
		.categoryName = {_G, _r, _a, _s, _s, _SPACE, _Q, _u, _i, _l, _l, _END},
		.height = 3,
		.weight = 15,
		.description = DEX_ENTRY_ROWLET,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_DARTRIX] =
	{
		.categoryName = {_B, _l, _a, _d, _e, _SPACE, _Q, _u, _i, _l, _l, _END},
		.height = 7,
		.weight = 160,
		.description = DEX_ENTRY_DARTRIX,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_DECIDUEYE] =
	{
		.categoryName = {_A, _r, _r, _o, _w, _SPACE, _Q, _u, _i, _l, _l, _END},
		.height = 16,
		.weight = 366,
		.description = DEX_ENTRY_DECIDUEYE,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_LITTEN] =
	{
		.categoryName = {_F, _i, _r, _e, _SPACE, _C, _a, _t, _END, _SPACE, _SPACE, _SPACE},
		.height = 4,
		.weight = 43,
		.description = DEX_ENTRY_LITTEN,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_TORRACAT] =
	{
		.categoryName = {_F, _i, _r, _e, _SPACE, _C, _a, _t, _END, _SPACE, _SPACE, _SPACE},
		.height = 7,
		.weight = 250,
		.description = DEX_ENTRY_TORRACAT,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_INCINEROAR] =
	{
		.categoryName = {_H, _e, _e, _l, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 18,
		.weight = 830,
		.description = DEX_ENTRY_INCINEROAR,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_POPPLIO] =
	{
		.categoryName = {_S, _e, _a, _SPACE, _L, _i, _o, _n, _END, _SPACE, _SPACE, _SPACE},
		.height = 4,
		.weight = 75,
		.description = DEX_ENTRY_POPPLIO,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_BRIONNE] =
	{
		.categoryName = {_P, _o, _p, _s, _t, _a, _r, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 6,
		.weight = 175,
		.description = DEX_ENTRY_BRIONNE,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_PRIMARINA] =
	{
		.categoryName = {_S, _o, _l, _o, _i, _s, _t, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 18,
		.weight = 440,
		.description = DEX_ENTRY_PRIMARINA,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_PIKIPEK] =
	{
		.categoryName = {_W, _o, _o, _d, _p, _e, _c, _k, _e, _r, _END, _SPACE},
		.height = 3,
		.weight = 12,
		.description = DEX_ENTRY_PIKIPEK,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_TRUMBEAK] =
	{
		.categoryName = {_B, _u, _g, _l, _e, _SPACE, _B, _e, _a, _k, _END, _SPACE},
		.height = 6,
		.weight = 148,
		.description = DEX_ENTRY_TRUMBEAK,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_TOUCANNON] =
	{
		.categoryName = {_C, _a, _n, _n, _o, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 11,
		.weight = 260,
		.description = DEX_ENTRY_TOUCANNON,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_YUNGOOS] =
	{
		.categoryName = {_L, _o, _i, _t, _e, _r, _i, _n, _g, _END, _SPACE, _SPACE},
		.height = 4,
		.weight = 60,
		.description = DEX_ENTRY_YUNGOOS,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_GUMSHOOS] =
	{
		.categoryName = {_S, _t, _a, _k, _e, _o, _u, _t, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 7,
		.weight = 142,
		.description = DEX_ENTRY_GUMSHOOS,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_GRUBBIN] =
	{
		.categoryName = {_L, _a, _r, _v, _a, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 4,
		.weight = 44,
		.description = DEX_ENTRY_GRUBBIN,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_CHARJABUG] =
	{
		.categoryName = {_B, _a, _t, _t, _e, _r, _y, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 5,
		.weight = 105,
		.description = DEX_ENTRY_CHARJABUG,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_VIKAVOLT] =
	{
		.categoryName = {_S, _t, _a, _g, _SPACE, _B, _e, _e, _t, _l, _e, _END},
		.height = 15,
		.weight = 450,
		.description = DEX_ENTRY_VIKAVOLT,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_CRABRAWLER] =
	{
		.categoryName = {_B, _o, _x, _i, _n, _g, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 6,
		.weight = 70,
		.description = DEX_ENTRY_CRABRAWLER,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_CRABOMINABLE] =
	{
		.categoryName = {_W, _o, _o, _l, _l, _y, _SPACE, _C, _r, _a, _b, _END},
		.height = 17,
		.weight = 1800,
		.description = DEX_ENTRY_CRABOMINABLE,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_ORICORIO] =
	{
		.categoryName = {_D, _a, _n, _c, _i, _n, _g, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 6,
		.weight = 34,
		.description = DEX_ENTRY_ORICORIO,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_CUTIEFLY] =
	{
		.categoryName = {_B, _e, _e, _SPACE, _F, _l, _y, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 1,
		.weight = 2,
		.description = DEX_ENTRY_CUTIEFLY,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_RIBOMBEE] =
	{
		.categoryName = {_B, _e, _e, _SPACE, _F, _l, _y, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 2,
		.weight = 5,
		.description = DEX_ENTRY_RIBOMBEE,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_ROCKRUFF] =
	{
		.categoryName = {_P, _u, _p, _p, _y, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 5,
		.weight = 92,
		.description = DEX_ENTRY_ROCKRUFF,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_LYCANROC] =
	{
		.categoryName = {_W, _o, _l, _f, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 8,
		.weight = 250,
		.description = DEX_ENTRY_LYCANROC,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_WISHIWASHI] =
	{
		.categoryName = {_S, _m, _a, _l, _l, _SPACE, _F, _r, _y, _END, _SPACE, _SPACE},
		.height = 2,
		.weight = 3,
		.description = DEX_ENTRY_WISHIWASHI,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_MAREANIE] =
	{
		.categoryName = {_B, _r, _u, _t, _a, _l, _SPACE, _S, _t, _a, _r, _END},
		.height = 4,
		.weight = 80,
		.description = DEX_ENTRY_MAREANIE,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_TOXAPEX] =
	{
		.categoryName = {_B, _r, _u, _t, _a, _l, _SPACE, _S, _t, _a, _r, _END},
		.height = 7,
		.weight = 145,
		.description = DEX_ENTRY_TOXAPEX,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_MUDBRAY] =
	{
		.categoryName = {_D, _o, _n, _k, _e, _y, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 10,
		.weight = 1100,
		.description = DEX_ENTRY_MUDBRAY,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_MUDSDALE] =
	{
		.categoryName = {_D, _r, _a, _f, _t, _SPACE, _H, _o, _r, _s, _e, _END},
		.height = 25,
		.weight = 9200,
		.description = DEX_ENTRY_MUDSDALE,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_DEWPIDER] =
	{
		.categoryName = {_W, _a, _t, _e, _r, _B, _u, _b, _b, _l, _e, _END},
		.height = 3,
		.weight = 40,
		.description = DEX_ENTRY_DEWPIDER,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_ARAQUANID] =
	{
		.categoryName = {_W, _a, _t, _e, _r, _B, _u, _b, _b, _l, _e, _END},
		.height = 18,
		.weight = 820,
		.description = DEX_ENTRY_ARAQUANID,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_FOMANTIS] =
	{
		.categoryName = {_S, _i, _c, _k, _l, _e, _G, _r, _a, _s, _s, _END},
		.height = 3,
		.weight = 15,
		.description = DEX_ENTRY_FOMANTIS,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_LURANTIS] =
	{
		.categoryName = {_B, _l, _o, _o, _m, _S, _i, _c, _k, _l, _e, _END},
		.height = 9,
		.weight = 185,
		.description = DEX_ENTRY_LURANTIS,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_MORELULL] =
	{
		.categoryName = {_I, _l, _l, _u, _m, _i, _n, _a, _t, _e, _END, _SPACE},
		.height = 2,
		.weight = 15,
		.description = DEX_ENTRY_MORELULL,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_SHIINOTIC] =
	{
		.categoryName = {_I, _l, _l, _u, _m, _i, _n, _a, _t, _e, _END, _SPACE},
		.height = 10,
		.weight = 115,
		.description = DEX_ENTRY_SHIINOTIC,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_SALANDIT] =
	{
		.categoryName = {_T, _o, _x, _i, _c, _L, _i, _z, _a, _r, _d, _END},
		.height = 6,
		.weight = 48,
		.description = DEX_ENTRY_SALANDIT,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_SALAZZLE] =
	{
		.categoryName = {_T, _o, _x, _i, _c, _L, _i, _z, _a, _r, _d, _END},
		.height = 12,
		.weight = 222,
		.description = DEX_ENTRY_SALAZZLE,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_STUFFUL] =
	{
		.categoryName = {_F, _l, _a, _i, _l, _i, _n, _g, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 5,
		.weight = 68,
		.description = DEX_ENTRY_STUFFUL,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_BEWEAR] =
	{
		.categoryName = {_S, _t, _r, _o, _n, _g, _SPACE, _A, _r, _m, _END, _SPACE},
		.height = 21,
		.weight = 1350,
		.description = DEX_ENTRY_BEWEAR,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_BOUNSWEET] =
	{
		.categoryName = {_F, _r, _u, _i, _t, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 3,
		.weight = 32,
		.description = DEX_ENTRY_BOUNSWEET,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_STEENEE] =
	{
		.categoryName = {_F, _r, _u, _i, _t, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 7,
		.weight = 82,
		.description = DEX_ENTRY_STEENEE,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_TSAREENA] =
	{
		.categoryName = {_F, _r, _u, _i, _t, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 12,
		.weight = 214,
		.description = DEX_ENTRY_TSAREENA,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_COMFEY] =
	{
		.categoryName = {_P, _o, _s, _y, _SPACE, _P, _i, _c, _k, _e, _r, _END},
		.height = 1,
		.weight = 3,
		.description = DEX_ENTRY_COMFEY,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_ORANGURU] =
	{
		.categoryName = {_S, _a, _g, _e, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 15,
		.weight = 760,
		.description = DEX_ENTRY_ORANGURU,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_PASSIMIAN] =
	{
		.categoryName = {_T, _e, _a, _m, _w, _o, _r, _k, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 20,
		.weight = 828,
		.description = DEX_ENTRY_PASSIMIAN,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_WIMPOD] =
	{
		.categoryName = {_T, _u, _r, _n, _SPACE, _T, _a, _i, _l, _END, _SPACE, _SPACE},
		.height = 5,
		.weight = 120,
		.description = DEX_ENTRY_WIMPOD,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_GOLISOPOD] =
	{
		.categoryName = {_H, _a, _r, _d, _SPACE, _S, _c, _a, _l, _e, _END, _SPACE},
		.height = 20,
		.weight = 1080,
		.description = DEX_ENTRY_GOLISOPOD,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_SANDYGAST] =
	{
		.categoryName = {_S, _a, _n, _d, _SPACE, _H, _e, _a, _p, _END, _e, _END},
		.height = 5,
		.weight = 700,
		.description = DEX_ENTRY_SANDYGAST,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_PALOSSAND] =
	{
		.categoryName = {_S, _a, _n, _d, _SPACE, _C, _a, _s, _t, _l, _e, _END},
		.height = 13,
		.weight = 2500,
		.description = DEX_ENTRY_PALOSSAND,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_PYUKUMUKU] =
	{
		.categoryName = {_S, _e, _a, _C, _u, _c, _u, _m, _b, _e, _r, _END},
		.height = 3,
		.weight = 12,
		.description = DEX_ENTRY_PYUKUMUKU,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_TYPE_NULL] =
	{
		.categoryName = {_S, _y, _n, _t, _h, _e, _t, _i, _c, _END, _SPACE, _SPACE},
		.height = 19,
		.weight = 1205,
		.description = DEX_ENTRY_TYPE_NULL,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_SILVALLY] =
	{
		.categoryName = {_S, _y, _n, _t, _h, _e, _t, _i, _c, _END, _SPACE, _SPACE},
		.height = 23,
		.weight = 1005,
		.description = DEX_ENTRY_SILVALLY,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_MINIOR] =
	{
		.categoryName = {_M, _e, _t, _e, _o, _r, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 3,
		.weight = 400,
		.description = DEX_ENTRY_MINIOR,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_KOMALA] =
	{
		.categoryName = {_D, _r, _o, _w, _s, _i, _n, _g, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 4,
		.weight = 199,
		.description = DEX_ENTRY_KOMALA,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_TURTONATOR] =
	{
		.categoryName = {_B, _l, _a, _s, _t, _T, _u, _r, _t, _l, _e, _END},
		.height = 20,
		.weight = 2120,
		.description = DEX_ENTRY_TURTONATOR,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_TOGEDEMARU] =
	{
		.categoryName = {_R, _o, _l, _y, 0xae, _P, _o, _l, _y, _END, _SPACE, _SPACE},
		.height = 3,
		.weight = 33,
		.description = DEX_ENTRY_TOGEDEMARU,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_MIMIKYU] =
	{
		.categoryName = {_D, _i, _s, _g, _u, _i, _s, _e, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 2,
		.weight = 7,
		.description = DEX_ENTRY_MIMIKYU,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_BRUXISH] =
	{
		.categoryName = {_G, _n, _a, _s, _h, _SPACE, _T, _e, _e, _t, _h, _END},
		.height = 9,
		.weight = 190,
		.description = DEX_ENTRY_BRUXISH,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_DRAMPA] =
	{
		.categoryName = {_P, _l, _a, _c, _i, _d, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 30,
		.weight = 1850,
		.description = DEX_ENTRY_DRAMPA,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_DHELMISE] =
	{
		.categoryName = {_S, _e, _a, _SPACE, _C, _r, _e, _e, _p, _e, _r, _END},
		.height = 39,
		.weight = 2100,
		.description = DEX_ENTRY_DHELMISE,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_JANGMO_O] =
	{
		.categoryName = {_S, _c, _a, _l, _y, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 6,
		.weight = 297,
		.description = DEX_ENTRY_JANGMO_O,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_HAKAMO_O] =
	{
		.categoryName = {_S, _c, _a, _l, _y, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 12,
		.weight = 470,
		.description = DEX_ENTRY_HAKAMO_O,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_KOMMO_O] =
	{
		.categoryName = {_S, _c, _a, _l, _y, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 16,
		.weight = 782,
		.description = DEX_ENTRY_KOMMO_O,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_TAPU_KOKO] =
	{
		.categoryName = {_L, _a, _n, _d, _SPACE, _S, _p, _i, _r, _i, _t, _END},
		.height = 18,
		.weight = 205,
		.description = DEX_ENTRY_TAPU_KOKO,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_TAPU_LELE] =
	{
		.categoryName = {_L, _a, _n, _d, _SPACE, _S, _p, _i, _r, _i, _t, _END},
		.height = 12,
		.weight = 186,
		.description = DEX_ENTRY_TAPU_LELE,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_TAPU_BULU] =
	{
		.categoryName = {_L, _a, _n, _d, _SPACE, _S, _p, _i, _r, _i, _t, _END},
		.height = 19,
		.weight = 455,
		.description = DEX_ENTRY_TAPU_BULU,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_TAPU_FINI] =
	{
		.categoryName = {_L, _a, _n, _d, _SPACE, _S, _p, _i, _r, _i, _t, _END},
		.height = 13,
		.weight = 212,
		.description = DEX_ENTRY_TAPU_FINI,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_COSMOG] =
	{
		.categoryName = {_N, _e, _b, _u, _l, _a, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 2,
		.weight = 1,
		.description = DEX_ENTRY_COSMOG,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_COSMOEM] =
	{
		.categoryName = {_P, _r, _o, _t, _o, _s, _t, _a, _r, _END, _SPACE, _SPACE},
		.height = 1,
		.weight = 9999,
		.description = DEX_ENTRY_COSMOEM,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_SOLGALEO] =
	{
		.categoryName = {_S, _u, _n, _n, _e, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 34,
		.weight = 2300,
		.description = DEX_ENTRY_SOLGALEO,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_LUNALA] =
	{
		.categoryName = {_M, _o, _o, _n, _e, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 40,
		.weight = 1200,
		.description = DEX_ENTRY_LUNALA,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_NIHILEGO] =
	{
		.categoryName = {_P, _a, _r, _a, _s, _i, _t, _e, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 12,
		.weight = 555,
		.description = DEX_ENTRY_NIHILEGO,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_BUZZWOLE] =
	{
		.categoryName = {_S, _w, _o, _l, _l, _e, _n, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 24,
		.weight = 3336,
		.description = DEX_ENTRY_BUZZWOLE,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_PHEROMOSA] =
	{
		.categoryName = {_L, _i, _s, _s, _o, _m, _e, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 18,
		.weight = 250,
		.description = DEX_ENTRY_PHEROMOSA,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_XURKITREE] =
	{
		.categoryName = {_G, _l, _o, _w, _i, _n, _g, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 38,
		.weight = 1000,
		.description = DEX_ENTRY_XURKITREE,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_CELESTEELA] =
	{
		.categoryName = {_L, _a, _u, _n, _c, _h, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 92,
		.weight = 9999,
		.description = DEX_ENTRY_CELESTEELA,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_KARTANA] =
	{
		.categoryName = {_D, _r, _a, _w, _n, _SPACE, _S, _w, _o, _r, _d, _END},
		.height = 3,
		.weight = 1,
		.description = DEX_ENTRY_KARTANA,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_GUZZLORD] =
	{
		.categoryName = {_J, _u, _n, _k, _i, _v, _o, _r, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 55,
		.weight = 8880,
		.description = DEX_ENTRY_GUZZLORD,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_NECROZMA] =
	{
		.categoryName = {_P, _r, _i, _s, _m, _END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 24,
		.weight = 2300,
		.description = DEX_ENTRY_NECROZMA,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_MAGEARNA] =
	{
		.categoryName = {_A, _r, _t, _i, _f, _i, _c, _i, _a, _l, _END, _SPACE},
		.height = 10,
		.weight = 805,
		.description = DEX_ENTRY_MAGEARNA,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_MARSHADOW] =
	{
		.categoryName = {_G, _l, _o, _o, _m, _d, _w, _e, _l, _l, _END, _SPACE},
		.height = 70,
		.weight = 222,
		.description = DEX_ENTRY_MARSHADOW,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_POIPOLE] =
	{
		.categoryName = {_P, _o, _i, _s, _o, _n, _SPACE, _P, _i, _n, _END, _SPACE},
		.height = 6,
		.weight = 18,
		.description = DEX_ENTRY_POIPOLE,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_NAGANADEL] =
	{
		.categoryName = {_P, _o, _i, _s, _o, _n, _SPACE, _P, _i, _n, _END, _SPACE},
		.height = 36,
		.weight = 1500,
		.description = DEX_ENTRY_NAGANADEL,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_STAKATAKA] =
	{
		.categoryName = {_R, _a, _m, _p, _a, _r, _t, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 55,
		.weight = 8200,
		.description = DEX_ENTRY_STAKATAKA,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_BLACEPHALON] =
	{
		.categoryName = {_F, _i, _r, _e, _w, _o, _r, _k, _s, _END, _SPACE, _SPACE},
		.height = 18,
		.weight = 130,
		.description = DEX_ENTRY_BLACEPHALON,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_ZERAORA] =
	{
		.categoryName = {_T, _h, _u, _n, _d, _e, _r, _c, _l, _a, _p, _END},
		.height = 15,
		.weight = 445,
		.description = DEX_ENTRY_ZERAORA,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	},
	[NATIONAL_DEX_MELTAN] =
	{
		.categoryName = {_H, _e, _x, _SPACE, _N, _u, _t, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 2,
		.weight = 80,
		.description = DEX_ENTRY_MELTAN,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,

	},
	[NATIONAL_DEX_MELMETAL] =
	{
		.categoryName = {_H, _e, _x, _SPACE, _N, _u, _t, _END, _SPACE, _SPACE, _SPACE, _SPACE},
		.height = 25,
		.weight = 8000,
		.description = DEX_ENTRY_MELMETAL,
		.unusedDescription = (const u8*) 0x8444cb1,
		.pokemonScale = 0,
		.pokemonOffset = 0,
		.trainerScale = 0,
		.trainerOffset = 0,
	}
};

//Certain Pokemon forms can have alternate dex entries when viewed
//through the habitat viewer or when caught directly.
#define ALTERNATE_ENTRY(species) {SPECIES_##species, DEX_ENTRY_##species}

const struct AlternateDexEntries gAlternateDexEntries[] =
{
	ALTERNATE_ENTRY(RATTATA_A),
	ALTERNATE_ENTRY(RATICATE_A),
	ALTERNATE_ENTRY(RAICHU_A),
	ALTERNATE_ENTRY(SANDSHREW_A),
	ALTERNATE_ENTRY(SANDSLASH_A),
	ALTERNATE_ENTRY(VULPIX_A),
	ALTERNATE_ENTRY(NINETALES_A),
	ALTERNATE_ENTRY(DIGLETT_A),
	ALTERNATE_ENTRY(DUGTRIO_A),
	ALTERNATE_ENTRY(MEOWTH_A),
	ALTERNATE_ENTRY(PERSIAN_A),
	ALTERNATE_ENTRY(GEODUDE_A),
	ALTERNATE_ENTRY(GRAVELER_A),
	ALTERNATE_ENTRY(GOLEM_A),
	ALTERNATE_ENTRY(GRIMER_A),
	ALTERNATE_ENTRY(MUK_A),
	ALTERNATE_ENTRY(EXEGGUTOR_A),
	ALTERNATE_ENTRY(MAROWAK_A),
	ALTERNATE_ENTRY(ZYGARDE_10),
	ALTERNATE_ENTRY(ZYGARDE_COMPLETE),
	ALTERNATE_ENTRY(ORICORIO_Y),
	ALTERNATE_ENTRY(ORICORIO_P),
	ALTERNATE_ENTRY(ORICORIO_S),
	ALTERNATE_ENTRY(LYCANROC_N),
	ALTERNATE_ENTRY(LYCANROC_DUSK),
	ALTERNATE_ENTRY(WISHIWASHI_S),
	ALTERNATE_ENTRY(NECROZMA_DUSK_MANE),
	ALTERNATE_ENTRY(NECROZMA_DAWN_WINGS),
	ALTERNATE_ENTRY(NECROZMA_ULTRA),
	{SPECIES_TABLES_TERMIN, 0} 
};
