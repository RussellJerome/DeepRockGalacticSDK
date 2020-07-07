// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_Resources_Player_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_Resources_Player.HUD_Resources_Player_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_Resources_Player_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Resources_Player.HUD_Resources_Player_C.Construct");

	UHUD_Resources_Player_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Resources_Player.HUD_Resources_Player_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Resources_Player_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Resources_Player.HUD_Resources_Player_C.PreConstruct");

	UHUD_Resources_Player_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Resources_Player.HUD_Resources_Player_C.Add Resource
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCappedResource**        Resource                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Resources_Player_C::Add_Resource(class UCappedResource** Resource)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Resources_Player.HUD_Resources_Player_C.Add Resource");

	UHUD_Resources_Player_C_Add_Resource_Params params;
	params.Resource = Resource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Resources_Player.HUD_Resources_Player_C.OnResourceAdded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCappedResource**        Resource                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Resources_Player_C::OnResourceAdded(class UCappedResource** Resource)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Resources_Player.HUD_Resources_Player_C.OnResourceAdded");

	UHUD_Resources_Player_C_OnResourceAdded_Params params;
	params.Resource = Resource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Resources_Player.HUD_Resources_Player_C.OnResourceChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHUD_Resources_Player_Icon_C** ResourceIcon                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UHUD_Resources_Player_C::OnResourceChanged(class UHUD_Resources_Player_Icon_C** ResourceIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Resources_Player.HUD_Resources_Player_C.OnResourceChanged");

	UHUD_Resources_Player_C_OnResourceChanged_Params params;
	params.ResourceIcon = ResourceIcon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Resources_Player.HUD_Resources_Player_C.RefreshVisibility
// (BlueprintCallable, BlueprintEvent)

void UHUD_Resources_Player_C::RefreshVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Resources_Player.HUD_Resources_Player_C.RefreshVisibility");

	UHUD_Resources_Player_C_RefreshVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Resources_Player.HUD_Resources_Player_C.OnLaserPointerPressed_Event
// (BlueprintCallable, BlueprintEvent)

void UHUD_Resources_Player_C::OnLaserPointerPressed_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Resources_Player.HUD_Resources_Player_C.OnLaserPointerPressed_Event");

	UHUD_Resources_Player_C_OnLaserPointerPressed_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Resources_Player.HUD_Resources_Player_C.OnLaserPointerReleased_Event
// (BlueprintCallable, BlueprintEvent)

void UHUD_Resources_Player_C::OnLaserPointerReleased_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Resources_Player.HUD_Resources_Player_C.OnLaserPointerReleased_Event");

	UHUD_Resources_Player_C_OnLaserPointerReleased_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Resources_Player.HUD_Resources_Player_C.ExecuteUbergraph_HUD_Resources_Player
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Resources_Player_C::ExecuteUbergraph_HUD_Resources_Player(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Resources_Player.HUD_Resources_Player_C.ExecuteUbergraph_HUD_Resources_Player");

	UHUD_Resources_Player_C_ExecuteUbergraph_HUD_Resources_Player_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
