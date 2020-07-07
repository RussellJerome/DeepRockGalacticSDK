#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Basic_Option_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Basic_Option.Basic_Option_C.SetOptionText
struct UBasic_Option_C_SetOptionText_Params
{
	struct FText*                                      InText;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Basic_Option.Basic_Option_C.PreConstruct
struct UBasic_Option_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_Option.Basic_Option_C.Tick
struct UBasic_Option_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_Option.Basic_Option_C.ExecuteUbergraph_Basic_Option
struct UBasic_Option_C_ExecuteUbergraph_Basic_Option_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_Option.Basic_Option_C.OnHoveringEnd__DelegateSignature
struct UBasic_Option_C_OnHoveringEnd__DelegateSignature_Params
{
};

// Function Basic_Option.Basic_Option_C.OnHoveringBegin__DelegateSignature
struct UBasic_Option_C_OnHoveringBegin__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
