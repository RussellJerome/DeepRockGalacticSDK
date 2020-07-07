#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Donkey_BreadCrumb_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Donkey_BreadCrumb.Donkey_BreadCrumb_C.OnRep_NextPointLookat
struct ADonkey_BreadCrumb_C_OnRep_NextPointLookat_Params
{
};

// Function Donkey_BreadCrumb.Donkey_BreadCrumb_C.SetNextArrowPoint
struct ADonkey_BreadCrumb_C_SetNextArrowPoint_Params
{
	struct FVector*                                    NextPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Donkey_BreadCrumb.Donkey_BreadCrumb_C.GetArrowPoint
struct ADonkey_BreadCrumb_C_GetArrowPoint_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Donkey_BreadCrumb.Donkey_BreadCrumb_C.ReceiveBeginPlay
struct ADonkey_BreadCrumb_C_ReceiveBeginPlay_Params
{
};

// Function Donkey_BreadCrumb.Donkey_BreadCrumb_C.Blink
struct ADonkey_BreadCrumb_C_Blink_Params
{
};

// Function Donkey_BreadCrumb.Donkey_BreadCrumb_C.ExecuteUbergraph_Donkey_BreadCrumb
struct ADonkey_BreadCrumb_C_ExecuteUbergraph_Donkey_BreadCrumb_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
