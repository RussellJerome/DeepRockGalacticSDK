// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Donkey_BreadCrumb_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Donkey_BreadCrumb.Donkey_BreadCrumb_C.OnRep_NextPointLookat
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void ADonkey_BreadCrumb_C::OnRep_NextPointLookat()
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_BreadCrumb.Donkey_BreadCrumb_C.OnRep_NextPointLookat");

	ADonkey_BreadCrumb_C_OnRep_NextPointLookat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Donkey_BreadCrumb.Donkey_BreadCrumb_C.SetNextArrowPoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                NextPoint                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADonkey_BreadCrumb_C::SetNextArrowPoint(struct FVector* NextPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_BreadCrumb.Donkey_BreadCrumb_C.SetNextArrowPoint");

	ADonkey_BreadCrumb_C_SetNextArrowPoint_Params params;
	params.NextPoint = NextPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Donkey_BreadCrumb.Donkey_BreadCrumb_C.GetArrowPoint
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ADonkey_BreadCrumb_C::GetArrowPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_BreadCrumb.Donkey_BreadCrumb_C.GetArrowPoint");

	ADonkey_BreadCrumb_C_GetArrowPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Donkey_BreadCrumb.Donkey_BreadCrumb_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ADonkey_BreadCrumb_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_BreadCrumb.Donkey_BreadCrumb_C.ReceiveBeginPlay");

	ADonkey_BreadCrumb_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Donkey_BreadCrumb.Donkey_BreadCrumb_C.Blink
// (BlueprintCallable, BlueprintEvent)

void ADonkey_BreadCrumb_C::Blink()
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_BreadCrumb.Donkey_BreadCrumb_C.Blink");

	ADonkey_BreadCrumb_C_Blink_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Donkey_BreadCrumb.Donkey_BreadCrumb_C.ExecuteUbergraph_Donkey_BreadCrumb
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADonkey_BreadCrumb_C::ExecuteUbergraph_Donkey_BreadCrumb(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_BreadCrumb.Donkey_BreadCrumb_C.ExecuteUbergraph_Donkey_BreadCrumb");

	ADonkey_BreadCrumb_C_ExecuteUbergraph_Donkey_BreadCrumb_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
