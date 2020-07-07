// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_MasteryBar_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_MasteryBar.ITM_MasteryBar_C.SetMasteryData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFSDPlayerState**        Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           HasMasteryLevels               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UITM_MasteryBar_C::SetMasteryData(class AFSDPlayerState** Player, class UClass** Item, bool* HasMasteryLevels)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MasteryBar.ITM_MasteryBar_C.SetMasteryData");

	UITM_MasteryBar_C_SetMasteryData_Params params;
	params.Player = Player;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasMasteryLevels != nullptr)
		*HasMasteryLevels = params.HasMasteryLevels;
}


// Function ITM_MasteryBar.ITM_MasteryBar_C.AddMasteryBox
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                Content                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UITM_MasteryBar_C::AddMasteryBox(class UWidget** Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MasteryBar.ITM_MasteryBar_C.AddMasteryBox");

	UITM_MasteryBar_C_AddMasteryBox_Params params;
	params.Content = Content;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MasteryBar.ITM_MasteryBar_C.CreateMasteryLevels
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           maxMastery                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           CurrentMastery                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMasteryItem>    masteryLevels                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UITM_MasteryBar_C::CreateMasteryLevels(int* maxMastery, int* CurrentMastery, class UClass** Item, TArray<struct FMasteryItem>* masteryLevels)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MasteryBar.ITM_MasteryBar_C.CreateMasteryLevels");

	UITM_MasteryBar_C_CreateMasteryLevels_Params params;
	params.maxMastery = maxMastery;
	params.CurrentMastery = CurrentMastery;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (masteryLevels != nullptr)
		*masteryLevels = params.masteryLevels;
}


// Function ITM_MasteryBar.ITM_MasteryBar_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_MasteryBar_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MasteryBar.ITM_MasteryBar_C.PreConstruct");

	UITM_MasteryBar_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MasteryBar.ITM_MasteryBar_C.ItemUpgradePurchased
// (BlueprintCallable, BlueprintEvent)

void UITM_MasteryBar_C::ItemUpgradePurchased()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MasteryBar.ITM_MasteryBar_C.ItemUpgradePurchased");

	UITM_MasteryBar_C_ItemUpgradePurchased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MasteryBar.ITM_MasteryBar_C.ExecuteUbergraph_ITM_MasteryBar
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_MasteryBar_C::ExecuteUbergraph_ITM_MasteryBar(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MasteryBar.ITM_MasteryBar_C.ExecuteUbergraph_ITM_MasteryBar");

	UITM_MasteryBar_C_ExecuteUbergraph_ITM_MasteryBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MasteryBar.ITM_MasteryBar_C.OnItemRewarded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMasteryItem*           Reward                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UITM_MasteryBar_C::OnItemRewarded__DelegateSignature(struct FMasteryItem* Reward)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MasteryBar.ITM_MasteryBar_C.OnItemRewarded__DelegateSignature");

	UITM_MasteryBar_C_OnItemRewarded__DelegateSignature_Params params;
	params.Reward = Reward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
