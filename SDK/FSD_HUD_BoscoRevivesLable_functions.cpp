// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_BoscoRevivesLable_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_BoscoRevivesLable.HUD_BoscoRevivesLable_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_BoscoRevivesLable_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_BoscoRevivesLable.HUD_BoscoRevivesLable_C.PreConstruct");

	UHUD_BoscoRevivesLable_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_BoscoRevivesLable.HUD_BoscoRevivesLable_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_BoscoRevivesLable_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_BoscoRevivesLable.HUD_BoscoRevivesLable_C.Construct");

	UHUD_BoscoRevivesLable_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_BoscoRevivesLable.HUD_BoscoRevivesLable_C.OnReviveCountChangedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ReviveCount                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_BoscoRevivesLable_C::OnReviveCountChangedEvent(int* ReviveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_BoscoRevivesLable.HUD_BoscoRevivesLable_C.OnReviveCountChangedEvent");

	UHUD_BoscoRevivesLable_C_OnReviveCountChangedEvent_Params params;
	params.ReviveCount = ReviveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_BoscoRevivesLable.HUD_BoscoRevivesLable_C.ExecuteUbergraph_HUD_BoscoRevivesLable
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_BoscoRevivesLable_C::ExecuteUbergraph_HUD_BoscoRevivesLable(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_BoscoRevivesLable.HUD_BoscoRevivesLable_C.ExecuteUbergraph_HUD_BoscoRevivesLable");

	UHUD_BoscoRevivesLable_C_ExecuteUbergraph_HUD_BoscoRevivesLable_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
