// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_Bar_OrderMenu_Preview_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_Bar_OrderMenu_Preview.UI_Bar_OrderMenu_Preview_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Bar_OrderMenu_Preview_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_Preview.UI_Bar_OrderMenu_Preview_C.PreConstruct");

	UUI_Bar_OrderMenu_Preview_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bar_OrderMenu_Preview.UI_Bar_OrderMenu_Preview_C.Set Preview Item
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USpaceRigBarMenuItem**   currentItem                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_Bar_OrderMenu_Preview_C::Set_Preview_Item(class USpaceRigBarMenuItem** currentItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_Preview.UI_Bar_OrderMenu_Preview_C.Set Preview Item");

	UUI_Bar_OrderMenu_Preview_C_Set_Preview_Item_Params params;
	params.currentItem = currentItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bar_OrderMenu_Preview.UI_Bar_OrderMenu_Preview_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Bar_OrderMenu_Preview_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_Preview.UI_Bar_OrderMenu_Preview_C.Construct");

	UUI_Bar_OrderMenu_Preview_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bar_OrderMenu_Preview.UI_Bar_OrderMenu_Preview_C.Fade In
// (BlueprintCallable, BlueprintEvent)

void UUI_Bar_OrderMenu_Preview_C::Fade_In()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_Preview.UI_Bar_OrderMenu_Preview_C.Fade In");

	UUI_Bar_OrderMenu_Preview_C_Fade_In_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bar_OrderMenu_Preview.UI_Bar_OrderMenu_Preview_C.Fade Out
// (BlueprintCallable, BlueprintEvent)

void UUI_Bar_OrderMenu_Preview_C::Fade_Out()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_Preview.UI_Bar_OrderMenu_Preview_C.Fade Out");

	UUI_Bar_OrderMenu_Preview_C_Fade_Out_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bar_OrderMenu_Preview.UI_Bar_OrderMenu_Preview_C.FadeOutFinished
// (BlueprintCallable, BlueprintEvent)

void UUI_Bar_OrderMenu_Preview_C::FadeOutFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_Preview.UI_Bar_OrderMenu_Preview_C.FadeOutFinished");

	UUI_Bar_OrderMenu_Preview_C_FadeOutFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bar_OrderMenu_Preview.UI_Bar_OrderMenu_Preview_C.ExecuteUbergraph_UI_Bar_OrderMenu_Preview
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Bar_OrderMenu_Preview_C::ExecuteUbergraph_UI_Bar_OrderMenu_Preview(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_Preview.UI_Bar_OrderMenu_Preview_C.ExecuteUbergraph_UI_Bar_OrderMenu_Preview");

	UUI_Bar_OrderMenu_Preview_C_ExecuteUbergraph_UI_Bar_OrderMenu_Preview_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bar_OrderMenu_Preview.UI_Bar_OrderMenu_Preview_C.OnPreviewItemChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USpaceRigBarMenuItem**   Previous_Item                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USpaceRigBarMenuItem**   New_Item                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_Bar_OrderMenu_Preview_C::OnPreviewItemChanged__DelegateSignature(class USpaceRigBarMenuItem** Previous_Item, class USpaceRigBarMenuItem** New_Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_Preview.UI_Bar_OrderMenu_Preview_C.OnPreviewItemChanged__DelegateSignature");

	UUI_Bar_OrderMenu_Preview_C_OnPreviewItemChanged__DelegateSignature_Params params;
	params.Previous_Item = Previous_Item;
	params.New_Item = New_Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
