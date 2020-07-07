#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_ServerEntry_TeamLine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_ServerEntry_TeamLine.ITM_ServerEntry_TeamLine_C.SetPlayerData
struct UITM_ServerEntry_TeamLine_C_SetPlayerData_Params
{
	class UTexture2D**                                 InIcon;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               InIconTint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ITM_ServerEntry_TeamLine.ITM_ServerEntry_TeamLine_C.PreConstruct
struct UITM_ServerEntry_TeamLine_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_ServerEntry_TeamLine.ITM_ServerEntry_TeamLine_C.ExecuteUbergraph_ITM_ServerEntry_TeamLine
struct UITM_ServerEntry_TeamLine_C_ExecuteUbergraph_ITM_ServerEntry_TeamLine_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
