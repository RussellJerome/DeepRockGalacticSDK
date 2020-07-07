// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_PRJ_PlatformMaker_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void APRJ_PlatformMaker_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.Timeline_0__FinishedFunc");

	APRJ_PlatformMaker_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void APRJ_PlatformMaker_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.Timeline_0__UpdateFunc");

	APRJ_PlatformMaker_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.OnImpacted
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             HitResult                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void APRJ_PlatformMaker_C::OnImpacted(struct FHitResult* HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.OnImpacted");

	APRJ_PlatformMaker_C_OnImpacted_Params params;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APRJ_PlatformMaker_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.ReceiveBeginPlay");

	APRJ_PlatformMaker_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.Set Carver mesh
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMesh**            Mesh_to_use                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APRJ_PlatformMaker_C::Set_Carver_mesh(class UStaticMesh** Mesh_to_use)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.Set Carver mesh");

	APRJ_PlatformMaker_C_Set_Carver_mesh_Params params;
	params.Mesh_to_use = Mesh_to_use;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.SetCarverMeshScale
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APRJ_PlatformMaker_C::SetCarverMeshScale(struct FVector* Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.SetCarverMeshScale");

	APRJ_PlatformMaker_C_SetCarverMeshScale_Params params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.UseLessFallDamageMaterial
// (BlueprintCallable, BlueprintEvent)

void APRJ_PlatformMaker_C::UseLessFallDamageMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.UseLessFallDamageMaterial");

	APRJ_PlatformMaker_C_UseLessFallDamageMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.UseBugRepellantMaterial
// (BlueprintCallable, BlueprintEvent)

void APRJ_PlatformMaker_C::UseBugRepellantMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.UseBugRepellantMaterial");

	APRJ_PlatformMaker_C_UseBugRepellantMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.UseFallDmgAndBugRepellant
// (BlueprintCallable, BlueprintEvent)

void APRJ_PlatformMaker_C::UseFallDmgAndBugRepellant()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.UseFallDmgAndBugRepellant");

	APRJ_PlatformMaker_C_UseFallDmgAndBugRepellant_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.ExecuteUbergraph_PRJ_PlatformMaker
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APRJ_PlatformMaker_C::ExecuteUbergraph_PRJ_PlatformMaker(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.ExecuteUbergraph_PRJ_PlatformMaker");

	APRJ_PlatformMaker_C_ExecuteUbergraph_PRJ_PlatformMaker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
