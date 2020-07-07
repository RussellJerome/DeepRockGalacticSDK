#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_ModularLamp_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_ModularLamp.BP_ModularLamp_C.GetMeshStructByEnum
struct ABP_ModularLamp_C_GetMeshStructByEnum_Params
{
	TEnumAsByte<ENUM_ModularLamps>*                    Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSTRUCT_Lamp                                ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_ModularLamp.BP_ModularLamp_C.SetLightColor
struct ABP_ModularLamp_C_SetLightColor_Params
{
	struct FLinearColor*                               LightColor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ModularLamp.BP_ModularLamp_C.UserConstructionScript
struct ABP_ModularLamp_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
