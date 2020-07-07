// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_Overclock_Details_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_Overclock_Details.ITM_Overclock_Details_C.Clear
// (Public, BlueprintCallable, BlueprintEvent)

void UITM_Overclock_Details_C::Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Overclock_Details.ITM_Overclock_Details_C.Clear");

	UITM_Overclock_Details_C_Clear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Overclock_Details.ITM_Overclock_Details_C.AddStat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemUpgradeStatText*   InStat                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UITM_Overclock_Details_C::AddStat(struct FItemUpgradeStatText* InStat)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Overclock_Details.ITM_Overclock_Details_C.AddStat");

	UITM_Overclock_Details_C_AddStat_Params params;
	params.InStat = InStat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Overclock_Details.ITM_Overclock_Details_C.SetData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItemUpgrade**           InUpgrade                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Overclock_Details_C::SetData(class UItemUpgrade** InUpgrade)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Overclock_Details.ITM_Overclock_Details_C.SetData");

	UITM_Overclock_Details_C_SetData_Params params;
	params.InUpgrade = InUpgrade;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Overclock_Details.ITM_Overclock_Details_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Overclock_Details_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Overclock_Details.ITM_Overclock_Details_C.PreConstruct");

	UITM_Overclock_Details_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Overclock_Details.ITM_Overclock_Details_C.ExecuteUbergraph_ITM_Overclock_Details
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Overclock_Details_C::ExecuteUbergraph_ITM_Overclock_Details(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Overclock_Details.ITM_Overclock_Details_C.ExecuteUbergraph_ITM_Overclock_Details");

	UITM_Overclock_Details_C_ExecuteUbergraph_ITM_Overclock_Details_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
