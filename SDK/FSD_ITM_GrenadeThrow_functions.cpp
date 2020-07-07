// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_GrenadeThrow_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_GrenadeThrow.ITM_GrenadeThrow_C.UpdateSpline
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>         Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void AITM_GrenadeThrow_C::UpdateSpline(TArray<struct FVector>* Array, float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_GrenadeThrow.ITM_GrenadeThrow_C.UpdateSpline");

	AITM_GrenadeThrow_C_UpdateSpline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
	if (DeltaTime != nullptr)
		*DeltaTime = params.DeltaTime;
}


// Function ITM_GrenadeThrow.ITM_GrenadeThrow_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AITM_GrenadeThrow_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_GrenadeThrow.ITM_GrenadeThrow_C.ReceiveTick");

	AITM_GrenadeThrow_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_GrenadeThrow.ITM_GrenadeThrow_C.RecieveEquipped
// (Event, Protected, BlueprintEvent)

void AITM_GrenadeThrow_C::RecieveEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_GrenadeThrow.ITM_GrenadeThrow_C.RecieveEquipped");

	AITM_GrenadeThrow_C_RecieveEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_GrenadeThrow.ITM_GrenadeThrow_C.RecieveUnequipped
// (Event, Protected, BlueprintEvent)

void AITM_GrenadeThrow_C::RecieveUnequipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_GrenadeThrow.ITM_GrenadeThrow_C.RecieveUnequipped");

	AITM_GrenadeThrow_C_RecieveUnequipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_GrenadeThrow.ITM_GrenadeThrow_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AITM_GrenadeThrow_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_GrenadeThrow.ITM_GrenadeThrow_C.ReceiveBeginPlay");

	AITM_GrenadeThrow_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_GrenadeThrow.ITM_GrenadeThrow_C.Set Is Visible
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AITM_GrenadeThrow_C::Set_Is_Visible(bool* Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_GrenadeThrow.ITM_GrenadeThrow_C.Set Is Visible");

	AITM_GrenadeThrow_C_Set_Is_Visible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_GrenadeThrow.ITM_GrenadeThrow_C.GrenadeThrown
// (BlueprintCallable, BlueprintEvent)

void AITM_GrenadeThrow_C::GrenadeThrown()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_GrenadeThrow.ITM_GrenadeThrow_C.GrenadeThrown");

	AITM_GrenadeThrow_C_GrenadeThrown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_GrenadeThrow.ITM_GrenadeThrow_C.ExecuteUbergraph_ITM_GrenadeThrow
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AITM_GrenadeThrow_C::ExecuteUbergraph_ITM_GrenadeThrow(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_GrenadeThrow.ITM_GrenadeThrow_C.ExecuteUbergraph_ITM_GrenadeThrow");

	AITM_GrenadeThrow_C_ExecuteUbergraph_ITM_GrenadeThrow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
