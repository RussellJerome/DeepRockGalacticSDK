#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Lore_Content_Text_Header_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Lore_Content_Text_Header.Lore_Content_Text_Header_C.SetData
struct ULore_Content_Text_Header_C_SetData_Params
{
	struct FText*                                      Header_Text;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UTexture2D**                                 Icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FObjectiveMissionIcon*                      MissionIcon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Lore_Content_Text_Header.Lore_Content_Text_Header_C.PreConstruct
struct ULore_Content_Text_Header_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lore_Content_Text_Header.Lore_Content_Text_Header_C.ExecuteUbergraph_Lore_Content_Text_Header
struct ULore_Content_Text_Header_C_ExecuteUbergraph_Lore_Content_Text_Header_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
