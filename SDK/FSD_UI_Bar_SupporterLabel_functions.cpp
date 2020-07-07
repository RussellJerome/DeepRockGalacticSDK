// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_Bar_SupporterLabel_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_Bar_SupporterLabel.UI_Bar_SupporterLabel_C.SetDrinkable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDrinkableDataAsset**    Drinkable                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsSupporterEdition             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UDrinkableDataAsset*     OutDrinkable                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_Bar_SupporterLabel_C::SetDrinkable(class UDrinkableDataAsset** Drinkable, bool* IsSupporterEdition, class UDrinkableDataAsset** OutDrinkable)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_SupporterLabel.UI_Bar_SupporterLabel_C.SetDrinkable");

	UUI_Bar_SupporterLabel_C_SetDrinkable_Params params;
	params.Drinkable = Drinkable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSupporterEdition != nullptr)
		*IsSupporterEdition = params.IsSupporterEdition;
	if (OutDrinkable != nullptr)
		*OutDrinkable = params.OutDrinkable;
}


// Function UI_Bar_SupporterLabel.UI_Bar_SupporterLabel_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Bar_SupporterLabel_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_SupporterLabel.UI_Bar_SupporterLabel_C.PreConstruct");

	UUI_Bar_SupporterLabel_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bar_SupporterLabel.UI_Bar_SupporterLabel_C.ExecuteUbergraph_UI_Bar_SupporterLabel
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Bar_SupporterLabel_C::ExecuteUbergraph_UI_Bar_SupporterLabel(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_SupporterLabel.UI_Bar_SupporterLabel_C.ExecuteUbergraph_UI_Bar_SupporterLabel");

	UUI_Bar_SupporterLabel_C_ExecuteUbergraph_UI_Bar_SupporterLabel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
