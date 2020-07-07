// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_DamageClass_Item_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_DamageClass_Item.HUD_DamageClass_Item_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_DamageClass_Item_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_DamageClass_Item.HUD_DamageClass_Item_C.Construct");

	UHUD_DamageClass_Item_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_DamageClass_Item.HUD_DamageClass_Item_C.Deactivate
// (BlueprintCallable, BlueprintEvent)

void UHUD_DamageClass_Item_C::Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_DamageClass_Item.HUD_DamageClass_Item_C.Deactivate");

	UHUD_DamageClass_Item_C_Deactivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_DamageClass_Item.HUD_DamageClass_Item_C.Activate
// (BlueprintCallable, BlueprintEvent)

void UHUD_DamageClass_Item_C::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_DamageClass_Item.HUD_DamageClass_Item_C.Activate");

	UHUD_DamageClass_Item_C_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_DamageClass_Item.HUD_DamageClass_Item_C.OnDeactivedFinished
// (BlueprintCallable, BlueprintEvent)

void UHUD_DamageClass_Item_C::OnDeactivedFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_DamageClass_Item.HUD_DamageClass_Item_C.OnDeactivedFinished");

	UHUD_DamageClass_Item_C_OnDeactivedFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_DamageClass_Item.HUD_DamageClass_Item_C.ExecuteUbergraph_HUD_DamageClass_Item
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_DamageClass_Item_C::ExecuteUbergraph_HUD_DamageClass_Item(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_DamageClass_Item.HUD_DamageClass_Item_C.ExecuteUbergraph_HUD_DamageClass_Item");

	UHUD_DamageClass_Item_C_ExecuteUbergraph_HUD_DamageClass_Item_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_DamageClass_Item.HUD_DamageClass_Item_C.Elapsed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHUD_DamageClass_Item_C** Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UHUD_DamageClass_Item_C::Elapsed__DelegateSignature(class UHUD_DamageClass_Item_C** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_DamageClass_Item.HUD_DamageClass_Item_C.Elapsed__DelegateSignature");

	UHUD_DamageClass_Item_C_Elapsed__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
