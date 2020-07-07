#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_OVERLAY_RetirementGranted_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function OVERLAY_RetirementGranted.OVERLAY_RetirementGranted_C.PreConstruct
struct UOVERLAY_RetirementGranted_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OVERLAY_RetirementGranted.OVERLAY_RetirementGranted_C.Play
struct UOVERLAY_RetirementGranted_C_Play_Params
{
	class UClass**                                     CharacterClass;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               RetirementCount;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OVERLAY_RetirementGranted.OVERLAY_RetirementGranted_C.Construct
struct UOVERLAY_RetirementGranted_C_Construct_Params
{
};

// Function OVERLAY_RetirementGranted.OVERLAY_RetirementGranted_C.OnEnterFinished
struct UOVERLAY_RetirementGranted_C_OnEnterFinished_Params
{
};

// Function OVERLAY_RetirementGranted.OVERLAY_RetirementGranted_C.OnIntroFinished
struct UOVERLAY_RetirementGranted_C_OnIntroFinished_Params
{
};

// Function OVERLAY_RetirementGranted.OVERLAY_RetirementGranted_C.PlayOutro
struct UOVERLAY_RetirementGranted_C_PlayOutro_Params
{
	float*                                             Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OVERLAY_RetirementGranted.OVERLAY_RetirementGranted_C.ExecuteUbergraph_OVERLAY_RetirementGranted
struct UOVERLAY_RetirementGranted_C_ExecuteUbergraph_OVERLAY_RetirementGranted_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OVERLAY_RetirementGranted.OVERLAY_RetirementGranted_C.OnFinished__DelegateSignature
struct UOVERLAY_RetirementGranted_C_OnFinished__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
