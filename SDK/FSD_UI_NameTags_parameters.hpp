#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_NameTags_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_NameTags.UI_NameTags_C.SetData
struct UUI_NameTags_C_SetData_Params
{
	class AFSDPlayerState**                            Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_NameTags.UI_NameTags_C.PreConstruct
struct UUI_NameTags_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_NameTags.UI_NameTags_C.OnPlayerNameChanged_Event_1
struct UUI_NameTags_C_OnPlayerNameChanged_Event_1_Params
{
	class FString*                                     NewName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function UI_NameTags.UI_NameTags_C.ExecuteUbergraph_UI_NameTags
struct UUI_NameTags_C_ExecuteUbergraph_UI_NameTags_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
