// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_HorizontalResourceBar_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_HorizontalResourceBar.UI_HorizontalResourceBar_C.SetFromDict
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class UResourceData*, int>* InResources                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UUI_HorizontalResourceBar_C::SetFromDict(TMap<class UResourceData*, int>* InResources)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HorizontalResourceBar.UI_HorizontalResourceBar_C.SetFromDict");

	UUI_HorizontalResourceBar_C_SetFromDict_Params params;
	params.InResources = InResources;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HorizontalResourceBar.UI_HorizontalResourceBar_C.SetCraftingCost
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FCraftingCost>   Cost                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           OutCanAfford                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_HorizontalResourceBar_C::SetCraftingCost(TArray<struct FCraftingCost>* Cost, bool* OutCanAfford)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HorizontalResourceBar.UI_HorizontalResourceBar_C.SetCraftingCost");

	UUI_HorizontalResourceBar_C_SetCraftingCost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cost != nullptr)
		*Cost = params.Cost;
	if (OutCanAfford != nullptr)
		*OutCanAfford = params.OutCanAfford;
}


// Function UI_HorizontalResourceBar.UI_HorizontalResourceBar_C.AddResource
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UResourceData**          InResource                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         InAmount                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         InRequiredAmount               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_HorizontalResourceBar_C::AddResource(class UResourceData** InResource, float* InAmount, float* InRequiredAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HorizontalResourceBar.UI_HorizontalResourceBar_C.AddResource");

	UUI_HorizontalResourceBar_C_AddResource_Params params;
	params.InResource = InResource;
	params.InAmount = InAmount;
	params.InRequiredAmount = InRequiredAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HorizontalResourceBar.UI_HorizontalResourceBar_C.Clear
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_HorizontalResourceBar_C::Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HorizontalResourceBar.UI_HorizontalResourceBar_C.Clear");

	UUI_HorizontalResourceBar_C_Clear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HorizontalResourceBar.UI_HorizontalResourceBar_C.AddResourceCustom
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UResourceData**          InResource                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         InAmount                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         InRequiredAmount               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IconOnRight                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ShowRequiredAmount             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_HorizontalResourceBar_C::AddResourceCustom(class UResourceData** InResource, float* InAmount, float* InRequiredAmount, bool* IconOnRight, bool* ShowRequiredAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HorizontalResourceBar.UI_HorizontalResourceBar_C.AddResourceCustom");

	UUI_HorizontalResourceBar_C_AddResourceCustom_Params params;
	params.InResource = InResource;
	params.InAmount = InAmount;
	params.InRequiredAmount = InRequiredAmount;
	params.IconOnRight = IconOnRight;
	params.ShowRequiredAmount = ShowRequiredAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HorizontalResourceBar.UI_HorizontalResourceBar_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_HorizontalResourceBar_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HorizontalResourceBar.UI_HorizontalResourceBar_C.PreConstruct");

	UUI_HorizontalResourceBar_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HorizontalResourceBar.UI_HorizontalResourceBar_C.ExecuteUbergraph_UI_HorizontalResourceBar
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_HorizontalResourceBar_C::ExecuteUbergraph_UI_HorizontalResourceBar(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HorizontalResourceBar.UI_HorizontalResourceBar_C.ExecuteUbergraph_UI_HorizontalResourceBar");

	UUI_HorizontalResourceBar_C_ExecuteUbergraph_UI_HorizontalResourceBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
