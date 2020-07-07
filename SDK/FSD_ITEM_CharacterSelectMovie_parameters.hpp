#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITEM_CharacterSelectMovie_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITEM_CharacterSelectMovie.ITEM_CharacterSelectMovie_C.Collapse
struct UITEM_CharacterSelectMovie_C_Collapse_Params
{
};

// Function ITEM_CharacterSelectMovie.ITEM_CharacterSelectMovie_C.SetVideo
struct UITEM_CharacterSelectMovie_C_SetVideo_Params
{
	class FString*                                     Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function ITEM_CharacterSelectMovie.ITEM_CharacterSelectMovie_C.Construct
struct UITEM_CharacterSelectMovie_C_Construct_Params
{
};

// Function ITEM_CharacterSelectMovie.ITEM_CharacterSelectMovie_C.InitPlayer
struct UITEM_CharacterSelectMovie_C_InitPlayer_Params
{
};

// Function ITEM_CharacterSelectMovie.ITEM_CharacterSelectMovie_C.BuildCharacterSelectionMovie
struct UITEM_CharacterSelectMovie_C_BuildCharacterSelectionMovie_Params
{
};

// Function ITEM_CharacterSelectMovie.ITEM_CharacterSelectMovie_C.ExecuteUbergraph_ITEM_CharacterSelectMovie
struct UITEM_CharacterSelectMovie_C_ExecuteUbergraph_ITEM_CharacterSelectMovie_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
