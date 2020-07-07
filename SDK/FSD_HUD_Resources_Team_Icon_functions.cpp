// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_Resources_Team_Icon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_Resources_Team_Icon.HUD_Resources_Team_Icon_C.UpdateAmount
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Resources_Team_Icon_C::UpdateAmount(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Resources_Team_Icon.HUD_Resources_Team_Icon_C.UpdateAmount");

	UHUD_Resources_Team_Icon_C_UpdateAmount_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Resources_Team_Icon.HUD_Resources_Team_Icon_C.SetResource
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCappedResource**        InResource                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          HideIfEmpty                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Resources_Team_Icon_C::SetResource(class UCappedResource** InResource, bool* HideIfEmpty)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Resources_Team_Icon.HUD_Resources_Team_Icon_C.SetResource");

	UHUD_Resources_Team_Icon_C_SetResource_Params params;
	params.InResource = InResource;
	params.HideIfEmpty = HideIfEmpty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Resources_Team_Icon.HUD_Resources_Team_Icon_C.Init Resource
// (BlueprintCallable, BlueprintEvent)

void UHUD_Resources_Team_Icon_C::Init_Resource()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Resources_Team_Icon.HUD_Resources_Team_Icon_C.Init Resource");

	UHUD_Resources_Team_Icon_C_Init_Resource_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Resources_Team_Icon.HUD_Resources_Team_Icon_C.OnChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCappedResource**        Resource                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Resources_Team_Icon_C::OnChanged(class UCappedResource** Resource, float* amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Resources_Team_Icon.HUD_Resources_Team_Icon_C.OnChanged");

	UHUD_Resources_Team_Icon_C_OnChanged_Params params;
	params.Resource = Resource;
	params.amount = amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Resources_Team_Icon.HUD_Resources_Team_Icon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Resources_Team_Icon_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Resources_Team_Icon.HUD_Resources_Team_Icon_C.PreConstruct");

	UHUD_Resources_Team_Icon_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Resources_Team_Icon.HUD_Resources_Team_Icon_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Resources_Team_Icon_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Resources_Team_Icon.HUD_Resources_Team_Icon_C.Tick");

	UHUD_Resources_Team_Icon_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Resources_Team_Icon.HUD_Resources_Team_Icon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_Resources_Team_Icon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Resources_Team_Icon.HUD_Resources_Team_Icon_C.Construct");

	UHUD_Resources_Team_Icon_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Resources_Team_Icon.HUD_Resources_Team_Icon_C.OnPingAmountFinished
// (BlueprintCallable, BlueprintEvent)

void UHUD_Resources_Team_Icon_C::OnPingAmountFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Resources_Team_Icon.HUD_Resources_Team_Icon_C.OnPingAmountFinished");

	UHUD_Resources_Team_Icon_C_OnPingAmountFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Resources_Team_Icon.HUD_Resources_Team_Icon_C.ExecuteUbergraph_HUD_Resources_Team_Icon
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Resources_Team_Icon_C::ExecuteUbergraph_HUD_Resources_Team_Icon(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Resources_Team_Icon.HUD_Resources_Team_Icon_C.ExecuteUbergraph_HUD_Resources_Team_Icon");

	UHUD_Resources_Team_Icon_C_ExecuteUbergraph_HUD_Resources_Team_Icon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
