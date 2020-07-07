// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_Resources_Team_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_Resources_Team.HUD_Resources_Team_C.IsObjectiveResource
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCappedResource**        InResource                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsObjective                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UCappedResource*         OutResource                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UHUD_Resources_Team_C::IsObjectiveResource(class UCappedResource** InResource, bool* IsObjective, class UCappedResource** OutResource)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Resources_Team.HUD_Resources_Team_C.IsObjectiveResource");

	UHUD_Resources_Team_C_IsObjectiveResource_Params params;
	params.InResource = InResource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsObjective != nullptr)
		*IsObjective = params.IsObjective;
	if (OutResource != nullptr)
		*OutResource = params.OutResource;
}


// Function HUD_Resources_Team.HUD_Resources_Team_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_Resources_Team_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Resources_Team.HUD_Resources_Team_C.Construct");

	UHUD_Resources_Team_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Resources_Team.HUD_Resources_Team_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Resources_Team_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Resources_Team.HUD_Resources_Team_C.PreConstruct");

	UHUD_Resources_Team_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Resources_Team.HUD_Resources_Team_C.Add Resource
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCappedResource**        Resource                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Resources_Team_C::Add_Resource(class UCappedResource** Resource)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Resources_Team.HUD_Resources_Team_C.Add Resource");

	UHUD_Resources_Team_C_Add_Resource_Params params;
	params.Resource = Resource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Resources_Team.HUD_Resources_Team_C.Show Widget
// (BlueprintCallable, BlueprintEvent)

void UHUD_Resources_Team_C::Show_Widget()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Resources_Team.HUD_Resources_Team_C.Show Widget");

	UHUD_Resources_Team_C_Show_Widget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Resources_Team.HUD_Resources_Team_C.Hide Widget
// (BlueprintCallable, BlueprintEvent)

void UHUD_Resources_Team_C::Hide_Widget()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Resources_Team.HUD_Resources_Team_C.Hide Widget");

	UHUD_Resources_Team_C_Hide_Widget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Resources_Team.HUD_Resources_Team_C.Ping Widget
// (BlueprintCallable, BlueprintEvent)

void UHUD_Resources_Team_C::Ping_Widget()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Resources_Team.HUD_Resources_Team_C.Ping Widget");

	UHUD_Resources_Team_C_Ping_Widget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Resources_Team.HUD_Resources_Team_C.OnTransitionFinished
// (BlueprintCallable, BlueprintEvent)

void UHUD_Resources_Team_C::OnTransitionFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Resources_Team.HUD_Resources_Team_C.OnTransitionFinished");

	UHUD_Resources_Team_C_OnTransitionFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Resources_Team.HUD_Resources_Team_C.OnDepositingEnd_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UResourceBank**          ResourceBank                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UHUD_Resources_Team_C::OnDepositingEnd_Event(class UResourceBank** ResourceBank)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Resources_Team.HUD_Resources_Team_C.OnDepositingEnd_Event");

	UHUD_Resources_Team_C_OnDepositingEnd_Event_Params params;
	params.ResourceBank = ResourceBank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Resources_Team.HUD_Resources_Team_C.OnDepositingBegin_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UResourceBank**          ResourceBank                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UHUD_Resources_Team_C::OnDepositingBegin_Event(class UResourceBank** ResourceBank)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Resources_Team.HUD_Resources_Team_C.OnDepositingBegin_Event");

	UHUD_Resources_Team_C_OnDepositingBegin_Event_Params params;
	params.ResourceBank = ResourceBank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Resources_Team.HUD_Resources_Team_C.OnResourceChanged_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCappedResource**        Resource                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Resources_Team_C::OnResourceChanged_Event(class UCappedResource** Resource, float* amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Resources_Team.HUD_Resources_Team_C.OnResourceChanged_Event");

	UHUD_Resources_Team_C_OnResourceChanged_Event_Params params;
	params.Resource = Resource;
	params.amount = amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Resources_Team.HUD_Resources_Team_C.OnResourceAdded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCappedResource**        Resource                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Resources_Team_C::OnResourceAdded(class UCappedResource** Resource)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Resources_Team.HUD_Resources_Team_C.OnResourceAdded");

	UHUD_Resources_Team_C_OnResourceAdded_Params params;
	params.Resource = Resource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Resources_Team.HUD_Resources_Team_C.OnToggleOutline_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Resources_Team_C::OnToggleOutline_Event(bool* Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Resources_Team.HUD_Resources_Team_C.OnToggleOutline_Event");

	UHUD_Resources_Team_C_OnToggleOutline_Event_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Resources_Team.HUD_Resources_Team_C.ExecuteUbergraph_HUD_Resources_Team
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Resources_Team_C::ExecuteUbergraph_HUD_Resources_Team(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Resources_Team.HUD_Resources_Team_C.ExecuteUbergraph_HUD_Resources_Team");

	UHUD_Resources_Team_C_ExecuteUbergraph_HUD_Resources_Team_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
