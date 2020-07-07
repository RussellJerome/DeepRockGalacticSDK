// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BTN_UnlockItem_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BTN_UnlockItem.BTN_UnlockItem_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UCraftable>* Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTN_UnlockItem_C::SetData(TScriptInterface<class UCraftable>* Item, class UClass** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTN_UnlockItem.BTN_UnlockItem_C.SetData");

	UBTN_UnlockItem_C_SetData_Params params;
	params.Item = Item;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTN_UnlockItem.BTN_UnlockItem_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTN_UnlockItem_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTN_UnlockItem.BTN_UnlockItem_C.PreConstruct");

	UBTN_UnlockItem_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTN_UnlockItem.BTN_UnlockItem_C.ExecuteUbergraph_BTN_UnlockItem
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTN_UnlockItem_C::ExecuteUbergraph_BTN_UnlockItem(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTN_UnlockItem.BTN_UnlockItem_C.ExecuteUbergraph_BTN_UnlockItem");

	UBTN_UnlockItem_C_ExecuteUbergraph_BTN_UnlockItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
