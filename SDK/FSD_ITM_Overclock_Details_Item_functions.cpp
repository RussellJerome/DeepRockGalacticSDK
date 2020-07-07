// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_Overclock_Details_Item_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_Overclock_Details_Item.ITM_Overclock_Details_Item_C.SetFontSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           NewSize                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Overclock_Details_Item_C::SetFontSize(int* NewSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Overclock_Details_Item.ITM_Overclock_Details_Item_C.SetFontSize");

	UITM_Overclock_Details_Item_C_SetFontSize_Params params;
	params.NewSize = NewSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Overclock_Details_Item.ITM_Overclock_Details_Item_C.SetData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  InText                         (BlueprintVisible, BlueprintReadOnly, Parm)
// bool*                          InIsAdvantagous                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Overclock_Details_Item_C::SetData(struct FText* InText, bool* InIsAdvantagous)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Overclock_Details_Item.ITM_Overclock_Details_Item_C.SetData");

	UITM_Overclock_Details_Item_C_SetData_Params params;
	params.InText = InText;
	params.InIsAdvantagous = InIsAdvantagous;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Overclock_Details_Item.ITM_Overclock_Details_Item_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Overclock_Details_Item_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Overclock_Details_Item.ITM_Overclock_Details_Item_C.PreConstruct");

	UITM_Overclock_Details_Item_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Overclock_Details_Item.ITM_Overclock_Details_Item_C.ExecuteUbergraph_ITM_Overclock_Details_Item
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Overclock_Details_Item_C::ExecuteUbergraph_ITM_Overclock_Details_Item(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Overclock_Details_Item.ITM_Overclock_Details_Item_C.ExecuteUbergraph_ITM_Overclock_Details_Item");

	UITM_Overclock_Details_Item_C_ExecuteUbergraph_ITM_Overclock_Details_Item_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
