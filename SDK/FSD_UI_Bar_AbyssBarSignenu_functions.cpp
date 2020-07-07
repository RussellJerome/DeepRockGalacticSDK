// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_Bar_AbyssBarSignenu_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_Bar_AbyssBarSignenu.UI_Bar_AbyssBarSignenu_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Bar_AbyssBarSignenu_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_AbyssBarSignenu.UI_Bar_AbyssBarSignenu_C.PreConstruct");

	UUI_Bar_AbyssBarSignenu_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bar_AbyssBarSignenu.UI_Bar_AbyssBarSignenu_C.ExecuteUbergraph_UI_Bar_AbyssBarSignenu
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Bar_AbyssBarSignenu_C::ExecuteUbergraph_UI_Bar_AbyssBarSignenu(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_AbyssBarSignenu.UI_Bar_AbyssBarSignenu_C.ExecuteUbergraph_UI_Bar_AbyssBarSignenu");

	UUI_Bar_AbyssBarSignenu_C_ExecuteUbergraph_UI_Bar_AbyssBarSignenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bar_AbyssBarSignenu.UI_Bar_AbyssBarSignenu_C.OnRoundSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASpaceRigBar**           Bar                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDrinkableDataAsset**    RequestedDrink                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Bar_AbyssBarSignenu_C::OnRoundSelected__DelegateSignature(class ASpaceRigBar** Bar, class UDrinkableDataAsset** RequestedDrink)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_AbyssBarSignenu.UI_Bar_AbyssBarSignenu_C.OnRoundSelected__DelegateSignature");

	UUI_Bar_AbyssBarSignenu_C_OnRoundSelected__DelegateSignature_Params params;
	params.Bar = Bar;
	params.RequestedDrink = RequestedDrink;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
