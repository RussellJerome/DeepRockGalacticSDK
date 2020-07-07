#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_PRJ_PlatformMaker_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.Timeline_0__FinishedFunc
struct APRJ_PlatformMaker_C_Timeline_0__FinishedFunc_Params
{
};

// Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.Timeline_0__UpdateFunc
struct APRJ_PlatformMaker_C_Timeline_0__UpdateFunc_Params
{
};

// Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.OnImpacted
struct APRJ_PlatformMaker_C_OnImpacted_Params
{
	struct FHitResult*                                 HitResult;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.ReceiveBeginPlay
struct APRJ_PlatformMaker_C_ReceiveBeginPlay_Params
{
};

// Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.Set Carver mesh
struct APRJ_PlatformMaker_C_Set_Carver_mesh_Params
{
	class UStaticMesh**                                Mesh_to_use;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.SetCarverMeshScale
struct APRJ_PlatformMaker_C_SetCarverMeshScale_Params
{
	struct FVector*                                    Scale;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.UseLessFallDamageMaterial
struct APRJ_PlatformMaker_C_UseLessFallDamageMaterial_Params
{
};

// Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.UseBugRepellantMaterial
struct APRJ_PlatformMaker_C_UseBugRepellantMaterial_Params
{
};

// Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.UseFallDmgAndBugRepellant
struct APRJ_PlatformMaker_C_UseFallDmgAndBugRepellant_Params
{
};

// Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.ExecuteUbergraph_PRJ_PlatformMaker
struct APRJ_PlatformMaker_C_ExecuteUbergraph_PRJ_PlatformMaker_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
