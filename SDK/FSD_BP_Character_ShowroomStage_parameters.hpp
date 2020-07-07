#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_Character_ShowroomStage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Character_ShowroomStage.BP_Character_ShowroomStage_C.CreateRenderTarget
struct ABP_Character_ShowroomStage_C_CreateRenderTarget_Params
{
	class UTextureRenderTarget2D*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Character_ShowroomStage.BP_Character_ShowroomStage_C.ReceiveBeginPlay
struct ABP_Character_ShowroomStage_C_ReceiveBeginPlay_Params
{
};

// Function BP_Character_ShowroomStage.BP_Character_ShowroomStage_C.ExecuteUbergraph_BP_Character_ShowroomStage
struct ABP_Character_ShowroomStage_C_ExecuteUbergraph_BP_Character_ShowroomStage_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
