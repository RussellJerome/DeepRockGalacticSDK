// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_BoscoAbillityCounter_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_BoscoAbillityCounter.HUD_BoscoAbillityCounter_C.CreateIcons
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           IconCount                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_BoscoAbillityCounter_C::CreateIcons(int* IconCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_BoscoAbillityCounter.HUD_BoscoAbillityCounter_C.CreateIcons");

	UHUD_BoscoAbillityCounter_C_CreateIcons_Params params;
	params.IconCount = IconCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_BoscoAbillityCounter.HUD_BoscoAbillityCounter_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_BoscoAbillityCounter_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_BoscoAbillityCounter.HUD_BoscoAbillityCounter_C.PreConstruct");

	UHUD_BoscoAbillityCounter_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_BoscoAbillityCounter.HUD_BoscoAbillityCounter_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_BoscoAbillityCounter_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_BoscoAbillityCounter.HUD_BoscoAbillityCounter_C.Construct");

	UHUD_BoscoAbillityCounter_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_BoscoAbillityCounter.HUD_BoscoAbillityCounter_C.OnItemsLoaded
// (BlueprintCallable, BlueprintEvent)

void UHUD_BoscoAbillityCounter_C::OnItemsLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_BoscoAbillityCounter.HUD_BoscoAbillityCounter_C.OnItemsLoaded");

	UHUD_BoscoAbillityCounter_C_OnItemsLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_BoscoAbillityCounter.HUD_BoscoAbillityCounter_C.OnAbillityChargeProgress
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         aProgress                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           aNextIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_BoscoAbillityCounter_C::OnAbillityChargeProgress(float* aProgress, int* aNextIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_BoscoAbillityCounter.HUD_BoscoAbillityCounter_C.OnAbillityChargeProgress");

	UHUD_BoscoAbillityCounter_C_OnAbillityChargeProgress_Params params;
	params.aProgress = aProgress;
	params.aNextIndex = aNextIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_BoscoAbillityCounter.HUD_BoscoAbillityCounter_C.OnBoscoChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABosco**                 Bosco                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_BoscoAbillityCounter_C::OnBoscoChanged(class ABosco** Bosco)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_BoscoAbillityCounter.HUD_BoscoAbillityCounter_C.OnBoscoChanged");

	UHUD_BoscoAbillityCounter_C_OnBoscoChanged_Params params;
	params.Bosco = Bosco;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_BoscoAbillityCounter.HUD_BoscoAbillityCounter_C.ExecuteUbergraph_HUD_BoscoAbillityCounter
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_BoscoAbillityCounter_C::ExecuteUbergraph_HUD_BoscoAbillityCounter(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_BoscoAbillityCounter.HUD_BoscoAbillityCounter_C.ExecuteUbergraph_HUD_BoscoAbillityCounter");

	UHUD_BoscoAbillityCounter_C_ExecuteUbergraph_HUD_BoscoAbillityCounter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
