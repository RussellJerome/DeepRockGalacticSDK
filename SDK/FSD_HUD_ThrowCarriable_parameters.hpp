#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_ThrowCarriable_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_ThrowCarriable.HUD_ThrowCarriable_C.Construct
struct UHUD_ThrowCarriable_C_Construct_Params
{
};

// Function HUD_ThrowCarriable.HUD_ThrowCarriable_C.OnThrowCarriableProgress_Event_1
struct UHUD_ThrowCarriable_C_OnThrowCarriableProgress_Event_1_Params
{
	float*                                             Progress;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_ThrowCarriable.HUD_ThrowCarriable_C.PreConstruct
struct UHUD_ThrowCarriable_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_ThrowCarriable.HUD_ThrowCarriable_C.ExecuteUbergraph_HUD_ThrowCarriable
struct UHUD_ThrowCarriable_C_ExecuteUbergraph_HUD_ThrowCarriable_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
