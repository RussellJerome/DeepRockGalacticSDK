#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_OnScreen_Indicator_UsableZipLine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function OnScreen_Indicator_UsableZipLine.OnScreen_Indicator_UsableZipLine_C.Refresh
struct UOnScreen_Indicator_UsableZipLine_C_Refresh_Params
{
};

// Function OnScreen_Indicator_UsableZipLine.OnScreen_Indicator_UsableZipLine_C.Construct
struct UOnScreen_Indicator_UsableZipLine_C_Construct_Params
{
};

// Function OnScreen_Indicator_UsableZipLine.OnScreen_Indicator_UsableZipLine_C.PreConstruct
struct UOnScreen_Indicator_UsableZipLine_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OnScreen_Indicator_UsableZipLine.OnScreen_Indicator_UsableZipLine_C.Tick
struct UOnScreen_Indicator_UsableZipLine_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OnScreen_Indicator_UsableZipLine.OnScreen_Indicator_UsableZipLine_C.OnCharacterStateChanged_Event
struct UOnScreen_Indicator_UsableZipLine_C_OnCharacterStateChanged_Event_Params
{
	ECharacterState*                                   NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OnScreen_Indicator_UsableZipLine.OnScreen_Indicator_UsableZipLine_C.OnInputSourceChanged_Event
struct UOnScreen_Indicator_UsableZipLine_C_OnInputSourceChanged_Event_Params
{
	EInputSource*                                      InputSource;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OnScreen_Indicator_UsableZipLine.OnScreen_Indicator_UsableZipLine_C.ExecuteUbergraph_OnScreen_Indicator_UsableZipLine
struct UOnScreen_Indicator_UsableZipLine_C_ExecuteUbergraph_OnScreen_Indicator_UsableZipLine_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
