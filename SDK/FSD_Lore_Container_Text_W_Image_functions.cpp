// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Lore_Container_Text_W_Image_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Lore_Container_Text_W_Image.Lore_Container_Text_W_Image_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULore_Container_Text_W_Image_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lore_Container_Text_W_Image.Lore_Container_Text_W_Image_C.PreConstruct");

	ULore_Container_Text_W_Image_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lore_Container_Text_W_Image.Lore_Container_Text_W_Image_C.AddItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                Content                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<EHorizontalAlignment>* InHorizontalAlignment          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EVerticalAlignment>* InVerticalAlignment            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FMargin*                InPadding                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESlateSizeRule>*   Size_Rule                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULore_Container_Text_W_Image_C::AddItem(class UWidget** Content, TEnumAsByte<EHorizontalAlignment>* InHorizontalAlignment, TEnumAsByte<EVerticalAlignment>* InVerticalAlignment, struct FMargin* InPadding, TEnumAsByte<ESlateSizeRule>* Size_Rule)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lore_Container_Text_W_Image.Lore_Container_Text_W_Image_C.AddItem");

	ULore_Container_Text_W_Image_C_AddItem_Params params;
	params.Content = Content;
	params.InHorizontalAlignment = InHorizontalAlignment;
	params.InVerticalAlignment = InVerticalAlignment;
	params.InPadding = InPadding;
	params.Size_Rule = Size_Rule;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lore_Container_Text_W_Image.Lore_Container_Text_W_Image_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMinersManualData**      Data                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULore_Container_Text_W_Image_C::SetData(class UMinersManualData** Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lore_Container_Text_W_Image.Lore_Container_Text_W_Image_C.SetData");

	ULore_Container_Text_W_Image_C_SetData_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lore_Container_Text_W_Image.Lore_Container_Text_W_Image_C.Refresh
// (BlueprintCallable, BlueprintEvent)

void ULore_Container_Text_W_Image_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lore_Container_Text_W_Image.Lore_Container_Text_W_Image_C.Refresh");

	ULore_Container_Text_W_Image_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lore_Container_Text_W_Image.Lore_Container_Text_W_Image_C.ExecuteUbergraph_Lore_Container_Text_W_Image
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULore_Container_Text_W_Image_C::ExecuteUbergraph_Lore_Container_Text_W_Image(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lore_Container_Text_W_Image.Lore_Container_Text_W_Image_C.ExecuteUbergraph_Lore_Container_Text_W_Image");

	ULore_Container_Text_W_Image_C_ExecuteUbergraph_Lore_Container_Text_W_Image_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
