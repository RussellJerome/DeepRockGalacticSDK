// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_OnScreenIndicator_UsableItem_WithDescription_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OnScreenIndicator_UsableItem_WithDescription.OnScreenIndicator_UsableItem_WithDescription_C.GetUsable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UUsableComponentBase*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUsableComponentBase* UOnScreenIndicator_UsableItem_WithDescription_C::GetUsable()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreenIndicator_UsableItem_WithDescription.OnScreenIndicator_UsableItem_WithDescription_C.GetUsable");

	UOnScreenIndicator_UsableItem_WithDescription_C_GetUsable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnScreenIndicator_UsableItem_WithDescription.OnScreenIndicator_UsableItem_WithDescription_C.SetTitle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  InText                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UOnScreenIndicator_UsableItem_WithDescription_C::SetTitle(struct FText* InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreenIndicator_UsableItem_WithDescription.OnScreenIndicator_UsableItem_WithDescription_C.SetTitle");

	UOnScreenIndicator_UsableItem_WithDescription_C_SetTitle_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnScreenIndicator_UsableItem_WithDescription.OnScreenIndicator_UsableItem_WithDescription_C.SetAction
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  NewText                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  OverrideControllerText         (BlueprintVisible, BlueprintReadOnly, Parm)

void UOnScreenIndicator_UsableItem_WithDescription_C::SetAction(struct FText* NewText, struct FText* OverrideControllerText)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreenIndicator_UsableItem_WithDescription.OnScreenIndicator_UsableItem_WithDescription_C.SetAction");

	UOnScreenIndicator_UsableItem_WithDescription_C_SetAction_Params params;
	params.NewText = NewText;
	params.OverrideControllerText = OverrideControllerText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnScreenIndicator_UsableItem_WithDescription.OnScreenIndicator_UsableItem_WithDescription_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOnScreenIndicator_UsableItem_WithDescription_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreenIndicator_UsableItem_WithDescription.OnScreenIndicator_UsableItem_WithDescription_C.PreConstruct");

	UOnScreenIndicator_UsableItem_WithDescription_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnScreenIndicator_UsableItem_WithDescription.OnScreenIndicator_UsableItem_WithDescription_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOnScreenIndicator_UsableItem_WithDescription_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreenIndicator_UsableItem_WithDescription.OnScreenIndicator_UsableItem_WithDescription_C.Construct");

	UOnScreenIndicator_UsableItem_WithDescription_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnScreenIndicator_UsableItem_WithDescription.OnScreenIndicator_UsableItem_WithDescription_C.BeginHover
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUsableComponentBase**   Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UOnScreenIndicator_UsableItem_WithDescription_C::BeginHover(class UUsableComponentBase** Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreenIndicator_UsableItem_WithDescription.OnScreenIndicator_UsableItem_WithDescription_C.BeginHover");

	UOnScreenIndicator_UsableItem_WithDescription_C_BeginHover_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnScreenIndicator_UsableItem_WithDescription.OnScreenIndicator_UsableItem_WithDescription_C.OnDepositingBegin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UResourceBank**          ResourceBank                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UOnScreenIndicator_UsableItem_WithDescription_C::OnDepositingBegin(class UResourceBank** ResourceBank)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreenIndicator_UsableItem_WithDescription.OnScreenIndicator_UsableItem_WithDescription_C.OnDepositingBegin");

	UOnScreenIndicator_UsableItem_WithDescription_C_OnDepositingBegin_Params params;
	params.ResourceBank = ResourceBank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnScreenIndicator_UsableItem_WithDescription.OnScreenIndicator_UsableItem_WithDescription_C.EndHover
// (BlueprintCallable, BlueprintEvent)

void UOnScreenIndicator_UsableItem_WithDescription_C::EndHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreenIndicator_UsableItem_WithDescription.OnScreenIndicator_UsableItem_WithDescription_C.EndHover");

	UOnScreenIndicator_UsableItem_WithDescription_C_EndHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnScreenIndicator_UsableItem_WithDescription.OnScreenIndicator_UsableItem_WithDescription_C.On Initialize
// (BlueprintCallable, BlueprintEvent)

void UOnScreenIndicator_UsableItem_WithDescription_C::On_Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreenIndicator_UsableItem_WithDescription.OnScreenIndicator_UsableItem_WithDescription_C.On Initialize");

	UOnScreenIndicator_UsableItem_WithDescription_C_On_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnScreenIndicator_UsableItem_WithDescription.OnScreenIndicator_UsableItem_WithDescription_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOnScreenIndicator_UsableItem_WithDescription_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreenIndicator_UsableItem_WithDescription.OnScreenIndicator_UsableItem_WithDescription_C.Tick");

	UOnScreenIndicator_UsableItem_WithDescription_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnScreenIndicator_UsableItem_WithDescription.OnScreenIndicator_UsableItem_WithDescription_C.ExecuteUbergraph_OnScreenIndicator_UsableItem_WithDescription
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOnScreenIndicator_UsableItem_WithDescription_C::ExecuteUbergraph_OnScreenIndicator_UsableItem_WithDescription(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreenIndicator_UsableItem_WithDescription.OnScreenIndicator_UsableItem_WithDescription_C.ExecuteUbergraph_OnScreenIndicator_UsableItem_WithDescription");

	UOnScreenIndicator_UsableItem_WithDescription_C_ExecuteUbergraph_OnScreenIndicator_UsableItem_WithDescription_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
