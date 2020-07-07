#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_PlayerName_Label_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_PlayerName_Label.HUD_PlayerName_Label_C.UpdateCharacterName
struct UHUD_PlayerName_Label_C_UpdateCharacterName_Params
{
};

// Function HUD_PlayerName_Label.HUD_PlayerName_Label_C.Construct
struct UHUD_PlayerName_Label_C_Construct_Params
{
};

// Function HUD_PlayerName_Label.HUD_PlayerName_Label_C.OnPlayerNameChanged
struct UHUD_PlayerName_Label_C_OnPlayerNameChanged_Params
{
	class FString*                                     NewName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function HUD_PlayerName_Label.HUD_PlayerName_Label_C.PreConstruct
struct UHUD_PlayerName_Label_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_PlayerName_Label.HUD_PlayerName_Label_C.ExecuteUbergraph_HUD_PlayerName_Label
struct UHUD_PlayerName_Label_C_ExecuteUbergraph_HUD_PlayerName_Label_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
