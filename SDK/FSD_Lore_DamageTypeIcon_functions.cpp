// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Lore_DamageTypeIcon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Lore_DamageTypeIcon.Lore_DamageTypeIcon_C.GetToolTipWidget_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* ULore_DamageTypeIcon_C::GetToolTipWidget_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lore_DamageTypeIcon.Lore_DamageTypeIcon_C.GetToolTipWidget_1");

	ULore_DamageTypeIcon_C_GetToolTipWidget_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Lore_DamageTypeIcon.Lore_DamageTypeIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULore_DamageTypeIcon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lore_DamageTypeIcon.Lore_DamageTypeIcon_C.Construct");

	ULore_DamageTypeIcon_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lore_DamageTypeIcon.Lore_DamageTypeIcon_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageTypeDescription* DamageType                     (BlueprintVisible, BlueprintReadOnly, Parm)

void ULore_DamageTypeIcon_C::SetData(struct FDamageTypeDescription* DamageType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lore_DamageTypeIcon.Lore_DamageTypeIcon_C.SetData");

	ULore_DamageTypeIcon_C_SetData_Params params;
	params.DamageType = DamageType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lore_DamageTypeIcon.Lore_DamageTypeIcon_C.PlayIntro
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Delay                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULore_DamageTypeIcon_C::PlayIntro(float* Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lore_DamageTypeIcon.Lore_DamageTypeIcon_C.PlayIntro");

	ULore_DamageTypeIcon_C_PlayIntro_Params params;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lore_DamageTypeIcon.Lore_DamageTypeIcon_C.ExecuteUbergraph_Lore_DamageTypeIcon
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULore_DamageTypeIcon_C::ExecuteUbergraph_Lore_DamageTypeIcon(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lore_DamageTypeIcon.Lore_DamageTypeIcon_C.ExecuteUbergraph_Lore_DamageTypeIcon");

	ULore_DamageTypeIcon_C_ExecuteUbergraph_Lore_DamageTypeIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
